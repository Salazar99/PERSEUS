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
    tracep->pushPrefix("top_uart_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+43,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("tl_h2d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+24,0,"a_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"a_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,0,"a_param",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,0,"a_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+28,0,"a_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"a_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"a_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"a_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("a_user", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+32,0,"rsvd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"instr_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"cmd_intg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"data_intg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->declBit(c+36,0,"d_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tl_d2h", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1,0,"d_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"d_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"d_param",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"d_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"d_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"d_sink",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+7,0,"d_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("d_user", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+8,0,"rsp_intg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+9,0,"data_intg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->declBit(c+10,0,"d_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"a_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+45,0,"cio_rx_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"cio_tx_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"cio_tx_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"NumAlerts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("alert_rx_i", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+48,0,"ping_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ping_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ack_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"ack_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("alert_tx_o", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+12,0,"alert_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"alert_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("racl_policy_one", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+49,0,"read_perm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+49,0,"write_perm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("racl_error_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+37,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"request_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"racl_role",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+40,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"ctn_uid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+42,0,"read_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+14,0,"intr_tx_watermark_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"intr_tx_empty_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"intr_rx_watermark_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"intr_tx_done_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"intr_rx_overflow_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"intr_rx_frame_err_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"intr_rx_break_err_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"intr_rx_timeout_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"intr_rx_parity_err_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"lsio_trigger_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
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

VL_ATTR_COLD void Vtop_uart_tb___024root__trace_const_0_sub_0(Vtop_uart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_uart_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_const_0\n"); );
    // Init
    Vtop_uart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_uart_tb___024root*>(voidSelf);
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_uart_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_uart_tb___024root__trace_const_0_sub_0(Vtop_uart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+46,(1U));
    bufp->fullIData(oldp+47,(1U),32);
    bufp->fullBit(oldp+48,(0U));
    bufp->fullCData(oldp+49,(0xffU),8);
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
    bufp->fullBit(oldp+1,((1U & (vlSelf->top_uart_tb__DOT__tl_d2h[2U] 
                                 >> 1U))));
    bufp->fullCData(oldp+2,((7U & ((vlSelf->top_uart_tb__DOT__tl_d2h[2U] 
                                    << 2U) | (vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                                              >> 0x1eU)))),3);
    bufp->fullCData(oldp+3,((7U & (vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                                   >> 0x1bU))),3);
    bufp->fullCData(oldp+4,((3U & (vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                                   >> 0x19U))),2);
    bufp->fullCData(oldp+5,((0xffU & (vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                                      >> 0x11U))),8);
    bufp->fullBit(oldp+6,((1U & (vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                                 >> 0x10U))));
    bufp->fullIData(oldp+7,(((vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                              << 0x10U) | (vlSelf->top_uart_tb__DOT__tl_d2h[0U] 
                                           >> 0x10U))),32);
    bufp->fullCData(oldp+8,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_d2h[0U] 
                                      >> 9U))),7);
    bufp->fullCData(oldp+9,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_d2h[0U] 
                                      >> 2U))),7);
    bufp->fullBit(oldp+10,((1U & (vlSelf->top_uart_tb__DOT__tl_d2h[0U] 
                                  >> 1U))));
    bufp->fullBit(oldp+11,((1U & vlSelf->top_uart_tb__DOT__tl_d2h[0U])));
    bufp->fullBit(oldp+12,((1U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o))));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                  >> 1U))));
    bufp->fullBit(oldp+14,(vlSelf->top_uart_tb__DOT__intr_tx_watermark_o));
    bufp->fullBit(oldp+15,(vlSelf->top_uart_tb__DOT__intr_tx_empty_o));
    bufp->fullBit(oldp+16,(vlSelf->top_uart_tb__DOT__intr_rx_watermark_o));
    bufp->fullBit(oldp+17,(vlSelf->top_uart_tb__DOT__intr_tx_done_o));
    bufp->fullBit(oldp+18,(vlSelf->top_uart_tb__DOT__intr_rx_overflow_o));
    bufp->fullBit(oldp+19,(vlSelf->top_uart_tb__DOT__intr_rx_frame_err_o));
    bufp->fullBit(oldp+20,(vlSelf->top_uart_tb__DOT__intr_rx_break_err_o));
    bufp->fullBit(oldp+21,(vlSelf->top_uart_tb__DOT__intr_rx_timeout_o));
    bufp->fullBit(oldp+22,(vlSelf->top_uart_tb__DOT__intr_rx_parity_err_o));
    bufp->fullBit(oldp+23,(vlSelf->top_uart_tb__DOT__lsio_trigger_o));
    bufp->fullBit(oldp+24,((1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                  >> 0xaU))));
    bufp->fullCData(oldp+25,((7U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                    >> 7U))),3);
    bufp->fullCData(oldp+26,((7U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                    >> 4U))),3);
    bufp->fullCData(oldp+27,((3U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                    >> 2U))),2);
    bufp->fullCData(oldp+28,((0xffU & ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                        << 6U) | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[2U] 
                                                  >> 0x1aU)))),8);
    bufp->fullIData(oldp+29,(((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[2U] 
                               << 6U) | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                         >> 0x1aU))),32);
    bufp->fullCData(oldp+30,((0xfU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                      >> 0x16U))),4);
    bufp->fullIData(oldp+31,(((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                               << 0xaU) | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                           >> 0x16U))),32);
    bufp->fullCData(oldp+32,((7U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                    >> 0x13U))),3);
    bufp->fullCData(oldp+33,((0xfU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                      >> 0xfU))),4);
    bufp->fullCData(oldp+34,((0x7fU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                       >> 8U))),7);
    bufp->fullCData(oldp+35,((0x7fU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                       >> 1U))),7);
    bufp->fullBit(oldp+36,((1U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U])));
    bufp->fullBit(oldp+37,(((0U != (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit)) 
                            & (((~ (IData)((0U != (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read)))) 
                                & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_re)) 
                               | ((~ (IData)((0U != (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write)))) 
                                  & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we))))));
    bufp->fullIData(oldp+38,((IData)(((QData)((IData)(
                                                      (0xf00U 
                                                       & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                          >> 0x14U)))) 
                                      >> 6U))),32);
    bufp->fullCData(oldp+39,((7U & (IData)(((QData)((IData)(
                                                            (0xf00U 
                                                             & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                                >> 0x14U)))) 
                                            >> 3U)))),3);
    bufp->fullBit(oldp+40,((1U & (IData)(((QData)((IData)(
                                                          (0xf00U 
                                                           & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                              >> 0x14U)))) 
                                          >> 2U)))));
    bufp->fullBit(oldp+41,((1U & (IData)(((QData)((IData)(
                                                          (0xf00U 
                                                           & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                              >> 0x14U)))) 
                                          >> 1U)))));
    bufp->fullBit(oldp+42,((1U & (IData)((QData)((IData)(
                                                         (0xf00U 
                                                          & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                             >> 0x14U))))))));
    bufp->fullBit(oldp+43,(vlSelf->top_uart_tb__DOT__clk));
    bufp->fullBit(oldp+44,(vlSelf->top_uart_tb__DOT__rst_n));
    bufp->fullBit(oldp+45,(vlSelf->top_uart_tb__DOT__cio_tx_o));
}
