// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_uart_tb.h for the primary calling header

#include "Vtop_uart_tb__pch.h"
#include "Vtop_uart_tb___024root.h"

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_static(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_initial__TOP(Vtop_uart_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_initial(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_initial\n"); );
    // Body
    Vtop_uart_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__0 
        = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__0 
        = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1 
        = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__2 
        = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__1 
        = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_initial__TOP(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top_uart_tb__DOT__alert_rx_i = (3U & (IData)(vlSelf->top_uart_tb__DOT__alert_rx_i));
    vlSelf->top_uart_tb__DOT__racl_policies_i[0U] = 0U;
    vlSelf->cio_tx_en_o = 1U;
}

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_final(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__stl(Vtop_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_uart_tb___024root___eval_phase__stl(Vtop_uart_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_settle(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop_uart_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/top_uart_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_uart_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__stl(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.or_tree or [hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.err_tree)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.or_tree)\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*1:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h3fa4906c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h80cd2b9a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h4d34b17c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_he79223a6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h0556af3d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h754b77b1_0;

VL_ATTR_COLD void Vtop_uart_tb___024root___stl_sequent__TOP__0(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    QData/*42:0*/ top_uart_tb__DOT__u_tl_intg__DOT__cmd;
    top_uart_tb__DOT__u_tl_intg__DOT__cmd = 0;
    QData/*63:0*/ top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o;
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o = 0;
    QData/*38:0*/ top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o;
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o = 0;
    CData/*0:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h7645ae40__0;
    top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h7645ae40__0 = 0;
    QData/*42:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__cmd;
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__cmd = 0;
    QData/*63:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i;
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i = 0;
    QData/*38:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i;
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i = 0;
    QData/*56:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o;
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o = 0;
    IData/*31:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o;
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o = 0;
    CData/*5:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp;
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp = 0;
    QData/*63:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o;
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o = 0;
    QData/*38:0*/ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o;
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o = 0;
    CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_tx_watermark;
    top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_tx_watermark = 0;
    CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_watermark;
    top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_watermark = 0;
    CData/*5:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_watermark_thresh;
    top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_watermark_thresh = 0;
    CData/*6:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_watermark_thresh;
    top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_watermark_thresh = 0;
    CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o;
    top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o = 0;
    CData/*0:0*/ top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o;
    top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o = 0;
    CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o;
    top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0;
    CData/*0:0*/ top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o;
    top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o = 0;
    CData/*7:0*/ __VdfgTmp_he100884a__0;
    __VdfgTmp_he100884a__0 = 0;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__0__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__0__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_extract_h2d_cmd_intg__0__tl;
    VL_ZERO_W(107, __Vfunc_extract_h2d_cmd_intg__0__tl);
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__1__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__1__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_extract_h2d_cmd_intg__1__tl;
    VL_ZERO_W(107, __Vfunc_extract_h2d_cmd_intg__1__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__2__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__2__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__2__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__2__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__2__payload;
    __Vfunc_extract_d2h_rsp_intg__2__payload = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__6__Vfuncout;
    __Vfunc_mubi4_test_invalid__6__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__6__val;
    __Vfunc_mubi4_test_invalid__6__val = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_62;
    VlWide<4>/*127:0*/ __Vtemp_70;
    VlWide<4>/*127:0*/ __Vtemp_85;
    // Body
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x20U & ((~ ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                        >> 5U)) << 5U));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x20U & ((~ ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                        >> 5U)) << 5U));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x40U & ((~ ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                        >> 6U)) << 6U));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x40U & ((~ ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                        >> 6U)) << 6U));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_rxrst 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
           & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_txrst 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
           & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe));
    vlSelf->cio_tx_o = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q)
                         ? (IData)(vlSelf->cio_rx_i)
                         : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_out_q));
    __VdfgTmp_he100884a__0 = (0xffU & (((0U == (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                         ? 0U : (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, 
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                       | (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                          (7U & (VL_SHIFTL_III(8,8,32, 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                 >> 5U))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(8,8,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_timeout 
        = ((vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
            == vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_q) 
           & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
    if (vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) {
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data 
            = (0xffU & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                        >> 1U));
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_parity_err 
            = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & (VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                          >> 1U))) 
                  ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q)));
    } else {
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data 
            = (0xffU & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                        >> 2U));
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_parity_err = 0U;
    }
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q)
            ? (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_q)
            : ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
               | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q)
                   ? (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync) 
                       & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1) 
                          | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2))) 
                      | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1) 
                         & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2)))
                   : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync))));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err 
        = ((~ ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
               >> 0xaU)) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
    __Vtableidx3 = (((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                       ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq)) 
                      & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                         ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq))) 
                     << 6U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                                << 5U) | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                                            ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd)) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))))));
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d 
        = Vtop_uart_tb__ConstPool__TABLE_h3fa4906c_0
        [__Vtableidx3];
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d 
        = Vtop_uart_tb__ConstPool__TABLE_h80cd2b9a_0
        [__Vtableidx3];
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d 
        = Vtop_uart_tb__ConstPool__TABLE_h4d34b17c_0
        [__Vtableidx3];
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint 
        = Vtop_uart_tb__ConstPool__TABLE_he79223a6_0
        [__Vtableidx3];
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle 
        = (1U & ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q)) 
                 | (0U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    __Vtableidx2 = (((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                       ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq)) 
                      & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                         ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq))) 
                     << 6U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                                << 5U) | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                                            ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd)) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))))));
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d 
        = Vtop_uart_tb__ConstPool__TABLE_h3fa4906c_0
        [__Vtableidx2];
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
        = Vtop_uart_tb__ConstPool__TABLE_h80cd2b9a_0
        [__Vtableidx2];
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d 
        = Vtop_uart_tb__ConstPool__TABLE_h4d34b17c_0
        [__Vtableidx2];
    top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o 
        = Vtop_uart_tb__ConstPool__TABLE_h0556af3d_0
        [__Vtableidx2];
    top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o 
        = Vtop_uart_tb__ConstPool__TABLE_h754b77b1_0
        [__Vtableidx2];
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint 
        = Vtop_uart_tb__ConstPool__TABLE_he79223a6_0
        [__Vtableidx2];
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x20U ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U] 
        = (IData)((((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x39U) | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                  << 0x31U) | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U] 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
            << 0x1eU) | (IData)(((((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                   << 0x39U) | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                                       << 1U) 
                                                                      | (1U 
                                                                         & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))) 
                                 >> 0x20U)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[2U] 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                      >> 2U));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U] 
        = (0xffff0003U & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U]);
    vlSelf->top_uart_tb__DOT__tl_i_raw[0U] = 0xffc4ffffU;
    vlSelf->top_uart_tb__DOT__tl_i_raw[1U] = 0x3fffffU;
    vlSelf->top_uart_tb__DOT__tl_i_raw[2U] = 0U;
    vlSelf->top_uart_tb__DOT__tl_i_raw[3U] = 0U;
    vlSelf->top_uart_tb__DOT__tl_i_raw[3U] = ((0x7fU 
                                               & vlSelf->top_uart_tb__DOT__tl_i_raw[3U]) 
                                              | (0x780U 
                                                 & (((IData)(vlSelf->tl_i_a_valid) 
                                                     << 0xaU) 
                                                    | ((IData)(vlSelf->tl_i_a_opcode) 
                                                       << 7U))));
    vlSelf->top_uart_tb__DOT__tl_i_raw[3U] = ((0x7f3U 
                                               & vlSelf->top_uart_tb__DOT__tl_i_raw[3U]) 
                                              | (0x7ffU 
                                                 & ((IData)(vlSelf->tl_i_a_size) 
                                                    << 2U)));
    vlSelf->top_uart_tb__DOT__tl_i_raw[0U] = ((0x3fffffU 
                                               & vlSelf->top_uart_tb__DOT__tl_i_raw[0U]) 
                                              | ((IData)(
                                                         (((QData)((IData)(vlSelf->tl_i_a_mask)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->tl_i_a_data)))) 
                                                 << 0x16U));
    vlSelf->top_uart_tb__DOT__tl_i_raw[1U] = (((IData)(
                                                       (((QData)((IData)(vlSelf->tl_i_a_mask)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->tl_i_a_data)))) 
                                               >> 0xaU) 
                                              | ((vlSelf->tl_i_a_address 
                                                  << 0x1aU) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(vlSelf->tl_i_a_mask)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelf->tl_i_a_data))) 
                                                             >> 0x20U)) 
                                                    << 0x16U)));
    vlSelf->top_uart_tb__DOT__tl_i_raw[2U] = (((0x3fffffU 
                                                & (vlSelf->tl_i_a_address 
                                                   >> 6U)) 
                                               | ((IData)(
                                                          ((((QData)((IData)(vlSelf->tl_i_a_mask)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->tl_i_a_data))) 
                                                           >> 0x20U)) 
                                                  >> 0xaU)) 
                                              | (((IData)(vlSelf->tl_i_a_source) 
                                                  << 0x1aU) 
                                                 | (0x3c00000U 
                                                    & (vlSelf->tl_i_a_address 
                                                       >> 6U))));
    vlSelf->top_uart_tb__DOT__tl_i_raw[3U] = ((0x7fcU 
                                               & vlSelf->top_uart_tb__DOT__tl_i_raw[3U]) 
                                              | (0x7ffU 
                                                 & ((IData)(vlSelf->tl_i_a_source) 
                                                    >> 6U)));
    vlSelf->top_uart_tb__DOT__tl_i_raw[3U] = ((0x78fU 
                                               & vlSelf->top_uart_tb__DOT__tl_i_raw[3U]) 
                                              | (0x7ffU 
                                                 & ((IData)(vlSelf->tl_i_a_param) 
                                                    << 4U)));
    vlSelf->top_uart_tb__DOT__tl_i_raw[0U] = (0x4fffeU 
                                              | ((0xffc00000U 
                                                  & vlSelf->top_uart_tb__DOT__tl_i_raw[0U]) 
                                                 | (IData)(vlSelf->tl_i_d_ready)));
    vlSelf->top_uart_tb__DOT__tl_i_raw[0U] = (0x48000U 
                                              | (0xffc07fffU 
                                                 & vlSelf->top_uart_tb__DOT__tl_i_raw[0U]));
    if (vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) {
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        if ((0x10000U & vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__nco_sum_q)) {
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d 
                = (1U & (((IData)(1U) + (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)) 
                         >> 4U));
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q;
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)));
        } else {
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        }
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
            = vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q;
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
            = vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
            = vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q;
        if (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in)))) {
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 8U;
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 0U;
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0xbU : 0xaU);
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
        } else if (((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                    & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
                = ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0xbU : 0xaU)) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in)) 
                   || (1U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q)));
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0xbU : 0xaU)) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in))
                    ? 0U : (0xfU & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                    - (IData)(1U))));
            if ((1U & (~ (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                           == ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                                ? 0xbU : 0xaU)) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in))))) {
                vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
                    = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                              >> 1U)));
            }
        }
    } else {
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 0U;
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 1U;
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = 0U;
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
    }
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__break_st_q) 
            | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err)) 
                  | (0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data)))))
            ? 0U : (0x1fU & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_q) 
                             + ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err) 
                                & (0U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data))))));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wvalid 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
           & ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err)) 
              & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_parity_err))));
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger 
        = (((IData)(top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o) 
            | (IData)(top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o)) 
           | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_rready 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle) 
           & ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
              & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q)));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready 
        = (1U & ((~ (IData)(top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth 
        = ((IData)(top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o)
            ? 0x20U : (0x3fU & (((1U & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                        >> 5U)) == 
                                 (1U & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                        >> 5U))) ? 
                                ((0x1fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                 - (0x1fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                 : (((IData)(0x20U) 
                                     - (0x1fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                    + (0x1fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth 
        = ((IData)(top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)
            ? 0x40U : (0x7fU & (((1U & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                        >> 6U)) == 
                                 (1U & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                        >> 6U))) ? 
                                ((0x3fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                 - (0x3fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                 : (((IData)(0x40U) 
                                     - (0x3fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                    + (0x3fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready 
        = (1U & ((~ (IData)(top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = (QData)((IData)(((vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                            << 0x10U) | (vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                         >> 0x10U))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7effffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x20U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7dffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x21U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7bffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x22U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x77ffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x23U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x6fffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x24U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x5fffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x25U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x3fffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x26U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = (0x2a00000000ULL ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o);
    __Vfunc_extract_d2h_rsp_intg__2__tl[0U] = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U];
    __Vfunc_extract_d2h_rsp_intg__2__tl[1U] = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U];
    __Vfunc_extract_d2h_rsp_intg__2__tl[2U] = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[2U];
    __Vfunc_extract_d2h_rsp_intg__2__payload = ((0x38U 
                                                 & ((__Vfunc_extract_d2h_rsp_intg__2__tl[2U] 
                                                     << 5U) 
                                                    | (0x18U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__2__tl[1U] 
                                                          >> 0x1bU)))) 
                                                | ((6U 
                                                    & (__Vfunc_extract_d2h_rsp_intg__2__tl[1U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & (__Vfunc_extract_d2h_rsp_intg__2__tl[0U] 
                                                         >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__2__Vfuncout = __Vfunc_extract_d2h_rsp_intg__2__payload;
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__2__Vfuncout;
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = (QData)((IData)(((vlSelf->top_uart_tb__DOT__tl_i_raw[1U] 
                            << 0xaU) | (vlSelf->top_uart_tb__DOT__tl_i_raw[0U] 
                                        >> 0x16U))));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x7effffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x20U));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x7dffffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x21U));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x7bffffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x22U));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x77ffffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x23U));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x6fffffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x24U));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x5fffffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x25U));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = ((0x3fffffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o))))) 
              << 0x26U));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
        = (0x2a00000000ULL ^ top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o);
    __Vfunc_extract_h2d_cmd_intg__0__tl[0U] = vlSelf->top_uart_tb__DOT__tl_i_raw[0U];
    __Vfunc_extract_h2d_cmd_intg__0__tl[1U] = vlSelf->top_uart_tb__DOT__tl_i_raw[1U];
    __Vfunc_extract_h2d_cmd_intg__0__tl[2U] = vlSelf->top_uart_tb__DOT__tl_i_raw[2U];
    __Vfunc_extract_h2d_cmd_intg__0__tl[3U] = vlSelf->top_uart_tb__DOT__tl_i_raw[3U];
    vlSelf->__Vfunc_extract_h2d_cmd_intg__0__payload 
        = ((0x78000000000ULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__0__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__0__tl[2U] 
                                 << 6U) | (__Vfunc_extract_h2d_cmd_intg__0__tl[1U] 
                                           >> 0x1aU)))) 
               << 7U) | (QData)((IData)(((0x70U & (
                                                   __Vfunc_extract_h2d_cmd_intg__0__tl[3U] 
                                                   >> 3U)) 
                                         | (0xfU & 
                                            (__Vfunc_extract_h2d_cmd_intg__0__tl[1U] 
                                             >> 0x16U)))))));
    vlSelf->__Vfunc_extract_h2d_cmd_intg__0__payload 
        = ((0x7fffffffffULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__0__payload) 
           | ((QData)((IData)((0xfU & (__Vfunc_extract_h2d_cmd_intg__0__tl[0U] 
                                       >> 0xfU)))) 
              << 0x27U));
    __Vfunc_extract_h2d_cmd_intg__0__Vfuncout = vlSelf->__Vfunc_extract_h2d_cmd_intg__0__payload;
    top_uart_tb__DOT__u_tl_intg__DOT__cmd = __Vfunc_extract_h2d_cmd_intg__0__Vfuncout;
    if (vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_rready)))) {
            if (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
            = vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q;
        if (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_rready) {
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0xbU : 0xaU);
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x400U | ((0x200U & (((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)) 
                                         | (((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                             & VL_REDXOR_8(__VdfgTmp_he100884a__0)) 
                                            ^ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))) 
                                        << 9U)) | (
                                                   ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                                     ? 0U
                                                     : (IData)(__VdfgTmp_he100884a__0)) 
                                                   << 1U)));
        } else if (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                    & (0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = (0xfU & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                           - (IData)(1U)));
            vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x400U | (0x3ffU & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q) 
                                       >> 1U)));
        }
    } else {
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
        vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d = 0x7ffU;
    }
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_rready)));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__wdata_qe) 
           & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_empty__hw2reg_intr_state_d_o 
        = ((0U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth)) 
           | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q));
    top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_watermark_thresh 
        = ((4U <= (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))
            ? 0x10U : (0x3fU & ((IData)(1U) << (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))));
    top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_tx_watermark 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth) 
           < (IData)(top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_watermark_thresh));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_d 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)
            ? ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_timeout)
                ? 0U : (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
                         == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                         ? ((0U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth))
                             ? 0U : (0xffffffU & (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_q 
                                                  + (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))))
                         : 0U)) : 0U);
    top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_watermark_thresh 
        = ((6U < (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
            ? 0x7fU : ((6U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
                        ? 0x3eU : (0x7fU & ((IData)(1U) 
                                            << (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))));
    top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_watermark 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
           >= (IData)(top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_watermark_thresh));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wvalid) 
           & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (QData)((IData)(top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfdffffffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x103fff800007fffULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x39U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfbffffffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x17c1ff801ff801fULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3aU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xf7ffffffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1bde1f87e0781e1ULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3bU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xefffffffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1deee3b8e388e22ULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3cU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xdfffffffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1ef76cdb2c93244ULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3dU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xbfffffffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1f7bb56d5525488ULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3eU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0x7fffffffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1fbdda769a46910ULL 
                                                  & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3fU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (0x5400000000000000ULL ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o);
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = top_uart_tb__DOT__u_tl_intg__DOT__cmd;
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xfdffffffffffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x103fff800007fffULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x39U));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xfbffffffffffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x17c1ff801ff801fULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3aU));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xf7ffffffffffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1bde1f87e0781e1ULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3bU));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xefffffffffffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1deee3b8e388e22ULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3cU));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xdfffffffffffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1ef76cdb2c93244ULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3dU));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0xbfffffffffffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1f7bb56d5525488ULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3eU));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = ((0x7fffffffffffffffULL & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1fbdda769a46910ULL 
                                                  & top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o))))) 
              << 0x3fU));
    top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
        = (0x5400000000000000ULL ^ top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x1fU == (0x1fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x1fU == (0x1fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_watermark__hw2reg_intr_state_d_o 
        = ((IData)(top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_tx_watermark) 
           | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_watermark__hw2reg_intr_state_d_o 
        = ((IData)(top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_watermark) 
           | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x3fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelf->top_uart_tb__DOT__tl_o[0U] = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U];
    vlSelf->top_uart_tb__DOT__tl_o[1U] = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[1U];
    vlSelf->top_uart_tb__DOT__tl_o[2U] = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[2U];
    vlSelf->top_uart_tb__DOT__tl_o[0U] = ((0xffff0003U 
                                           & vlSelf->top_uart_tb__DOT__tl_o[0U]) 
                                          | (0xfffffffcU 
                                             & ((0xfe00U 
                                                 & ((IData)(
                                                            (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
                                                             >> 0x39U)) 
                                                    << 9U)) 
                                                | (0x1fcU 
                                                   & ((IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
                                                               >> 0x20U)) 
                                                      << 2U)))));
    vlSelf->top_uart_tb__DOT__tl_i[0U] = vlSelf->top_uart_tb__DOT__tl_i_raw[0U];
    vlSelf->top_uart_tb__DOT__tl_i[1U] = vlSelf->top_uart_tb__DOT__tl_i_raw[1U];
    vlSelf->top_uart_tb__DOT__tl_i[2U] = vlSelf->top_uart_tb__DOT__tl_i_raw[2U];
    vlSelf->top_uart_tb__DOT__tl_i[3U] = vlSelf->top_uart_tb__DOT__tl_i_raw[3U];
    vlSelf->top_uart_tb__DOT__tl_i[0U] = ((0x3fffffU 
                                           & vlSelf->top_uart_tb__DOT__tl_i[0U]) 
                                          | (0xffc00000U 
                                             & vlSelf->top_uart_tb__DOT__tl_i_raw[0U]));
    vlSelf->top_uart_tb__DOT__tl_i[1U] = ((0xffc00000U 
                                           & vlSelf->top_uart_tb__DOT__tl_i[1U]) 
                                          | (0x3fffffU 
                                             & vlSelf->top_uart_tb__DOT__tl_i_raw[1U]));
    vlSelf->top_uart_tb__DOT__tl_i[0U] = ((0xffff8001U 
                                           & vlSelf->top_uart_tb__DOT__tl_i[0U]) 
                                          | (0xfffffffeU 
                                             & ((0x7f00U 
                                                 & ((IData)(
                                                            (top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__u_cmd_gen__data_o 
                                                             >> 0x39U)) 
                                                    << 8U)) 
                                                | (0xfeU 
                                                   & ((IData)(
                                                              (top_uart_tb__DOT__u_tl_intg__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o 
                                                               >> 0x20U)) 
                                                      << 1U)))));
    vlSelf->tl_o_a_ready = (1U & vlSelf->top_uart_tb__DOT__tl_o[0U]);
    vlSelf->tl_o_d_valid = (1U & (vlSelf->top_uart_tb__DOT__tl_o[2U] 
                                  >> 1U));
    vlSelf->tl_o_d_opcode = (7U & ((vlSelf->top_uart_tb__DOT__tl_o[2U] 
                                    << 2U) | (vlSelf->top_uart_tb__DOT__tl_o[1U] 
                                              >> 0x1eU)));
    vlSelf->tl_o_d_data = ((vlSelf->top_uart_tb__DOT__tl_o[1U] 
                            << 0x10U) | (vlSelf->top_uart_tb__DOT__tl_o[0U] 
                                         >> 0x10U));
    vlSelf->tl_o_d_source = (0xffU & (vlSelf->top_uart_tb__DOT__tl_o[1U] 
                                      >> 0x11U));
    vlSelf->tl_o_d_error = (1U & (vlSelf->top_uart_tb__DOT__tl_o[0U] 
                                  >> 1U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
        = (((QData)((IData)((0x7fU & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                      >> 1U)))) << 0x20U) 
           | (QData)((IData)(((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                               << 0xaU) | (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                           >> 0x16U)))));
    __Vfunc_extract_h2d_cmd_intg__1__tl[0U] = vlSelf->top_uart_tb__DOT__tl_i[0U];
    __Vfunc_extract_h2d_cmd_intg__1__tl[1U] = vlSelf->top_uart_tb__DOT__tl_i[1U];
    __Vfunc_extract_h2d_cmd_intg__1__tl[2U] = vlSelf->top_uart_tb__DOT__tl_i[2U];
    __Vfunc_extract_h2d_cmd_intg__1__tl[3U] = vlSelf->top_uart_tb__DOT__tl_i[3U];
    vlSelf->__Vfunc_extract_h2d_cmd_intg__1__payload 
        = ((0x78000000000ULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__1__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__1__tl[2U] 
                                 << 6U) | (__Vfunc_extract_h2d_cmd_intg__1__tl[1U] 
                                           >> 0x1aU)))) 
               << 7U) | (QData)((IData)(((0x70U & (
                                                   __Vfunc_extract_h2d_cmd_intg__1__tl[3U] 
                                                   >> 3U)) 
                                         | (0xfU & 
                                            (__Vfunc_extract_h2d_cmd_intg__1__tl[1U] 
                                             >> 0x16U)))))));
    vlSelf->__Vfunc_extract_h2d_cmd_intg__1__payload 
        = ((0x7fffffffffULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__1__payload) 
           | ((QData)((IData)((0xfU & (__Vfunc_extract_h2d_cmd_intg__1__tl[0U] 
                                       >> 0xfU)))) 
              << 0x27U));
    __Vfunc_extract_h2d_cmd_intg__1__Vfuncout = vlSelf->__Vfunc_extract_h2d_cmd_intg__1__payload;
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__cmd 
        = __Vfunc_extract_h2d_cmd_intg__1__Vfuncout;
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x1ff8U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((8U == (0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                >> 0x1aU))) << 2U) 
              | (((4U == (0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                   >> 0x1aU))) << 1U) 
                 | (0U == (0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                    >> 0x1aU))))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x1fc7U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x14U == (0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                   >> 0x1aU))) << 5U) 
              | (((0x10U == (0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                      >> 0x1aU))) << 4U) 
                 | ((0xcU == (0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                       >> 0x1aU))) 
                    << 3U))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x1e3fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x20U == (0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                   >> 0x1aU))) << 8U) 
              | (((0x1cU == (0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                      >> 0x1aU))) << 7U) 
                 | ((0x18U == (0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                        >> 0x1aU))) 
                    << 6U))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0x11ffU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x2cU == (0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                   >> 0x1aU))) << 0xbU) 
              | (((0x28U == (0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                      >> 0x1aU))) << 0xaU) 
                 | ((0x24U == (0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                        >> 0x1aU))) 
                    << 9U))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit 
        = ((0xfffU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)) 
           | ((0x30U == (0x3cU & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                  >> 0x1aU))) << 0xcU));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read 
        = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit;
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write 
        = vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit;
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x400U & vlSelf->top_uart_tb__DOT__tl_i[3U])) {
        vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
            = ((0U == (3U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                             >> 2U))) || (1U & ((1U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                     >> 2U)))
                                                 ? 
                                                (~ 
                                                 (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                  >> 0x1aU))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                      >> 2U))) 
                                                 && (1U 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                                       >> 0x1aU))))))))));
        if ((0U == (3U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                          >> 2U)))) {
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (IData)((0U != (0xfU & (
                                                   ((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                     << 0xaU) 
                                                    | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                       >> 0x16U)) 
                                                   & (~ 
                                                      ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                           >> 0x1aU))))))))));
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xfU & (((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                    << 0xaU) | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                >> 0x16U)) 
                                  & ((IData)(1U) << 
                                     (3U & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                            >> 0x1aU))))));
        } else if ((1U == (3U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                 >> 2U)))) {
            if ((0x8000000U & vlSelf->top_uart_tb__DOT__tl_i[1U])) {
                vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (3U & 
                                               (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                >> 0x16U))))));
                vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                    >> 0x18U)));
            } else {
                vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xcU 
                                               & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                  >> 0x16U))))));
                vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                    >> 0x16U)));
            }
        } else {
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (2U == (3U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                      >> 2U))));
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = ((2U == (3U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                 >> 2U))) && (0xfU 
                                              == (0xfU 
                                                  & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                     >> 0x16U))));
        }
    }
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelf->__Vfunc_mubi4_test_true_strict__3__val 
                = (0xfU & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                           >> 0xfU));
            vlSelf->__Vfunc_mubi4_test_true_strict__3__Vfuncout 
                = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__3__val));
        }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__3__Vfuncout));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__5__val 
                    = (0xfU & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                               >> 0xfU));
                vlSelf->__Vfunc_mubi4_test_true_strict__5__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__5__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__5__Vfuncout)) 
           & ((0U == (7U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                            >> 7U))) | (1U == (7U & 
                                               (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                >> 7U)))));
    __Vfunc_mubi4_test_invalid__6__val = (0xfU & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                                  >> 0xfU));
    __Vfunc_mubi4_test_invalid__6__Vfuncout = (1U & 
                                               (~ (
                                                   (6U 
                                                    == (IData)(__Vfunc_mubi4_test_invalid__6__val)) 
                                                   | (9U 
                                                      == (IData)(__Vfunc_mubi4_test_invalid__6__val)))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__6__Vfuncout;
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (IData)(((vlSelf->top_uart_tb__DOT__tl_i[3U] 
                    >> 0xaU) & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h[0U]));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i)))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                    << 1U)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                    << 2U)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                    << 3U)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                       << 4U)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                       << 5U)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                       << 6U)));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffcU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                      ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                 >> 1U))) << 1U)) | 
              (1U & ((0x19U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                     ^ (IData)(top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i)))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffff3U & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                      ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                 >> 3U))) << 3U)) | 
              (4U & (((0x61U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                      ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                 >> 2U))) << 2U))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffcfU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                    >> 5U))) << 5U)) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 4U))) << 4U))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffff3fU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                    >> 7U))) << 7U)) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 6U))) << 6U))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffcffU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                     >> 9U))) << 9U)) 
              | (0x100U & (((0x45U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 8U))) << 8U))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffff3ffU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                     >> 0xbU))) << 0xbU)) 
              | (0x400U & (((0x49U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 0xaU))) << 0xaU))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffcfffU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 0xdU))) << 0xdU)) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0xcU))) 
                            << 0xcU))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffff3fffU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 0xfU))) << 0xfU)) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0xeU))) 
                            << 0xeU))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffcffffU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 0x11U))) 
                           << 0x11U)) | (0x10000U & 
                                         (((0x1cU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                      >> 0x10U))) 
                                          << 0x10U))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfff3ffffU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 0x13U))) 
                           << 0x13U)) | (0x40000U & 
                                         (((0x25U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                      >> 0x12U))) 
                                          << 0x12U))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffcfffffU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0x15U))) 
                            << 0x15U)) | (0x100000U 
                                          & (((0x46U 
                                               == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                         >> 0x14U))) 
                                             << 0x14U))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xff3fffffU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0x17U))) 
                            << 0x17U)) | (0x400000U 
                                          & (((0x70U 
                                               == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                         >> 0x16U))) 
                                             << 0x16U))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfcffffffU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                         >> 0x19U))) 
                             << 0x19U)) | (0x1000000U 
                                           & (((0x2cU 
                                                == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                          >> 0x18U))) 
                                              << 0x18U))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xf3ffffffU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                         >> 0x1bU))) 
                             << 0x1bU)) | (0x4000000U 
                                           & (((0x23U 
                                                == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                          >> 0x1aU))) 
                                              << 0x1aU))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xcfffffffU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                               ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                          >> 0x1dU))) 
                              << 0x1dU)) | (0x10000000U 
                                            & (((0x4aU 
                                                 == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (IData)(
                                                          (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                           >> 0x1cU))) 
                                               << 0x1cU))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0x3fffffffU & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((((0x52U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                           >> 0x1fU))) << 0x1fU) | 
              (0x40000000U & (((0x16U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                               ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                          >> 0x1eU))) 
                              << 0x1eU))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err 
        = ((2U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
           | (1U & VL_REDXOR_8(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err 
        = ((1U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
           | (((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
               & (0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
              << 1U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
        = (((QData)((IData)((0x7fU & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                      >> 8U)))) << 0x39U) 
           | top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__cmd);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0xffU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((1U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                       << 3U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                  << 2U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                             << 1U) 
                                            | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)))));
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff0fU & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                       << 7U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                  << 6U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                             << 5U) 
                                            | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                               << 4U)))));
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                      << 8U));
        } else if ((2U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                       << 3U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q) 
                                  << 2U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                             << 1U) 
                                            | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)))));
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff0fU & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                       << 7U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                  << 6U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                             << 5U) 
                                            | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                               << 4U)))));
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                      << 8U));
        } else if ((4U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffe00U & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((0x10U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                       << 2U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                  << 1U) | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q))));
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff0fU & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                       << 7U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                  << 6U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                             << 5U) 
                                            | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                               << 4U)))));
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffcffU & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                      << 8U));
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffU & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                      << 0x10U));
        } else if ((0x20U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                        & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle)) 
                       << 3U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                  << 2U) | ((2U & (
                                                   (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready)))))));
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffcfU & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                       << 5U) | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
                                 << 4U)));
        } else {
            vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((0x40U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))
                       ? ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                           ? 0U : (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                              ? 0U : 
                                             (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                              (((IData)(7U) 
                                                + (0x1ffU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                            | (vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                               (0xfU 
                                                & (VL_SHIFTL_III(9,9,32, 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))))
                       : 0U));
        }
    } else if ((0x100U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                   << 5U) | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                             << 2U)));
    } else if ((0x200U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth));
        vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xff00ffffU & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth) 
                  << 0x10U));
    } else if ((0x400U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffffcU & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                   << 1U) | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q)));
    } else if ((0x800U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffff0000U & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_val_q));
    } else if ((0x1000U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xff000000U & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q);
        vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0x7fffffffU & vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next) 
               | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                  << 0x1fU));
    } else {
        vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
    }
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x200U == (0x380U & vlSelf->top_uart_tb__DOT__tl_i[3U])));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                            >> 7U))) | (1U == (7U & 
                                               (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                >> 7U)))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x303fff800007fffULL 
                                 & (0x5400000000000000ULL 
                                    ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i)))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x57c1ff801ff801fULL 
                                  & (0x5400000000000000ULL 
                                     ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 1U)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x9bde1f87e0781e1ULL 
                                  & (0x5400000000000000ULL 
                                     ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 2U)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x11deee3b8e388e22ULL 
                                  & (0x5400000000000000ULL 
                                     ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 3U)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x21ef76cdb2c93244ULL 
                                     & (0x5400000000000000ULL 
                                        ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 4U)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x41f7bb56d5525488ULL 
                                     & (0x5400000000000000ULL 
                                        ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 5U)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x81fbdda769a46910ULL 
                                     & (0x5400000000000000ULL 
                                        ^ top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 6U)));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffffcULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | (IData)((IData)(((2U & (((0xbU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                      ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                 >> 1U))) 
                                     << 1U)) | (1U 
                                                & ((7U 
                                                    == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                   ^ (IData)(top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i)))))));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffff3ULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x23U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 3U))) 
                                      << 1U)) | (1U 
                                                 & ((0x13U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 2U))))))) 
              << 2U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffffcfULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xdU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 5U))) 
                                      << 1U)) | (1U 
                                                 & ((0x43U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 4U))))))) 
              << 4U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffff3fULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x25U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 7U))) 
                                      << 1U)) | (1U 
                                                 & ((0x15U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 6U))))))) 
              << 6U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffcffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x19U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 9U))) 
                                      << 1U)) | (1U 
                                                 & ((0x45U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 8U))))))) 
              << 8U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffff3ffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x49U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xbU))) 
                                      << 1U)) | (1U 
                                                 & ((0x29U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xaU))))))) 
              << 0xaU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffcfffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x51U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xdU))) 
                                      << 1U)) | (1U 
                                                 & ((0x31U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xcU))))))) 
              << 0xcU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffff3fffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xeU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xfU))) 
                                      << 1U)) | (1U 
                                                 & ((0x61U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xeU))))))) 
              << 0xeU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffcffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x26U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x11U))) 
                                      << 1U)) | (1U 
                                                 & ((0x16U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x10U))))))) 
              << 0x10U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffff3ffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1aU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x13U))) 
                                      << 1U)) | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x12U))))))) 
              << 0x12U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffcfffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4aU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x15U))) 
                                      << 1U)) | (1U 
                                                 & ((0x2aU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x14U))))))) 
              << 0x14U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffff3fffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x52U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x17U))) 
                                      << 1U)) | (1U 
                                                 & ((0x32U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x16U))))))) 
              << 0x16U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffcffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1cU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x19U))) 
                                      << 1U)) | (1U 
                                                 & ((0x62U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x18U))))))) 
              << 0x18U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffff3ffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4cU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1bU))) 
                                      << 1U)) | (1U 
                                                 & ((0x2cU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1aU))))))) 
              << 0x1aU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffcfffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x54U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1dU))) 
                                      << 1U)) | (1U 
                                                 & ((0x34U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1cU))))))) 
              << 0x1cU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffff3fffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x38U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1fU))) 
                                      << 1U)) | (1U 
                                                 & ((0x64U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1eU))))))) 
              << 0x1eU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffcffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x68U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x21U))) 
                                      << 1U)) | (1U 
                                                 & ((0x58U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x20U))))))) 
              << 0x20U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffff3ffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1fU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x23U))) 
                                      << 1U)) | (1U 
                                                 & ((0x70U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x22U))))))) 
              << 0x22U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffcfffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4fU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x25U))) 
                                      << 1U)) | (1U 
                                                 & ((0x2fU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x24U))))))) 
              << 0x24U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffff3fffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x57U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x27U))) 
                                      << 1U)) | (1U 
                                                 & ((0x37U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x26U))))))) 
              << 0x26U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffcffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x3bU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x29U))) 
                                      << 1U)) | (1U 
                                                 & ((0x67U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x28U))))))) 
              << 0x28U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fff3ffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x6bU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2bU))) 
                                      << 1U)) | (1U 
                                                 & ((0x5bU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2aU))))))) 
              << 0x2aU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffcfffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x3dU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2dU))) 
                                      << 1U)) | (1U 
                                                 & ((0x73U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2cU))))))) 
              << 0x2cU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ff3fffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x6dU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2fU))) 
                                      << 1U)) | (1U 
                                                 & ((0x5dU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2eU))))))) 
              << 0x2eU));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fcffffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x79U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x31U))) 
                                      << 1U)) | (1U 
                                                 & ((0x75U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x30U))))))) 
              << 0x30U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1f3ffffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x5eU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x33U))) 
                                      << 1U)) | (1U 
                                                 & ((0x3eU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x32U))))))) 
              << 0x32U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1cfffffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x76U == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x35U))) 
                                      << 1U)) | (1U 
                                                 & ((0x6eU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x34U))))))) 
              << 0x34U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x13fffffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x7cU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x37U))) 
                                      << 1U)) | (1U 
                                                 & ((0x7aU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x36U))))))) 
              << 0x36U));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0xffffffffffffffULL & top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)((1U & ((0x7fU == (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                     ^ (IData)((top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err 
        = ((2U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err)) 
           | (1U & VL_REDXOR_8(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err 
        = ((1U & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err)) 
           | (((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err)) 
               & (0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o))) 
              << 1U));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                  >> 0x1aU)))) | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                                                  | ((~ 
                                                      (((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                             >> 7U))) 
                                                        | ((1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                                >> 7U))) 
                                                           | (4U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                                  >> 7U))))) 
                                                       & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                          & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                                             & ((4U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                                     >> 7U))) 
                                                                | ((1U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->top_uart_tb__DOT__tl_i[3U] 
                                                                        >> 7U))) 
                                                                   | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                                                     | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err) 
                                                        | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err))))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__intg_err 
        = ((vlSelf->top_uart_tb__DOT__tl_i[3U] >> 0xaU) 
           & (0U != ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err) 
                     | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addrmiss 
        = ((~ (IData)((0U != (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit)))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re) 
              | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_error 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addrmiss) 
           | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we) 
               & (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                   & (0U != (3U & (~ ((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                       << 0xaU) | (
                                                   vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                   >> 0x16U)))))) 
                  | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                       >> 1U) & (0U != (3U & (~ ((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                  << 0xaU) 
                                                 | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                    >> 0x16U)))))) 
                     | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                          >> 2U) & (0U != (3U & (~ 
                                                 ((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                   << 0xaU) 
                                                  | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                     >> 0x16U)))))) 
                        | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                             >> 3U) & (0U != (1U & 
                                              (~ ((
                                                   vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                   << 0xaU) 
                                                  | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                     >> 0x16U)))))) 
                           | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                >> 4U) & (0U != (0xfU 
                                                 & (~ 
                                                    ((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                      << 0xaU) 
                                                     | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                        >> 0x16U)))))) 
                              | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                   >> 5U) & (0U != 
                                             (1U & 
                                              (~ ((
                                                   vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                   << 0xaU) 
                                                  | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                     >> 0x16U)))))) 
                                 | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                      >> 6U) & (0U 
                                                != 
                                                (1U 
                                                 & (~ 
                                                    ((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                      << 0xaU) 
                                                     | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                        >> 0x16U)))))) 
                                    | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                         >> 7U) & (0U 
                                                   != 
                                                   (1U 
                                                    & (~ 
                                                       ((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                         << 0xaU) 
                                                        | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                           >> 0x16U)))))) 
                                       | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                            >> 8U) 
                                           & (0U != 
                                              (1U & 
                                               (~ (
                                                   (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                      >> 0x16U)))))) 
                                          | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                               >> 9U) 
                                              & (0U 
                                                 != 
                                                 (7U 
                                                  & (~ 
                                                     ((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                       << 0xaU) 
                                                      | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                         >> 0x16U)))))) 
                                             | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                                  >> 0xaU) 
                                                 & (0U 
                                                    != 
                                                    (1U 
                                                     & (~ 
                                                        ((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                          << 0xaU) 
                                                         | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                            >> 0x16U)))))) 
                                                | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                                     >> 0xbU) 
                                                    & (0U 
                                                       != 
                                                       (3U 
                                                        & (~ 
                                                           ((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                             << 0xaU) 
                                                            | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                               >> 0x16U)))))) 
                                                   | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                                       >> 0xcU) 
                                                      & (0U 
                                                         != 
                                                         (0xfU 
                                                          & (~ 
                                                             ((vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                               << 0xaU) 
                                                              | (vlSelf->top_uart_tb__DOT__tl_i[1U] 
                                                                 >> 0x16U))))))))))))))))))) 
              | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__intg_err)));
    top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h7645ae40__0 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read) 
            >> 5U) & (IData)(top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h7645ae40__0));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellinp__u_uart_rxfifo__rready_i 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read) 
            >> 6U) & (IData)(top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h7645ae40__0));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 8U) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 1U) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 4U) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 7U) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 0xaU) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 0xcU) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
           & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 3U) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 2U) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellinp__u_uart_rxfifo__rready_i)));
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = (((vlSelf->top_uart_tb__DOT__tl_i[0U] >> 0x16U) 
            & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we)) 
           | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_parity_err__hw2reg_intr_state_de_o 
        = (((vlSelf->top_uart_tb__DOT__tl_i[0U] >> 0x1dU) 
            & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
           | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_parity_err));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_timeout__hw2reg_intr_state_de_o 
        = (((vlSelf->top_uart_tb__DOT__tl_i[0U] >> 0x1cU) 
            & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
           | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_timeout));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o 
        = (((vlSelf->top_uart_tb__DOT__tl_i[0U] >> 0x1aU) 
            & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
           | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o 
        = (((vlSelf->top_uart_tb__DOT__tl_i[0U] >> 0x19U) 
            & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
           | ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready)) 
              & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wvalid)));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o 
        = (((vlSelf->top_uart_tb__DOT__tl_i[0U] >> 0x18U) 
            & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
           | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
              & ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle_q)) 
                 & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_check 
        = ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en) 
             << 0xcU) | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en) 
                         << 0xaU)) | ((((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) 
                                        << 8U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en) 
                                                   << 7U) 
                                                  | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en) 
                                                     << 4U))) 
                                      | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we) 
                                          << 3U) | 
                                         (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
                                            << 1U) 
                                           | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))))));
    __Vtemp_38[0U] = (IData)((((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                               << 0x3fU) | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                                             << 0x3dU) 
                                            | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellinp__u_uart_rxfifo__rready_i)) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_wdata__q)) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__wdata_qe)) 
                                                            << 0x27U) 
                                                           | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q)) 
                                                               << 0x24U) 
                                                              | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe)) 
                                                                  << 0x23U) 
                                                                 | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x18U) 
                                                                                | vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q)))))))))))))))))))));
    __Vtemp_38[1U] = (IData)(((((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                                << 0x3fU) | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellinp__u_uart_rxfifo__rready_i)) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_wdata__q)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__wdata_qe)) 
                                                             << 0x27U) 
                                                            | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe)) 
                                                                   << 0x23U) 
                                                                  | (((QData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x18U) 
                                                                                | vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q)))))))))))))))))))) 
                              >> 0x20U));
    __Vtemp_62[3U] = (((IData)((0x1ffU == (0x1ffU & 
                                           (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                       << 8U) | ((0x80U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                           >> 0x12U)) 
                                 | (((IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                                     << 6U) | ((0x20U 
                                                & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                                   >> 0x13U)) 
                                               | (((IData)(
                                                           (0x1ffU 
                                                            == 
                                                            (0x1ffU 
                                                             & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                                                   << 4U) 
                                                  | ((8U 
                                                      & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                                         >> 0x14U)) 
                                                     | (((IData)(
                                                                 (0x1ffU 
                                                                  == 
                                                                  (0x1ffU 
                                                                   & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                                               >> 0x15U)) 
                                                           | (0x1ffU 
                                                              == 
                                                              (0x1ffU 
                                                               & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))))))))));
    __Vtemp_70[3U] = (((IData)((0x1ffU == (0x1ffU & 
                                           (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                       << 0x10U) | ((0x8000U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                                >> 0xeU)) 
                                    | (((IData)((0x1ffU 
                                                 == 
                                                 (0x1ffU 
                                                  & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                                        << 0xeU) | 
                                       ((0x2000U & 
                                         (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                          >> 0xfU)) 
                                        | (((IData)(
                                                    (0x1ffU 
                                                     == 
                                                     (0x1ffU 
                                                      & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                                  >> 0x10U)) 
                                              | (((IData)(
                                                          (0x1ffU 
                                                           == 
                                                           (0x1ffU 
                                                            & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                                                  << 0xaU) 
                                                 | ((0x200U 
                                                     & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                                        >> 0x11U)) 
                                                    | __Vtemp_62[3U]))))))));
    __Vtemp_85[3U] = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                       << 0x1fU) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                     << 0x1eU) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                               << 0x19U) 
                                                              | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                                           << 0x15U) 
                                                                          | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                                                                                >> 0xdU)) 
                                                                                | __Vtemp_70[3U])))))))))))))));
    vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw[0U] 
        = __Vtemp_38[0U];
    vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw[1U] 
        = __Vtemp_38[1U];
    vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
        = ((0x80000000U & (vlSelf->top_uart_tb__DOT__tl_i[0U] 
                           << 9U)) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we) 
                                       << 0x1eU) | 
                                      (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                        << 0xeU) | 
                                       (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                          << 0xbU) 
                                         | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                             << 0xaU) 
                                            | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                << 9U) 
                                               | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                      << 7U) 
                                                     | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                            << 5U) 
                                                           | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre) 
                                                               << 3U) 
                                                              | ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre) 
                                                                 << 1U)))))))))))));
    vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw[3U] 
        = __Vtemp_85[3U];
    vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw[4U] 
        = (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
            << 3U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                       << 2U) | (((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                  << 1U) | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x3fU == (0x3fU & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data 
        = ((~ ((vlSelf->top_uart_tb__DOT__tl_i[0U] 
                >> 0x1dU) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_parity_err__hw2reg_intr_state_de_o)
               ? ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_parity_err__hw2reg_intr_state_de_o) 
                  | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))
               : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data 
        = ((~ ((vlSelf->top_uart_tb__DOT__tl_i[0U] 
                >> 0x1cU) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_timeout__hw2reg_intr_state_de_o)
               ? ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_timeout__hw2reg_intr_state_de_o) 
                  | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))
               : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data 
        = ((~ ((vlSelf->top_uart_tb__DOT__tl_i[0U] 
                >> 0x1aU) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o)
               ? ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o) 
                  | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))
               : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = ((~ ((vlSelf->top_uart_tb__DOT__tl_i[0U] 
                >> 0x19U) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o)
               ? ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o) 
                  | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))
               : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data 
        = ((~ ((vlSelf->top_uart_tb__DOT__tl_i[0U] 
                >> 0x18U) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o)
               ? ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o) 
                  | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q))
               : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q)));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_break_err 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__break_st_q)) 
           & ((0U == (3U & (vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
                            >> 0xcU))) ? (2U <= (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))
               : ((1U == (3U & (vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
                                >> 0xcU))) ? (4U <= (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))
                   : ((2U == (3U & (vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw[2U] 
                                    >> 0xcU))) ? (8U 
                                                  <= (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))
                       : (0x10U <= (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d))))));
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_break_err__hw2reg_intr_state_de_o 
        = (((vlSelf->top_uart_tb__DOT__tl_i[0U] >> 0x1bU) 
            & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
           | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_break_err));
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data 
        = ((~ ((vlSelf->top_uart_tb__DOT__tl_i[0U] 
                >> 0x1bU) & (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_break_err__hw2reg_intr_state_de_o)
               ? ((IData)(vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_break_err__hw2reg_intr_state_de_o) 
                  | (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))
               : (IData)(vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)));
}

