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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,((1U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                    >> 3U))));
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                    >> 2U))));
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelf->top_uart_tb__DOT__alert_rx_i) 
                                    >> 1U))));
        bufp->chgBit(oldp+3,((1U & (IData)(vlSelf->top_uart_tb__DOT__alert_rx_i))));
        bufp->chgCData(oldp+4,((0xffU & (vlSelf->top_uart_tb__DOT__racl_policies_i
                                         [0U] >> 8U))),8);
        bufp->chgCData(oldp+5,((0xffU & vlSelf->top_uart_tb__DOT__racl_policies_i
                                [0U])),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+6,((1U & (vlSelf->top_uart_tb__DOT__tl_i_raw[3U] 
                                    >> 0xaU))));
        bufp->chgCData(oldp+7,((7U & (vlSelf->top_uart_tb__DOT__tl_i_raw[3U] 
                                      >> 7U))),3);
        bufp->chgCData(oldp+8,((7U & (vlSelf->top_uart_tb__DOT__tl_i_raw[3U] 
                                      >> 4U))),3);
        bufp->chgCData(oldp+9,((3U & (vlSelf->top_uart_tb__DOT__tl_i_raw[3U] 
                                      >> 2U))),2);
        bufp->chgCData(oldp+10,((0xffU & ((vlSelf->top_uart_tb__DOT__tl_i_raw[3U] 
                                           << 6U) | 
                                          (vlSelf->top_uart_tb__DOT__tl_i_raw[2U] 
                                           >> 0x1aU)))),8);
        bufp->chgIData(oldp+11,(((vlSelf->top_uart_tb__DOT__tl_i_raw[2U] 
                                  << 6U) | (vlSelf->top_uart_tb__DOT__tl_i_raw[1U] 
                                            >> 0x1aU))),32);
        bufp->chgCData(oldp+12,((0xfU & (vlSelf->top_uart_tb__DOT__tl_i_raw[1U] 
                                         >> 0x16U))),4);
        bufp->chgIData(oldp+13,(((vlSelf->top_uart_tb__DOT__tl_i_raw[1U] 
                                  << 0xaU) | (vlSelf->top_uart_tb__DOT__tl_i_raw[0U] 
                                              >> 0x16U))),32);
        bufp->chgCData(oldp+14,((7U & (vlSelf->top_uart_tb__DOT__tl_i_raw[0U] 
                                       >> 0x13U))),3);
        bufp->chgCData(oldp+15,((0xfU & (vlSelf->top_uart_tb__DOT__tl_i_raw[0U] 
                                         >> 0xfU))),4);
        bufp->chgCData(oldp+16,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_i_raw[0U] 
                                          >> 8U))),7);
        bufp->chgCData(oldp+17,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_i_raw[0U] 
                                          >> 1U))),7);
        bufp->chgBit(oldp+18,((1U & vlSelf->top_uart_tb__DOT__tl_i_raw[0U])));
        bufp->chgBit(oldp+19,((1U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                     >> 0xaU))));
        bufp->chgCData(oldp+20,((7U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                       >> 7U))),3);
        bufp->chgCData(oldp+21,((7U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                       >> 4U))),3);
        bufp->chgCData(oldp+22,((3U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                       >> 2U))),2);
        bufp->chgCData(oldp+23,((0xffU & ((vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                           << 6U) | 
                                          (vlSelf->top_uart_tb__DOT__tl_i[2U] 
                                           >> 0x1aU)))),8);
        bufp->chgIData(oldp+24,(((vlSelf->top_uart_tb__DOT__tl_i[2U] 
                                  << 6U) | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                            >> 0x1aU))),32);
        bufp->chgCData(oldp+25,((0xfU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                         >> 0x16U))),4);
        bufp->chgIData(oldp+26,(((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                  << 0xaU) | (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                              >> 0x16U))),32);
        bufp->chgCData(oldp+27,((7U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                       >> 0x13U))),3);
        bufp->chgCData(oldp+28,((0xfU & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                         >> 0xfU))),4);
        bufp->chgCData(oldp+29,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                          >> 8U))),7);
        bufp->chgCData(oldp+30,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                          >> 1U))),7);
        bufp->chgBit(oldp+31,((1U & vlSelf->top_uart_tb__DOT__tl_i[0U])));
        bufp->chgIData(oldp+32,((IData)(((QData)((IData)(
                                                         (0xf00U 
                                                          & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                             >> 0x14U)))) 
                                         >> 6U))),32);
        bufp->chgCData(oldp+33,((7U & (IData)(((QData)((IData)(
                                                               (0xf00U 
                                                                & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                                   >> 0x14U)))) 
                                               >> 3U)))),3);
        bufp->chgBit(oldp+34,((1U & (IData)(((QData)((IData)(
                                                             (0xf00U 
                                                              & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                                 >> 0x14U)))) 
                                             >> 2U)))));
        bufp->chgBit(oldp+35,((1U & (IData)(((QData)((IData)(
                                                             (0xf00U 
                                                              & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                                 >> 0x14U)))) 
                                             >> 1U)))));
        bufp->chgBit(oldp+36,((1U & (IData)((QData)((IData)(
                                                            (0xf00U 
                                                             & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                                >> 0x14U))))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+37,((1U & (vlSelf->top_uart_tb__DOT__tl_o[2U] 
                                     >> 1U))));
        bufp->chgCData(oldp+38,((7U & ((vlSelf->top_uart_tb__DOT__tl_o[2U] 
                                        << 2U) | (vlSelf->top_uart_tb__DOT__tl_o[1U] 
                                                  >> 0x1eU)))),3);
        bufp->chgCData(oldp+39,((7U & (vlSelf->top_uart_tb__DOT__tl_o[1U] 
                                       >> 0x1bU))),3);
        bufp->chgCData(oldp+40,((3U & (vlSelf->top_uart_tb__DOT__tl_o[1U] 
                                       >> 0x19U))),2);
        bufp->chgCData(oldp+41,((0xffU & (vlSelf->top_uart_tb__DOT__tl_o[1U] 
                                          >> 0x11U))),8);
        bufp->chgBit(oldp+42,((1U & (vlSelf->top_uart_tb__DOT__tl_o[1U] 
                                     >> 0x10U))));
        bufp->chgIData(oldp+43,(((vlSelf->top_uart_tb__DOT__tl_o[1U] 
                                  << 0x10U) | (vlSelf->top_uart_tb__DOT__tl_o[0U] 
                                               >> 0x10U))),32);
        bufp->chgCData(oldp+44,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_o[0U] 
                                          >> 9U))),7);
        bufp->chgCData(oldp+45,((0x7fU & (vlSelf->top_uart_tb__DOT__tl_o[0U] 
                                          >> 2U))),7);
        bufp->chgBit(oldp+46,((1U & (vlSelf->top_uart_tb__DOT__tl_o[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+47,((1U & vlSelf->top_uart_tb__DOT__tl_o[0U])));
        bufp->chgBit(oldp+48,((1U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o))));
        bufp->chgBit(oldp+49,((1U & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                     >> 1U))));
        bufp->chgBit(oldp+50,(vlSelf->top_uart_tb__DOT__intr_tx_watermark_o));
        bufp->chgBit(oldp+51,(vlSelf->top_uart_tb__DOT__intr_tx_empty_o));
        bufp->chgBit(oldp+52,(vlSelf->top_uart_tb__DOT__intr_rx_watermark_o));
        bufp->chgBit(oldp+53,(vlSelf->top_uart_tb__DOT__intr_tx_done_o));
        bufp->chgBit(oldp+54,(vlSelf->top_uart_tb__DOT__intr_rx_overflow_o));
        bufp->chgBit(oldp+55,(vlSelf->top_uart_tb__DOT__intr_rx_frame_err_o));
        bufp->chgBit(oldp+56,(vlSelf->top_uart_tb__DOT__intr_rx_break_err_o));
        bufp->chgBit(oldp+57,(vlSelf->top_uart_tb__DOT__intr_rx_timeout_o));
        bufp->chgBit(oldp+58,(vlSelf->top_uart_tb__DOT__intr_rx_parity_err_o));
    }
    bufp->chgBit(oldp+59,(vlSelf->clk));
    bufp->chgBit(oldp+60,(vlSelf->rst_n));
    bufp->chgBit(oldp+61,(vlSelf->tl_i_a_valid));
    bufp->chgCData(oldp+62,(vlSelf->tl_i_a_opcode),3);
    bufp->chgCData(oldp+63,(vlSelf->tl_i_a_size),2);
    bufp->chgCData(oldp+64,(vlSelf->tl_i_a_mask),4);
    bufp->chgIData(oldp+65,(vlSelf->tl_i_a_address),32);
    bufp->chgIData(oldp+66,(vlSelf->tl_i_a_data),32);
    bufp->chgCData(oldp+67,(vlSelf->tl_i_a_source),8);
    bufp->chgCData(oldp+68,(vlSelf->tl_i_a_param),3);
    bufp->chgBit(oldp+69,(vlSelf->tl_i_d_ready));
    bufp->chgBit(oldp+70,(vlSelf->tl_o_a_ready));
    bufp->chgBit(oldp+71,(vlSelf->tl_o_d_valid));
    bufp->chgCData(oldp+72,(vlSelf->tl_o_d_opcode),3);
    bufp->chgIData(oldp+73,(vlSelf->tl_o_d_data),32);
    bufp->chgCData(oldp+74,(vlSelf->tl_o_d_source),8);
    bufp->chgBit(oldp+75,(vlSelf->tl_o_d_error));
    bufp->chgBit(oldp+76,(vlSelf->cio_tx_o));
    bufp->chgBit(oldp+77,(vlSelf->cio_tx_en_o));
    bufp->chgBit(oldp+78,(vlSelf->cio_rx_i));
    bufp->chgBit(oldp+79,(((0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
                           & (((~ (IData)((0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read)))) 
                               & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re)) 
                              | ((~ (IData)((0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write)))) 
                                 & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we))))));
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
