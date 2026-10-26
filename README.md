# PERSEUS
Simulation campaign on the OpenTitan HW IPs with Cadence Xcelium. It produces a dataset of
{HW_IP, specification, traces} tuples for evaluating verification methodologies, such as
specification miners.

The campaign reuses OpenTitan's own block-level UVM testbenches, run through `dvsim`. The only change
is the wave dump: it records the whole DUT hierarchy to a VCD instead of the full testbench.

The dataset itself (about 7 GB) is not in git. This repo regenerates it exactly. OpenTitan is pinned
to the commit the dataset was built from, and `seeds.csv` records the seed of every published trace.

## Regenerate the dataset
Prerequisites:
- the Xcelium 23.03 kit in `/eda` (see "Xcelium install" below);
- a Cadence license. The univr server is set in `env.sh` and needs the VPN. Elsewhere, export
  `CDS_LIC_FILE=port@host`;
- `tcsh` and `ksh` (`sudo apt install -y tcsh ksh`);
- git, Python 3.10–3.13, and about 20 GB of free disk.

```sh
./setup.sh          # once: pinned OpenTitan clone, Python venv, Xcelium checks (and the ld fix below)
./run_campaign.sh   # about 2 h with 4 parallel jobs; writes dataset/ and PERSEUS_dataset/
```
`PERSEUS_dataset/` is the ordered export. It has per-IP doc/spec/rtl, traces split into
passed/failed, a TESTS.md with the testplan description of each trace, and an index.csv. Its
README.md describes the dataset.

`run_campaign.sh` knobs (environment variables):
- `IPS="uart gpio"`: a subset of IPs. All 12 are run by default: uart i2c spi_host pattgen rv_timer
  aon_timer adc_ctrl sysrst_ctrl gpio pwm hmac aes.
- Default: replay the `(test, seed)` pairs in `seeds.csv`, which reproduces the published traces.
- `TESTS=all|smoke|<tests>` with `RESEED=n`: fresh random seeds instead. `SEEDS=` disables replay
  entirely.
- `JOBS=4`: parallel simulations. Each one holds a license seat and about 3 GB of RAM.
- `PERSEUS_VCD_MAXSIZE=2G`: the per-trace cap on uncompressed VCD. Past the cap Xcelium stops dumping
  but the test still runs to its verdict; the trace is then a prefix of the run and is marked
  `truncated: true`.

All runs use `--xprop-off`, because `-xprop F` crashes xmelab 23.03 on several IPs. pwm is rendered
from `hw/ip_templates/pwm` with ipgen on the first run.

IPs are built with Earl Grey's top-level parameters. On its own, FuseSoC picks the provider of
`top_pkg`/`top_racl_pkg`/`ast_pkg` (Earl Grey, Darjeeling or English Breakfast) by directory order. That
choice changes TL-UL and RACL widths from one checkout to another. `setup.sh` therefore adds
`--mapping=lowrisc:systems:top_earlgrey:0.1` to `opentitan/hw/dv/tools/dvsim/common_sim_cfg.hjson`.

To re-package one IP without re-simulating (its scratch dir must still exist):
`python3 collect_dataset.py <ip_root> scratch/<ip>/<branch>/<dut>-sim-xcelium dataset/<ip>`, then
`.venv/bin/python export_dataset.py`. The export hard-links files from `dataset/`, so it takes no
extra disk.

## Files
| file | role |
|---|---|
| `setup.sh` | pinned OpenTitan (+ Earl Grey FuseSoC mapping), venv, Xcelium checks |
| `env.sh` | Xcelium, license and venv environment (`XCELIUM_SETUP`, `CDS_LIC_FILE` overridable) |
| `run_campaign.sh` | dvsim on every IP, then collect, then export |
| `dump_dut.tcl` | dvsim `--dump-script`: gzipped, size-capped VCD of `tb.dut` |
| `collect_dataset.py` | one IP's scratch dir becomes `dataset/<ip>/` (`--selftest` available) |
| `export_dataset.py` | `dataset/` becomes the ordered, documented `PERSEUS_dataset/` |
| `seeds.csv` | `ip,test,seed` of every published trace |

## Xcelium install (Europractice kit, once)
The kit hard-codes `/eda`, so it must be unpacked there:
```sh
sudo mkdir -p /eda && sudo chown $USER:$USER /eda
unzip -p XCELIUM.zip XCELIUM_23.03.007_RHELx86.tgz | tar xz -C /eda
```
On Ubuntu 24.04 the kit's bundled binutils (2.34) cannot link against the system glibc
(`unknown type [0x13] section .relr.dyn`). Xcelium then fails to build its DPI export library, and
runs end with `*E,IMPDLL`. `setup.sh` detects this with a test link and points the kit's `ld` at the
system one. The original is kept as `.../cdsgcc/gcc/9.3/bin/ld.cds`; restore it with
`mv ld.cds ld`.
