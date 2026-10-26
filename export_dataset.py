#!/usr/bin/env python3
"""Export dataset/ (collect_dataset.py output) into an ordered, documented folder.

usage: .venv/bin/python export_dataset.py [dataset_dir] [out_dir]   (default: dataset PERSEUS_dataset)

out_dir/
  README.md, index.csv            overview + one row per trace
  <ip>/doc/*.md                   natural-language documentation
  <ip>/spec/                      register/IP hjson, testplans, sva/
  <ip>/rtl/                       compiled RTL (files.f + src/)
  <ip>/traces/{passed,failed}/    <test>.<seed>.vcd.gz
  <ip>/TESTS.md, manifest.json    per-trace status + testplan description

Files are hard-linked from dataset_dir (same disk, no extra space); out_dir is rebuilt on every call.
"""
import csv
import json
import os
import shutil
import sys
import textwrap
from pathlib import Path

from dvsim.testplan import Testplan  # from the OpenTitan venv


README = """\
# PERSEUS dataset: OpenTitan IP simulation traces

Simulation traces of {n_ips} OpenTitan hardware IPs, each paired with the IP's specification and RTL,
for evaluating verification methodologies (e.g. specification/assertion mining).

- {n_runs} test runs, {n_passed} passed, {n_trunc} traces cut at the size cap (see "Traces").
- Source: OpenTitan commit `{ot_sha}`, block-level UVM testbenches (one random seed per test).
- Simulator: Cadence Xcelium `{xcelium}`.

| IP | runs | passed | capped traces | RTL assertions | traces (MB) |
|---|---|---|---|---|---|
{ip_table}

## Layout
```
README.md          this file
index.csv          one row per run: ip, test, seed, status, truncated, trace, testpoints, stage
<ip>/
  TESTS.md         every run: status, trace file, and the testplan description of what the test does
  manifest.json    same, machine-readable (+ OpenTitan SHA, Xcelium version)
  doc/             natural-language specification (README, theory of operation, interfaces,
                   registers, programmer's guide, checklist)
  spec/<ip>.hjson  register map and IP interface description (OpenTitan reggen format)
  spec/*_testplan.hjson   verification plan (testpoints, sec_cm countermeasures)
  spec/sva/rtl_asserts.txt  every `ASSERT*/`ASSUME* embedded in the IP RTL (file:line, macro)
  spec/sva/*.sv    SVA/bind files from the testbench, generated CSR assertions
  rtl/files.f      compile list (order matters), sources under rtl/src/; top module = <ip>
  traces/passed/   <test>.<seed>.vcd.gz of runs whose UVM checks passed
  traces/failed/   same for runs that failed
```

## Traces
- VCD of the DUT instance `tb.dut`, full hierarchy and all depths, memories included. The top scope is
  `tb`, which only wraps `dut`. Timescale is 1 ps. Bound checker modules (e.g. `*_csr_assert`,
  `tlul_assert_device`) appear inside `dut`.
- Stimulus is OpenTitan's constrained-random UVM sequences, so each trace is one seed of one test. The
  `seed` in the name reproduces it.
- Each trace is capped at 2 GB of uncompressed VCD. Past the cap, dumping stops (the file ends with a
  `Dump limit exceeded` comment) but the test runs to its verdict. Such traces are a prefix of the run
  and have `truncated` true. uart, i2c and spi_host were simulated before the cap existed, so all of
  their traces are complete.
- X-propagation was disabled (`--xprop-off`): Xcelium 23.03 crashes elaborating several IPs with it.
- IPs are built with Earl Grey's top-level parameters (`top_pkg`, `top_racl_pkg`).

## Pass / fail
`status` is the testbench verdict: `TEST PASSED CHECKS`, and no UVM_ERROR/UVM_FATAL or simulator
errors. Failed runs are kept because they are still valid DUT behaviour under that stimulus.
OpenTitan signs these testbenches off on Synopsys VCS. Some failures here may therefore be
testbench/simulator differences rather than design bugs; they have not been triaged.

## Reproducing
Regenerate with the PERSEUS repo, given Xcelium 23.03 and a Cadence license: `./setup.sh`, then
`./run_campaign.sh`. The second command replays the recorded `(test, seed)` pairs (`seeds.csv`) on the
pinned OpenTitan commit, so it reproduces these traces.
"""


def link(src, dst):
    dst.parent.mkdir(parents=True, exist_ok=True)
    try:
        os.link(src, dst)
    except OSError:  # other filesystem
        shutil.copy2(src, dst)


def link_tree(src, dst):
    for f in sorted(src.rglob("*")):
        if f.is_file():
            link(f, dst / f.relative_to(src))


