// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_uart_tb__pch.h"
#include "Vtop_uart_tb.h"
#include "Vtop_uart_tb___024root.h"

// FUNCTIONS
Vtop_uart_tb__Syms::~Vtop_uart_tb__Syms()
{
}

Vtop_uart_tb__Syms::Vtop_uart_tb__Syms(VerilatedContext* contextp, const char* namep, Vtop_uart_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
