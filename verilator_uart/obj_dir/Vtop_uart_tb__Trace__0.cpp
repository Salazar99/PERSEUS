// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_uart_tb__Syms.h"


void Vtop_uart_tb___024root__trace_chg_0_sub_0(Vtop_uart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_uart_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_chg_0\n"); );
    // Init
    Vtop_uart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_uart_tb___024root*>(voidSelf);
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_uart_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_uart_tb___024root__trace_chg_0_sub_0(Vtop_uart_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & (vlSelf->top_uart_tb__DOT__tl_d2h[2U] 
                                    >> 1U))));
        bufp->chgCData(oldp+1,((7U & ((vlSelf->top_uart_tb__DOT__tl_d2h[2U] 
                                       << 2U) | (vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                                                 >> 0x1eU)))),3);
        bufp->chgCData(oldp+2,((7U & (vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                                      >> 0x1bU))),3);
        bufp->chgCData(oldp+3,((3U & (vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                                      >> 0x19U))),2);
        bufp->chgCData(oldp+4,((0xffU & (vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                                         >> 0x11U))),8);
        bufp->chgBit(oldp+5,((1U & (vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                                    >> 0x10U))));
        bufp->chgIData(oldp+6,(((vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                                 << 0x10U) | (vlSelf->top_uart_tb__DOT__tl_d2h[0U] 
                                              >> 0x10U))),32);
        bufp->chgCData(oldp+7,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_d2h[0U] 
                                         >> 9U))),7);
        bufp->chgCData(oldp+8,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_d2h[0U] 
                                         >> 2U))),7);
        bufp->chgBit(oldp+9,((1U & (vlSelf->top_uart_tb__DOT__tl_d2h[0U] 
                                    >> 1U))));
        bufp->chgBit(oldp+10,((1U & vlSelf->top_uart_tb__DOT__tl_d2h[0U])));
        bufp->chgBit(oldp+11,((1U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o))));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                     >> 1U))));
        bufp->chgBit(oldp+13,(vlSelf->top_uart_tb__DOT__intr_tx_watermark_o));
        bufp->chgBit(oldp+14,(vlSelf->top_uart_tb__DOT__intr_tx_empty_o));
        bufp->chgBit(oldp+15,(vlSelf->top_uart_tb__DOT__intr_rx_watermark_o));
        bufp->chgBit(oldp+16,(vlSelf->top_uart_tb__DOT__intr_tx_done_o));
        bufp->chgBit(oldp+17,(vlSelf->top_uart_tb__DOT__intr_rx_overflow_o));
        bufp->chgBit(oldp+18,(vlSelf->top_uart_tb__DOT__intr_rx_frame_err_o));
        bufp->chgBit(oldp+19,(vlSelf->top_uart_tb__DOT__intr_rx_break_err_o));
        bufp->chgBit(oldp+20,(vlSelf->top_uart_tb__DOT__intr_rx_timeout_o));
        bufp->chgBit(oldp+21,(vlSelf->top_uart_tb__DOT__intr_rx_parity_err_o));
        bufp->chgBit(oldp+22,(vlSelf->top_uart_tb__DOT__lsio_trigger_o));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+23,((1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                     >> 0xaU))));
        bufp->chgCData(oldp+24,((7U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                       >> 7U))),3);
        bufp->chgCData(oldp+25,((7U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                       >> 4U))),3);
        bufp->chgCData(oldp+26,((3U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                       >> 2U))),2);
        bufp->chgCData(oldp+27,((0xffU & ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                           << 6U) | 
                                          (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[2U] 
                                           >> 0x1aU)))),8);
        bufp->chgIData(oldp+28,(((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[2U] 
                                  << 6U) | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                            >> 0x1aU))),32);
        bufp->chgCData(oldp+29,((0xfU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                         >> 0x16U))),4);
        bufp->chgIData(oldp+30,(((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                  << 0xaU) | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                              >> 0x16U))),32);
        bufp->chgCData(oldp+31,((7U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                       >> 0x13U))),3);
        bufp->chgCData(oldp+32,((0xfU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                         >> 0xfU))),4);
        bufp->chgCData(oldp+33,((0x7fU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                          >> 8U))),7);
        bufp->chgCData(oldp+34,((0x7fU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                          >> 1U))),7);
        bufp->chgBit(oldp+35,((1U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U])));
        bufp->chgBit(oldp+36,(((0U != (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit)) 
                               & (((~ (IData)((0U != (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read)))) 
                                   & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_re)) 
                                  | ((~ (IData)((0U 
                                                 != (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write)))) 
                                     & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we))))));
        bufp->chgIData(oldp+37,((IData)(((QData)((IData)(
                                                         (0xf00U 
                                                          & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                             >> 0x14U)))) 
                                         >> 6U))),32);
        bufp->chgCData(oldp+38,((7U & (IData)(((QData)((IData)(
                                                               (0xf00U 
                                                                & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                                   >> 0x14U)))) 
                                               >> 3U)))),3);
        bufp->chgBit(oldp+39,((1U & (IData)(((QData)((IData)(
                                                             (0xf00U 
                                                              & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                                 >> 0x14U)))) 
                                             >> 2U)))));
        bufp->chgBit(oldp+40,((1U & (IData)(((QData)((IData)(
                                                             (0xf00U 
                                                              & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                                 >> 0x14U)))) 
                                             >> 1U)))));
        bufp->chgBit(oldp+41,((1U & (IData)((QData)((IData)(
                                                            (0xf00U 
                                                             & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                                >> 0x14U))))))));
    }
    bufp->chgBit(oldp+42,(vlSelf->top_uart_tb__DOT__clk));
    bufp->chgBit(oldp+43,(vlSelf->top_uart_tb__DOT__rst_n));
    bufp->chgBit(oldp+44,(vlSelf->top_uart_tb__DOT__cio_tx_o));
}

void Vtop_uart_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_uart_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_uart_tb___024root*>(voidSelf);
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