def testpoints(m):
    """{test name: [testpoint, ...]} from the IP's testplan, imports and {name} wildcards resolved."""
    ip_root = Path(m["ip_root"])
    repo = next(p.parent for p in ip_root.parents if p.name == "hw")  # OpenTitan checkout
    plan = Testplan(str(ip_root / "data" / f"{m['ip']}_testplan.hjson"), repo, m["ip"])
    by_test = {}
    for tp in plan.testpoints:
        for t in tp.tests:
            by_test.setdefault(t, []).append(tp)
    return by_test


def export_ip(src, dst, index):
    m = json.loads((src / "manifest.json").read_text())
    ip, tps = m["ip"], testpoints(m)
    link_tree(src / "spec" / "doc", dst / "doc")
    for f in sorted((src / "spec").iterdir()):
        if f.name != "doc":
            link_tree(f, dst / "spec" / f.name) if f.is_dir() else link(f, dst / "spec" / f.name)
    link_tree(src / "rtl", dst / "rtl")

    runs = []
    for r in sorted(m["runs"], key=lambda r: (not r["passed"], r["test"])):
        status = "passed" if r["passed"] else "failed"
        trace = f"traces/{status}/{Path(r['trace']).name}" if r["trace"] else None
        if trace:
            link(src / r["trace"], dst / trace)
        tp = tps.get(r["test"], [])
        runs.append({**r, "status": status, "trace": trace,
                     "testpoints": [t.name for t in tp], "stage": sorted({t.stage for t in tp})})
        index.append({"ip": ip, "test": r["test"], "seed": r["seed"], "status": status,
                      "truncated": r.get("truncated"), "trace": f"{ip}/{trace}" if trace else "",
                      "testpoints": ";".join(t.name for t in tp), "stage": ";".join(runs[-1]["stage"])})

    (dst / "manifest.json").write_text(json.dumps({**m, "runs": runs}, indent=2) + "\n")
    md = [f"# {ip}: tests and traces", "",
          f"Each trace is the VCD of `tb.dut` (module `{ip}`, full hierarchy) for one UVM test run.",
          "Specification: [doc/](doc/), [spec/](spec/). RTL: [rtl/files.f](rtl/files.f).", "",
          "| test | seed | status | truncated | trace | testpoints |", "|---|---|---|---|---|---|"]
    for r in runs:
        trace = f"[{Path(r['trace']).name}]({r['trace']})" if r["trace"] else "-"
        md.append(f"| [{r['test']}](#{r['test']}) | {r['seed']} | {r['status']} | "
                  f"{'yes' if r.get('truncated') else 'no'} | {trace} | {', '.join(r['testpoints']) or '-'} |")
    for r in runs:
        md += ["", f"## {r['test']}", ""]
        for t in tps.get(r["test"], []):
            md += [f"**{t.name}** ({t.stage})", "", textwrap.dedent(t.desc).strip(), ""]
        if not tps.get(r["test"]):
            md += ["(not listed in the testplan)", ""]
    (dst / "TESTS.md").write_text("\n".join(md) + "\n")
    return m, runs


def main(src_root="dataset", out_root="PERSEUS_dataset"):
    src_root, out_root = Path(src_root), Path(out_root)
    shutil.rmtree(out_root, ignore_errors=True)
    index, rows, meta = [], [], None
    for src in sorted(p.parent for p in src_root.glob("*/manifest.json")):
        m, runs = export_ip(src, out_root / src.name, index)
        meta = meta or m
        mb = sum((out_root / src.name / r["trace"]).stat().st_size for r in runs if r["trace"]) / 2**20
        rows.append(f"| [{m['ip']}]({m['ip']}/TESTS.md) | {len(runs)} | {sum(r['passed'] for r in runs)} "
                    f"| {sum(bool(r.get('truncated')) for r in runs)} | {m['rtl_asserts']} | {mb:,.0f} |")

    with (out_root / "index.csv").open("w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=list(index[0]))
        w.writeheader()
        w.writerows(index)

    (out_root / "README.md").write_text(README.format(
        ip_table="\n".join(rows), n_ips=len(rows), n_runs=len(index),
        n_passed=sum(r["status"] == "passed" for r in index),
        n_trunc=sum(bool(r["truncated"]) for r in index),
        ot_sha=meta["opentitan_sha"], xcelium=(meta["xcelium"] or "?").split()[-1]))

    # Self-check: every trace listed in the manifests made it into the export, nothing extra.
    n_files = sum(1 for _ in out_root.glob("*/traces/*/*.vcd.gz"))
    assert n_files == sum(bool(r["trace"]) for r in index), (n_files, len(index))
    print(f"{out_root}: {len(rows)} IPs, {len(index)} runs, {n_files} traces")


if __name__ == "__main__":
    main(*sys.argv[1:])
