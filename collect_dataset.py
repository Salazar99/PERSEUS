#!/usr/bin/env python3
"""Package one OpenTitan IP into a {HW_IP, spec, traces} dataset tuple.

usage: collect_dataset.py <ip_root> <ip_scratch_path> <out_dir>
       collect_dataset.py --selftest

ip_root         : OpenTitan IP dir (parent of rtl/, data/, doc/, dv/)
ip_scratch_path : dvsim scratch path of the IP (<scratch_root>/<branch>/<dut>-sim-xcelium)
out_dir         : dataset/<ip>, regenerated from scratch on every call
"""
import gzip
import json
import re
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

ASSERT_START = re.compile(r"`(ASSERT|ASSUME)\w*\s*\(")
PASS = re.compile(r"^TEST PASSED (UVM_)?CHECKS$", re.M)
# OpenTitan common_sim_cfg.hjson run_fail_patterns + xcelium.hjson "\*E".
FAIL = re.compile(r"^(UVM_ERROR\s[^:]|UVM_FATAL\s[^:]|UVM_WARNING\s[^:]|Assert failed: |\s*Offending '"
                  r"|.*\*E)", re.M)
SEED = re.compile(r"SVSEED[^\d-]*(-?\d+)")
DV_SRC = ("src/lowrisc_dv_", "src/lowrisc_fpv_")
DUMP_LIMIT = b"Dump limit exceeded"  # comment Xcelium writes when database -maxsize is hit


def strip_comments(text):
    """Blank out strings and // /* */ comments, keeping newlines so line numbers stay valid."""
    return re.sub(r'"(?:\\.|[^"\\])*"|//[^\n]*|/\*.*?\*/',
                  lambda m: re.sub(r"[^\n]", " ", m.group(0)), text, flags=re.S)


def extract_asserts(text):
    """Return [(line, macro_text)] for every `ASSERT*/`ASSUME* macro call, multi-line aware."""
    code = strip_comments(text)
    out = []
    for m in ASSERT_START.finditer(code):
        depth, i = 0, m.end() - 1
        while i < len(code):
            depth += {"(": 1, ")": -1}.get(code[i], 0)
            if depth == 0:
                break
            i += 1
        out.append((code.count("\n", 0, m.start()) + 1, " ".join(code[m.start():i + 1].split())))
    return out


def copy(src, dst):
    dst.parent.mkdir(parents=True, exist_ok=True)
    shutil.copy2(src, dst)


def collect_spec(ip_root, out, fpv_files):
    spec = out / "spec"
    for md in [ip_root / "README.md", *sorted((ip_root / "doc").glob("*.md"))]:
        if md.exists():
            copy(md, spec / "doc" / md.name)
    for hj in sorted((ip_root / "data").glob("*.hjson")):
        copy(hj, spec / hj.name)
    for sv in [*sorted((ip_root / "dv" / "sva").glob("*.sv")), *fpv_files]:
        copy(sv, spec / "sva" / sv.name)
    lines = [f"{sv.relative_to(ip_root)}:{ln}\t{txt}"
             for sv in sorted((ip_root / "rtl").rglob("*.sv"))
             for ln, txt in extract_asserts(sv.read_text(errors="replace"))]
    (spec / "sva").mkdir(parents=True, exist_ok=True)
    (spec / "sva" / "rtl_asserts.txt").write_text("\n".join(lines) + "\n")
    return len(lines)


def collect_rtl(scratch, out):
    """Copy the non-DV part of the fusesoc filelist dvsim compiled. Returns FPV assert files."""
    scr = next(iter(sorted(scratch.glob("*/fusesoc-work/*.scr"))), None)
    if scr is None:
        print(f"WARNING: no fusesoc filelist under {scratch}, rtl/ skipped (build failed?)")
        return []
    work, keep, fpv = scr.parent, [], []
    for line in scr.read_text().split():
        path = line.removeprefix("+incdir+")
        if path.startswith(DV_SRC):
            if line == path and path.startswith("src/lowrisc_fpv_"):
                fpv.append(work / path)
            continue
        keep.append(line)
        if line == path:  # a source file, not an include dir
            copy(work / path, out / "rtl" / path)
        else:
            for inc in (work / path).iterdir():  # `included files (.svh and .sv) live here
                if inc.is_file():
                    copy(inc, out / "rtl" / path / inc.name)
    (out / "rtl" / "files.f").write_text("\n".join(keep) + "\n")
    return fpv


def store_trace(vcd, dst):
    """Put a VCD into dst as .gz (plain copy if Xcelium already gzipped it).

    Returns True if the dump hit the dump_dut.tcl size cap (Xcelium -maxsize)."""
    tail = b""
    try:
        if vcd.suffix == ".gz":
            shutil.copyfile(vcd, dst)
            with gzip.open(vcd, "rb") as f:
                for chunk in iter(lambda: f.read(1 << 20), b""):
                    tail = (tail + chunk)[-4096:]
        else:
            with vcd.open("rb") as f, gzip.open(dst, "wb", compresslevel=6) as g:
                for chunk in iter(lambda: f.read(1 << 20), b""):
                    g.write(chunk)
                    tail = (tail + chunk)[-4096:]
    except (EOFError, gzip.BadGzipFile):  # sim killed mid-dump: keep the prefix
        print(f"WARNING: {vcd} is cut short (sim killed?)")
        return True
    return DUMP_LIMIT in tail


