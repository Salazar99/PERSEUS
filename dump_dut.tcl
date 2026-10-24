# Copyright lowRISC contributors (OpenTitan project).
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

# PERSEUS copy of opentitan/hw/dv/tools/sim.tcl: dumps only $tb_top.dut. Pass via dvsim --dump-script.

# Common TCL script invoked at run-time by the simulator.
# VCS syntax: -ucli -do <this file>
# Xcelium syntax: -input <this file>

set dv_root ""
if {[info exists ::env(dv_root)]} {
  set dv_root "$::env(dv_root)"
} else {
  puts "ERROR: Script run without dv_root environment variable."
  quit
}

# Dumping waves in specific hierarchies.
#
# By default, if wave dumping is enabled, all hierarchies of the top level testbench are dumped.
# For large designs, this may slow down the simulation considerably. To bypass this and only enable
# waves in specific hierarchies, set the dump_tb_top flag to 0 (i.e. uncomment the line below), and
# specify the paths to dump on line 32.
# set dump_tb_top 0

source "${dv_root}/tools/common.tcl"
# PERSEUS: hide $waves from waves.tcl so it opens no database; we open our own below.
set perseus_waves $waves
set waves none
source "${dv_root}/tools/waves.tcl"
set waves $perseus_waves

global waves
global simulator
global tb_top

# Dumping waves in specific hierarchies (example):
# wavedumpScope $waves $simulator tb.dut.foo.bar 12
# wavedumpScope $waves $simulator tb.dut.baz 0

# PERSEUS: dump the whole DUT hierarchy (all depth, incl. memories) instead of the full tb, straight
# into waves.vcd.gz. Capped at $PERSEUS_VCD_MAXSIZE uncompressed bytes (default 2G): past the cap
# Xcelium writes a "Dump limit exceeded" comment and stops dumping, the simulation runs on.
if {$waves eq "vcd"} {
  set maxsize 2G
  if {[info exists ::env(PERSEUS_VCD_MAXSIZE)]} { set maxsize $::env(PERSEUS_VCD_MAXSIZE) }
  database -open waves.vcd -vcd -default -gzip -maxsize $maxsize
  wavedumpScope $waves $simulator $tb_top.dut 0
}

if {$simulator eq "xcelium"} {
  puts "INFO: The following assertions are permamently disabled:"
  assertion -list -depth all -multiline -permoff $tb_top
}

global gui
global gui_debug
# In GUI mode, let the user take control of running the simulation.
# In GUI debug mode, run only up until the end of the UVM elaboration phase to have access to the
# dynamic objects.
if {$gui_debug == 1} {
  if {$simulator eq "xcelium"} {
    uvm_phase -stop_at build -end
    run
  }
} elseif {$gui == 0} {
  run
  if {$simulator eq "xcelium"} {
    # Xcelium provides a `finish` tcl command instead of `quit`. The argument '2' enables the
    # logging of additional resource usage information.
    finish 2
  } else {
    quit
  }
}
