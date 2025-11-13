#include "Vtop_uart_tb.h"          // Verilated model header (top module)
#include "verilated.h"
#include "verilated_vcd_c.h"       // Only if you used --trace

static vluint64_t sim_time = 0;    // Verilator 64-bit time
double sc_time_stamp() { return sim_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);  // enable tracing if compiled with --trace

    Vtop_uart_tb* top = new Vtop_uart_tb;

    VerilatedVcdC* tfp = nullptr;
#ifdef VM_TRACE
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dump.vcd");
#endif

    // Optional: if your TB exposes clk/rst directly as ports, you can drive them here.
    // Otherwise, rely on initial blocks in top_uart_tb.sv to generate them.

    const uint64_t max_cycles = 500000;  // safety stop in case TB forgets to $finish
    bool clk = false;

    while (!Verilated::gotFinish() && (sim_time < max_cycles)) {
        // Example free-running clock (10ns period if you consider each toggle a half-cycle)
        clk = !clk;
        // If your top has a visible clock, drive it:
        // top->clk = clk;

        top->eval();

        if (tfp) tfp->dump(sim_time);
        sim_time += 5;  // advance time (e.g., 5 time-units per half cycle)
    }

    if (tfp) { tfp->close(); delete tfp; tfp = nullptr; }
    top->final();
    delete top;
    return 0;
}