def collect_traces(scratch, out):
    runs = []
    # dvsim run_dir = {scratch_path}/{index}.{test}/latest (hw/dv/tools/dvsim/common_sim_cfg.hjson)
    for run_dir in sorted(scratch.glob("*.*/latest")):
        log = run_dir / "run.log"
        if not log.exists():
            continue
        txt = log.read_text(errors="replace")
        seed = SEED.search(txt)
        test = run_dir.parent.name.split(".", 1)[1]
        seed = seed.group(1) if seed else run_dir.parent.name.split(".", 1)[0]
        # dump_dut.tcl writes waves.vcd.gz; older runs (plain sim.tcl) write waves.vcd.
        vcd = next((run_dir / n for n in ("waves.vcd.gz", "waves.vcd") if (run_dir / n).exists()), None)
        trace = truncated = None
        if vcd:
            trace = f"traces/{test}.{seed}.vcd.gz"
            (out / "traces").mkdir(parents=True, exist_ok=True)
            truncated = store_trace(vcd, out / trace)
        runs.append({"test": test, "seed": seed, "trace": trace, "truncated": truncated,
                     "passed": bool(PASS.search(txt)) and not FAIL.search(txt),
                     "run_dir": str(run_dir)})
    return runs


def tool_version(cmd):
    try:
        return subprocess.run(cmd, capture_output=True, text=True, timeout=60).stdout.strip()
    except (OSError, subprocess.SubprocessError):
        return None


def main(ip_root, scratch, out):
    ip_root, scratch, out = Path(ip_root).resolve(), Path(scratch), Path(out)
    shutil.rmtree(out, ignore_errors=True)
    out.mkdir(parents=True)
    fpv = collect_rtl(scratch, out)
    n_asserts = collect_spec(ip_root, out, fpv)
    runs = collect_traces(scratch, out)
    manifest = {
        "ip": out.name,
        "ip_root": str(ip_root),
        "opentitan_sha": tool_version(["git", "-C", str(ip_root), "rev-parse", "HEAD"]),
        "xcelium": tool_version(["xrun", "-version"]),
        "rtl_asserts": n_asserts,
        "runs": runs,
    }
    (out / "manifest.json").write_text(json.dumps(manifest, indent=2) + "\n")
    print(f"{out.name}: {len(runs)} runs, {sum(r['passed'] for r in runs)} passed, "
          f"{sum(bool(r['trace']) for r in runs)} traces, {n_asserts} rtl asserts")


def selftest():
    sv = """module m;
  `ASSERT(FooA, a |-> ##1 (b && (c || d)), clk_i, !rst_ni)
  // `ASSERT(Commented, x, clk_i, !rst_ni)
  /* `ASSERT(Block,
       y, clk_i, !rst_ni) */
  `ASSERT_KNOWN(BarKnown_A,
                {e, f})
  initial $display("`ASSERT(InString, z)");
  `ASSUME_FPV(BazM, g |-> h)
endmodule
"""
    got = extract_asserts(sv)
    assert got == [
        (2, "`ASSERT(FooA, a |-> ##1 (b && (c || d)), clk_i, !rst_ni)"),
        (6, "`ASSERT_KNOWN(BarKnown_A, {e, f})"),
        (9, "`ASSUME_FPV(BazM, g |-> h)"),
    ], got
    assert PASS.search("x\nTEST PASSED CHECKS\n") and not FAIL.search("TEST PASSED CHECKS\n")
    assert FAIL.search("UVM_ERROR @ 10ns: boom\n") and FAIL.search("xmsim: *E,ASRTST: oops\n")
    assert not FAIL.search("UVM_ERROR :    0\n")  # UVM report summary counters are fine
    assert SEED.search("SVSEED set from command line: 12345").group(1) == "12345"
    with tempfile.TemporaryDirectory() as d:
        d = Path(d)
        (d / "full.vcd").write_bytes(b"$enddefinitions $end\n#0\n1!\n")
        with gzip.open(d / "cap.vcd.gz", "wb") as g:
            g.write(b"#0\n1!\n" * 100000 + b"$comment\n   Dump limit exceeded\n$end\n")
        (d / "cut.vcd.gz").write_bytes((d / "cap.vcd.gz").read_bytes()[:-20])
        assert store_trace(d / "full.vcd", d / "a.gz") is False
        assert gzip.open(d / "a.gz").read().startswith(b"$enddefinitions")
        assert store_trace(d / "cap.vcd.gz", d / "b.gz") is True
        assert (d / "b.gz").read_bytes() == (d / "cap.vcd.gz").read_bytes()
        assert store_trace(d / "cut.vcd.gz", d / "c.gz") is True
    print("selftest OK")


if __name__ == "__main__":
    if sys.argv[1:] == ["--selftest"]:
        selftest()
    elif len(sys.argv) == 4:
        main(*sys.argv[1:])
    else:
        sys.exit(__doc__)
