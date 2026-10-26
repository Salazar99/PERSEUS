#!/usr/bin/env bash
# One-time, idempotent setup for regenerating the PERSEUS dataset; afterwards run ./run_campaign.sh.
# Needs git, python3 (3.10-3.13), the Xcelium kit (see README, "Xcelium install") and a Cadence
# license reachable through CDS_LIC_FILE (see env.sh).
set -u
PERSEUS=$(cd "$(dirname "$0")" && pwd)
OT_SHA=d3bb73a94855cdc00651cb51315d655e734b9cdc  # OpenTitan commit the published dataset was built from
OT_URL=${OT_URL:-https://github.com/lowRISC/opentitan.git}  # override to use a mirror
cd "$PERSEUS" || exit 1
missing=()

# OpenTitan at the pinned commit (shallow fetch of exactly that commit; retried if a fetch broke).
if ! git -C opentitan rev-parse -q --verify HEAD >/dev/null 2>&1; then
  git init -q opentitan && git -C opentitan fetch -q --depth 1 "$OT_URL" "$OT_SHA" \
    && git -C opentitan checkout -q -B perseus FETCH_HEAD || exit 1
fi
[ "$(git -C opentitan rev-parse HEAD)" = "$OT_SHA" ] || { echo "ERROR: opentitan/ is not at $OT_SHA" >&2; exit 1; }

# FuseSoC otherwise picks the provider of top_pkg / top_racl_pkg / ast_pkg (Earl Grey, Darjeeling or
# English Breakfast) by directory order, so IP parameters (e.g. TL-UL and RACL widths) change between
# checkouts. Pin them to Earl Grey through that top's FuseSoC mapping section.
cfg=opentitan/hw/dv/tools/dvsim/common_sim_cfg.hjson
grep -q "lowrisc:systems:top_earlgrey:0.1" "$cfg" ||
  sed -i 's|"--mapping=lowrisc:prim_generic:all:0.1"|&, "--mapping=lowrisc:systems:top_earlgrey:0.1"|' "$cfg"
grep -q "lowrisc:systems:top_earlgrey:0.1" "$cfg" || { echo "ERROR: could not pin FuseSoC mappings in $cfg" >&2; exit 1; }

# Python venv with OpenTitan's hash-pinned requirements (dvsim, fusesoc, hjson, ...).
if [ ! -x .venv/bin/dvsim ]; then
  python3 -m venv .venv && .venv/bin/pip install -q "setuptools<66.0.0" \
    && .venv/bin/pip install -q -r opentitan/python-requirements.txt --require-hashes || exit 1
fi

# Xcelium (installed by hand) and the shells its helper scripts are written in.
. ./env.sh
command -v xrun >/dev/null || missing+=("xrun: unpack the Xcelium kit into /eda or set XCELIUM_SETUP (README)")
for sh in csh ksh; do command -v $sh >/dev/null || missing+=("$sh: sudo apt install -y tcsh ksh"); done

# Ubuntu 24.04: the kit's binutils 2.34 cannot link against the system glibc (.relr.dyn), so Xcelium
# cannot build its DPI export library (runs end in *E,IMPDLL). If a test link with the kit's gcc
# fails, point the kit's ld at the system one. Undo: mv ld.cds ld (in the directory below).
if [ -n "${CDS_XCELIUM:-}" ]; then
  ld_dir=$CDS_XCELIUM/tools.lnx86/cdsgcc/gcc/9.3/bin
  tmp=$(mktemp -d) && echo 'int f(void) { return 0; }' > "$tmp/f.c"
  link_ok() { "$CDS_XCELIUM/tools/cdsgcc/gcc/bin/gcc" -shared -fPIC "$tmp/f.c" -o "$tmp/f.so" 2>/dev/null; }
  if ! link_ok && [ ! -e "$ld_dir/ld.cds" ]; then
    mv "$ld_dir/ld" "$ld_dir/ld.cds"
    printf '#!/bin/sh\n# PERSEUS setup.sh: kit ld 2.34 cannot link the system glibc; use the system ld.\nunset LD_LIBRARY_PATH\nexec /usr/bin/ld "$@"\n' > "$ld_dir/ld"
    chmod +x "$ld_dir/ld"
    echo "Patched $ld_dir/ld to use the system ld (original kept as ld.cds)"
  fi
  link_ok || missing+=("Xcelium's gcc cannot link shared objects ($ld_dir/ld)")
  rm -rf "$tmp"
fi

if [ ${#missing[@]} -gt 0 ]; then
  printf 'MISSING: %s\n' "${missing[@]}" >&2
  exit 1
fi
echo "Setup OK: OpenTitan $OT_SHA, $(dvsim --version 2>/dev/null | tail -1), $(xrun -version | awk '{print $NF}'), license $CDS_LIC_FILE"
