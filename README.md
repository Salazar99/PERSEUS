# PERSEUS
Standalone simulation of the HW IPs from the OPEN TITAN and other IPs.
Mainly a support repo for the ACE repo.

# Requirements
-Verilator (see https://www.veripool.org/verilator/)
-gtkwave (to visualize execution traces)

# Usage
1. Enter the desired IP folder
2. Type `make` to compile 
2. Run `./obj_dir/Vname_of_ip` 

Generated traces are in *.vcd* format, you can visualize them using any .vcd visualizing tool, __gtkwave__ for example.

```console 
foo@bar:~$ gtkwave trace.vcd
```

# GOAL 
Create a simulatable version of the OPEN TITAN HW ips without the need of the complex Titan pipeline 

# Contacts
Daniele Nicoletti - daniele.nicoletti@univr.it