// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_uart_tb__Syms.h"


VL_ATTR_COLD void Vtop_uart_tb___024root__trace_init_sub__TOP__0(Vtop_uart_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+60,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"tl_i_a_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"tl_i_a_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+64,0,"tl_i_a_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"tl_i_a_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+66,0,"tl_i_a_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"tl_i_a_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"tl_i_a_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"tl_i_a_param",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+70,0,"tl_i_d_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"tl_o_a_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"tl_o_d_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"tl_o_d_opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"tl_o_d_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"tl_o_d_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+76,0,"tl_o_d_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"cio_tx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"cio_tx_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"cio_rx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("top_uart_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"tl_i_a_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"tl_i_a_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+64,0,"tl_i_a_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"tl_i_a_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+66,0,"tl_i_a_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"tl_i_a_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"tl_i_a_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"tl_i_a_param",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+70,0,"tl_i_d_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"tl_o_a_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"tl_o_d_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"tl_o_d_opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"tl_o_d_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"tl_o_d_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+76,0,"tl_o_d_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"cio_tx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"cio_tx_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"cio_rx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tl_i_raw", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+7,0,"a_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"a_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"a_param",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"a_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"a_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"a_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"a_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"a_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a_user", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+15,0,"rsvd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+16,0,"instr_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"cmd_intg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+18,0,"data_intg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->declBit(c+19,0,"d_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tl_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+20,0,"a_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"a_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+22,0,"a_param",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"a_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"a_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"a_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"a_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+27,0,"a_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a_user", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+28,0,"rsvd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,0,"instr_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"cmd_intg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+31,0,"data_intg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->declBit(c+32,0,"d_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tl_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+38,0,"d_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"d_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"d_param",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"d_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"d_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"d_sink",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+44,0,"d_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("d_user", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+45,0,"rsp_intg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+46,0,"data_intg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->declBit(c+47,0,"d_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"a_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("alert_rx_i", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1,0,"ping_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"ping_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"ack_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"ack_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("alert_tx_o", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+49,0,"alert_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"alert_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("racl_policies_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+5,0,"read_perm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"write_perm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("racl_error_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+80,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"request_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"racl_role",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+35,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"ctn_uid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+37,0,"read_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+51,0,"intr_tx_watermark_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"intr_tx_empty_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"intr_rx_watermark_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"intr_tx_done_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"intr_rx_overflow_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"intr_rx_frame_err_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"intr_rx_break_err_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"intr_rx_timeout_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"intr_rx_parity_err_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_uart_tb___024root__trace_init_top(Vtop_uart_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_init_top\n"); );
    // Body
    Vtop_uart_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_uart_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_uart_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_uart_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_uart_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_uart_tb___024root__trace_register(Vtop_uart_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop_uart_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop_uart_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop_uart_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop_uart_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_uart_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_const_0\n"); );
    // Init
    Vtop_uart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_uart_tb___024root*>(voidSelf);
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtop_uart_tb___024root__trace_full_0_sub_0(Vtop_uart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_uart_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_full_0\n"); );
    // Init
    Vtop_uart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_uart_tb___024root*>(voidSelf);
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_uart_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_uart_tb___024root__trace_full_0_sub_0(Vtop_uart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((1U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                 >> 3U))));
    bufp->fullBit(oldp+2,((1U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                 >> 2U))));
    bufp->fullBit(oldp+3,((1U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                 >> 1U))));
    bufp->fullBit(oldp+4,((1U & (IData)(vlSelf->top_uart_tb__DOT__alert_rx_i))));
    bufp->fullCData(oldp+5,((0xffU & (vlSelf->top_uart_tb__DOT__racl_policies_i
                                      [0U] >> 8U))),8);
    bufp->fullCData(oldp+6,((0xffU & vlSelf->top_uart_tb__DOT__racl_policies_i
                             [0U])),8);
    bufp->fullBit(oldp+7,((1U & (vlSelf->top_uart_tb__DOT__tl_i_raw[3U] 
                                 >> 0xaU))));
    bufp->fullCData(oldp+8,((7U & (vlSelf->top_uart_tb__DOT__tl_i_raw[3U] 
                                   >> 7U))),3);
    bufp->fullCData(oldp+9,((7U & (vlSelf->top_uart_tb__DOT__tl_i_raw[3U] 
                                   >> 4U))),3);
    bufp->fullCData(oldp+10,((3U & (vlSelf->top_uart_tb__DOT__tl_i_raw[3U] 
                                    >> 2U))),2);
    bufp->fullCData(oldp+11,((0xffU & ((vlSelf->top_uart_tb__DOT__tl_i_raw[3U] 
                                        << 6U) | (vlSelf->top_uart_tb__DOT__tl_i_raw[2U] 
                                                  >> 0x1aU)))),8);
    bufp->fullIData(oldp+12,(((vlSelf->top_uart_tb__DOT__tl_i_raw[2U] 
                               << 6U) | (vlSelf->top_uart_tb__DOT__tl_i_raw[1U] 
                                         >> 0x1aU))),32);
    bufp->fullCData(oldp+13,((0xfU & (vlSelf->top_uart_tb__DOT__tl_i_raw[1U] 
                                      >> 0x16U))),4);
    bufp->fullIData(oldp+14,(((vlSelf->top_uart_tb__DOT__tl_i_raw[1U] 
                               << 0xaU) | (vlSelf->top_uart_tb__DOT__tl_i_raw[0U] 
                                           >> 0x16U))),32);
    bufp->fullCData(oldp+15,((7U & (vlSelf->top_uart_tb__DOT__tl_i_raw[0U] 
                                    >> 0x13U))),3);
    bufp->fullCData(oldp+16,((0xfU & (vlSelf->top_uart_tb__DOT__tl_i_raw[0U] 
                                      >> 0xfU))),4);
    bufp->fullCData(oldp+17,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_i_raw[0U] 
                                       >> 8U))),7);
    bufp->fullCData(oldp+18,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_i_raw[0U] 
                                       >> 1U))),7);
    bufp->fullBit(oldp+19,((1U & vlSelf->top_uart_tb__DOT__tl_i_raw[0U])));
    bufp->fullBit(oldp+20,((1U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                  >> 0xaU))));
    bufp->fullCData(oldp+21,((7U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                    >> 7U))),3);
    bufp->fullCData(oldp+22,((7U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                    >> 4U))),3);
    bufp->fullCData(oldp+23,((3U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                    >> 2U))),2);
    bufp->fullCData(oldp+24,((0xffU & ((vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                        << 6U) | (vlSelf->top_uart_tb__DOT__tl_i[2U] 
                                                  >> 0x1aU)))),8);
    bufp->fullIData(oldp+25,(((vlSelf->top_uart_tb__DOT__tl_i[2U] 
                               << 6U) | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                         >> 0x1aU))),32);
    bufp->fullCData(oldp+26,((0xfU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                      >> 0x16U))),4);
    bufp->fullIData(oldp+27,(((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                               << 0xaU) | (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                           >> 0x16U))),32);
    bufp->fullCData(oldp+28,((7U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                    >> 0x13U))),3);
    bufp->fullCData(oldp+29,((0xfU & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                      >> 0xfU))),4);
    bufp->fullCData(oldp+30,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                       >> 8U))),7);
    bufp->fullCData(oldp+31,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                       >> 1U))),7);
    bufp->fullBit(oldp+32,((1U & vlSelf->top_uart_tb__DOT__tl_i[0U])));
    bufp->fullIData(oldp+33,((IData)(((QData)((IData)(
                                                      (0xf00U 
                                                       & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                          >> 0x14U)))) 
                                      >> 6U))),32);
    bufp->fullCData(oldp+34,((7U & (IData)(((QData)((IData)(
                                                            (0xf00U 
                                                             & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                                >> 0x14U)))) 
                                            >> 3U)))),3);
    bufp->fullBit(oldp+35,((1U & (IData)(((QData)((IData)(
                                                          (0xf00U 
                                                           & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                              >> 0x14U)))) 
                                          >> 2U)))));
    bufp->fullBit(oldp+36,((1U & (IData)(((QData)((IData)(
                                                          (0xf00U 
                                                           & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                              >> 0x14U)))) 
                                          >> 1U)))));
    bufp->fullBit(oldp+37,((1U & (IData)((QData)((IData)(
                                                         (0xf00U 
                                                          & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                             >> 0x14U))))))));
    bufp->fullBit(oldp+38,((1U & (vlSelf->top_uart_tb__DOT__tl_o[2U] 
                                  >> 1U))));
    bufp->fullCData(oldp+39,((7U & ((vlSelf->top_uart_tb__DOT__tl_o[2U] 
                                     << 2U) | (vlSelf->top_uart_tb__DOT__tl_o[1U] 
                                               >> 0x1eU)))),3);
    bufp->fullCData(oldp+40,((7U & (vlSelf->top_uart_tb__DOT__tl_o[1U] 
                                    >> 0x1bU))),3);
    bufp->fullCData(oldp+41,((3U & (vlSelf->top_uart_tb__DOT__tl_o[1U] 
                                    >> 0x19U))),2);
    bufp->fullCData(oldp+42,((0xffU & (vlSelf->top_uart_tb__DOT__tl_o[1U] 
                                       >> 0x11U))),8);
    bufp->fullBit(oldp+43,((1U & (vlSelf->top_uart_tb__DOT__tl_o[1U] 
                                  >> 0x10U))));
    bufp->fullIData(oldp+44,(((vlSelf->top_uart_tb__DOT__tl_o[1U] 
                               << 0x10U) | (vlSelf->top_uart_tb__DOT__tl_o[0U] 
                                            >> 0x10U))),32);
    bufp->fullCData(oldp+45,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_o[0U] 
                                       >> 9U))),7);
    bufp->fullCData(oldp+46,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_o[0U] 
                                       >> 2U))),7);
    bufp->fullBit(oldp+47,((1U & (vlSelf->top_uart_tb__DOT__tl_o[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+48,((1U & vlSelf->top_uart_tb__DOT__tl_o[0U])));
    bufp->fullBit(oldp+49,((1U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o))));
    bufp->fullBit(oldp+50,((1U & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                  >> 1U))));
    bufp->fullBit(oldp+51,(vlSelf->top_uart_tb__DOT__intr_tx_watermark_o));
    bufp->fullBit(oldp+52,(vlSelf->top_uart_tb__DOT__intr_tx_empty_o));
    bufp->fullBit(oldp+53,(vlSelf->top_uart_tb__DOT__intr_rx_watermark_o));
    bufp->fullBit(oldp+54,(vlSelf->top_uart_tb__DOT__intr_tx_done_o));
    bufp->fullBit(oldp+55,(vlSelf->top_uart_tb__DOT__intr_rx_overflow_o));
    bufp->fullBit(oldp+56,(vlSelf->top_uart_tb__DOT__intr_rx_frame_err_o));
    bufp->fullBit(oldp+57,(vlSelf->top_uart_tb__DOT__intr_rx_break_err_o));
    bufp->fullBit(oldp+58,(vlSelf->top_uart_tb__DOT__intr_rx_timeout_o));
    bufp->fullBit(oldp+59,(vlSelf->top_uart_tb__DOT__intr_rx_parity_err_o));
    bufp->fullBit(oldp+60,(vlSelf->clk));
    bufp->fullBit(oldp+61,(vlSelf->rst_n));
    bufp->fullBit(oldp+62,(vlSelf->tl_i_a_valid));
    bufp->fullCData(oldp+63,(vlSelf->tl_i_a_opcode),3);
    bufp->fullCData(oldp+64,(vlSelf->tl_i_a_size),2);
    bufp->fullCData(oldp+65,(vlSelf->tl_i_a_mask),4);
    bufp->fullIData(oldp+66,(vlSelf->tl_i_a_address),32);
    bufp->fullIData(oldp+67,(vlSelf->tl_i_a_data),32);
    bufp->fullCData(oldp+68,(vlSelf->tl_i_a_source),8);
    bufp->fullCData(oldp+69,(vlSelf->tl_i_a_param),3);
    bufp->fullBit(oldp+70,(vlSelf->tl_i_d_ready));
    bufp->fullBit(oldp+71,(vlSelf->tl_o_a_ready));
    bufp->fullBit(oldp+72,(vlSelf->tl_o_d_valid));
    bufp->fullCData(oldp+73,(vlSelf->tl_o_d_opcode),3);
    bufp->fullIData(oldp+74,(vlSelf->tl_o_d_data),32);
    bufp->fullCData(oldp+75,(vlSelf->tl_o_d_source),8);
    bufp->fullBit(oldp+76,(vlSelf->tl_o_d_error));
    bufp->fullBit(oldp+77,(vlSelf->cio_tx_o));
    bufp->fullBit(oldp+78,(vlSelf->cio_tx_en_o));
    bufp->fullBit(oldp+79,(vlSelf->cio_rx_i));
    bufp->fullBit(oldp+80,(((0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
                            & (((~ (IData)((0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read)))) 
                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re)) 
                               | ((~ (IData)((0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write)))) 
                                  & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we))))));
}