void Vtop_uart_tb___024root___act_sequent__TOP__0(Vtop_uart_tb___024root* vlSelf);
void Vtop_uart_tb___024root___act_sequent__TOP__1(Vtop_uart_tb___024root* vlSelf);
void Vtop_uart_tb___024root___act_comb__TOP__0(Vtop_uart_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_stl(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_uart_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_uart_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_uart_tb___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_uart_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop_uart_tb___024root___eval_triggers__stl(Vtop_uart_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtop_uart_tb___024root___eval_phase__stl(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_uart_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_uart_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__ico(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.or_tree)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__act(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.or_tree or [hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.err_tree)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.or_tree)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk or negedge rst_n)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__nba(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.or_tree or [hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.err_tree)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] top_uart_tb.dut.u_reg.u_prim_reg_we_check.u_prim_onehot_check.or_tree)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk or negedge rst_n)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_uart_tb___024root___ctor_var_reset(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->tl_i_a_valid = VL_RAND_RESET_I(1);
    vlSelf->tl_i_a_opcode = VL_RAND_RESET_I(3);
    vlSelf->tl_i_a_size = VL_RAND_RESET_I(2);
    vlSelf->tl_i_a_mask = VL_RAND_RESET_I(4);
    vlSelf->tl_i_a_address = VL_RAND_RESET_I(32);
    vlSelf->tl_i_a_data = VL_RAND_RESET_I(32);
    vlSelf->tl_i_a_source = VL_RAND_RESET_I(8);
    vlSelf->tl_i_a_param = VL_RAND_RESET_I(3);
    vlSelf->tl_i_d_ready = VL_RAND_RESET_I(1);
    vlSelf->tl_o_a_ready = VL_RAND_RESET_I(1);
    vlSelf->tl_o_d_valid = VL_RAND_RESET_I(1);
    vlSelf->tl_o_d_opcode = VL_RAND_RESET_I(3);
    vlSelf->tl_o_d_data = VL_RAND_RESET_I(32);
    vlSelf->tl_o_d_source = VL_RAND_RESET_I(8);
    vlSelf->tl_o_d_error = VL_RAND_RESET_I(1);
    vlSelf->cio_tx_o = VL_RAND_RESET_I(1);
    vlSelf->cio_tx_en_o = VL_RAND_RESET_I(1);
    vlSelf->cio_rx_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(107, vlSelf->top_uart_tb__DOT__tl_i_raw);
    VL_RAND_RESET_W(107, vlSelf->top_uart_tb__DOT__tl_i);
    VL_RAND_RESET_W(66, vlSelf->top_uart_tb__DOT__tl_o);
    vlSelf->top_uart_tb__DOT__alert_rx_i = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top_uart_tb__DOT__racl_policies_i[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->top_uart_tb__DOT__intr_tx_watermark_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_tx_empty_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_rx_watermark_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_tx_done_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_rx_overflow_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_rx_frame_err_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_rx_break_err_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_rx_timeout_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__intr_rx_parity_err_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->top_uart_tb__DOT__dut__DOT__reg2hw);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_re = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_error = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addrmiss = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_rdata_next = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(66, vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__tl_reg_d2h);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__intg_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__reg_we_check = VL_RAND_RESET_I(13);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__err_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__alert_test_we = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q = VL_RAND_RESET_I(16);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__wdata_qe = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_wdata__q = VL_RAND_RESET_I(8);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__fifo_ctrl_qe = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = VL_RAND_RESET_I(3);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = VL_RAND_RESET_I(3);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = VL_RAND_RESET_I(24);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__addr_hit = VL_RAND_RESET_I(13);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_read = VL_RAND_RESET_I(13);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__racl_addr_hit_write = VL_RAND_RESET_I(13);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0 = 0;
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__err = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree = VL_RAND_RESET_I(31);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree = VL_RAND_RESET_I(31);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q = VL_RAND_RESET_I(8);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q = VL_RAND_RESET_I(3);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_val_q = VL_RAND_RESET_I(16);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_depth = VL_RAND_RESET_I(6);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_d = VL_RAND_RESET_I(24);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_timeout_count_q = VL_RAND_RESET_I(24);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_rxrst = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_fifo_txrst = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_rready = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_fifo_wready = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_out_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_data = VL_RAND_RESET_I(8);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_fifo_wready = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_in = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_d = VL_RAND_RESET_I(5);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__allzero_cnt_q = VL_RAND_RESET_I(5);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_frame_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_break_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_timeout = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__event_rx_parity_err = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__tx_uart_idle_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__break_st_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__nco_sum_q = VL_RAND_RESET_I(17);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q1 = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__rx_sync_q2 = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellinp__u_uart_rxfifo__rready_i = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_watermark__hw2reg_intr_state_d_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_empty__hw2reg_intr_state_d_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_watermark__hw2reg_intr_state_d_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_break_err__hw2reg_intr_state_de_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_timeout__hw2reg_intr_state_de_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_parity_err__hw2reg_intr_state_de_o = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(6);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_RAND_RESET_I(6);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_RAND_RESET_I(6);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_RAND_RESET_I(6);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q = VL_RAND_RESET_I(11);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d = VL_RAND_RESET_I(11);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__sync_rx__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q = VL_RAND_RESET_I(11);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = VL_RAND_RESET_I(11);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = VL_RAND_RESET_I(4);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt = VL_RAND_RESET_I(7);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = VL_RAND_RESET_I(3);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->top_uart_tb__DOT__dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__0__payload = VL_RAND_RESET_Q(43);
    vlSelf->__Vfunc_extract_h2d_cmd_intg__1__payload = VL_RAND_RESET_Q(43);
    vlSelf->__Vfunc_mubi4_test_true_strict__3__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_strict__3__val = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mubi4_test_true_strict__5__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_strict__5__val = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__top_uart_tb__DOT__dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__0 = VL_RAND_RESET_I(31);
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__0 = VL_RAND_RESET_I(31);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1 = VL_RAND_RESET_I(31);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__2 = VL_RAND_RESET_I(31);
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__1 = VL_RAND_RESET_I(31);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
