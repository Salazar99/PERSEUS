#!/usr/bin/env bash
# Run OpenTitan block-level UVM DV on Xcelium, dumping VCD of the whole DUT, package
# {RTL, spec, traces} per IP into dataset/<ip>/ (collect_dataset.py) and export the ordered
# PERSEUS_dataset/ (export_dataset.py). Run ./setup.sh once first.
#
# By default every IP replays the (test, seed) pairs in seeds.csv, i.e. regenerates the published
# dataset. Setting TESTS switches to dvsim's own test selection with fresh random seeds.
#
# Knobs (env): IPS     space-separated subset of the CFG keys below (default: all)
#              SEEDS   ip,test,seed file to replay (default: seeds.csv; SEEDS= disables replay)
#              TESTS   dvsim -i items: all | smoke | nightly | <test names> (random seeds)
#              RESEED  seeds per test with TESTS (default: 1)
#              JOBS    parallel Xcelium jobs (default: 4; ~3 GB RAM each)
set -u
PERSEUS=$(cd "$(dirname "$0")" && pwd)
SEEDS=${SEEDS-$PERSEUS/seeds.csv}
. "$PERSEUS/env.sh"
OT=$PERSEUS/opentitan

declare -A CFG=(
  [uart]=hw/ip/uart/dv/uart_sim_cfg.hjson
  [i2c]=hw/ip/i2c/dv/i2c_sim_cfg.hjson
  [spi_host]=hw/ip/spi_host/dv/spi_host_sim_cfg.hjson
  [pattgen]=hw/ip/pattgen/dv/pattgen_sim_cfg.hjson
  [rv_timer]=hw/ip/rv_timer/dv/rv_timer_sim_cfg.hjson
  [aon_timer]=hw/ip/aon_timer/dv/aon_timer_sim_cfg.hjson
  [adc_ctrl]=hw/ip/adc_ctrl/dv/adc_ctrl_sim_cfg.hjson
  [sysrst_ctrl]=hw/ip/sysrst_ctrl/dv/sysrst_ctrl_sim_cfg.hjson
  [hmac]=hw/ip/hmac/dv/hmac_sim_cfg.hjson
  [aes]=hw/ip/aes/dv/aes_masked_sim_cfg.hjson
  [gpio]=hw/top_earlgrey/ip_autogen/gpio/dv/gpio_sim_cfg.hjson
  [pwm]=hw/top_earlgrey/ip_autogen/pwm/dv/pwm_sim_cfg.hjson
)
IPS=${IPS:-"uart i2c spi_host pattgen rv_timer aon_timer adc_ctrl sysrst_ctrl gpio pwm hmac aes"}

cd "$OT" || exit 1
mkdir -p "$PERSEUS/dataset" "$PERSEUS/scratch"

# pwm only ships as an ipgen template; Earl Grey has no rendered copy.
if [[ " $IPS " == *" pwm "* && ! -d hw/top_earlgrey/ip_autogen/pwm ]]; then
  printf '{\n  instance_name: top_earlgrey_pwm\n  param_values: {\n    topname: earlgrey\n    module_instance_name: pwm\n    nr_output_channels: 6\n  }\n}\n' \
    > "$PERSEUS/scratch/pwm.ipconfig.hjson"
  python3 util/ipgen.py generate -C hw/ip_templates/pwm -o hw/top_earlgrey/ip_autogen/pwm \
    -c "$PERSEUS/scratch/pwm.ipconfig.hjson" || echo "WARNING: pwm render failed" >&2
fi

for ip in $IPS; do
  cfg=${CFG[$ip]:?unknown IP $ip}
  scratch=$PERSEUS/scratch/$ip
  echo "=== $ip: $cfg"
  # dvsim hands --seeds out in -i order (one run per test with --reseed 1), so this replays seeds.csv.
  tests=$(awk -F, -v ip="$ip" '$1==ip {print $2}' "${SEEDS:-/dev/null}")
  if [[ -z ${TESTS:-} && -n $tests ]]; then
    sel=(-i $tests --seeds $(awk -F, -v ip="$ip" '$1==ip {print $3}' "$SEEDS") --reseed 1)
  else
    sel=(-i ${TESTS:-all} --reseed "${RESEED:-1}")
  fi
  # dvsim exits non-zero when any test fails; keep going and package whatever ran.
  # --xprop-off: `-xprop F` crashes xmelab 23.03 (*F,INTERR) on i2c, pattgen, adc_ctrl, hmac, aes...
  dvsim "$cfg" "${sel[@]}" -t xcelium --waves vcd -mw 100000 --xprop-off \
    -mp "${JOBS:-4}" --dump-script ../dump_dut.tcl --scratch-root "$scratch" --purge \
    || echo "WARNING: dvsim $ip exited $?" >&2
  # scratch path = {scratch_root}/{branch}/{dut}-sim-xcelium
  python3 "$PERSEUS/collect_dataset.py" "$(dirname "$(dirname "$cfg")")" \
    "$(echo "$scratch"/*/*-sim-xcelium)" "$PERSEUS/dataset/$ip" \
    | tee -a "$PERSEUS/dataset/SUMMARY.txt"
done
python3 "$PERSEUS/export_dataset.py" "$PERSEUS/dataset" "$PERSEUS/PERSEUS_dataset"
