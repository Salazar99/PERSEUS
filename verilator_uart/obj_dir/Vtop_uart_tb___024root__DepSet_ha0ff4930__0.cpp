// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_uart_tb.h for the primary calling header

#include "Vtop_uart_tb__pch.h"
#include "Vtop_uart_tb___024root.h"

VlCoroutine Vtop_uart_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_uart_tb___024root* vlSelf);
VlCoroutine Vtop_uart_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_uart_tb___024root* vlSelf);
VlCoroutine Vtop_uart_tb___024root___eval_initial__TOP__Vtiming__2(Vtop_uart_tb___024root* vlSelf);

void Vtop_uart_tb___024root___eval_initial(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_initial\n"); );
    // Body
    Vtop_uart_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop_uart_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtop_uart_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__cio_tx_o__0 
        = vlSelf->top_uart_tb__DOT__cio_tx_o;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__0 
        = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__0 
        = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__cio_tx_o__1 
        = vlSelf->top_uart_tb__DOT__cio_tx_o;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__1 
        = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__1 
        = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__clk__0 
        = vlSelf->top_uart_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top_uart_tb__DOT__rst_n__0 
        = vlSelf->top_uart_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtop_uart_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->top_uart_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "rtl/top_uart_tb.sv", 
                                           15);
        vlSelf->top_uart_tb__DOT__clk = (1U & (~ (IData)(vlSelf->top_uart_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtop_uart_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->top_uart_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       19);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       19);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       19);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       19);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       19);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       19);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       19);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       19);
    vlSelf->top_uart_tb__DOT__rst_n = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_uart_tb___024root___eval_initial__TOP__Vtiming__2(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Init
    IData/*31:0*/ top_uart_tb__DOT____Vrepeat3;
    top_uart_tb__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__sanity_intr__0__r;
    __Vtask_top_uart_tb__DOT__sanity_intr__0__r = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__1__addr;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__1__addr = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__1__wdata;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__1__wdata = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__3__Vfuncout;
    __Vfunc_get_data_intg__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_data_intg__3__data;
    __Vfunc_get_data_intg__3__data = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__3__data_intg;
    __Vfunc_get_data_intg__3__data_intg = 0;
    QData/*38:0*/ __Vfunc_get_data_intg__3__enc_data;
    __Vfunc_get_data_intg__3__enc_data = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__4__Vfuncout;
    __Vfunc_prim_secded_inv_39_32_enc__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_prim_secded_inv_39_32_enc__4__data_i;
    __Vfunc_prim_secded_inv_39_32_enc__4__data_i = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__4__data_o;
    __Vfunc_prim_secded_inv_39_32_enc__4__data_o = 0;
    CData/*6:0*/ __Vfunc_get_cmd_intg__5__Vfuncout;
    __Vfunc_get_cmd_intg__5__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_get_cmd_intg__5__tl;
    VL_ZERO_W(107, __Vfunc_get_cmd_intg__5__tl);
    CData/*6:0*/ __Vfunc_get_cmd_intg__5__cmd_intg;
    __Vfunc_get_cmd_intg__5__cmd_intg = 0;
    QData/*56:0*/ __Vfunc_get_cmd_intg__5__unused_cmd_payload;
    __Vfunc_get_cmd_intg__5__unused_cmd_payload = 0;
    QData/*42:0*/ __Vfunc_get_cmd_intg__5__cmd;
    __Vfunc_get_cmd_intg__5__cmd = 0;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__6__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__6__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_extract_h2d_cmd_intg__6__tl;
    VL_ZERO_W(107, __Vfunc_extract_h2d_cmd_intg__6__tl);
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__6__payload;
    __Vfunc_extract_h2d_cmd_intg__6__payload = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__7__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__7__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__7__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__7__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__7__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__7__data_o = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__8__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__8__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__8__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__8__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__8__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__8__data_o = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__10__addr;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__10__addr = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__10__wdata;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__10__wdata = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__12__Vfuncout;
    __Vfunc_get_data_intg__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_data_intg__12__data;
    __Vfunc_get_data_intg__12__data = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__12__data_intg;
    __Vfunc_get_data_intg__12__data_intg = 0;
    QData/*38:0*/ __Vfunc_get_data_intg__12__enc_data;
    __Vfunc_get_data_intg__12__enc_data = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__13__Vfuncout;
    __Vfunc_prim_secded_inv_39_32_enc__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_prim_secded_inv_39_32_enc__13__data_i;
    __Vfunc_prim_secded_inv_39_32_enc__13__data_i = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__13__data_o;
    __Vfunc_prim_secded_inv_39_32_enc__13__data_o = 0;
    CData/*6:0*/ __Vfunc_get_cmd_intg__14__Vfuncout;
    __Vfunc_get_cmd_intg__14__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_get_cmd_intg__14__tl;
    VL_ZERO_W(107, __Vfunc_get_cmd_intg__14__tl);
    CData/*6:0*/ __Vfunc_get_cmd_intg__14__cmd_intg;
    __Vfunc_get_cmd_intg__14__cmd_intg = 0;
    QData/*56:0*/ __Vfunc_get_cmd_intg__14__unused_cmd_payload;
    __Vfunc_get_cmd_intg__14__unused_cmd_payload = 0;
    QData/*42:0*/ __Vfunc_get_cmd_intg__14__cmd;
    __Vfunc_get_cmd_intg__14__cmd = 0;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__15__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__15__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_extract_h2d_cmd_intg__15__tl;
    VL_ZERO_W(107, __Vfunc_extract_h2d_cmd_intg__15__tl);
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__15__payload;
    __Vfunc_extract_h2d_cmd_intg__15__payload = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__16__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__16__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__16__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__16__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__16__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__16__data_o = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__17__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__17__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__17__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__17__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__17__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__17__data_o = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__19__addr;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__19__addr = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__19__rdata;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__19__rdata = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__21__Vfuncout;
    __Vfunc_get_data_intg__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_data_intg__21__data;
    __Vfunc_get_data_intg__21__data = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__21__data_intg;
    __Vfunc_get_data_intg__21__data_intg = 0;
    QData/*38:0*/ __Vfunc_get_data_intg__21__enc_data;
    __Vfunc_get_data_intg__21__enc_data = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__22__Vfuncout;
    __Vfunc_prim_secded_inv_39_32_enc__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_prim_secded_inv_39_32_enc__22__data_i;
    __Vfunc_prim_secded_inv_39_32_enc__22__data_i = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__22__data_o;
    __Vfunc_prim_secded_inv_39_32_enc__22__data_o = 0;
    CData/*6:0*/ __Vfunc_get_cmd_intg__23__Vfuncout;
    __Vfunc_get_cmd_intg__23__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_get_cmd_intg__23__tl;
    VL_ZERO_W(107, __Vfunc_get_cmd_intg__23__tl);
    CData/*6:0*/ __Vfunc_get_cmd_intg__23__cmd_intg;
    __Vfunc_get_cmd_intg__23__cmd_intg = 0;
    QData/*56:0*/ __Vfunc_get_cmd_intg__23__unused_cmd_payload;
    __Vfunc_get_cmd_intg__23__unused_cmd_payload = 0;
    QData/*42:0*/ __Vfunc_get_cmd_intg__23__cmd;
    __Vfunc_get_cmd_intg__23__cmd = 0;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__24__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__24__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_extract_h2d_cmd_intg__24__tl;
    VL_ZERO_W(107, __Vfunc_extract_h2d_cmd_intg__24__tl);
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__24__payload;
    __Vfunc_extract_h2d_cmd_intg__24__payload = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__25__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__25__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__25__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__25__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__25__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__25__data_o = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__26__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__26__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__26__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__26__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__26__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__26__data_o = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__unnamedblk2_1__DOT__i;
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__f_clk_hz;
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__f_clk_hz = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__baud;
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__baud = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__NCO;
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__NCO = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__r;
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__r = 0;
    std::string __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__msg;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__received;
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__received = 0;
    CData/*7:0*/ __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__b;
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__b = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__tries;
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__tries = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__max_tries;
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__max_tries = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__29__addr;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__29__addr = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__29__wdata;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__29__wdata = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__31__Vfuncout;
    __Vfunc_get_data_intg__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_data_intg__31__data;
    __Vfunc_get_data_intg__31__data = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__31__data_intg;
    __Vfunc_get_data_intg__31__data_intg = 0;
    QData/*38:0*/ __Vfunc_get_data_intg__31__enc_data;
    __Vfunc_get_data_intg__31__enc_data = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__32__Vfuncout;
    __Vfunc_prim_secded_inv_39_32_enc__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_prim_secded_inv_39_32_enc__32__data_i;
    __Vfunc_prim_secded_inv_39_32_enc__32__data_i = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__32__data_o;
    __Vfunc_prim_secded_inv_39_32_enc__32__data_o = 0;
    CData/*6:0*/ __Vfunc_get_cmd_intg__33__Vfuncout;
    __Vfunc_get_cmd_intg__33__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_get_cmd_intg__33__tl;
    VL_ZERO_W(107, __Vfunc_get_cmd_intg__33__tl);
    CData/*6:0*/ __Vfunc_get_cmd_intg__33__cmd_intg;
    __Vfunc_get_cmd_intg__33__cmd_intg = 0;
    QData/*56:0*/ __Vfunc_get_cmd_intg__33__unused_cmd_payload;
    __Vfunc_get_cmd_intg__33__unused_cmd_payload = 0;
    QData/*42:0*/ __Vfunc_get_cmd_intg__33__cmd;
    __Vfunc_get_cmd_intg__33__cmd = 0;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__34__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__34__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_extract_h2d_cmd_intg__34__tl;
    VL_ZERO_W(107, __Vfunc_extract_h2d_cmd_intg__34__tl);
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__34__payload;
    __Vfunc_extract_h2d_cmd_intg__34__payload = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__35__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__35__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__35__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__35__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__35__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__35__data_o = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__36__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__36__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__36__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__36__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__36__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__36__data_o = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__38__addr;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__38__addr = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__38__wdata;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__38__wdata = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__40__Vfuncout;
    __Vfunc_get_data_intg__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_data_intg__40__data;
    __Vfunc_get_data_intg__40__data = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__40__data_intg;
    __Vfunc_get_data_intg__40__data_intg = 0;
    QData/*38:0*/ __Vfunc_get_data_intg__40__enc_data;
    __Vfunc_get_data_intg__40__enc_data = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__41__Vfuncout;
    __Vfunc_prim_secded_inv_39_32_enc__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_prim_secded_inv_39_32_enc__41__data_i;
    __Vfunc_prim_secded_inv_39_32_enc__41__data_i = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__41__data_o;
    __Vfunc_prim_secded_inv_39_32_enc__41__data_o = 0;
    CData/*6:0*/ __Vfunc_get_cmd_intg__42__Vfuncout;
    __Vfunc_get_cmd_intg__42__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_get_cmd_intg__42__tl;
    VL_ZERO_W(107, __Vfunc_get_cmd_intg__42__tl);
    CData/*6:0*/ __Vfunc_get_cmd_intg__42__cmd_intg;
    __Vfunc_get_cmd_intg__42__cmd_intg = 0;
    QData/*56:0*/ __Vfunc_get_cmd_intg__42__unused_cmd_payload;
    __Vfunc_get_cmd_intg__42__unused_cmd_payload = 0;
    QData/*42:0*/ __Vfunc_get_cmd_intg__42__cmd;
    __Vfunc_get_cmd_intg__42__cmd = 0;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__43__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__43__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_extract_h2d_cmd_intg__43__tl;
    VL_ZERO_W(107, __Vfunc_extract_h2d_cmd_intg__43__tl);
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__43__payload;
    __Vfunc_extract_h2d_cmd_intg__43__payload = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__44__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__44__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__44__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__44__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__44__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__44__data_o = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__45__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__45__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__45__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__45__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__45__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__45__data_o = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__47__addr;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__47__addr = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__47__wdata;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__47__wdata = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__49__Vfuncout;
    __Vfunc_get_data_intg__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_data_intg__49__data;
    __Vfunc_get_data_intg__49__data = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__49__data_intg;
    __Vfunc_get_data_intg__49__data_intg = 0;
    QData/*38:0*/ __Vfunc_get_data_intg__49__enc_data;
    __Vfunc_get_data_intg__49__enc_data = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__50__Vfuncout;
    __Vfunc_prim_secded_inv_39_32_enc__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_prim_secded_inv_39_32_enc__50__data_i;
    __Vfunc_prim_secded_inv_39_32_enc__50__data_i = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__50__data_o;
    __Vfunc_prim_secded_inv_39_32_enc__50__data_o = 0;
    CData/*6:0*/ __Vfunc_get_cmd_intg__51__Vfuncout;
    __Vfunc_get_cmd_intg__51__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_get_cmd_intg__51__tl;
    VL_ZERO_W(107, __Vfunc_get_cmd_intg__51__tl);
    CData/*6:0*/ __Vfunc_get_cmd_intg__51__cmd_intg;
    __Vfunc_get_cmd_intg__51__cmd_intg = 0;
    QData/*56:0*/ __Vfunc_get_cmd_intg__51__unused_cmd_payload;
    __Vfunc_get_cmd_intg__51__unused_cmd_payload = 0;
    QData/*42:0*/ __Vfunc_get_cmd_intg__51__cmd;
    __Vfunc_get_cmd_intg__51__cmd = 0;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__52__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__52__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_extract_h2d_cmd_intg__52__tl;
    VL_ZERO_W(107, __Vfunc_extract_h2d_cmd_intg__52__tl);
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__52__payload;
    __Vfunc_extract_h2d_cmd_intg__52__payload = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__53__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__53__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__53__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__53__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__53__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__53__data_o = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__54__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__54__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__54__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__54__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__54__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__54__data_o = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__56__addr;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__56__addr = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__56__rdata;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__56__rdata = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__58__Vfuncout;
    __Vfunc_get_data_intg__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_data_intg__58__data;
    __Vfunc_get_data_intg__58__data = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__58__data_intg;
    __Vfunc_get_data_intg__58__data_intg = 0;
    QData/*38:0*/ __Vfunc_get_data_intg__58__enc_data;
    __Vfunc_get_data_intg__58__enc_data = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__59__Vfuncout;
    __Vfunc_prim_secded_inv_39_32_enc__59__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_prim_secded_inv_39_32_enc__59__data_i;
    __Vfunc_prim_secded_inv_39_32_enc__59__data_i = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__59__data_o;
    __Vfunc_prim_secded_inv_39_32_enc__59__data_o = 0;
    CData/*6:0*/ __Vfunc_get_cmd_intg__60__Vfuncout;
    __Vfunc_get_cmd_intg__60__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_get_cmd_intg__60__tl;
    VL_ZERO_W(107, __Vfunc_get_cmd_intg__60__tl);
    CData/*6:0*/ __Vfunc_get_cmd_intg__60__cmd_intg;
    __Vfunc_get_cmd_intg__60__cmd_intg = 0;
    QData/*56:0*/ __Vfunc_get_cmd_intg__60__unused_cmd_payload;
    __Vfunc_get_cmd_intg__60__unused_cmd_payload = 0;
    QData/*42:0*/ __Vfunc_get_cmd_intg__60__cmd;
    __Vfunc_get_cmd_intg__60__cmd = 0;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__61__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__61__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_extract_h2d_cmd_intg__61__tl;
    VL_ZERO_W(107, __Vfunc_extract_h2d_cmd_intg__61__tl);
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__61__payload;
    __Vfunc_extract_h2d_cmd_intg__61__payload = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__62__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__62__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__62__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__62__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__62__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__62__data_o = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__63__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__63__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__63__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__63__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__63__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__63__data_o = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__65__addr;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__65__addr = 0;
    IData/*31:0*/ __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__65__rdata;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__65__rdata = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__67__Vfuncout;
    __Vfunc_get_data_intg__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_data_intg__67__data;
    __Vfunc_get_data_intg__67__data = 0;
    CData/*6:0*/ __Vfunc_get_data_intg__67__data_intg;
    __Vfunc_get_data_intg__67__data_intg = 0;
    QData/*38:0*/ __Vfunc_get_data_intg__67__enc_data;
    __Vfunc_get_data_intg__67__enc_data = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__68__Vfuncout;
    __Vfunc_prim_secded_inv_39_32_enc__68__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_prim_secded_inv_39_32_enc__68__data_i;
    __Vfunc_prim_secded_inv_39_32_enc__68__data_i = 0;
    QData/*38:0*/ __Vfunc_prim_secded_inv_39_32_enc__68__data_o;
    __Vfunc_prim_secded_inv_39_32_enc__68__data_o = 0;
    CData/*6:0*/ __Vfunc_get_cmd_intg__69__Vfuncout;
    __Vfunc_get_cmd_intg__69__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_get_cmd_intg__69__tl;
    VL_ZERO_W(107, __Vfunc_get_cmd_intg__69__tl);
    CData/*6:0*/ __Vfunc_get_cmd_intg__69__cmd_intg;
    __Vfunc_get_cmd_intg__69__cmd_intg = 0;
    QData/*56:0*/ __Vfunc_get_cmd_intg__69__unused_cmd_payload;
    __Vfunc_get_cmd_intg__69__unused_cmd_payload = 0;
    QData/*42:0*/ __Vfunc_get_cmd_intg__69__cmd;
    __Vfunc_get_cmd_intg__69__cmd = 0;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__70__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__70__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_extract_h2d_cmd_intg__70__tl;
    VL_ZERO_W(107, __Vfunc_extract_h2d_cmd_intg__70__tl);
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__70__payload;
    __Vfunc_extract_h2d_cmd_intg__70__payload = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__71__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__71__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__71__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__71__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__71__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__71__data_o = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__72__Vfuncout;
    __Vfunc_prim_secded_inv_64_57_enc__72__Vfuncout = 0;
    QData/*56:0*/ __Vfunc_prim_secded_inv_64_57_enc__72__data_i;
    __Vfunc_prim_secded_inv_64_57_enc__72__data_i = 0;
    QData/*63:0*/ __Vfunc_prim_secded_inv_64_57_enc__72__data_o;
    __Vfunc_prim_secded_inv_64_57_enc__72__data_o = 0;
    // Body
    co_await vlSelf->__VtrigSched_he949f80d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.rst_n)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       167);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       168);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       168);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       168);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       168);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       168);
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__1__wdata = 0x1ffU;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__1__addr = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0x3fffffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__1__wdata)))) 
              << 0x16U));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] 
        = (((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__1__wdata)))) 
            >> 0xaU) | ((__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__1__addr 
                         << 0x1aU) | ((IData)(((0xf00000000ULL 
                                                | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__1__wdata))) 
                                               >> 0x20U)) 
                                      << 0x16U)));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] 
        = (((0x3fffffU & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__1__addr 
                          >> 6U)) | ((IData)(((0xf00000000ULL 
                                               | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__1__wdata))) 
                                              >> 0x20U)) 
                                     >> 0xaU)) | (0x3c00000U 
                                                  & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__1__addr 
                                                     >> 6U)));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0x408U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = (0x4fffeU | (0xffc00001U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]));
    __Vfunc_get_data_intg__3__data = ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] 
                                       << 0xaU) | (
                                                   vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
                                                   >> 0x16U));
    __Vfunc_prim_secded_inv_39_32_enc__4__data_i = __Vfunc_get_data_intg__3__data;
    __Vfunc_prim_secded_inv_39_32_enc__4__data_o = (QData)((IData)(__Vfunc_prim_secded_inv_39_32_enc__4__data_i));
    __Vfunc_prim_secded_inv_39_32_enc__4__data_o = 
        ((0x7effffffffULL & __Vfunc_prim_secded_inv_39_32_enc__4__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__4__data_o))))) 
            << 0x20U));
    __Vfunc_prim_secded_inv_39_32_enc__4__data_o = 
        ((0x7dffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__4__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__4__data_o))))) 
            << 0x21U));
    __Vfunc_prim_secded_inv_39_32_enc__4__data_o = 
        ((0x7bffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__4__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__4__data_o))))) 
            << 0x22U));
    __Vfunc_prim_secded_inv_39_32_enc__4__data_o = 
        ((0x77ffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__4__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__4__data_o))))) 
            << 0x23U));
    __Vfunc_prim_secded_inv_39_32_enc__4__data_o = 
        ((0x6fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__4__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__4__data_o))))) 
            << 0x24U));
    __Vfunc_prim_secded_inv_39_32_enc__4__data_o = 
        ((0x5fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__4__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__4__data_o))))) 
            << 0x25U));
    __Vfunc_prim_secded_inv_39_32_enc__4__data_o = 
        ((0x3fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__4__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__4__data_o))))) 
            << 0x26U));
    __Vfunc_prim_secded_inv_39_32_enc__4__data_o = 
        (0x2a00000000ULL ^ __Vfunc_prim_secded_inv_39_32_enc__4__data_o);
    __Vfunc_prim_secded_inv_39_32_enc__4__Vfuncout 
        = __Vfunc_prim_secded_inv_39_32_enc__4__data_o;
    __Vfunc_get_data_intg__3__enc_data = __Vfunc_prim_secded_inv_39_32_enc__4__Vfuncout;
    __Vfunc_get_data_intg__3__data_intg = (0x7fU & (IData)(
                                                           (__Vfunc_get_data_intg__3__enc_data 
                                                            >> 0x20U)));
    __Vfunc_get_data_intg__3__Vfuncout = __Vfunc_get_data_intg__3__data_intg;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0xffffff01U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)(__Vfunc_get_data_intg__3__Vfuncout) 
              << 1U));
    __Vfunc_get_cmd_intg__5__tl[0U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U];
    __Vfunc_get_cmd_intg__5__tl[1U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U];
    __Vfunc_get_cmd_intg__5__tl[2U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U];
    __Vfunc_get_cmd_intg__5__tl[3U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U];
    __Vfunc_extract_h2d_cmd_intg__6__tl[0U] = __Vfunc_get_cmd_intg__5__tl[0U];
    __Vfunc_extract_h2d_cmd_intg__6__tl[1U] = __Vfunc_get_cmd_intg__5__tl[1U];
    __Vfunc_extract_h2d_cmd_intg__6__tl[2U] = __Vfunc_get_cmd_intg__5__tl[2U];
    __Vfunc_extract_h2d_cmd_intg__6__tl[3U] = __Vfunc_get_cmd_intg__5__tl[3U];
    __Vfunc_extract_h2d_cmd_intg__6__payload = ((0x78000000000ULL 
                                                 & __Vfunc_extract_h2d_cmd_intg__6__payload) 
                                                | (((QData)((IData)(
                                                                    ((__Vfunc_extract_h2d_cmd_intg__6__tl[2U] 
                                                                      << 6U) 
                                                                     | (__Vfunc_extract_h2d_cmd_intg__6__tl[1U] 
                                                                        >> 0x1aU)))) 
                                                    << 7U) 
                                                   | (QData)((IData)(
                                                                     ((0x70U 
                                                                       & (__Vfunc_extract_h2d_cmd_intg__6__tl[3U] 
                                                                          >> 3U)) 
                                                                      | (0xfU 
                                                                         & (__Vfunc_extract_h2d_cmd_intg__6__tl[1U] 
                                                                            >> 0x16U)))))));
    __Vfunc_extract_h2d_cmd_intg__6__payload = ((0x7fffffffffULL 
                                                 & __Vfunc_extract_h2d_cmd_intg__6__payload) 
                                                | ((QData)((IData)(
                                                                   (0xfU 
                                                                    & (__Vfunc_extract_h2d_cmd_intg__6__tl[0U] 
                                                                       >> 0xfU)))) 
                                                   << 0x27U));
    __Vfunc_extract_h2d_cmd_intg__6__Vfuncout = __Vfunc_extract_h2d_cmd_intg__6__payload;
    __Vfunc_get_cmd_intg__5__cmd = __Vfunc_extract_h2d_cmd_intg__6__Vfuncout;
    __Vfunc_get_cmd_intg__5__cmd_intg = (0x7fU & (IData)(
                                                         (([&]() {
                        __Vfunc_prim_secded_inv_64_57_enc__7__data_i 
                            = __Vfunc_get_cmd_intg__5__cmd;
                        __Vfunc_prim_secded_inv_64_57_enc__7__data_o 
                            = __Vfunc_prim_secded_inv_64_57_enc__7__data_i;
                        __Vfunc_prim_secded_inv_64_57_enc__7__data_o 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__7__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x103fff800007fffULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__7__data_o))))) 
                                  << 0x39U));
                        __Vfunc_prim_secded_inv_64_57_enc__7__data_o 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__7__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x17c1ff801ff801fULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__7__data_o))))) 
                                  << 0x3aU));
                        __Vfunc_prim_secded_inv_64_57_enc__7__data_o 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__7__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1bde1f87e0781e1ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__7__data_o))))) 
                                  << 0x3bU));
                        __Vfunc_prim_secded_inv_64_57_enc__7__data_o 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__7__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1deee3b8e388e22ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__7__data_o))))) 
                                  << 0x3cU));
                        __Vfunc_prim_secded_inv_64_57_enc__7__data_o 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__7__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1ef76cdb2c93244ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__7__data_o))))) 
                                  << 0x3dU));
                        __Vfunc_prim_secded_inv_64_57_enc__7__data_o 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__7__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1f7bb56d5525488ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__7__data_o))))) 
                                  << 0x3eU));
                        __Vfunc_prim_secded_inv_64_57_enc__7__data_o 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__7__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1fbdda769a46910ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__7__data_o))))) 
                                  << 0x3fU));
                        __Vfunc_prim_secded_inv_64_57_enc__7__data_o 
                            = (0x5400000000000000ULL 
                               ^ __Vfunc_prim_secded_inv_64_57_enc__7__data_o);
                        __Vfunc_prim_secded_inv_64_57_enc__7__Vfuncout 
                            = __Vfunc_prim_secded_inv_64_57_enc__7__data_o;
                    }(), __Vfunc_prim_secded_inv_64_57_enc__7__Vfuncout) 
                                                          >> 0x39U)));
    __Vfunc_get_cmd_intg__5__unused_cmd_payload = (0x1ffffffffffffffULL 
                                                   & ([&]() {
                __Vfunc_prim_secded_inv_64_57_enc__8__data_i 
                    = __Vfunc_get_cmd_intg__5__cmd;
                __Vfunc_prim_secded_inv_64_57_enc__8__data_o 
                    = __Vfunc_prim_secded_inv_64_57_enc__8__data_i;
                __Vfunc_prim_secded_inv_64_57_enc__8__data_o 
                    = ((0xfdffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__8__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x103fff800007fffULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__8__data_o))))) 
                          << 0x39U));
                __Vfunc_prim_secded_inv_64_57_enc__8__data_o 
                    = ((0xfbffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__8__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x17c1ff801ff801fULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__8__data_o))))) 
                          << 0x3aU));
                __Vfunc_prim_secded_inv_64_57_enc__8__data_o 
                    = ((0xf7ffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__8__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1bde1f87e0781e1ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__8__data_o))))) 
                          << 0x3bU));
                __Vfunc_prim_secded_inv_64_57_enc__8__data_o 
                    = ((0xefffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__8__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1deee3b8e388e22ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__8__data_o))))) 
                          << 0x3cU));
                __Vfunc_prim_secded_inv_64_57_enc__8__data_o 
                    = ((0xdfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__8__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1ef76cdb2c93244ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__8__data_o))))) 
                          << 0x3dU));
                __Vfunc_prim_secded_inv_64_57_enc__8__data_o 
                    = ((0xbfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__8__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1f7bb56d5525488ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__8__data_o))))) 
                          << 0x3eU));
                __Vfunc_prim_secded_inv_64_57_enc__8__data_o 
                    = ((0x7fffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__8__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1fbdda769a46910ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__8__data_o))))) 
                          << 0x3fU));
                __Vfunc_prim_secded_inv_64_57_enc__8__data_o 
                    = (0x5400000000000000ULL ^ __Vfunc_prim_secded_inv_64_57_enc__8__data_o);
                __Vfunc_prim_secded_inv_64_57_enc__8__Vfuncout 
                    = __Vfunc_prim_secded_inv_64_57_enc__8__data_o;
            }(), __Vfunc_prim_secded_inv_64_57_enc__8__Vfuncout));
    __Vfunc_get_cmd_intg__5__Vfuncout = __Vfunc_get_cmd_intg__5__cmd_intg;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0xffff80ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)(__Vfunc_get_cmd_intg__5__Vfuncout) 
              << 8U));
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/tlul_host.sv", 
                                                       81);
    while ((1U & (~ vlSelf->top_uart_tb__DOT__tl_d2h[0U]))) {
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           81);
    }
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] 
        = (0x3ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U]);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/tlul_host.sv", 
                                                       85);
    while ((1U & (~ (vlSelf->top_uart_tb__DOT__tl_d2h[2U] 
                     >> 1U)))) {
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           85);
    }
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__10__wdata = 0x44U;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__10__addr = 8U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0x3fffffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__10__wdata)))) 
              << 0x16U));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] 
        = (((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__10__wdata)))) 
            >> 0xaU) | ((__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__10__addr 
                         << 0x1aU) | ((IData)(((0xf00000000ULL 
                                                | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__10__wdata))) 
                                               >> 0x20U)) 
                                      << 0x16U)));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] 
        = (((0x3fffffU & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__10__addr 
                          >> 6U)) | ((IData)(((0xf00000000ULL 
                                               | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__10__wdata))) 
                                              >> 0x20U)) 
                                     >> 0xaU)) | (0x3c00000U 
                                                  & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__10__addr 
                                                     >> 6U)));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0x408U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = (0x4fffeU | (0xffc00001U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]));
    __Vfunc_get_data_intg__12__data = ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] 
                                        << 0xaU) | 
                                       (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
                                        >> 0x16U));
    __Vfunc_prim_secded_inv_39_32_enc__13__data_i = __Vfunc_get_data_intg__12__data;
    __Vfunc_prim_secded_inv_39_32_enc__13__data_o = (QData)((IData)(__Vfunc_prim_secded_inv_39_32_enc__13__data_i));
    __Vfunc_prim_secded_inv_39_32_enc__13__data_o = 
        ((0x7effffffffULL & __Vfunc_prim_secded_inv_39_32_enc__13__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__13__data_o))))) 
            << 0x20U));
    __Vfunc_prim_secded_inv_39_32_enc__13__data_o = 
        ((0x7dffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__13__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__13__data_o))))) 
            << 0x21U));
    __Vfunc_prim_secded_inv_39_32_enc__13__data_o = 
        ((0x7bffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__13__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__13__data_o))))) 
            << 0x22U));
    __Vfunc_prim_secded_inv_39_32_enc__13__data_o = 
        ((0x77ffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__13__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__13__data_o))))) 
            << 0x23U));
    __Vfunc_prim_secded_inv_39_32_enc__13__data_o = 
        ((0x6fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__13__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__13__data_o))))) 
            << 0x24U));
    __Vfunc_prim_secded_inv_39_32_enc__13__data_o = 
        ((0x5fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__13__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__13__data_o))))) 
            << 0x25U));
    __Vfunc_prim_secded_inv_39_32_enc__13__data_o = 
        ((0x3fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__13__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__13__data_o))))) 
            << 0x26U));
    __Vfunc_prim_secded_inv_39_32_enc__13__data_o = 
        (0x2a00000000ULL ^ __Vfunc_prim_secded_inv_39_32_enc__13__data_o);
    __Vfunc_prim_secded_inv_39_32_enc__13__Vfuncout 
        = __Vfunc_prim_secded_inv_39_32_enc__13__data_o;
    __Vfunc_get_data_intg__12__enc_data = __Vfunc_prim_secded_inv_39_32_enc__13__Vfuncout;
    __Vfunc_get_data_intg__12__data_intg = (0x7fU & (IData)(
                                                            (__Vfunc_get_data_intg__12__enc_data 
                                                             >> 0x20U)));
    __Vfunc_get_data_intg__12__Vfuncout = __Vfunc_get_data_intg__12__data_intg;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0xffffff01U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)(__Vfunc_get_data_intg__12__Vfuncout) 
              << 1U));
    __Vfunc_get_cmd_intg__14__tl[0U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U];
    __Vfunc_get_cmd_intg__14__tl[1U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U];
    __Vfunc_get_cmd_intg__14__tl[2U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U];
    __Vfunc_get_cmd_intg__14__tl[3U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U];
    __Vfunc_extract_h2d_cmd_intg__15__tl[0U] = __Vfunc_get_cmd_intg__14__tl[0U];
    __Vfunc_extract_h2d_cmd_intg__15__tl[1U] = __Vfunc_get_cmd_intg__14__tl[1U];
    __Vfunc_extract_h2d_cmd_intg__15__tl[2U] = __Vfunc_get_cmd_intg__14__tl[2U];
    __Vfunc_extract_h2d_cmd_intg__15__tl[3U] = __Vfunc_get_cmd_intg__14__tl[3U];
    __Vfunc_extract_h2d_cmd_intg__15__payload = ((0x78000000000ULL 
                                                  & __Vfunc_extract_h2d_cmd_intg__15__payload) 
                                                 | (((QData)((IData)(
                                                                     ((__Vfunc_extract_h2d_cmd_intg__15__tl[2U] 
                                                                       << 6U) 
                                                                      | (__Vfunc_extract_h2d_cmd_intg__15__tl[1U] 
                                                                         >> 0x1aU)))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      ((0x70U 
                                                                        & (__Vfunc_extract_h2d_cmd_intg__15__tl[3U] 
                                                                           >> 3U)) 
                                                                       | (0xfU 
                                                                          & (__Vfunc_extract_h2d_cmd_intg__15__tl[1U] 
                                                                             >> 0x16U)))))));
    __Vfunc_extract_h2d_cmd_intg__15__payload = ((0x7fffffffffULL 
                                                  & __Vfunc_extract_h2d_cmd_intg__15__payload) 
                                                 | ((QData)((IData)(
                                                                    (0xfU 
                                                                     & (__Vfunc_extract_h2d_cmd_intg__15__tl[0U] 
                                                                        >> 0xfU)))) 
                                                    << 0x27U));
    __Vfunc_extract_h2d_cmd_intg__15__Vfuncout = __Vfunc_extract_h2d_cmd_intg__15__payload;
    __Vfunc_get_cmd_intg__14__cmd = __Vfunc_extract_h2d_cmd_intg__15__Vfuncout;
    __Vfunc_get_cmd_intg__14__cmd_intg = (0x7fU & (IData)(
                                                          (([&]() {
                        __Vfunc_prim_secded_inv_64_57_enc__16__data_i 
                            = __Vfunc_get_cmd_intg__14__cmd;
                        __Vfunc_prim_secded_inv_64_57_enc__16__data_o 
                            = __Vfunc_prim_secded_inv_64_57_enc__16__data_i;
                        __Vfunc_prim_secded_inv_64_57_enc__16__data_o 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__16__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x103fff800007fffULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__16__data_o))))) 
                                  << 0x39U));
                        __Vfunc_prim_secded_inv_64_57_enc__16__data_o 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__16__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x17c1ff801ff801fULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__16__data_o))))) 
                                  << 0x3aU));
                        __Vfunc_prim_secded_inv_64_57_enc__16__data_o 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__16__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1bde1f87e0781e1ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__16__data_o))))) 
                                  << 0x3bU));
                        __Vfunc_prim_secded_inv_64_57_enc__16__data_o 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__16__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1deee3b8e388e22ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__16__data_o))))) 
                                  << 0x3cU));
                        __Vfunc_prim_secded_inv_64_57_enc__16__data_o 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__16__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1ef76cdb2c93244ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__16__data_o))))) 
                                  << 0x3dU));
                        __Vfunc_prim_secded_inv_64_57_enc__16__data_o 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__16__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1f7bb56d5525488ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__16__data_o))))) 
                                  << 0x3eU));
                        __Vfunc_prim_secded_inv_64_57_enc__16__data_o 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__16__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1fbdda769a46910ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__16__data_o))))) 
                                  << 0x3fU));
                        __Vfunc_prim_secded_inv_64_57_enc__16__data_o 
                            = (0x5400000000000000ULL 
                               ^ __Vfunc_prim_secded_inv_64_57_enc__16__data_o);
                        __Vfunc_prim_secded_inv_64_57_enc__16__Vfuncout 
                            = __Vfunc_prim_secded_inv_64_57_enc__16__data_o;
                    }(), __Vfunc_prim_secded_inv_64_57_enc__16__Vfuncout) 
                                                           >> 0x39U)));
    __Vfunc_get_cmd_intg__14__unused_cmd_payload = 
        (0x1ffffffffffffffULL & ([&]() {
                __Vfunc_prim_secded_inv_64_57_enc__17__data_i 
                    = __Vfunc_get_cmd_intg__14__cmd;
                __Vfunc_prim_secded_inv_64_57_enc__17__data_o 
                    = __Vfunc_prim_secded_inv_64_57_enc__17__data_i;
                __Vfunc_prim_secded_inv_64_57_enc__17__data_o 
                    = ((0xfdffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__17__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x103fff800007fffULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__17__data_o))))) 
                          << 0x39U));
                __Vfunc_prim_secded_inv_64_57_enc__17__data_o 
                    = ((0xfbffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__17__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x17c1ff801ff801fULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__17__data_o))))) 
                          << 0x3aU));
                __Vfunc_prim_secded_inv_64_57_enc__17__data_o 
                    = ((0xf7ffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__17__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1bde1f87e0781e1ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__17__data_o))))) 
                          << 0x3bU));
                __Vfunc_prim_secded_inv_64_57_enc__17__data_o 
                    = ((0xefffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__17__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1deee3b8e388e22ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__17__data_o))))) 
                          << 0x3cU));
                __Vfunc_prim_secded_inv_64_57_enc__17__data_o 
                    = ((0xdfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__17__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1ef76cdb2c93244ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__17__data_o))))) 
                          << 0x3dU));
                __Vfunc_prim_secded_inv_64_57_enc__17__data_o 
                    = ((0xbfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__17__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1f7bb56d5525488ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__17__data_o))))) 
                          << 0x3eU));
                __Vfunc_prim_secded_inv_64_57_enc__17__data_o 
                    = ((0x7fffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__17__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1fbdda769a46910ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__17__data_o))))) 
                          << 0x3fU));
                __Vfunc_prim_secded_inv_64_57_enc__17__data_o 
                    = (0x5400000000000000ULL ^ __Vfunc_prim_secded_inv_64_57_enc__17__data_o);
                __Vfunc_prim_secded_inv_64_57_enc__17__Vfuncout 
                    = __Vfunc_prim_secded_inv_64_57_enc__17__data_o;
            }(), __Vfunc_prim_secded_inv_64_57_enc__17__Vfuncout));
    __Vfunc_get_cmd_intg__14__Vfuncout = __Vfunc_get_cmd_intg__14__cmd_intg;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0xffff80ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)(__Vfunc_get_cmd_intg__14__Vfuncout) 
              << 8U));
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/tlul_host.sv", 
                                                       81);
    while ((1U & (~ vlSelf->top_uart_tb__DOT__tl_d2h[0U]))) {
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           81);
    }
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] 
        = (0x3ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U]);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/tlul_host.sv", 
                                                       85);
    while ((1U & (~ (vlSelf->top_uart_tb__DOT__tl_d2h[2U] 
                     >> 1U)))) {
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           85);
    }
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__19__addr = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = (0x4fffeU | (1U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] 
        = (0x3c00000U | (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__19__addr 
                         << 0x1aU));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] 
        = ((1U & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__19__addr 
                  >> 6U)) | (0x3fffffeU & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__19__addr 
                                           >> 6U)));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0x608U;
    __Vfunc_get_data_intg__21__data = 0U;
    __Vfunc_prim_secded_inv_39_32_enc__22__data_i = __Vfunc_get_data_intg__21__data;
    __Vfunc_prim_secded_inv_39_32_enc__22__data_o = (QData)((IData)(__Vfunc_prim_secded_inv_39_32_enc__22__data_i));
    __Vfunc_prim_secded_inv_39_32_enc__22__data_o = 
        ((0x7effffffffULL & __Vfunc_prim_secded_inv_39_32_enc__22__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__22__data_o))))) 
            << 0x20U));
    __Vfunc_prim_secded_inv_39_32_enc__22__data_o = 
        ((0x7dffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__22__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__22__data_o))))) 
            << 0x21U));
    __Vfunc_prim_secded_inv_39_32_enc__22__data_o = 
        ((0x7bffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__22__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__22__data_o))))) 
            << 0x22U));
    __Vfunc_prim_secded_inv_39_32_enc__22__data_o = 
        ((0x77ffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__22__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__22__data_o))))) 
            << 0x23U));
    __Vfunc_prim_secded_inv_39_32_enc__22__data_o = 
        ((0x6fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__22__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__22__data_o))))) 
            << 0x24U));
    __Vfunc_prim_secded_inv_39_32_enc__22__data_o = 
        ((0x5fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__22__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__22__data_o))))) 
            << 0x25U));
    __Vfunc_prim_secded_inv_39_32_enc__22__data_o = 
        ((0x3fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__22__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__22__data_o))))) 
            << 0x26U));
    __Vfunc_prim_secded_inv_39_32_enc__22__data_o = 
        (0x2a00000000ULL ^ __Vfunc_prim_secded_inv_39_32_enc__22__data_o);
    __Vfunc_prim_secded_inv_39_32_enc__22__Vfuncout 
        = __Vfunc_prim_secded_inv_39_32_enc__22__data_o;
    __Vfunc_get_data_intg__21__enc_data = __Vfunc_prim_secded_inv_39_32_enc__22__Vfuncout;
    __Vfunc_get_data_intg__21__data_intg = (0x7fU & (IData)(
                                                            (__Vfunc_get_data_intg__21__enc_data 
                                                             >> 0x20U)));
    __Vfunc_get_data_intg__21__Vfuncout = __Vfunc_get_data_intg__21__data_intg;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0xffffff01U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)(__Vfunc_get_data_intg__21__Vfuncout) 
              << 1U));
    __Vfunc_get_cmd_intg__23__tl[0U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U];
    __Vfunc_get_cmd_intg__23__tl[1U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U];
    __Vfunc_get_cmd_intg__23__tl[2U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U];
    __Vfunc_get_cmd_intg__23__tl[3U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U];
    __Vfunc_extract_h2d_cmd_intg__24__tl[0U] = __Vfunc_get_cmd_intg__23__tl[0U];
    __Vfunc_extract_h2d_cmd_intg__24__tl[1U] = __Vfunc_get_cmd_intg__23__tl[1U];
    __Vfunc_extract_h2d_cmd_intg__24__tl[2U] = __Vfunc_get_cmd_intg__23__tl[2U];
    __Vfunc_extract_h2d_cmd_intg__24__tl[3U] = __Vfunc_get_cmd_intg__23__tl[3U];
    __Vfunc_extract_h2d_cmd_intg__24__payload = ((0x78000000000ULL 
                                                  & __Vfunc_extract_h2d_cmd_intg__24__payload) 
                                                 | (((QData)((IData)(
                                                                     ((__Vfunc_extract_h2d_cmd_intg__24__tl[2U] 
                                                                       << 6U) 
                                                                      | (__Vfunc_extract_h2d_cmd_intg__24__tl[1U] 
                                                                         >> 0x1aU)))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      ((0x70U 
                                                                        & (__Vfunc_extract_h2d_cmd_intg__24__tl[3U] 
                                                                           >> 3U)) 
                                                                       | (0xfU 
                                                                          & (__Vfunc_extract_h2d_cmd_intg__24__tl[1U] 
                                                                             >> 0x16U)))))));
    __Vfunc_extract_h2d_cmd_intg__24__payload = ((0x7fffffffffULL 
                                                  & __Vfunc_extract_h2d_cmd_intg__24__payload) 
                                                 | ((QData)((IData)(
                                                                    (0xfU 
                                                                     & (__Vfunc_extract_h2d_cmd_intg__24__tl[0U] 
                                                                        >> 0xfU)))) 
                                                    << 0x27U));
    __Vfunc_extract_h2d_cmd_intg__24__Vfuncout = __Vfunc_extract_h2d_cmd_intg__24__payload;
    __Vfunc_get_cmd_intg__23__cmd = __Vfunc_extract_h2d_cmd_intg__24__Vfuncout;
    __Vfunc_get_cmd_intg__23__cmd_intg = (0x7fU & (IData)(
                                                          (([&]() {
                        __Vfunc_prim_secded_inv_64_57_enc__25__data_i 
                            = __Vfunc_get_cmd_intg__23__cmd;
                        __Vfunc_prim_secded_inv_64_57_enc__25__data_o 
                            = __Vfunc_prim_secded_inv_64_57_enc__25__data_i;
                        __Vfunc_prim_secded_inv_64_57_enc__25__data_o 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__25__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x103fff800007fffULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__25__data_o))))) 
                                  << 0x39U));
                        __Vfunc_prim_secded_inv_64_57_enc__25__data_o 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__25__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x17c1ff801ff801fULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__25__data_o))))) 
                                  << 0x3aU));
                        __Vfunc_prim_secded_inv_64_57_enc__25__data_o 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__25__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1bde1f87e0781e1ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__25__data_o))))) 
                                  << 0x3bU));
                        __Vfunc_prim_secded_inv_64_57_enc__25__data_o 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__25__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1deee3b8e388e22ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__25__data_o))))) 
                                  << 0x3cU));
                        __Vfunc_prim_secded_inv_64_57_enc__25__data_o 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__25__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1ef76cdb2c93244ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__25__data_o))))) 
                                  << 0x3dU));
                        __Vfunc_prim_secded_inv_64_57_enc__25__data_o 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__25__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1f7bb56d5525488ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__25__data_o))))) 
                                  << 0x3eU));
                        __Vfunc_prim_secded_inv_64_57_enc__25__data_o 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__25__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1fbdda769a46910ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__25__data_o))))) 
                                  << 0x3fU));
                        __Vfunc_prim_secded_inv_64_57_enc__25__data_o 
                            = (0x5400000000000000ULL 
                               ^ __Vfunc_prim_secded_inv_64_57_enc__25__data_o);
                        __Vfunc_prim_secded_inv_64_57_enc__25__Vfuncout 
                            = __Vfunc_prim_secded_inv_64_57_enc__25__data_o;
                    }(), __Vfunc_prim_secded_inv_64_57_enc__25__Vfuncout) 
                                                           >> 0x39U)));
    __Vfunc_get_cmd_intg__23__unused_cmd_payload = 
        (0x1ffffffffffffffULL & ([&]() {
                __Vfunc_prim_secded_inv_64_57_enc__26__data_i 
                    = __Vfunc_get_cmd_intg__23__cmd;
                __Vfunc_prim_secded_inv_64_57_enc__26__data_o 
                    = __Vfunc_prim_secded_inv_64_57_enc__26__data_i;
                __Vfunc_prim_secded_inv_64_57_enc__26__data_o 
                    = ((0xfdffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__26__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x103fff800007fffULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__26__data_o))))) 
                          << 0x39U));
                __Vfunc_prim_secded_inv_64_57_enc__26__data_o 
                    = ((0xfbffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__26__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x17c1ff801ff801fULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__26__data_o))))) 
                          << 0x3aU));
                __Vfunc_prim_secded_inv_64_57_enc__26__data_o 
                    = ((0xf7ffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__26__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1bde1f87e0781e1ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__26__data_o))))) 
                          << 0x3bU));
                __Vfunc_prim_secded_inv_64_57_enc__26__data_o 
                    = ((0xefffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__26__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1deee3b8e388e22ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__26__data_o))))) 
                          << 0x3cU));
                __Vfunc_prim_secded_inv_64_57_enc__26__data_o 
                    = ((0xdfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__26__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1ef76cdb2c93244ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__26__data_o))))) 
                          << 0x3dU));
                __Vfunc_prim_secded_inv_64_57_enc__26__data_o 
                    = ((0xbfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__26__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1f7bb56d5525488ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__26__data_o))))) 
                          << 0x3eU));
                __Vfunc_prim_secded_inv_64_57_enc__26__data_o 
                    = ((0x7fffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__26__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1fbdda769a46910ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__26__data_o))))) 
                          << 0x3fU));
                __Vfunc_prim_secded_inv_64_57_enc__26__data_o 
                    = (0x5400000000000000ULL ^ __Vfunc_prim_secded_inv_64_57_enc__26__data_o);
                __Vfunc_prim_secded_inv_64_57_enc__26__Vfuncout 
                    = __Vfunc_prim_secded_inv_64_57_enc__26__data_o;
            }(), __Vfunc_prim_secded_inv_64_57_enc__26__Vfuncout));
    __Vfunc_get_cmd_intg__23__Vfuncout = __Vfunc_get_cmd_intg__23__cmd_intg;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0xffff80ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)(__Vfunc_get_cmd_intg__23__Vfuncout) 
              << 8U));
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/tlul_host.sv", 
                                                       128);
    while ((1U & (~ vlSelf->top_uart_tb__DOT__tl_d2h[0U]))) {
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           128);
    }
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] 
        = (0x3ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U]);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/tlul_host.sv", 
                                                       132);
    while ((1U & (~ (vlSelf->top_uart_tb__DOT__tl_d2h[2U] 
                     >> 1U)))) {
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           132);
    }
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__19__rdata 
        = ((vlSelf->top_uart_tb__DOT__tl_d2h[1U] << 0x10U) 
           | (vlSelf->top_uart_tb__DOT__tl_d2h[0U] 
              >> 0x10U));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    __Vtask_top_uart_tb__DOT__sanity_intr__0__r = __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__19__rdata;
    VL_WRITEF("[%0t] INTR_STATE = 0x%08x\n",64,VL_TIME_UNITED_Q(1000),
              -9,32,__Vtask_top_uart_tb__DOT__sanity_intr__0__r);
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__max_tries = 0xc350U;
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__f_clk_hz = 0x5f5e100U;
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__baud = 0x1c200U;
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__NCO 
        = VL_DIV_III(32, (VL_SHIFTL_III(32,32,32, __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__baud, 0x14U) 
                          + VL_SHIFTR_III(32,32,32, __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__f_clk_hz, 1U)), __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__f_clk_hz);
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__msg = 
        std::string{"HELLO\n"};
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__received = 0U;
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__tries = 0U;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__29__wdata = 3U;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__29__addr = 0x20U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0x3fffffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__29__wdata)))) 
              << 0x16U));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] 
        = (((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__29__wdata)))) 
            >> 0xaU) | ((__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__29__addr 
                         << 0x1aU) | ((IData)(((0xf00000000ULL 
                                                | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__29__wdata))) 
                                               >> 0x20U)) 
                                      << 0x16U)));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] 
        = (((0x3fffffU & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__29__addr 
                          >> 6U)) | ((IData)(((0xf00000000ULL 
                                               | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__29__wdata))) 
                                              >> 0x20U)) 
                                     >> 0xaU)) | (0x3c00000U 
                                                  & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__29__addr 
                                                     >> 6U)));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0x408U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = (0x4fffeU | (0xffc00001U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]));
    __Vfunc_get_data_intg__31__data = ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] 
                                        << 0xaU) | 
                                       (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
                                        >> 0x16U));
    __Vfunc_prim_secded_inv_39_32_enc__32__data_i = __Vfunc_get_data_intg__31__data;
    __Vfunc_prim_secded_inv_39_32_enc__32__data_o = (QData)((IData)(__Vfunc_prim_secded_inv_39_32_enc__32__data_i));
    __Vfunc_prim_secded_inv_39_32_enc__32__data_o = 
        ((0x7effffffffULL & __Vfunc_prim_secded_inv_39_32_enc__32__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__32__data_o))))) 
            << 0x20U));
    __Vfunc_prim_secded_inv_39_32_enc__32__data_o = 
        ((0x7dffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__32__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__32__data_o))))) 
            << 0x21U));
    __Vfunc_prim_secded_inv_39_32_enc__32__data_o = 
        ((0x7bffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__32__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__32__data_o))))) 
            << 0x22U));
    __Vfunc_prim_secded_inv_39_32_enc__32__data_o = 
        ((0x77ffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__32__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__32__data_o))))) 
            << 0x23U));
    __Vfunc_prim_secded_inv_39_32_enc__32__data_o = 
        ((0x6fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__32__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__32__data_o))))) 
            << 0x24U));
    __Vfunc_prim_secded_inv_39_32_enc__32__data_o = 
        ((0x5fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__32__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__32__data_o))))) 
            << 0x25U));
    __Vfunc_prim_secded_inv_39_32_enc__32__data_o = 
        ((0x3fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__32__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__32__data_o))))) 
            << 0x26U));
    __Vfunc_prim_secded_inv_39_32_enc__32__data_o = 
        (0x2a00000000ULL ^ __Vfunc_prim_secded_inv_39_32_enc__32__data_o);
    __Vfunc_prim_secded_inv_39_32_enc__32__Vfuncout 
        = __Vfunc_prim_secded_inv_39_32_enc__32__data_o;
    __Vfunc_get_data_intg__31__enc_data = __Vfunc_prim_secded_inv_39_32_enc__32__Vfuncout;
    __Vfunc_get_data_intg__31__data_intg = (0x7fU & (IData)(
                                                            (__Vfunc_get_data_intg__31__enc_data 
                                                             >> 0x20U)));
    __Vfunc_get_data_intg__31__Vfuncout = __Vfunc_get_data_intg__31__data_intg;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0xffffff01U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)(__Vfunc_get_data_intg__31__Vfuncout) 
              << 1U));
    __Vfunc_get_cmd_intg__33__tl[0U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U];
    __Vfunc_get_cmd_intg__33__tl[1U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U];
    __Vfunc_get_cmd_intg__33__tl[2U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U];
    __Vfunc_get_cmd_intg__33__tl[3U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U];
    __Vfunc_extract_h2d_cmd_intg__34__tl[0U] = __Vfunc_get_cmd_intg__33__tl[0U];
    __Vfunc_extract_h2d_cmd_intg__34__tl[1U] = __Vfunc_get_cmd_intg__33__tl[1U];
    __Vfunc_extract_h2d_cmd_intg__34__tl[2U] = __Vfunc_get_cmd_intg__33__tl[2U];
    __Vfunc_extract_h2d_cmd_intg__34__tl[3U] = __Vfunc_get_cmd_intg__33__tl[3U];
    __Vfunc_extract_h2d_cmd_intg__34__payload = ((0x78000000000ULL 
                                                  & __Vfunc_extract_h2d_cmd_intg__34__payload) 
                                                 | (((QData)((IData)(
                                                                     ((__Vfunc_extract_h2d_cmd_intg__34__tl[2U] 
                                                                       << 6U) 
                                                                      | (__Vfunc_extract_h2d_cmd_intg__34__tl[1U] 
                                                                         >> 0x1aU)))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      ((0x70U 
                                                                        & (__Vfunc_extract_h2d_cmd_intg__34__tl[3U] 
                                                                           >> 3U)) 
                                                                       | (0xfU 
                                                                          & (__Vfunc_extract_h2d_cmd_intg__34__tl[1U] 
                                                                             >> 0x16U)))))));
    __Vfunc_extract_h2d_cmd_intg__34__payload = ((0x7fffffffffULL 
                                                  & __Vfunc_extract_h2d_cmd_intg__34__payload) 
                                                 | ((QData)((IData)(
                                                                    (0xfU 
                                                                     & (__Vfunc_extract_h2d_cmd_intg__34__tl[0U] 
                                                                        >> 0xfU)))) 
                                                    << 0x27U));
    __Vfunc_extract_h2d_cmd_intg__34__Vfuncout = __Vfunc_extract_h2d_cmd_intg__34__payload;
    __Vfunc_get_cmd_intg__33__cmd = __Vfunc_extract_h2d_cmd_intg__34__Vfuncout;
    __Vfunc_get_cmd_intg__33__cmd_intg = (0x7fU & (IData)(
                                                          (([&]() {
                        __Vfunc_prim_secded_inv_64_57_enc__35__data_i 
                            = __Vfunc_get_cmd_intg__33__cmd;
                        __Vfunc_prim_secded_inv_64_57_enc__35__data_o 
                            = __Vfunc_prim_secded_inv_64_57_enc__35__data_i;
                        __Vfunc_prim_secded_inv_64_57_enc__35__data_o 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__35__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x103fff800007fffULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__35__data_o))))) 
                                  << 0x39U));
                        __Vfunc_prim_secded_inv_64_57_enc__35__data_o 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__35__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x17c1ff801ff801fULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__35__data_o))))) 
                                  << 0x3aU));
                        __Vfunc_prim_secded_inv_64_57_enc__35__data_o 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__35__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1bde1f87e0781e1ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__35__data_o))))) 
                                  << 0x3bU));
                        __Vfunc_prim_secded_inv_64_57_enc__35__data_o 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__35__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1deee3b8e388e22ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__35__data_o))))) 
                                  << 0x3cU));
                        __Vfunc_prim_secded_inv_64_57_enc__35__data_o 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__35__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1ef76cdb2c93244ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__35__data_o))))) 
                                  << 0x3dU));
                        __Vfunc_prim_secded_inv_64_57_enc__35__data_o 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__35__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1f7bb56d5525488ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__35__data_o))))) 
                                  << 0x3eU));
                        __Vfunc_prim_secded_inv_64_57_enc__35__data_o 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__35__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1fbdda769a46910ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__35__data_o))))) 
                                  << 0x3fU));
                        __Vfunc_prim_secded_inv_64_57_enc__35__data_o 
                            = (0x5400000000000000ULL 
                               ^ __Vfunc_prim_secded_inv_64_57_enc__35__data_o);
                        __Vfunc_prim_secded_inv_64_57_enc__35__Vfuncout 
                            = __Vfunc_prim_secded_inv_64_57_enc__35__data_o;
                    }(), __Vfunc_prim_secded_inv_64_57_enc__35__Vfuncout) 
                                                           >> 0x39U)));
    __Vfunc_get_cmd_intg__33__unused_cmd_payload = 
        (0x1ffffffffffffffULL & ([&]() {
                __Vfunc_prim_secded_inv_64_57_enc__36__data_i 
                    = __Vfunc_get_cmd_intg__33__cmd;
                __Vfunc_prim_secded_inv_64_57_enc__36__data_o 
                    = __Vfunc_prim_secded_inv_64_57_enc__36__data_i;
                __Vfunc_prim_secded_inv_64_57_enc__36__data_o 
                    = ((0xfdffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__36__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x103fff800007fffULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__36__data_o))))) 
                          << 0x39U));
                __Vfunc_prim_secded_inv_64_57_enc__36__data_o 
                    = ((0xfbffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__36__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x17c1ff801ff801fULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__36__data_o))))) 
                          << 0x3aU));
                __Vfunc_prim_secded_inv_64_57_enc__36__data_o 
                    = ((0xf7ffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__36__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1bde1f87e0781e1ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__36__data_o))))) 
                          << 0x3bU));
                __Vfunc_prim_secded_inv_64_57_enc__36__data_o 
                    = ((0xefffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__36__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1deee3b8e388e22ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__36__data_o))))) 
                          << 0x3cU));
                __Vfunc_prim_secded_inv_64_57_enc__36__data_o 
                    = ((0xdfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__36__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1ef76cdb2c93244ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__36__data_o))))) 
                          << 0x3dU));
                __Vfunc_prim_secded_inv_64_57_enc__36__data_o 
                    = ((0xbfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__36__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1f7bb56d5525488ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__36__data_o))))) 
                          << 0x3eU));
                __Vfunc_prim_secded_inv_64_57_enc__36__data_o 
                    = ((0x7fffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__36__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1fbdda769a46910ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__36__data_o))))) 
                          << 0x3fU));
                __Vfunc_prim_secded_inv_64_57_enc__36__data_o 
                    = (0x5400000000000000ULL ^ __Vfunc_prim_secded_inv_64_57_enc__36__data_o);
                __Vfunc_prim_secded_inv_64_57_enc__36__Vfuncout 
                    = __Vfunc_prim_secded_inv_64_57_enc__36__data_o;
            }(), __Vfunc_prim_secded_inv_64_57_enc__36__Vfuncout));
    __Vfunc_get_cmd_intg__33__Vfuncout = __Vfunc_get_cmd_intg__33__cmd_intg;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0xffff80ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)(__Vfunc_get_cmd_intg__33__Vfuncout) 
              << 8U));
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/tlul_host.sv", 
                                                       81);
    while ((1U & (~ vlSelf->top_uart_tb__DOT__tl_d2h[0U]))) {
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           81);
    }
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] 
        = (0x3ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U]);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/tlul_host.sv", 
                                                       85);
    while ((1U & (~ (vlSelf->top_uart_tb__DOT__tl_d2h[2U] 
                     >> 1U)))) {
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           85);
    }
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__38__wdata 
        = (3U | (0x1fffe000U & (__Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__NCO 
                                << 0xdU)));
    __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__38__addr = 0x10U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0x3fffffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__38__wdata)))) 
              << 0x16U));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] 
        = (((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__38__wdata)))) 
            >> 0xaU) | ((__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__38__addr 
                         << 0x1aU) | ((IData)(((0xf00000000ULL 
                                                | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__38__wdata))) 
                                               >> 0x20U)) 
                                      << 0x16U)));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] 
        = (((0x3fffffU & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__38__addr 
                          >> 6U)) | ((IData)(((0xf00000000ULL 
                                               | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__38__wdata))) 
                                              >> 0x20U)) 
                                     >> 0xaU)) | (0x3c00000U 
                                                  & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__38__addr 
                                                     >> 6U)));
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0x408U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = (0x4fffeU | (0xffc00001U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]));
    __Vfunc_get_data_intg__40__data = ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] 
                                        << 0xaU) | 
                                       (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
                                        >> 0x16U));
    __Vfunc_prim_secded_inv_39_32_enc__41__data_i = __Vfunc_get_data_intg__40__data;
    __Vfunc_prim_secded_inv_39_32_enc__41__data_o = (QData)((IData)(__Vfunc_prim_secded_inv_39_32_enc__41__data_i));
    __Vfunc_prim_secded_inv_39_32_enc__41__data_o = 
        ((0x7effffffffULL & __Vfunc_prim_secded_inv_39_32_enc__41__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__41__data_o))))) 
            << 0x20U));
    __Vfunc_prim_secded_inv_39_32_enc__41__data_o = 
        ((0x7dffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__41__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__41__data_o))))) 
            << 0x21U));
    __Vfunc_prim_secded_inv_39_32_enc__41__data_o = 
        ((0x7bffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__41__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__41__data_o))))) 
            << 0x22U));
    __Vfunc_prim_secded_inv_39_32_enc__41__data_o = 
        ((0x77ffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__41__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__41__data_o))))) 
            << 0x23U));
    __Vfunc_prim_secded_inv_39_32_enc__41__data_o = 
        ((0x6fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__41__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__41__data_o))))) 
            << 0x24U));
    __Vfunc_prim_secded_inv_39_32_enc__41__data_o = 
        ((0x5fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__41__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__41__data_o))))) 
            << 0x25U));
    __Vfunc_prim_secded_inv_39_32_enc__41__data_o = 
        ((0x3fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__41__data_o) 
         | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                & __Vfunc_prim_secded_inv_39_32_enc__41__data_o))))) 
            << 0x26U));
    __Vfunc_prim_secded_inv_39_32_enc__41__data_o = 
        (0x2a00000000ULL ^ __Vfunc_prim_secded_inv_39_32_enc__41__data_o);
    __Vfunc_prim_secded_inv_39_32_enc__41__Vfuncout 
        = __Vfunc_prim_secded_inv_39_32_enc__41__data_o;
    __Vfunc_get_data_intg__40__enc_data = __Vfunc_prim_secded_inv_39_32_enc__41__Vfuncout;
    __Vfunc_get_data_intg__40__data_intg = (0x7fU & (IData)(
                                                            (__Vfunc_get_data_intg__40__enc_data 
                                                             >> 0x20U)));
    __Vfunc_get_data_intg__40__Vfuncout = __Vfunc_get_data_intg__40__data_intg;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0xffffff01U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)(__Vfunc_get_data_intg__40__Vfuncout) 
              << 1U));
    __Vfunc_get_cmd_intg__42__tl[0U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U];
    __Vfunc_get_cmd_intg__42__tl[1U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U];
    __Vfunc_get_cmd_intg__42__tl[2U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U];
    __Vfunc_get_cmd_intg__42__tl[3U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U];
    __Vfunc_extract_h2d_cmd_intg__43__tl[0U] = __Vfunc_get_cmd_intg__42__tl[0U];
    __Vfunc_extract_h2d_cmd_intg__43__tl[1U] = __Vfunc_get_cmd_intg__42__tl[1U];
    __Vfunc_extract_h2d_cmd_intg__43__tl[2U] = __Vfunc_get_cmd_intg__42__tl[2U];
    __Vfunc_extract_h2d_cmd_intg__43__tl[3U] = __Vfunc_get_cmd_intg__42__tl[3U];
    __Vfunc_extract_h2d_cmd_intg__43__payload = ((0x78000000000ULL 
                                                  & __Vfunc_extract_h2d_cmd_intg__43__payload) 
                                                 | (((QData)((IData)(
                                                                     ((__Vfunc_extract_h2d_cmd_intg__43__tl[2U] 
                                                                       << 6U) 
                                                                      | (__Vfunc_extract_h2d_cmd_intg__43__tl[1U] 
                                                                         >> 0x1aU)))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      ((0x70U 
                                                                        & (__Vfunc_extract_h2d_cmd_intg__43__tl[3U] 
                                                                           >> 3U)) 
                                                                       | (0xfU 
                                                                          & (__Vfunc_extract_h2d_cmd_intg__43__tl[1U] 
                                                                             >> 0x16U)))))));
    __Vfunc_extract_h2d_cmd_intg__43__payload = ((0x7fffffffffULL 
                                                  & __Vfunc_extract_h2d_cmd_intg__43__payload) 
                                                 | ((QData)((IData)(
                                                                    (0xfU 
                                                                     & (__Vfunc_extract_h2d_cmd_intg__43__tl[0U] 
                                                                        >> 0xfU)))) 
                                                    << 0x27U));
    __Vfunc_extract_h2d_cmd_intg__43__Vfuncout = __Vfunc_extract_h2d_cmd_intg__43__payload;
    __Vfunc_get_cmd_intg__42__cmd = __Vfunc_extract_h2d_cmd_intg__43__Vfuncout;
    __Vfunc_get_cmd_intg__42__cmd_intg = (0x7fU & (IData)(
                                                          (([&]() {
                        __Vfunc_prim_secded_inv_64_57_enc__44__data_i 
                            = __Vfunc_get_cmd_intg__42__cmd;
                        __Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                            = __Vfunc_prim_secded_inv_64_57_enc__44__data_i;
                        __Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x103fff800007fffULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                  << 0x39U));
                        __Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x17c1ff801ff801fULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                  << 0x3aU));
                        __Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1bde1f87e0781e1ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                  << 0x3bU));
                        __Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1deee3b8e388e22ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                  << 0x3cU));
                        __Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1ef76cdb2c93244ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                  << 0x3dU));
                        __Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1f7bb56d5525488ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                  << 0x3eU));
                        __Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__44__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1fbdda769a46910ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__44__data_o))))) 
                                  << 0x3fU));
                        __Vfunc_prim_secded_inv_64_57_enc__44__data_o 
                            = (0x5400000000000000ULL 
                               ^ __Vfunc_prim_secded_inv_64_57_enc__44__data_o);
                        __Vfunc_prim_secded_inv_64_57_enc__44__Vfuncout 
                            = __Vfunc_prim_secded_inv_64_57_enc__44__data_o;
                    }(), __Vfunc_prim_secded_inv_64_57_enc__44__Vfuncout) 
                                                           >> 0x39U)));
    __Vfunc_get_cmd_intg__42__unused_cmd_payload = 
        (0x1ffffffffffffffULL & ([&]() {
                __Vfunc_prim_secded_inv_64_57_enc__45__data_i 
                    = __Vfunc_get_cmd_intg__42__cmd;
                __Vfunc_prim_secded_inv_64_57_enc__45__data_o 
                    = __Vfunc_prim_secded_inv_64_57_enc__45__data_i;
                __Vfunc_prim_secded_inv_64_57_enc__45__data_o 
                    = ((0xfdffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__45__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x103fff800007fffULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__45__data_o))))) 
                          << 0x39U));
                __Vfunc_prim_secded_inv_64_57_enc__45__data_o 
                    = ((0xfbffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__45__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x17c1ff801ff801fULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__45__data_o))))) 
                          << 0x3aU));
                __Vfunc_prim_secded_inv_64_57_enc__45__data_o 
                    = ((0xf7ffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__45__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1bde1f87e0781e1ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__45__data_o))))) 
                          << 0x3bU));
                __Vfunc_prim_secded_inv_64_57_enc__45__data_o 
                    = ((0xefffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__45__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1deee3b8e388e22ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__45__data_o))))) 
                          << 0x3cU));
                __Vfunc_prim_secded_inv_64_57_enc__45__data_o 
                    = ((0xdfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__45__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1ef76cdb2c93244ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__45__data_o))))) 
                          << 0x3dU));
                __Vfunc_prim_secded_inv_64_57_enc__45__data_o 
                    = ((0xbfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__45__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1f7bb56d5525488ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__45__data_o))))) 
                          << 0x3eU));
                __Vfunc_prim_secded_inv_64_57_enc__45__data_o 
                    = ((0x7fffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__45__data_o) 
                       | ((QData)((IData)((1U & VL_REDXOR_64(
                                                             (0x1fbdda769a46910ULL 
                                                              & __Vfunc_prim_secded_inv_64_57_enc__45__data_o))))) 
                          << 0x3fU));
                __Vfunc_prim_secded_inv_64_57_enc__45__data_o 
                    = (0x5400000000000000ULL ^ __Vfunc_prim_secded_inv_64_57_enc__45__data_o);
                __Vfunc_prim_secded_inv_64_57_enc__45__Vfuncout 
                    = __Vfunc_prim_secded_inv_64_57_enc__45__data_o;
            }(), __Vfunc_prim_secded_inv_64_57_enc__45__Vfuncout));
    __Vfunc_get_cmd_intg__42__Vfuncout = __Vfunc_get_cmd_intg__42__cmd_intg;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
        = ((0xffff80ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
           | ((IData)(__Vfunc_get_cmd_intg__42__Vfuncout) 
              << 8U));
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/tlul_host.sv", 
                                                       81);
    while ((1U & (~ vlSelf->top_uart_tb__DOT__tl_d2h[0U]))) {
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           81);
    }
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] 
        = (0x3ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U]);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/tlul_host.sv", 
                                                       85);
    while ((1U & (~ (vlSelf->top_uart_tb__DOT__tl_d2h[2U] 
                     >> 1U)))) {
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           85);
    }
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
    vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       139);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       139);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       139);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       139);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       139);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       139);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       139);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       139);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       139);
    co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top_uart_tb.clk)", 
                                                       "rtl/top_uart_tb.sv", 
                                                       139);
    VL_WRITEF("[%0t] Preparing to send: %@ \n\n",64,
              VL_TIME_UNITED_Q(1000),-9,-1,&(__Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__msg));
    __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__unnamedblk2_1__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__unnamedblk2_1__DOT__i, 
                      VL_LEN_IN(__Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__msg))) {
        VL_WRITEF("[%0t] TX sent byte: %s \n\n",64,
                  VL_TIME_UNITED_Q(1000),-9,8,VL_GETC_N(__Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__msg,__Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__unnamedblk2_1__DOT__i));
        __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__47__wdata 
            = VL_GETC_N(__Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__msg,__Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__unnamedblk2_1__DOT__i);
        __Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__47__addr = 0x1cU;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
            = ((0x3fffffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
               | ((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__47__wdata)))) 
                  << 0x16U));
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] 
            = (((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__47__wdata)))) 
                >> 0xaU) | ((__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__47__addr 
                             << 0x1aU) | ((IData)((
                                                   (0xf00000000ULL 
                                                    | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__47__wdata))) 
                                                   >> 0x20U)) 
                                          << 0x16U)));
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] 
            = (((0x3fffffU & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__47__addr 
                              >> 6U)) | ((IData)(((0xf00000000ULL 
                                                   | (QData)((IData)(__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__47__wdata))) 
                                                  >> 0x20U)) 
                                         >> 0xaU)) 
               | (0x3c00000U & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_write32__47__addr 
                                >> 6U)));
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0x408U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
            = (0x4fffeU | (0xffc00001U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]));
        __Vfunc_get_data_intg__49__data = ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] 
                                            << 0xaU) 
                                           | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
                                              >> 0x16U));
        __Vfunc_prim_secded_inv_39_32_enc__50__data_i 
            = __Vfunc_get_data_intg__49__data;
        __Vfunc_prim_secded_inv_39_32_enc__50__data_o 
            = (QData)((IData)(__Vfunc_prim_secded_inv_39_32_enc__50__data_i));
        __Vfunc_prim_secded_inv_39_32_enc__50__data_o 
            = ((0x7effffffffULL & __Vfunc_prim_secded_inv_39_32_enc__50__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x2606bd25ULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__50__data_o))))) 
                  << 0x20U));
        __Vfunc_prim_secded_inv_39_32_enc__50__data_o 
            = ((0x7dffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__50__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xdeba8050ULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__50__data_o))))) 
                  << 0x21U));
        __Vfunc_prim_secded_inv_39_32_enc__50__data_o 
            = ((0x7bffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__50__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x413d89aaULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__50__data_o))))) 
                  << 0x22U));
        __Vfunc_prim_secded_inv_39_32_enc__50__data_o 
            = ((0x77ffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__50__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x31234ed1ULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__50__data_o))))) 
                  << 0x23U));
        __Vfunc_prim_secded_inv_39_32_enc__50__data_o 
            = ((0x6fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__50__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xc2c1323bULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__50__data_o))))) 
                  << 0x24U));
        __Vfunc_prim_secded_inv_39_32_enc__50__data_o 
            = ((0x5fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__50__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x2dcc624cULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__50__data_o))))) 
                  << 0x25U));
        __Vfunc_prim_secded_inv_39_32_enc__50__data_o 
            = ((0x3fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__50__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x98505586ULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__50__data_o))))) 
                  << 0x26U));
        __Vfunc_prim_secded_inv_39_32_enc__50__data_o 
            = (0x2a00000000ULL ^ __Vfunc_prim_secded_inv_39_32_enc__50__data_o);
        __Vfunc_prim_secded_inv_39_32_enc__50__Vfuncout 
            = __Vfunc_prim_secded_inv_39_32_enc__50__data_o;
        __Vfunc_get_data_intg__49__enc_data = __Vfunc_prim_secded_inv_39_32_enc__50__Vfuncout;
        __Vfunc_get_data_intg__49__data_intg = (0x7fU 
                                                & (IData)(
                                                          (__Vfunc_get_data_intg__49__enc_data 
                                                           >> 0x20U)));
        __Vfunc_get_data_intg__49__Vfuncout = __Vfunc_get_data_intg__49__data_intg;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
            = ((0xffffff01U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
               | ((IData)(__Vfunc_get_data_intg__49__Vfuncout) 
                  << 1U));
        __Vfunc_get_cmd_intg__51__tl[0U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U];
        __Vfunc_get_cmd_intg__51__tl[1U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U];
        __Vfunc_get_cmd_intg__51__tl[2U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U];
        __Vfunc_get_cmd_intg__51__tl[3U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U];
        __Vfunc_extract_h2d_cmd_intg__52__tl[0U] = 
            __Vfunc_get_cmd_intg__51__tl[0U];
        __Vfunc_extract_h2d_cmd_intg__52__tl[1U] = 
            __Vfunc_get_cmd_intg__51__tl[1U];
        __Vfunc_extract_h2d_cmd_intg__52__tl[2U] = 
            __Vfunc_get_cmd_intg__51__tl[2U];
        __Vfunc_extract_h2d_cmd_intg__52__tl[3U] = 
            __Vfunc_get_cmd_intg__51__tl[3U];
        __Vfunc_extract_h2d_cmd_intg__52__payload = 
            ((0x78000000000ULL & __Vfunc_extract_h2d_cmd_intg__52__payload) 
             | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__52__tl[2U] 
                                   << 6U) | (__Vfunc_extract_h2d_cmd_intg__52__tl[1U] 
                                             >> 0x1aU)))) 
                 << 7U) | (QData)((IData)(((0x70U & 
                                            (__Vfunc_extract_h2d_cmd_intg__52__tl[3U] 
                                             >> 3U)) 
                                           | (0xfU 
                                              & (__Vfunc_extract_h2d_cmd_intg__52__tl[1U] 
                                                 >> 0x16U)))))));
        __Vfunc_extract_h2d_cmd_intg__52__payload = 
            ((0x7fffffffffULL & __Vfunc_extract_h2d_cmd_intg__52__payload) 
             | ((QData)((IData)((0xfU & (__Vfunc_extract_h2d_cmd_intg__52__tl[0U] 
                                         >> 0xfU)))) 
                << 0x27U));
        __Vfunc_extract_h2d_cmd_intg__52__Vfuncout 
            = __Vfunc_extract_h2d_cmd_intg__52__payload;
        __Vfunc_get_cmd_intg__51__cmd = __Vfunc_extract_h2d_cmd_intg__52__Vfuncout;
        __Vfunc_get_cmd_intg__51__cmd_intg = (0x7fU 
                                              & (IData)(
                                                        (([&]() {
                            __Vfunc_prim_secded_inv_64_57_enc__53__data_i 
                                = __Vfunc_get_cmd_intg__51__cmd;
                            __Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                = __Vfunc_prim_secded_inv_64_57_enc__53__data_i;
                            __Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                = ((0xfdffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x103fff800007fffULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                      << 0x39U));
                            __Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                = ((0xfbffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x17c1ff801ff801fULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                      << 0x3aU));
                            __Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                = ((0xf7ffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x1bde1f87e0781e1ULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                      << 0x3bU));
                            __Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                = ((0xefffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x1deee3b8e388e22ULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                      << 0x3cU));
                            __Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                = ((0xdfffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x1ef76cdb2c93244ULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                      << 0x3dU));
                            __Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                = ((0xbfffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x1f7bb56d5525488ULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                      << 0x3eU));
                            __Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                = ((0x7fffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__53__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x1fbdda769a46910ULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__53__data_o))))) 
                                      << 0x3fU));
                            __Vfunc_prim_secded_inv_64_57_enc__53__data_o 
                                = (0x5400000000000000ULL 
                                   ^ __Vfunc_prim_secded_inv_64_57_enc__53__data_o);
                            __Vfunc_prim_secded_inv_64_57_enc__53__Vfuncout 
                                = __Vfunc_prim_secded_inv_64_57_enc__53__data_o;
                        }(), __Vfunc_prim_secded_inv_64_57_enc__53__Vfuncout) 
                                                         >> 0x39U)));
        __Vfunc_get_cmd_intg__51__unused_cmd_payload 
            = (0x1ffffffffffffffULL & ([&]() {
                    __Vfunc_prim_secded_inv_64_57_enc__54__data_i 
                        = __Vfunc_get_cmd_intg__51__cmd;
                    __Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                        = __Vfunc_prim_secded_inv_64_57_enc__54__data_i;
                    __Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                        = ((0xfdffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x103fff800007fffULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                              << 0x39U));
                    __Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                        = ((0xfbffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x17c1ff801ff801fULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                              << 0x3aU));
                    __Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                        = ((0xf7ffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x1bde1f87e0781e1ULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                              << 0x3bU));
                    __Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                        = ((0xefffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x1deee3b8e388e22ULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                              << 0x3cU));
                    __Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                        = ((0xdfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x1ef76cdb2c93244ULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                              << 0x3dU));
                    __Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                        = ((0xbfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x1f7bb56d5525488ULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                              << 0x3eU));
                    __Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                        = ((0x7fffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__54__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x1fbdda769a46910ULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__54__data_o))))) 
                              << 0x3fU));
                    __Vfunc_prim_secded_inv_64_57_enc__54__data_o 
                        = (0x5400000000000000ULL ^ __Vfunc_prim_secded_inv_64_57_enc__54__data_o);
                    __Vfunc_prim_secded_inv_64_57_enc__54__Vfuncout 
                        = __Vfunc_prim_secded_inv_64_57_enc__54__data_o;
                }(), __Vfunc_prim_secded_inv_64_57_enc__54__Vfuncout));
        __Vfunc_get_cmd_intg__51__Vfuncout = __Vfunc_get_cmd_intg__51__cmd_intg;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
            = ((0xffff80ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
               | ((IData)(__Vfunc_get_cmd_intg__51__Vfuncout) 
                  << 8U));
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           81);
        while ((1U & (~ vlSelf->top_uart_tb__DOT__tl_d2h[0U]))) {
            co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge top_uart_tb.clk)", 
                                                               "rtl/tlul_host.sv", 
                                                               81);
        }
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] 
            = (0x3ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U]);
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           85);
        while ((1U & (~ (vlSelf->top_uart_tb__DOT__tl_d2h[2U] 
                         >> 1U)))) {
            co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge top_uart_tb.clk)", 
                                                               "rtl/tlul_host.sv", 
                                                               85);
        }
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
        __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__unnamedblk2_1__DOT__i 
            = ((IData)(1U) + __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__unnamedblk2_1__DOT__i);
    }
    while ((VL_LTS_III(32, __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__received, 
                       VL_SHIFTL_III(32,32,32, VL_LEN_IN(__Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__msg), 3U)) 
            & VL_LTS_III(32, __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__tries, __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__max_tries))) {
        __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__tries 
            = ((IData)(1U) + __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__tries);
        __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__56__addr = 0x14U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
            = (0x4fffeU | (1U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]));
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] 
            = (0x3c00000U | (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__56__addr 
                             << 0x1aU));
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] 
            = ((1U & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__56__addr 
                      >> 6U)) | (0x3fffffeU & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__56__addr 
                                               >> 6U)));
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0x608U;
        __Vfunc_get_data_intg__58__data = 0U;
        __Vfunc_prim_secded_inv_39_32_enc__59__data_i 
            = __Vfunc_get_data_intg__58__data;
        __Vfunc_prim_secded_inv_39_32_enc__59__data_o 
            = (QData)((IData)(__Vfunc_prim_secded_inv_39_32_enc__59__data_i));
        __Vfunc_prim_secded_inv_39_32_enc__59__data_o 
            = ((0x7effffffffULL & __Vfunc_prim_secded_inv_39_32_enc__59__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x2606bd25ULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__59__data_o))))) 
                  << 0x20U));
        __Vfunc_prim_secded_inv_39_32_enc__59__data_o 
            = ((0x7dffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__59__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xdeba8050ULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__59__data_o))))) 
                  << 0x21U));
        __Vfunc_prim_secded_inv_39_32_enc__59__data_o 
            = ((0x7bffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__59__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x413d89aaULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__59__data_o))))) 
                  << 0x22U));
        __Vfunc_prim_secded_inv_39_32_enc__59__data_o 
            = ((0x77ffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__59__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x31234ed1ULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__59__data_o))))) 
                  << 0x23U));
        __Vfunc_prim_secded_inv_39_32_enc__59__data_o 
            = ((0x6fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__59__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0xc2c1323bULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__59__data_o))))) 
                  << 0x24U));
        __Vfunc_prim_secded_inv_39_32_enc__59__data_o 
            = ((0x5fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__59__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x2dcc624cULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__59__data_o))))) 
                  << 0x25U));
        __Vfunc_prim_secded_inv_39_32_enc__59__data_o 
            = ((0x3fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__59__data_o) 
               | ((QData)((IData)((1U & VL_REDXOR_64(
                                                     (0x98505586ULL 
                                                      & __Vfunc_prim_secded_inv_39_32_enc__59__data_o))))) 
                  << 0x26U));
        __Vfunc_prim_secded_inv_39_32_enc__59__data_o 
            = (0x2a00000000ULL ^ __Vfunc_prim_secded_inv_39_32_enc__59__data_o);
        __Vfunc_prim_secded_inv_39_32_enc__59__Vfuncout 
            = __Vfunc_prim_secded_inv_39_32_enc__59__data_o;
        __Vfunc_get_data_intg__58__enc_data = __Vfunc_prim_secded_inv_39_32_enc__59__Vfuncout;
        __Vfunc_get_data_intg__58__data_intg = (0x7fU 
                                                & (IData)(
                                                          (__Vfunc_get_data_intg__58__enc_data 
                                                           >> 0x20U)));
        __Vfunc_get_data_intg__58__Vfuncout = __Vfunc_get_data_intg__58__data_intg;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
            = ((0xffffff01U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
               | ((IData)(__Vfunc_get_data_intg__58__Vfuncout) 
                  << 1U));
        __Vfunc_get_cmd_intg__60__tl[0U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U];
        __Vfunc_get_cmd_intg__60__tl[1U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U];
        __Vfunc_get_cmd_intg__60__tl[2U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U];
        __Vfunc_get_cmd_intg__60__tl[3U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U];
        __Vfunc_extract_h2d_cmd_intg__61__tl[0U] = 
            __Vfunc_get_cmd_intg__60__tl[0U];
        __Vfunc_extract_h2d_cmd_intg__61__tl[1U] = 
            __Vfunc_get_cmd_intg__60__tl[1U];
        __Vfunc_extract_h2d_cmd_intg__61__tl[2U] = 
            __Vfunc_get_cmd_intg__60__tl[2U];
        __Vfunc_extract_h2d_cmd_intg__61__tl[3U] = 
            __Vfunc_get_cmd_intg__60__tl[3U];
        __Vfunc_extract_h2d_cmd_intg__61__payload = 
            ((0x78000000000ULL & __Vfunc_extract_h2d_cmd_intg__61__payload) 
             | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__61__tl[2U] 
                                   << 6U) | (__Vfunc_extract_h2d_cmd_intg__61__tl[1U] 
                                             >> 0x1aU)))) 
                 << 7U) | (QData)((IData)(((0x70U & 
                                            (__Vfunc_extract_h2d_cmd_intg__61__tl[3U] 
                                             >> 3U)) 
                                           | (0xfU 
                                              & (__Vfunc_extract_h2d_cmd_intg__61__tl[1U] 
                                                 >> 0x16U)))))));
        __Vfunc_extract_h2d_cmd_intg__61__payload = 
            ((0x7fffffffffULL & __Vfunc_extract_h2d_cmd_intg__61__payload) 
             | ((QData)((IData)((0xfU & (__Vfunc_extract_h2d_cmd_intg__61__tl[0U] 
                                         >> 0xfU)))) 
                << 0x27U));
        __Vfunc_extract_h2d_cmd_intg__61__Vfuncout 
            = __Vfunc_extract_h2d_cmd_intg__61__payload;
        __Vfunc_get_cmd_intg__60__cmd = __Vfunc_extract_h2d_cmd_intg__61__Vfuncout;
        __Vfunc_get_cmd_intg__60__cmd_intg = (0x7fU 
                                              & (IData)(
                                                        (([&]() {
                            __Vfunc_prim_secded_inv_64_57_enc__62__data_i 
                                = __Vfunc_get_cmd_intg__60__cmd;
                            __Vfunc_prim_secded_inv_64_57_enc__62__data_o 
                                = __Vfunc_prim_secded_inv_64_57_enc__62__data_i;
                            __Vfunc_prim_secded_inv_64_57_enc__62__data_o 
                                = ((0xfdffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__62__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x103fff800007fffULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__62__data_o))))) 
                                      << 0x39U));
                            __Vfunc_prim_secded_inv_64_57_enc__62__data_o 
                                = ((0xfbffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__62__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x17c1ff801ff801fULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__62__data_o))))) 
                                      << 0x3aU));
                            __Vfunc_prim_secded_inv_64_57_enc__62__data_o 
                                = ((0xf7ffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__62__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x1bde1f87e0781e1ULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__62__data_o))))) 
                                      << 0x3bU));
                            __Vfunc_prim_secded_inv_64_57_enc__62__data_o 
                                = ((0xefffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__62__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x1deee3b8e388e22ULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__62__data_o))))) 
                                      << 0x3cU));
                            __Vfunc_prim_secded_inv_64_57_enc__62__data_o 
                                = ((0xdfffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__62__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x1ef76cdb2c93244ULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__62__data_o))))) 
                                      << 0x3dU));
                            __Vfunc_prim_secded_inv_64_57_enc__62__data_o 
                                = ((0xbfffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__62__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x1f7bb56d5525488ULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__62__data_o))))) 
                                      << 0x3eU));
                            __Vfunc_prim_secded_inv_64_57_enc__62__data_o 
                                = ((0x7fffffffffffffffULL 
                                    & __Vfunc_prim_secded_inv_64_57_enc__62__data_o) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & VL_REDXOR_64(
                                                                      (0x1fbdda769a46910ULL 
                                                                       & __Vfunc_prim_secded_inv_64_57_enc__62__data_o))))) 
                                      << 0x3fU));
                            __Vfunc_prim_secded_inv_64_57_enc__62__data_o 
                                = (0x5400000000000000ULL 
                                   ^ __Vfunc_prim_secded_inv_64_57_enc__62__data_o);
                            __Vfunc_prim_secded_inv_64_57_enc__62__Vfuncout 
                                = __Vfunc_prim_secded_inv_64_57_enc__62__data_o;
                        }(), __Vfunc_prim_secded_inv_64_57_enc__62__Vfuncout) 
                                                         >> 0x39U)));
        __Vfunc_get_cmd_intg__60__unused_cmd_payload 
            = (0x1ffffffffffffffULL & ([&]() {
                    __Vfunc_prim_secded_inv_64_57_enc__63__data_i 
                        = __Vfunc_get_cmd_intg__60__cmd;
                    __Vfunc_prim_secded_inv_64_57_enc__63__data_o 
                        = __Vfunc_prim_secded_inv_64_57_enc__63__data_i;
                    __Vfunc_prim_secded_inv_64_57_enc__63__data_o 
                        = ((0xfdffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__63__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x103fff800007fffULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__63__data_o))))) 
                              << 0x39U));
                    __Vfunc_prim_secded_inv_64_57_enc__63__data_o 
                        = ((0xfbffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__63__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x17c1ff801ff801fULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__63__data_o))))) 
                              << 0x3aU));
                    __Vfunc_prim_secded_inv_64_57_enc__63__data_o 
                        = ((0xf7ffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__63__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x1bde1f87e0781e1ULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__63__data_o))))) 
                              << 0x3bU));
                    __Vfunc_prim_secded_inv_64_57_enc__63__data_o 
                        = ((0xefffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__63__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x1deee3b8e388e22ULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__63__data_o))))) 
                              << 0x3cU));
                    __Vfunc_prim_secded_inv_64_57_enc__63__data_o 
                        = ((0xdfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__63__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x1ef76cdb2c93244ULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__63__data_o))))) 
                              << 0x3dU));
                    __Vfunc_prim_secded_inv_64_57_enc__63__data_o 
                        = ((0xbfffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__63__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x1f7bb56d5525488ULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__63__data_o))))) 
                              << 0x3eU));
                    __Vfunc_prim_secded_inv_64_57_enc__63__data_o 
                        = ((0x7fffffffffffffffULL & __Vfunc_prim_secded_inv_64_57_enc__63__data_o) 
                           | ((QData)((IData)((1U & 
                                               VL_REDXOR_64(
                                                            (0x1fbdda769a46910ULL 
                                                             & __Vfunc_prim_secded_inv_64_57_enc__63__data_o))))) 
                              << 0x3fU));
                    __Vfunc_prim_secded_inv_64_57_enc__63__data_o 
                        = (0x5400000000000000ULL ^ __Vfunc_prim_secded_inv_64_57_enc__63__data_o);
                    __Vfunc_prim_secded_inv_64_57_enc__63__Vfuncout 
                        = __Vfunc_prim_secded_inv_64_57_enc__63__data_o;
                }(), __Vfunc_prim_secded_inv_64_57_enc__63__Vfuncout));
        __Vfunc_get_cmd_intg__60__Vfuncout = __Vfunc_get_cmd_intg__60__cmd_intg;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
            = ((0xffff80ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
               | ((IData)(__Vfunc_get_cmd_intg__60__Vfuncout) 
                  << 8U));
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           128);
        while ((1U & (~ vlSelf->top_uart_tb__DOT__tl_d2h[0U]))) {
            co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge top_uart_tb.clk)", 
                                                               "rtl/tlul_host.sv", 
                                                               128);
        }
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] 
            = (0x3ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U]);
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/tlul_host.sv", 
                                                           132);
        while ((1U & (~ (vlSelf->top_uart_tb__DOT__tl_d2h[2U] 
                         >> 1U)))) {
            co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge top_uart_tb.clk)", 
                                                               "rtl/tlul_host.sv", 
                                                               132);
        }
        __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__56__rdata 
            = ((vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                << 0x10U) | (vlSelf->top_uart_tb__DOT__tl_d2h[0U] 
                             >> 0x10U));
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
        __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__r 
            = __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__56__rdata;
        if (VL_UNLIKELY((1U & (~ (__Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__r 
                                  >> 5U))))) {
            __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__65__addr = 0x18U;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
                = (0x4fffeU | (1U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]));
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] 
                = (0x3c00000U | (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__65__addr 
                                 << 0x1aU));
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] 
                = ((1U & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__65__addr 
                          >> 6U)) | (0x3fffffeU & (__Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__65__addr 
                                                   >> 6U)));
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0x608U;
            __Vfunc_get_data_intg__67__data = 0U;
            __Vfunc_prim_secded_inv_39_32_enc__68__data_i 
                = __Vfunc_get_data_intg__67__data;
            __Vfunc_prim_secded_inv_39_32_enc__68__data_o 
                = (QData)((IData)(__Vfunc_prim_secded_inv_39_32_enc__68__data_i));
            __Vfunc_prim_secded_inv_39_32_enc__68__data_o 
                = ((0x7effffffffULL & __Vfunc_prim_secded_inv_39_32_enc__68__data_o) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x2606bd25ULL 
                                                          & __Vfunc_prim_secded_inv_39_32_enc__68__data_o))))) 
                      << 0x20U));
            __Vfunc_prim_secded_inv_39_32_enc__68__data_o 
                = ((0x7dffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__68__data_o) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xdeba8050ULL 
                                                          & __Vfunc_prim_secded_inv_39_32_enc__68__data_o))))) 
                      << 0x21U));
            __Vfunc_prim_secded_inv_39_32_enc__68__data_o 
                = ((0x7bffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__68__data_o) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x413d89aaULL 
                                                          & __Vfunc_prim_secded_inv_39_32_enc__68__data_o))))) 
                      << 0x22U));
            __Vfunc_prim_secded_inv_39_32_enc__68__data_o 
                = ((0x77ffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__68__data_o) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x31234ed1ULL 
                                                          & __Vfunc_prim_secded_inv_39_32_enc__68__data_o))))) 
                      << 0x23U));
            __Vfunc_prim_secded_inv_39_32_enc__68__data_o 
                = ((0x6fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__68__data_o) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0xc2c1323bULL 
                                                          & __Vfunc_prim_secded_inv_39_32_enc__68__data_o))))) 
                      << 0x24U));
            __Vfunc_prim_secded_inv_39_32_enc__68__data_o 
                = ((0x5fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__68__data_o) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x2dcc624cULL 
                                                          & __Vfunc_prim_secded_inv_39_32_enc__68__data_o))))) 
                      << 0x25U));
            __Vfunc_prim_secded_inv_39_32_enc__68__data_o 
                = ((0x3fffffffffULL & __Vfunc_prim_secded_inv_39_32_enc__68__data_o) 
                   | ((QData)((IData)((1U & VL_REDXOR_64(
                                                         (0x98505586ULL 
                                                          & __Vfunc_prim_secded_inv_39_32_enc__68__data_o))))) 
                      << 0x26U));
            __Vfunc_prim_secded_inv_39_32_enc__68__data_o 
                = (0x2a00000000ULL ^ __Vfunc_prim_secded_inv_39_32_enc__68__data_o);
            __Vfunc_prim_secded_inv_39_32_enc__68__Vfuncout 
                = __Vfunc_prim_secded_inv_39_32_enc__68__data_o;
            __Vfunc_get_data_intg__67__enc_data = __Vfunc_prim_secded_inv_39_32_enc__68__Vfuncout;
            __Vfunc_get_data_intg__67__data_intg = 
                (0x7fU & (IData)((__Vfunc_get_data_intg__67__enc_data 
                                  >> 0x20U)));
            __Vfunc_get_data_intg__67__Vfuncout = __Vfunc_get_data_intg__67__data_intg;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
                = ((0xffffff01U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
                   | ((IData)(__Vfunc_get_data_intg__67__Vfuncout) 
                      << 1U));
            __Vfunc_get_cmd_intg__69__tl[0U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U];
            __Vfunc_get_cmd_intg__69__tl[1U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U];
            __Vfunc_get_cmd_intg__69__tl[2U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U];
            __Vfunc_get_cmd_intg__69__tl[3U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U];
            __Vfunc_extract_h2d_cmd_intg__70__tl[0U] 
                = __Vfunc_get_cmd_intg__69__tl[0U];
            __Vfunc_extract_h2d_cmd_intg__70__tl[1U] 
                = __Vfunc_get_cmd_intg__69__tl[1U];
            __Vfunc_extract_h2d_cmd_intg__70__tl[2U] 
                = __Vfunc_get_cmd_intg__69__tl[2U];
            __Vfunc_extract_h2d_cmd_intg__70__tl[3U] 
                = __Vfunc_get_cmd_intg__69__tl[3U];
            __Vfunc_extract_h2d_cmd_intg__70__payload 
                = ((0x78000000000ULL & __Vfunc_extract_h2d_cmd_intg__70__payload) 
                   | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__70__tl[2U] 
                                         << 6U) | (
                                                   __Vfunc_extract_h2d_cmd_intg__70__tl[1U] 
                                                   >> 0x1aU)))) 
                       << 7U) | (QData)((IData)(((0x70U 
                                                  & (__Vfunc_extract_h2d_cmd_intg__70__tl[3U] 
                                                     >> 3U)) 
                                                 | (0xfU 
                                                    & (__Vfunc_extract_h2d_cmd_intg__70__tl[1U] 
                                                       >> 0x16U)))))));
            __Vfunc_extract_h2d_cmd_intg__70__payload 
                = ((0x7fffffffffULL & __Vfunc_extract_h2d_cmd_intg__70__payload) 
                   | ((QData)((IData)((0xfU & (__Vfunc_extract_h2d_cmd_intg__70__tl[0U] 
                                               >> 0xfU)))) 
                      << 0x27U));
            __Vfunc_extract_h2d_cmd_intg__70__Vfuncout 
                = __Vfunc_extract_h2d_cmd_intg__70__payload;
            __Vfunc_get_cmd_intg__69__cmd = __Vfunc_extract_h2d_cmd_intg__70__Vfuncout;
            __Vfunc_get_cmd_intg__69__cmd_intg = (0x7fU 
                                                  & (IData)(
                                                            (([&]() {
                                __Vfunc_prim_secded_inv_64_57_enc__71__data_i 
                                    = __Vfunc_get_cmd_intg__69__cmd;
                                __Vfunc_prim_secded_inv_64_57_enc__71__data_o 
                                    = __Vfunc_prim_secded_inv_64_57_enc__71__data_i;
                                __Vfunc_prim_secded_inv_64_57_enc__71__data_o 
                                    = ((0xfdffffffffffffffULL 
                                        & __Vfunc_prim_secded_inv_64_57_enc__71__data_o) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & VL_REDXOR_64(
                                                                          (0x103fff800007fffULL 
                                                                           & __Vfunc_prim_secded_inv_64_57_enc__71__data_o))))) 
                                          << 0x39U));
                                __Vfunc_prim_secded_inv_64_57_enc__71__data_o 
                                    = ((0xfbffffffffffffffULL 
                                        & __Vfunc_prim_secded_inv_64_57_enc__71__data_o) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & VL_REDXOR_64(
                                                                          (0x17c1ff801ff801fULL 
                                                                           & __Vfunc_prim_secded_inv_64_57_enc__71__data_o))))) 
                                          << 0x3aU));
                                __Vfunc_prim_secded_inv_64_57_enc__71__data_o 
                                    = ((0xf7ffffffffffffffULL 
                                        & __Vfunc_prim_secded_inv_64_57_enc__71__data_o) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & VL_REDXOR_64(
                                                                          (0x1bde1f87e0781e1ULL 
                                                                           & __Vfunc_prim_secded_inv_64_57_enc__71__data_o))))) 
                                          << 0x3bU));
                                __Vfunc_prim_secded_inv_64_57_enc__71__data_o 
                                    = ((0xefffffffffffffffULL 
                                        & __Vfunc_prim_secded_inv_64_57_enc__71__data_o) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & VL_REDXOR_64(
                                                                          (0x1deee3b8e388e22ULL 
                                                                           & __Vfunc_prim_secded_inv_64_57_enc__71__data_o))))) 
                                          << 0x3cU));
                                __Vfunc_prim_secded_inv_64_57_enc__71__data_o 
                                    = ((0xdfffffffffffffffULL 
                                        & __Vfunc_prim_secded_inv_64_57_enc__71__data_o) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & VL_REDXOR_64(
                                                                          (0x1ef76cdb2c93244ULL 
                                                                           & __Vfunc_prim_secded_inv_64_57_enc__71__data_o))))) 
                                          << 0x3dU));
                                __Vfunc_prim_secded_inv_64_57_enc__71__data_o 
                                    = ((0xbfffffffffffffffULL 
                                        & __Vfunc_prim_secded_inv_64_57_enc__71__data_o) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & VL_REDXOR_64(
                                                                          (0x1f7bb56d5525488ULL 
                                                                           & __Vfunc_prim_secded_inv_64_57_enc__71__data_o))))) 
                                          << 0x3eU));
                                __Vfunc_prim_secded_inv_64_57_enc__71__data_o 
                                    = ((0x7fffffffffffffffULL 
                                        & __Vfunc_prim_secded_inv_64_57_enc__71__data_o) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & VL_REDXOR_64(
                                                                          (0x1fbdda769a46910ULL 
                                                                           & __Vfunc_prim_secded_inv_64_57_enc__71__data_o))))) 
                                          << 0x3fU));
                                __Vfunc_prim_secded_inv_64_57_enc__71__data_o 
                                    = (0x5400000000000000ULL 
                                       ^ __Vfunc_prim_secded_inv_64_57_enc__71__data_o);
                                __Vfunc_prim_secded_inv_64_57_enc__71__Vfuncout 
                                    = __Vfunc_prim_secded_inv_64_57_enc__71__data_o;
                            }(), __Vfunc_prim_secded_inv_64_57_enc__71__Vfuncout) 
                                                             >> 0x39U)));
            __Vfunc_get_cmd_intg__69__unused_cmd_payload 
                = (0x1ffffffffffffffULL & ([&]() {
                        __Vfunc_prim_secded_inv_64_57_enc__72__data_i 
                            = __Vfunc_get_cmd_intg__69__cmd;
                        __Vfunc_prim_secded_inv_64_57_enc__72__data_o 
                            = __Vfunc_prim_secded_inv_64_57_enc__72__data_i;
                        __Vfunc_prim_secded_inv_64_57_enc__72__data_o 
                            = ((0xfdffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__72__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x103fff800007fffULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__72__data_o))))) 
                                  << 0x39U));
                        __Vfunc_prim_secded_inv_64_57_enc__72__data_o 
                            = ((0xfbffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__72__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x17c1ff801ff801fULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__72__data_o))))) 
                                  << 0x3aU));
                        __Vfunc_prim_secded_inv_64_57_enc__72__data_o 
                            = ((0xf7ffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__72__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1bde1f87e0781e1ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__72__data_o))))) 
                                  << 0x3bU));
                        __Vfunc_prim_secded_inv_64_57_enc__72__data_o 
                            = ((0xefffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__72__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1deee3b8e388e22ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__72__data_o))))) 
                                  << 0x3cU));
                        __Vfunc_prim_secded_inv_64_57_enc__72__data_o 
                            = ((0xdfffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__72__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1ef76cdb2c93244ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__72__data_o))))) 
                                  << 0x3dU));
                        __Vfunc_prim_secded_inv_64_57_enc__72__data_o 
                            = ((0xbfffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__72__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1f7bb56d5525488ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__72__data_o))))) 
                                  << 0x3eU));
                        __Vfunc_prim_secded_inv_64_57_enc__72__data_o 
                            = ((0x7fffffffffffffffULL 
                                & __Vfunc_prim_secded_inv_64_57_enc__72__data_o) 
                               | ((QData)((IData)((1U 
                                                   & VL_REDXOR_64(
                                                                  (0x1fbdda769a46910ULL 
                                                                   & __Vfunc_prim_secded_inv_64_57_enc__72__data_o))))) 
                                  << 0x3fU));
                        __Vfunc_prim_secded_inv_64_57_enc__72__data_o 
                            = (0x5400000000000000ULL 
                               ^ __Vfunc_prim_secded_inv_64_57_enc__72__data_o);
                        __Vfunc_prim_secded_inv_64_57_enc__72__Vfuncout 
                            = __Vfunc_prim_secded_inv_64_57_enc__72__data_o;
                    }(), __Vfunc_prim_secded_inv_64_57_enc__72__Vfuncout));
            __Vfunc_get_cmd_intg__69__Vfuncout = __Vfunc_get_cmd_intg__69__cmd_intg;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] 
                = ((0xffff80ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U]) 
                   | ((IData)(__Vfunc_get_cmd_intg__69__Vfuncout) 
                      << 8U));
            co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge top_uart_tb.clk)", 
                                                               "rtl/tlul_host.sv", 
                                                               128);
            while ((1U & (~ vlSelf->top_uart_tb__DOT__tl_d2h[0U]))) {
                co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge top_uart_tb.clk)", 
                                                                   "rtl/tlul_host.sv", 
                                                                   128);
            }
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] 
                = (0x3ffU & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U]);
            co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge top_uart_tb.clk)", 
                                                               "rtl/tlul_host.sv", 
                                                               132);
            while ((1U & (~ (vlSelf->top_uart_tb__DOT__tl_d2h[2U] 
                             >> 1U)))) {
                co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge top_uart_tb.clk)", 
                                                                   "rtl/tlul_host.sv", 
                                                                   132);
            }
            __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__65__rdata 
                = ((vlSelf->top_uart_tb__DOT__tl_d2h[1U] 
                    << 0x10U) | (vlSelf->top_uart_tb__DOT__tl_d2h[0U] 
                                 >> 0x10U));
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U] = 0x4ffffU;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U] = 0U;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U] = 0U;
            vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U] = 0U;
            __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__r 
                = __Vtask_top_uart_tb__DOT__u_host__DOT__tl_read32__65__rdata;
            __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__b 
                = (0xffU & __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__r);
            VL_WRITEF("%c",8,__Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__b);
            __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__received 
                = ((IData)(1U) + __Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__received);
        }
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/top_uart_tb.sv", 
                                                           161);
    }
    VL_WRITEF("\n[%0t] RX done: %0d bytes\n",64,VL_TIME_UNITED_Q(1000),
              -9,32,__Vtask_top_uart_tb__DOT__tx_rx_demo_hello__28__received);
    top_uart_tb__DOT____Vrepeat3 = 0xc8U;
    while (VL_LTS_III(32, 0U, top_uart_tb__DOT____Vrepeat3)) {
        co_await vlSelf->__VtrigSched_he1394c4f__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top_uart_tb.clk)", 
                                                           "rtl/top_uart_tb.sv", 
                                                           173);
        top_uart_tb__DOT____Vrepeat3 = (top_uart_tb__DOT____Vrepeat3 
                                        - (IData)(1U));
    }
    VL_FINISH_MT("rtl/top_uart_tb.sv", 174, "");
}

VL_INLINE_OPT void Vtop_uart_tb___024root___act_sequent__TOP__0(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->top_uart_tb__DOT__cio_rx_i = vlSelf->top_uart_tb__DOT__cio_tx_o;
    vlSelf->top_uart_tb__DOT__cio_tx_o = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q)
                                           ? (IData)(vlSelf->top_uart_tb__DOT__cio_rx_i)
                                           : (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_out_q));
}

VL_INLINE_OPT void Vtop_uart_tb___024root___act_sequent__TOP__1(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___act_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x4000U & ((IData)(((0U != (0x60000000U 
                                              & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                      | (0x60000000U 
                                         == (0x60000000U 
                                             & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                             << 0xeU)) | ((0x2000U 
                                           & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0x18000000U 
                                                         & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                       | (0x18000000U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                              << 0xdU)) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0x6000000U 
                                                            & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                          | (0x6000000U 
                                                             == 
                                                             (0x6000000U 
                                                              & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0x1800000U 
                                                               & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                             | (0x1800000U 
                                                                == 
                                                                (0x1800000U 
                                                                 & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x600000U 
                                                                  & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                | (0x600000U 
                                                                   == 
                                                                   (0x600000U 
                                                                    & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x180000U 
                                                                     & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                   | (0x180000U 
                                                                      == 
                                                                      (0x180000U 
                                                                       & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0x60000U 
                                                                        & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                      | (0x60000U 
                                                                         == 
                                                                         (0x60000U 
                                                                          & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        ((0U 
                                                                          != 
                                                                          (0x18000U 
                                                                           & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                         | (0x18000U 
                                                                            == 
                                                                            (0x18000U 
                                                                             & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           ((0U 
                                                                             != 
                                                                             (0x6000U 
                                                                              & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                            | (0x6000U 
                                                                               == 
                                                                               (0x6000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              ((0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                               | (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x180U 
                                                                                == 
                                                                                (0x180U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)))))))))))))))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vtop_uart_tb___024root___act_sequent__TOP__2(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___act_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x8000000U & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                << 0xfU)) | ((0x4000000U 
                                              & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                 << 0xfU)) 
                                             | ((0x2000000U 
                                                 & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                    << 0xfU)) 
                                                | ((0x1000000U 
                                                    & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                       << 0xfU)) 
                                                   | ((0x800000U 
                                                       & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                          << 0xfU)) 
                                                      | ((0x400000U 
                                                          & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                             << 0xfU)) 
                                                         | ((0x200000U 
                                                             & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                << 0xfU)) 
                                                            | ((0x100000U 
                                                                & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                   << 0xfU)) 
                                                               | ((0x80000U 
                                                                   & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                      << 0xfU)) 
                                                                  | ((0x40000U 
                                                                      & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                         << 0xfU)) 
                                                                     | ((0x20000U 
                                                                         & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                            << 0xfU)) 
                                                                        | ((0x10000U 
                                                                            & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                               << 0xfU)) 
                                                                           | ((0x8000U 
                                                                               & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                                << 0xfU)) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))))))))))))))))))))))))))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree 
        = __Vtemp_1;
}

extern const VlUnpacked<CData/*2:0*/, 512> Vtop_uart_tb__ConstPool__TABLE_h78c391ae_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop_uart_tb__ConstPool__TABLE_hef47d439_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop_uart_tb__ConstPool__TABLE_h4848046c_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop_uart_tb__ConstPool__TABLE_he56e39c1_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop_uart_tb__ConstPool__TABLE_hb3c70136_0;

VL_INLINE_OPT void Vtop_uart_tb___024root___act_comb__TOP__0(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger;
    top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_err 
        = (1U & (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree 
                 | ((~ ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addrmiss)) 
                        & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we))) 
                    & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__err_q) 
            | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__intg_err) 
               | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_err))) 
           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
    top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d) 
           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
    __Vtableidx1 = ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                      | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint)) 
                     << 8U) | ((((IData)(top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger)
                                  ? 1U : 3U) << 5U) 
                               | ((((IData)(top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger) 
                                    | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger)) 
                                   << 4U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d) 
                                              << 3U) 
                                             | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
        = Vtop_uart_tb__ConstPool__TABLE_h78c391ae_0
        [__Vtableidx1];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd 
        = Vtop_uart_tb__ConstPool__TABLE_hef47d439_0
        [__Vtableidx1];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd 
        = Vtop_uart_tb__ConstPool__TABLE_h4848046c_0
        [__Vtableidx1];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr 
        = Vtop_uart_tb__ConstPool__TABLE_he56e39c1_0
        [__Vtableidx1];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr 
        = Vtop_uart_tb__ConstPool__TABLE_hb3c70136_0
        [__Vtableidx1];
}

void Vtop_uart_tb___024root___eval_act(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop_uart_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop_uart_tb___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop_uart_tb___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop_uart_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h3fa4906c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h80cd2b9a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h4d34b17c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_he79223a6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h0556af3d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_uart_tb__ConstPool__TABLE_h754b77b1_0;

VL_INLINE_OPT void Vtop_uart_tb___024root___nba_sequent__TOP__0(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp = 0;
    QData/*63:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o = 0;
    QData/*38:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o;
    top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o;
    top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__75__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__75__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__75__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__75__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__75__payload;
    __Vfunc_extract_d2h_rsp_intg__75__payload = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    IData/*16:0*/ __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__nco_sum_q;
    __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__nco_sum_q = 0;
    CData/*5:0*/ __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    CData/*6:0*/ __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0;
    // Body
    vlSelf->__Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelf->__Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__nco_sum_q 
        = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__nco_sum_q;
    vlSelf->top_uart_tb__DOT__lsio_trigger_o = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
                                                && ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_tx_watermark) 
                                                    | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_watermark)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr)) 
               & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
               & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_uart_idle_q 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_uart_idle));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__wdata_qe 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__fifo_ctrl_qe 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && (0xfU == (0xfU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_empty__hw2reg_intr_state_d_o));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_watermark__hw2reg_intr_state_d_o));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_watermark__hw2reg_intr_state_d_o));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q) 
              & (1U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_sync_q2 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_sync_q1));
    vlSelf->top_uart_tb__DOT__intr_rx_watermark_o = 
        ((IData)(vlSelf->top_uart_tb__DOT__rst_n) && 
         ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_watermark__hw2reg_intr_state_d_o) 
          & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q)));
    vlSelf->top_uart_tb__DOT__intr_tx_empty_o = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
                                                 && ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_empty__hw2reg_intr_state_d_o) 
                                                     & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q)));
    vlSelf->top_uart_tb__DOT__intr_tx_watermark_o = 
        ((IData)(vlSelf->top_uart_tb__DOT__rst_n) && 
         ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_watermark__hw2reg_intr_state_d_o) 
          & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)));
    vlSelf->top_uart_tb__DOT__intr_rx_parity_err_o 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
               & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q)));
    vlSelf->top_uart_tb__DOT__intr_rx_timeout_o = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
                                                   && ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                       & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q)));
    vlSelf->top_uart_tb__DOT__intr_rx_break_err_o = 
        ((IData)(vlSelf->top_uart_tb__DOT__rst_n) && 
         ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
          & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q)));
    vlSelf->top_uart_tb__DOT__intr_rx_frame_err_o = 
        ((IData)(vlSelf->top_uart_tb__DOT__rst_n) && 
         ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
          & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q)));
    vlSelf->top_uart_tb__DOT__intr_rx_overflow_o = 
        ((IData)(vlSelf->top_uart_tb__DOT__rst_n) && 
         ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
          & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q)));
    vlSelf->top_uart_tb__DOT__intr_tx_done_o = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
                                                && ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                                    & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_out_q 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q)
                ? (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q)
                : ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                   || (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tx_q))));
    if (vlSelf->top_uart_tb__DOT__rst_n) {
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__break_st_q) {
            if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__break_st_q) {
                if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_in) {
                    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__break_st_q = 0U;
                }
            } else {
                vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__break_st_q = 0U;
            }
        } else if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_break_err) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__break_st_q = 1U;
        }
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if ((0x10000U & vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__nco_sum_q)) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_val_q 
                = ((0xfffeU & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_val_q) 
                               << 1U)) | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_in));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q 
                = (1U & (((IData)(1U) + (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q)) 
                         >> 4U));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q)));
        } else {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q = 0U;
        }
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_fifo_rxrst) {
            vlSelf->__Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        } else {
            if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                vlSelf->__Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt;
            } else if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlSelf->__Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt;
            } else if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        }
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_fifo_txrst) {
            vlSelf->__Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
            __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        } else {
            if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set) {
                vlSelf->__Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt;
            } else if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlSelf->__Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)));
            }
            if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set) {
                __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt;
            } else if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) {
                __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
            }
        }
        if (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
             | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q))) {
            __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__nco_sum_q 
                = (0x1ffffU & ((0xffffU & vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__nco_sum_q) 
                               + (0xffffU & (vlSelf->top_uart_tb__DOT__u_dut__DOT__reg2hw[2U] 
                                             >> 0xeU))));
        }
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o 
            = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd) 
                << 1U) | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd));
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_timeout_count_q 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_timeout_count_d;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_depth;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d;
        if (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__intg_err) 
             | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_err))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__err_q = 1U;
        }
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_error) 
                   | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q 
                = ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_error) 
                     | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next);
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q 
                = (3U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                         >> 2U));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q 
                = (0xffU & ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                             << 6U) | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[2U] 
                                       >> 0x1aU)));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 1U;
        } else if ((IData)(((vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                             >> 1U) & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U]))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        }
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) {
            if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) {
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q 
                    = (1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                             >> 0x17U));
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q 
                    = (1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                             >> 0x16U));
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q 
                    = (7U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                             >> 0x1bU));
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q 
                    = (7U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                             >> 0x18U));
            } else {
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = 0U;
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = 0U;
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = 0U;
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = 0U;
            }
        }
        if ((0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                         >> 0x17U));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                         >> 0x1eU));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q 
                = (1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                         >> 0x16U));
        }
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en) {
            if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en) {
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                    = (0xffffffU & ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                     << 0xaU) | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                                 >> 0x16U)));
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q 
                    = (1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                             >> 0x15U));
            } else {
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = 0U;
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = 0U;
            }
        }
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__allzero_cnt_q 
                = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__allzero_cnt_d;
        }
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en) {
            if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en) {
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q 
                    = (0xffffU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                  >> 6U));
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q 
                    = (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                       >> 0x1eU);
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q 
                    = (1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                             >> 0x18U));
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q 
                    = (1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                             >> 0x1dU));
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q 
                    = (1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                             >> 0x1bU));
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q 
                    = (1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                             >> 0x1cU));
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q 
                    = (1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                             >> 0x16U));
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q 
                    = (1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                             >> 0x17U));
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q 
                    = (1U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                             >> 0x1aU));
            } else {
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q = 0U;
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = 0U;
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q = 0U;
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = 0U;
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q = 0U;
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q = 0U;
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q = 0U;
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q = 0U;
                vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q = 0U;
            }
        }
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d;
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
                   & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                      >> 0x17U));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
                   & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                      >> 0x1eU));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
                   & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                      >> 0x16U));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
                   & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                      >> 0x1dU));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
                   & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                      >> 0x1cU));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
                   & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                      >> 0x1bU));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
                   & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                      >> 0x1aU));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
                   & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                      >> 0x19U));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
                   & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                      >> 0x18U));
        }
        if (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_parity_err__hw2reg_intr_state_de_o) 
             | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q 
                = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data;
        }
        if (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_timeout__hw2reg_intr_state_de_o) 
             | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q 
                = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data;
        }
        if (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_break_err__hw2reg_intr_state_de_o) 
             | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q 
                = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data;
        }
        if (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o) 
             | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q 
                = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data;
        }
        if (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o) 
             | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q 
                = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data;
        }
        if (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o) 
             | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q 
                = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data;
        }
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en) 
                   & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                      >> 0x16U));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en) 
                   & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                      >> 0x17U));
        }
    } else {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__break_st_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_val_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelf->__Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        vlSelf->__Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q = 0U;
        __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q = 0U;
        __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__nco_sum_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o = 2U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q = 0x7ffU;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_timeout_count_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__err_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__allzero_cnt_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q = 0U;
    }
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q 
        = __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q;
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__nco_sum_q 
        = __Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__nco_sum_q;
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x40U & ((~ ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                        >> 6U)) << 6U));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set_cnt 
        = (0x20U & ((~ ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                        >> 5U)) << 5U));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_frame_err 
        = ((~ ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
               >> 0xaU)) & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q 
        = ((IData)(vlSelf->top_uart_tb__DOT__rst_n) 
           && (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_sync_q1 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_sync));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_fifo_txrst 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
           & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__fifo_ctrl_qe));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_fifo_rxrst 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
           & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__fifo_ctrl_qe));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_timeout 
        = ((vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
            == vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_timeout_count_q) 
           & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_parity_err 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
           & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
              & (VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                         >> 1U))) ^ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[0U] 
        = (IData)((((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x39U) | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                  << 0x31U) | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & (~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[1U] 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
            << 0x1eU) | (IData)(((((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                   << 0x39U) | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                 << 0x31U) 
                                                | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                                                       << 1U) 
                                                                      | (1U 
                                                                         & (~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q))))))))) 
                                 >> 0x20U)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[2U] 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                      >> 2U));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[0U] 
        = (0xffff0003U & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[0U]);
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tx_q 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_wvalid 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
           & ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_frame_err)) 
              & (~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_parity_err))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = (QData)((IData)(((vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                            << 0x10U) | (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                         >> 0x10U))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7effffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x20U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7dffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x21U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7bffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x22U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x77ffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x23U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x6fffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x24U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x5fffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x25U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x3fffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x26U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = (0x2a00000000ULL ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o);
    __Vfunc_extract_d2h_rsp_intg__75__tl[0U] = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[0U];
    __Vfunc_extract_d2h_rsp_intg__75__tl[1U] = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[1U];
    __Vfunc_extract_d2h_rsp_intg__75__tl[2U] = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[2U];
    __Vfunc_extract_d2h_rsp_intg__75__payload = ((0x38U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__75__tl[2U] 
                                                      << 5U) 
                                                     | (0x18U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__75__tl[1U] 
                                                           >> 0x1bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__75__tl[1U] 
                                                        >> 0x18U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__75__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__75__Vfuncout = __Vfunc_extract_d2h_rsp_intg__75__payload;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__75__Vfuncout;
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_uart_idle 
        = (1U & ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q)) 
                 | (0U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq = 0U;
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq = 0U;
    __Vtableidx3 = (((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                       ^ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq)) 
                      & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                         ^ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq))) 
                     << 6U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
                                << 5U) | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd) 
                                            ^ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd)) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d 
        = Vtop_uart_tb__ConstPool__TABLE_h3fa4906c_0
        [__Vtableidx3];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d 
        = Vtop_uart_tb__ConstPool__TABLE_h80cd2b9a_0
        [__Vtableidx3];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d 
        = Vtop_uart_tb__ConstPool__TABLE_h4d34b17c_0
        [__Vtableidx3];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint 
        = Vtop_uart_tb__ConstPool__TABLE_he79223a6_0
        [__Vtableidx3];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq 
        = (1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n)));
    __Vtableidx2 = (((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                       ^ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq)) 
                      & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                         ^ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq))) 
                     << 6U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
                                << 5U) | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd) 
                                            ^ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd)) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q) 
                                               << 2U) 
                                              | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d 
        = Vtop_uart_tb__ConstPool__TABLE_h3fa4906c_0
        [__Vtableidx2];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
        = Vtop_uart_tb__ConstPool__TABLE_h80cd2b9a_0
        [__Vtableidx2];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d 
        = Vtop_uart_tb__ConstPool__TABLE_h4d34b17c_0
        [__Vtableidx2];
    top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o 
        = Vtop_uart_tb__ConstPool__TABLE_h0556af3d_0
        [__Vtableidx2];
    top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o 
        = Vtop_uart_tb__ConstPool__TABLE_h754b77b1_0
        [__Vtableidx2];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint 
        = Vtop_uart_tb__ConstPool__TABLE_he79223a6_0
        [__Vtableidx2];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq 
        = (1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_sync 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__sync_rx__DOT__intq));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (QData)((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfdffffffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x103fff800007fffULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x39U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfbffffffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x17c1ff801ff801fULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3aU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xf7ffffffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1bde1f87e0781e1ULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3bU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xefffffffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1deee3b8e388e22ULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3cU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xdfffffffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1ef76cdb2c93244ULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3dU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xbfffffffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1f7bb56d5525488ULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3eU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0x7fffffffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1fbdda769a46910ULL 
                                                  & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3fU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (0x5400000000000000ULL ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o);
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger 
        = (((IData)(top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o) 
            | (IData)(top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o)) 
           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
    vlSelf->top_uart_tb__DOT__tl_d2h[0U] = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[0U];
    vlSelf->top_uart_tb__DOT__tl_d2h[1U] = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[1U];
    vlSelf->top_uart_tb__DOT__tl_d2h[2U] = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[2U];
    vlSelf->top_uart_tb__DOT__tl_d2h[0U] = ((0xffff0003U 
                                             & vlSelf->top_uart_tb__DOT__tl_d2h[0U]) 
                                            | (0xfffffffcU 
                                               & ((0xfe00U 
                                                   & ((IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
                                                               >> 0x39U)) 
                                                      << 9U)) 
                                                  | (0x1fcU 
                                                     & ((IData)(
                                                                (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
                                                                 >> 0x20U)) 
                                                        << 2U)))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_in 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q)
            ? (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tx_q)
            : ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
               | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q)
                   ? (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_sync) 
                       & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_sync_q1) 
                          | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_sync_q2))) 
                      | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_sync_q1) 
                         & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_sync_q2)))
                   : (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_sync))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__sync_rx__DOT__intq 
        = ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__rst_n))) 
           || (IData)(vlSelf->top_uart_tb__DOT__cio_tx_o));
    if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        if ((0x10000U & vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__nco_sum_q)) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d 
                = (1U & (((IData)(1U) + (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)) 
                         >> 4U));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q;
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)));
        } else {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q;
        }
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q;
        if (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
             & (~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_in)))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 8U;
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 0U;
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0xbU : 0xaU);
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
        } else if (((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                    & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
                = ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0xbU : 0xaU)) & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_in)) 
                   || (1U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q)));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                = ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                     == ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                          ? 0xbU : 0xaU)) & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_in))
                    ? 0U : (0xfU & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                    - (IData)(1U))));
            if ((1U & (~ (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                           == ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                                ? 0xbU : 0xaU)) & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_in))))) {
                vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
                    = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_in) 
                        << 0xaU) | (0x3ffU & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                              >> 1U)));
            }
        }
    } else {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 1U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
    }
    vlSelf->top_uart_tb__DOT__cio_tx_o = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q)
                                           ? (IData)(vlSelf->top_uart_tb__DOT__cio_rx_i)
                                           : (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_out_q));
}

VL_INLINE_OPT void Vtop_uart_tb___024root___nba_sequent__TOP__1(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(512,8,(0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 3U)), vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage, vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_data);
    }
    if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
        VL_ASSIGNSEL_WI(256,8,(0xffU & VL_SHIFTL_III(8,32,32, 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)), 3U)), vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage, vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_wdata__q);
    }
}

VL_INLINE_OPT void Vtop_uart_tb___024root___nba_sequent__TOP__2(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__alert_test_we;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__alert_test_we = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0 = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h7645ae40__0;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h7645ae40__0 = 0;
    QData/*42:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__cmd;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__cmd = 0;
    QData/*63:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i = 0;
    QData/*38:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i = 0;
    QData/*56:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o = 0;
    IData/*31:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellinp__u_uart_rxfifo__rready_i;
    top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellinp__u_uart_rxfifo__rready_i = 0;
    CData/*5:0*/ top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_watermark_thresh;
    top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_watermark_thresh = 0;
    CData/*6:0*/ top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_watermark_thresh;
    top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_watermark_thresh = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o;
    top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o = 0;
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o;
    top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o = 0;
    QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__74__Vfuncout;
    __Vfunc_extract_h2d_cmd_intg__74__Vfuncout = 0;
    VlWide<4>/*106:0*/ __Vfunc_extract_h2d_cmd_intg__74__tl;
    VL_ZERO_W(107, __Vfunc_extract_h2d_cmd_intg__74__tl);
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__79__Vfuncout;
    __Vfunc_mubi4_test_invalid__79__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__79__val;
    __Vfunc_mubi4_test_invalid__79__val = 0;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_51;
    // Body
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_data 
        = (0xffU & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                     ? ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                        >> 1U) : ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                  >> 2U)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->__Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q 
        = vlSelf->__Vdly__top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q;
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__allzero_cnt_d 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__break_st_q) 
            | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
               & ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_frame_err)) 
                  | (0U != (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_data)))))
            ? 0U : (0x1fU & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__allzero_cnt_q) 
                             + ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_frame_err) 
                                & (0U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_data))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x40U & ((~ ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                        >> 6U)) << 6U));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set_cnt 
        = (0x20U & ((~ ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                        >> 5U)) << 5U));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (0x20U ^ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    if (vlSelf->top_uart_tb__DOT__rst_n) {
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_wdata__q 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en)
                    ? (0xffU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                >> 0x16U)) : 0U);
        }
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
            = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[0U];
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
            = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[1U];
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[2U] 
            = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[2U];
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
            = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_d[3U];
    } else {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_wdata__q = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] = 0x4ffffU;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[2U] = 0U;
        vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] = 0U;
    }
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_depth 
        = ((IData)(top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)
            ? 0x40U : (0x7fU & (((1U & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                        >> 6U)) == 
                                 (1U & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                        >> 6U))) ? 
                                ((0x3fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                 - (0x3fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                 : (((IData)(0x40U) 
                                     - (0x3fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                    + (0x3fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_wready 
        = (1U & ((~ (IData)(top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_fifo_rready 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_uart_idle) 
           & ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
              & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_fifo_wready 
        = (1U & ((~ (IData)(top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o)) 
                 & (~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_fifo_depth 
        = ((IData)(top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__full_o)
            ? 0x20U : (0x3fU & (((1U & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                        >> 5U)) == 
                                 (1U & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                        >> 5U))) ? 
                                ((0x1fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                 - (0x1fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                 : (((IData)(0x20U) 
                                     - (0x1fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                    + (0x1fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_timeout_count_d 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)
            ? ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_timeout)
                ? 0U : (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_depth) 
                         == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                         ? ((0U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_depth))
                             ? 0U : (0xffffffU & (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_timeout_count_q 
                                                  + (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))))
                         : 0U)) : 0U);
    top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_watermark_thresh 
        = ((6U < (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
            ? 0x7fU : ((6U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q))
                        ? 0x3eU : (0x7fU & ((IData)(1U) 
                                            << (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_watermark 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_depth) 
           >= (IData)(top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_watermark_thresh));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_wvalid) 
           & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_wready));
    if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q;
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_fifo_rready) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)
                    ? 0xbU : 0xaU);
        } else if (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                    & (0U != (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d 
                = (0xfU & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q) 
                           - (IData)(1U)));
        }
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tx_q;
        if ((1U & (~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_fifo_rready)))) {
            if (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                 & (0U != (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
                vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d 
                    = (1U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q));
            }
        }
    } else {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d = 0U;
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tx_d = 1U;
    }
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_fifo_rready)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__wdata_qe) 
           & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_fifo_wready));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_empty__hw2reg_intr_state_d_o 
        = ((0U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_fifo_depth)) 
           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__g_intr_status__DOT__test_q));
    top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_watermark_thresh 
        = ((4U <= (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))
            ? 0x10U : (0x3fU & ((IData)(1U) << (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_tx_watermark 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_fifo_depth) 
           < (IData)(top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_watermark_thresh));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_watermark__hw2reg_intr_state_d_o 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_watermark) 
           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__g_intr_status__DOT__test_q));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x3fU == (0x3fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x1fU == (0x1fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x1fU == (0x1fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_watermark__hw2reg_intr_state_d_o 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_tx_watermark) 
           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__g_intr_status__DOT__test_q));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
        = (((QData)((IData)((0x7fU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                      >> 1U)))) << 0x20U) 
           | (QData)((IData)(((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                               << 0xaU) | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                           >> 0x16U)))));
    __Vfunc_extract_h2d_cmd_intg__74__tl[0U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U];
    __Vfunc_extract_h2d_cmd_intg__74__tl[1U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U];
    __Vfunc_extract_h2d_cmd_intg__74__tl[2U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[2U];
    __Vfunc_extract_h2d_cmd_intg__74__tl[3U] = vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U];
    vlSelf->__Vfunc_extract_h2d_cmd_intg__74__payload 
        = ((0x78000000000ULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__74__payload) 
           | (((QData)((IData)(((__Vfunc_extract_h2d_cmd_intg__74__tl[2U] 
                                 << 6U) | (__Vfunc_extract_h2d_cmd_intg__74__tl[1U] 
                                           >> 0x1aU)))) 
               << 7U) | (QData)((IData)(((0x70U & (
                                                   __Vfunc_extract_h2d_cmd_intg__74__tl[3U] 
                                                   >> 3U)) 
                                         | (0xfU & 
                                            (__Vfunc_extract_h2d_cmd_intg__74__tl[1U] 
                                             >> 0x16U)))))));
    vlSelf->__Vfunc_extract_h2d_cmd_intg__74__payload 
        = ((0x7fffffffffULL & vlSelf->__Vfunc_extract_h2d_cmd_intg__74__payload) 
           | ((QData)((IData)((0xfU & (__Vfunc_extract_h2d_cmd_intg__74__tl[0U] 
                                       >> 0xfU)))) 
              << 0x27U));
    __Vfunc_extract_h2d_cmd_intg__74__Vfuncout = vlSelf->__Vfunc_extract_h2d_cmd_intg__74__payload;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__cmd 
        = __Vfunc_extract_h2d_cmd_intg__74__Vfuncout;
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit 
        = ((0x1ff8U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit)) 
           | (((8U == (0x3cU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                >> 0x1aU))) << 2U) 
              | (((4U == (0x3cU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                   >> 0x1aU))) << 1U) 
                 | (0U == (0x3cU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                    >> 0x1aU))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit 
        = ((0x1fc7U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x14U == (0x3cU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                   >> 0x1aU))) << 5U) 
              | (((0x10U == (0x3cU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                      >> 0x1aU))) << 4U) 
                 | ((0xcU == (0x3cU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                       >> 0x1aU))) 
                    << 3U))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit 
        = ((0x1e3fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x20U == (0x3cU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                   >> 0x1aU))) << 8U) 
              | (((0x1cU == (0x3cU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                      >> 0x1aU))) << 7U) 
                 | ((0x18U == (0x3cU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                        >> 0x1aU))) 
                    << 6U))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit 
        = ((0x11ffU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit)) 
           | (((0x2cU == (0x3cU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                   >> 0x1aU))) << 0xbU) 
              | (((0x28U == (0x3cU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                      >> 0x1aU))) << 0xaU) 
                 | ((0x24U == (0x3cU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                        >> 0x1aU))) 
                    << 9U))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit 
        = ((0xfffU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit)) 
           | ((0x30U == (0x3cU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                  >> 0x1aU))) << 0xcU));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read 
        = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit;
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write 
        = vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x400U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U])) {
        top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
            = ((0U == (3U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                             >> 2U))) || (1U & ((1U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                                     >> 2U)))
                                                 ? 
                                                (~ 
                                                 (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                  >> 0x1aU))
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                                      >> 2U))) 
                                                 && (1U 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                                       >> 0x1aU))))))))));
        if ((0U == (3U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                          >> 2U)))) {
            top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (IData)((0U != (0xfU & (
                                                   ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                     << 0xaU) 
                                                    | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                       >> 0x16U)) 
                                                   & (~ 
                                                      ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                           >> 0x1aU))))))))));
            top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xfU & (((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                    << 0xaU) | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                >> 0x16U)) 
                                  & ((IData)(1U) << 
                                     (3U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                            >> 0x1aU))))));
        } else if ((1U == (3U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                 >> 2U)))) {
            if ((0x8000000U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U])) {
                top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (3U & 
                                               (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                >> 0x16U))))));
                top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                    >> 0x18U)));
            } else {
                top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (IData)((0U != (0xcU 
                                               & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                  >> 0x16U))))));
                top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                    >> 0x16U)));
            }
        } else {
            top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (2U == (3U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                      >> 2U))));
            top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = ((2U == (3U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                 >> 2U))) && (0xfU 
                                              == (0xfU 
                                                  & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                     >> 0x16U))));
        }
    }
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelf->__Vfunc_mubi4_test_true_strict__76__val 
                = (0xfU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                           >> 0xfU));
            vlSelf->__Vfunc_mubi4_test_true_strict__76__Vfuncout 
                = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__76__val));
        }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__76__Vfuncout));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err 
        = (([&]() {
                vlSelf->__Vfunc_mubi4_test_true_strict__78__val 
                    = (0xfU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                               >> 0xfU));
                vlSelf->__Vfunc_mubi4_test_true_strict__78__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__78__val));
            }(), (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__78__Vfuncout)) 
           & ((0U == (7U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                            >> 7U))) | (1U == (7U & 
                                               (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                                >> 7U)))));
    __Vfunc_mubi4_test_invalid__79__val = (0xfU & (
                                                   vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                                   >> 0xfU));
    __Vfunc_mubi4_test_invalid__79__Vfuncout = (1U 
                                                & (~ 
                                                   ((6U 
                                                     == (IData)(__Vfunc_mubi4_test_invalid__79__val)) 
                                                    | (9U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__79__val)))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err 
        = __Vfunc_mubi4_test_invalid__79__Vfuncout;
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (IData)(((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                    >> 0xaU) & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__tl_reg_d2h[0U]));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i)))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                    << 1U)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                    << 2U)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                    << 3U)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                       << 4U)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                       << 5U)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i))) 
                       << 6U)));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffffcU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                      ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                 >> 1U))) << 1U)) | 
              (1U & ((0x19U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                     ^ (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i)))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffff3U & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                      ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                 >> 3U))) << 3U)) | 
              (4U & (((0x61U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                      ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                 >> 2U))) << 2U))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffffcfU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                    >> 5U))) << 5U)) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 4U))) << 4U))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffff3fU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                         ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                    >> 7U))) << 7U)) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 6U))) << 6U))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffffcffU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                     >> 9U))) << 9U)) 
              | (0x100U & (((0x45U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 8U))) << 8U))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffff3ffU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                          ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                     >> 0xbU))) << 0xbU)) 
              | (0x400U & (((0x49U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 0xaU))) << 0xaU))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffffcfffU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 0xdU))) << 0xdU)) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0xcU))) 
                            << 0xcU))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffff3fffU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                           ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                      >> 0xfU))) << 0xfU)) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0xeU))) 
                            << 0xeU))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfffcffffU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 0x11U))) 
                           << 0x11U)) | (0x10000U & 
                                         (((0x1cU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                      >> 0x10U))) 
                                          << 0x10U))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfff3ffffU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                            ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                       >> 0x13U))) 
                           << 0x13U)) | (0x40000U & 
                                         (((0x25U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                           ^ (IData)(
                                                     (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                      >> 0x12U))) 
                                          << 0x12U))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xffcfffffU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0x15U))) 
                            << 0x15U)) | (0x100000U 
                                          & (((0x46U 
                                               == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                         >> 0x14U))) 
                                             << 0x14U))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xff3fffffU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                             ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                        >> 0x17U))) 
                            << 0x17U)) | (0x400000U 
                                          & (((0x70U 
                                               == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                              ^ (IData)(
                                                        (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                         >> 0x16U))) 
                                             << 0x16U))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xfcffffffU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                         >> 0x19U))) 
                             << 0x19U)) | (0x1000000U 
                                           & (((0x2cU 
                                                == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                          >> 0x18U))) 
                                              << 0x18U))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xf3ffffffU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                              ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                         >> 0x1bU))) 
                             << 0x1bU)) | (0x4000000U 
                                           & (((0x23U 
                                                == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                               ^ (IData)(
                                                         (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                          >> 0x1aU))) 
                                              << 0x1aU))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0xcfffffffU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                               ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                          >> 0x1dU))) 
                              << 0x1dU)) | (0x10000000U 
                                            & (((0x4aU 
                                                 == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                                                ^ (IData)(
                                                          (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                                           >> 0x1cU))) 
                                               << 0x1cU))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o 
        = ((0x3fffffffU & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o) 
           | ((((0x52U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                           >> 0x1fU))) << 0x1fU) | 
              (0x40000000U & (((0x16U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)) 
                               ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i 
                                          >> 0x1eU))) 
                              << 0x1eU))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err 
        = ((2U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
           | (1U & VL_REDXOR_8(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err 
        = ((1U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
           | (((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err)) 
               & (0U != (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o))) 
              << 1U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
        = (((QData)((IData)((0x7fU & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                      >> 8U)))) << 0x39U) 
           | top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__cmd);
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x200U == (0x380U & vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U])));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                            >> 7U))) | (1U == (7U & 
                                               (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                                >> 7U)))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x303fff800007fffULL 
                                 & (0x5400000000000000ULL 
                                    ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i)))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x57c1ff801ff801fULL 
                                  & (0x5400000000000000ULL 
                                     ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 1U)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x9bde1f87e0781e1ULL 
                                  & (0x5400000000000000ULL 
                                     ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 2U)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x11deee3b8e388e22ULL 
                                  & (0x5400000000000000ULL 
                                     ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                    << 3U)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x21ef76cdb2c93244ULL 
                                     & (0x5400000000000000ULL 
                                        ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 4U)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x41f7bb56d5525488ULL 
                                     & (0x5400000000000000ULL 
                                        ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 5U)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x81fbdda769a46910ULL 
                                     & (0x5400000000000000ULL 
                                        ^ top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i))) 
                       << 6U)));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffffcULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | (IData)((IData)(((2U & (((0xbU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                      ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                 >> 1U))) 
                                     << 1U)) | (1U 
                                                & ((7U 
                                                    == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                   ^ (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i)))))));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffff3ULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x23U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 3U))) 
                                      << 1U)) | (1U 
                                                 & ((0x13U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 2U))))))) 
              << 2U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffffcfULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xdU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 5U))) 
                                      << 1U)) | (1U 
                                                 & ((0x43U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 4U))))))) 
              << 4U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffff3fULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x25U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 7U))) 
                                      << 1U)) | (1U 
                                                 & ((0x15U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 6U))))))) 
              << 6U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffffcffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x19U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 9U))) 
                                      << 1U)) | (1U 
                                                 & ((0x45U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 8U))))))) 
              << 8U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffff3ffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x49U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xbU))) 
                                      << 1U)) | (1U 
                                                 & ((0x29U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xaU))))))) 
              << 0xaU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffffcfffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x51U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xdU))) 
                                      << 1U)) | (1U 
                                                 & ((0x31U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xcU))))))) 
              << 0xcU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffff3fffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0xeU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0xfU))) 
                                      << 1U)) | (1U 
                                                 & ((0x61U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0xeU))))))) 
              << 0xeU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffffcffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x26U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x11U))) 
                                      << 1U)) | (1U 
                                                 & ((0x16U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x10U))))))) 
              << 0x10U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffff3ffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1aU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x13U))) 
                                      << 1U)) | (1U 
                                                 & ((0x46U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x12U))))))) 
              << 0x12U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffffcfffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4aU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x15U))) 
                                      << 1U)) | (1U 
                                                 & ((0x2aU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x14U))))))) 
              << 0x14U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffff3fffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x52U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x17U))) 
                                      << 1U)) | (1U 
                                                 & ((0x32U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x16U))))))) 
              << 0x16U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffffcffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1cU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x19U))) 
                                      << 1U)) | (1U 
                                                 & ((0x62U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x18U))))))) 
              << 0x18U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffff3ffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4cU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1bU))) 
                                      << 1U)) | (1U 
                                                 & ((0x2cU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1aU))))))) 
              << 0x1aU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffffcfffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x54U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1dU))) 
                                      << 1U)) | (1U 
                                                 & ((0x34U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1cU))))))) 
              << 0x1cU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffff3fffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x38U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x1fU))) 
                                      << 1U)) | (1U 
                                                 & ((0x64U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x1eU))))))) 
              << 0x1eU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffffcffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x68U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x21U))) 
                                      << 1U)) | (1U 
                                                 & ((0x58U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x20U))))))) 
              << 0x20U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffff3ffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x1fU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x23U))) 
                                      << 1U)) | (1U 
                                                 & ((0x70U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x22U))))))) 
              << 0x22U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffffcfffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x4fU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x25U))) 
                                      << 1U)) | (1U 
                                                 & ((0x2fU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x24U))))))) 
              << 0x24U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffff3fffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x57U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x27U))) 
                                      << 1U)) | (1U 
                                                 & ((0x37U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x26U))))))) 
              << 0x26U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fffcffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x3bU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x29U))) 
                                      << 1U)) | (1U 
                                                 & ((0x67U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x28U))))))) 
              << 0x28U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fff3ffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x6bU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2bU))) 
                                      << 1U)) | (1U 
                                                 & ((0x5bU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2aU))))))) 
              << 0x2aU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ffcfffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x3dU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2dU))) 
                                      << 1U)) | (1U 
                                                 & ((0x73U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2cU))))))) 
              << 0x2cU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1ff3fffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x6dU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x2fU))) 
                                      << 1U)) | (1U 
                                                 & ((0x5dU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x2eU))))))) 
              << 0x2eU));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1fcffffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x79U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x31U))) 
                                      << 1U)) | (1U 
                                                 & ((0x75U 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x30U))))))) 
              << 0x30U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1f3ffffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x5eU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x33U))) 
                                      << 1U)) | (1U 
                                                 & ((0x3eU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x32U))))))) 
              << 0x32U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x1cfffffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x76U == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x35U))) 
                                      << 1U)) | (1U 
                                                 & ((0x6eU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x34U))))))) 
              << 0x34U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0x13fffffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)(((2U & (((0x7cU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                       ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                  >> 0x37U))) 
                                      << 1U)) | (1U 
                                                 & ((0x7aU 
                                                     == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                                    ^ (IData)(
                                                              (top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                               >> 0x36U))))))) 
              << 0x36U));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o 
        = ((0xffffffffffffffULL & top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o) 
           | ((QData)((IData)((1U & ((0x7fU == (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)) 
                                     ^ (IData)((top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__err 
        = ((2U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__err)) 
           | (1U & VL_REDXOR_8(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__err 
        = ((1U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__err)) 
           | (((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__err)) 
               & (0U != (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o))) 
              << 1U));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                  >> 0x1aU)))) | ((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                                                  | ((~ 
                                                      (((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                                             >> 7U))) 
                                                        | ((1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                                                >> 7U))) 
                                                           | (4U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                                                  >> 7U))))) 
                                                       & ((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                          & ((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                                             & ((4U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                                                     >> 7U))) 
                                                                | ((1U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
                                                                        >> 7U))) 
                                                                   | (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                                                     | ((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err) 
                                                        | (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__intg_err 
        = ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[3U] 
            >> 0xaU) & (0U != ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__err) 
                               | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_re 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addrmiss 
        = ((~ (IData)((0U != (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addr_hit)))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_re) 
              | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_error 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addrmiss) 
           | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we) 
               & (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                   & (0U != (3U & (~ ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                       << 0xaU) | (
                                                   vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                   >> 0x16U)))))) 
                  | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                       >> 1U) & (0U != (3U & (~ ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                  << 0xaU) 
                                                 | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                    >> 0x16U)))))) 
                     | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                          >> 2U) & (0U != (3U & (~ 
                                                 ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                   << 0xaU) 
                                                  | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                     >> 0x16U)))))) 
                        | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                             >> 3U) & (0U != (1U & 
                                              (~ ((
                                                   vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                   << 0xaU) 
                                                  | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                     >> 0x16U)))))) 
                           | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                >> 4U) & (0U != (0xfU 
                                                 & (~ 
                                                    ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                      << 0xaU) 
                                                     | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                        >> 0x16U)))))) 
                              | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                   >> 5U) & (0U != 
                                             (1U & 
                                              (~ ((
                                                   vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                   << 0xaU) 
                                                  | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                     >> 0x16U)))))) 
                                 | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                      >> 6U) & (0U 
                                                != 
                                                (1U 
                                                 & (~ 
                                                    ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                      << 0xaU) 
                                                     | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                        >> 0x16U)))))) 
                                    | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                         >> 7U) & (0U 
                                                   != 
                                                   (1U 
                                                    & (~ 
                                                       ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                         << 0xaU) 
                                                        | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                           >> 0x16U)))))) 
                                       | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                            >> 8U) 
                                           & (0U != 
                                              (1U & 
                                               (~ (
                                                   (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                      >> 0x16U)))))) 
                                          | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                               >> 9U) 
                                              & (0U 
                                                 != 
                                                 (7U 
                                                  & (~ 
                                                     ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                       << 0xaU) 
                                                      | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                         >> 0x16U)))))) 
                                             | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                                  >> 0xaU) 
                                                 & (0U 
                                                    != 
                                                    (1U 
                                                     & (~ 
                                                        ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                          << 0xaU) 
                                                         | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                            >> 0x16U)))))) 
                                                | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                                     >> 0xbU) 
                                                    & (0U 
                                                       != 
                                                       (3U 
                                                        & (~ 
                                                           ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                             << 0xaU) 
                                                            | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                               >> 0x16U)))))) 
                                                   | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
                                                       >> 0xcU) 
                                                      & (0U 
                                                         != 
                                                         (0xfU 
                                                          & (~ 
                                                             ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                               << 0xaU) 
                                                              | (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[1U] 
                                                                 >> 0x16U))))))))))))))))))) 
              | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__intg_err)));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h7645ae40__0 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_re));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_error)) 
           & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read) 
            >> 5U) & (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h7645ae40__0));
    top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellinp__u_uart_rxfifo__rready_i 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read) 
            >> 6U) & (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h7645ae40__0));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 8U) & (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 1U) & (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 4U) & (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 7U) & (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 0xaU) & (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 0xcU) & (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
           & (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__alert_test_we 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 3U) & (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_write) 
            >> 2U) & (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____VdfgTmp_h801887b7__0));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellinp__u_uart_rxfifo__rready_i)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = (((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
             >> 0x16U) & (IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__alert_test_we)) 
           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_parity_err__hw2reg_intr_state_de_o 
        = (((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
             >> 0x1dU) & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_parity_err));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_timeout__hw2reg_intr_state_de_o 
        = (((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
             >> 0x1cU) & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_timeout));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o 
        = (((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
             >> 0x1aU) & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_frame_err));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o 
        = (((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
             >> 0x19U) & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
           | ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_wready)) 
              & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_wvalid)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o 
        = (((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
             >> 0x18U) & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
           | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
              & ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_uart_idle_q)) 
                 & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_uart_idle))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check 
        = ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__wr_en) 
             << 0xcU) | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_ovrd_txen__DOT__wr_en) 
                         << 0xaU)) | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) 
                                        << 8U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_wdata__DOT__wr_en) 
                                                   << 7U) 
                                                  | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__wr_en) 
                                                     << 4U))) 
                                      | (((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__alert_test_we) 
                                          << 3U) | 
                                         (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe) 
                                           << 2U) | 
                                          (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__wr_en) 
                                            << 1U) 
                                           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))))));
    __Vtemp_4[0U] = (IData)((((QData)((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                              << 0x3fU) | (((QData)((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellinp__u_uart_rxfifo__rready_i)) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_wdata__q)) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__wdata_qe)) 
                                                           << 0x27U) 
                                                          | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q)) 
                                                              << 0x24U) 
                                                             | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__fifo_ctrl_qe)) 
                                                                 << 0x23U) 
                                                                | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x18U) 
                                                                                | vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q)))))))))))))))))))));
    __Vtemp_4[1U] = (IData)(((((QData)((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                               << 0x3fU) | (((QData)((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                                             << 0x3dU) 
                                            | (((QData)((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                                                << 0x3bU) 
                                               | (((QData)((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre)) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellinp__u_uart_rxfifo__rready_i)) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_wdata__q)) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__wdata_qe)) 
                                                            << 0x27U) 
                                                           | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q)) 
                                                               << 0x24U) 
                                                              | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__fifo_ctrl_qe)) 
                                                                  << 0x23U) 
                                                                 | (((QData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q)) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__fifo_ctrl_qe) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                                                                << 0x18U) 
                                                                                | vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q)))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_28[3U] = (((IData)((0x1ffU == (0x1ffU & 
                                           (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                       << 8U) | ((0x80U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                           >> 0x12U)) 
                                 | (((IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                                     << 6U) | ((0x20U 
                                                & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                                   >> 0x13U)) 
                                               | (((IData)(
                                                           (0x1ffU 
                                                            == 
                                                            (0x1ffU 
                                                             & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                                                   << 4U) 
                                                  | ((8U 
                                                      & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                                         >> 0x14U)) 
                                                     | (((IData)(
                                                                 (0x1ffU 
                                                                  == 
                                                                  (0x1ffU 
                                                                   & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                                               >> 0x15U)) 
                                                           | (0x1ffU 
                                                              == 
                                                              (0x1ffU 
                                                               & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))))))))));
    __Vtemp_36[3U] = (((IData)((0x1ffU == (0x1ffU & 
                                           (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                       << 0x10U) | ((0x8000U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                                >> 0xeU)) 
                                    | (((IData)((0x1ffU 
                                                 == 
                                                 (0x1ffU 
                                                  & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                                        << 0xeU) | 
                                       ((0x2000U & 
                                         (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                          >> 0xfU)) 
                                        | (((IData)(
                                                    (0x1ffU 
                                                     == 
                                                     (0x1ffU 
                                                      & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                                  >> 0x10U)) 
                                              | (((IData)(
                                                          (0x1ffU 
                                                           == 
                                                           (0x1ffU 
                                                            & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
                                                  << 0xaU) 
                                                 | ((0x200U 
                                                     & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                                        >> 0x11U)) 
                                                    | __Vtemp_28[3U]))))))));
    __Vtemp_51[3U] = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                       << 0x1fU) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                     << 0x1eU) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                               << 0x19U) 
                                                              | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                                           << 0x15U) 
                                                                          | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                                                                                >> 0xdU)) 
                                                                                | __Vtemp_36[3U])))))))))))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__reg2hw[0U] 
        = __Vtemp_4[0U];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__reg2hw[1U] 
        = __Vtemp_4[1U];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__reg2hw[2U] 
        = ((0x80000000U & (vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                           << 9U)) | (((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__alert_test_we) 
                                       << 0x1eU) | 
                                      (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                                        << 0xeU) | 
                                       (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                          << 0xbU) 
                                         | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                             << 0xaU) 
                                            | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                << 9U) 
                                               | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                      << 7U) 
                                                     | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                            << 5U) 
                                                           | (((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre) 
                                                               << 3U) 
                                                              | ((IData)(top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_status_rxempty__qre) 
                                                                 << 1U)))))))))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__reg2hw[3U] 
        = __Vtemp_51[3U];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__reg2hw[4U] 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
            << 3U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                       << 2U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                  << 1U) | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x3fU == (0x3fU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data 
        = ((~ ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                >> 0x1dU) & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_parity_err__hw2reg_intr_state_de_o)
               ? ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_parity_err__hw2reg_intr_state_de_o) 
                  | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q))
               : (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data 
        = ((~ ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                >> 0x1cU) & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_timeout__hw2reg_intr_state_de_o)
               ? ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_timeout__hw2reg_intr_state_de_o) 
                  | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q))
               : (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data 
        = ((~ ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                >> 0x1aU) & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o)
               ? ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_frame_err__hw2reg_intr_state_de_o) 
                  | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q))
               : (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = ((~ ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                >> 0x19U) & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o)
               ? ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_overflow__hw2reg_intr_state_de_o) 
                  | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q))
               : (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__wr_data 
        = ((~ ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                >> 0x18U) & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o)
               ? ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_tx_done__hw2reg_intr_state_de_o) 
                  | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q))
               : (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_break_err 
        = ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__break_st_q)) 
           & ((0U == (3U & (vlSelf->top_uart_tb__DOT__u_dut__DOT__reg2hw[2U] 
                            >> 0xcU))) ? (2U <= (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__allzero_cnt_d))
               : ((1U == (3U & (vlSelf->top_uart_tb__DOT__u_dut__DOT__reg2hw[2U] 
                                >> 0xcU))) ? (4U <= (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__allzero_cnt_d))
                   : ((2U == (3U & (vlSelf->top_uart_tb__DOT__u_dut__DOT__reg2hw[2U] 
                                    >> 0xcU))) ? (8U 
                                                  <= (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__allzero_cnt_d))
                       : (0x10U <= (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__allzero_cnt_d))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_break_err__hw2reg_intr_state_de_o 
        = (((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
             >> 0x1bU) & (0x1ffU == (0x1ffU & (- (IData)((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_test_rx_break_err__qe)))))) 
           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__event_rx_break_err));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data 
        = ((~ ((vlSelf->top_uart_tb__DOT__u_host__DOT__h2d_q[0U] 
                >> 0x1bU) & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_intr_state_tx_done__DOT__qe))) 
           & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_break_err__hw2reg_intr_state_de_o)
               ? ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT____Vcellout__intr_hw_rx_break_err__hw2reg_intr_state_de_o) 
                  | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q))
               : (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)));
}

VL_INLINE_OPT void Vtop_uart_tb___024root___nba_comb__TOP__0(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*7:0*/ __VdfgTmp_h22249bf6__0;
    __VdfgTmp_h22249bf6__0 = 0;
    // Body
    __VdfgTmp_h22249bf6__0 = (0xffU & (((0U == (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                         ? 0U : (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, 
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                       | (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                          (7U & (VL_SHIFTL_III(8,8,32, 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                 >> 5U))] 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(8,8,32, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0xffU & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read))))) {
        if ((1U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                       << 3U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_done__q) 
                                  << 2U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                             << 1U) 
                                            | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)))));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff0fU & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                       << 7U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                  << 6U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                             << 5U) 
                                            | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                               << 4U)))));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                      << 8U));
        } else if ((2U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                       << 3U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_done__q) 
                                  << 2U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                             << 1U) 
                                            | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q)))));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff0fU & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                       << 7U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                  << 6U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                             << 5U) 
                                            | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                               << 4U)))));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffeffU & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                      << 8U));
        } else if ((4U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffe00U & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((0x10U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                       << 2U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                  << 1U) | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q))));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff0fU & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                       << 7U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                  << 6U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                             << 5U) 
                                            | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q) 
                                               << 4U)))));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffcffU & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q) 
                      << 8U));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffU & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q) 
                      << 0x10U));
        } else if ((0x20U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                        & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_uart_idle)) 
                       << 3U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                  << 2U) | ((2U & (
                                                   (~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_wready)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_fifo_wready)))))));
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffffcfU & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                       << 5U) | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
                                 << 4U)));
        } else {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((0x40U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read))
                       ? ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                           ? 0U : (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U)))
                                              ? 0U : 
                                             (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                              (((IData)(7U) 
                                                + (0x1ffU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))) 
                                            | (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                               (0xfU 
                                                & (VL_SHIFTL_III(9,9,32, 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)), 3U))))))
                       : 0U));
        }
    } else if ((0x100U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                   << 5U) | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                             << 2U)));
    } else if ((0x200U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffffff00U & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_fifo_depth));
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xff00ffffU & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
               | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_fifo_depth) 
                  << 0x10U));
    } else if ((0x400U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xfffffffcU & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                   << 1U) | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q)));
    } else if ((0x800U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xffff0000U & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
               | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__rx_val_q));
    } else if ((0x1000U & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__racl_addr_hit_read))) {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0xff000000U & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
               | vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q);
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next 
            = ((0x7fffffffU & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next) 
               | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                  << 0x1fU));
    } else {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
    }
    if (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
            = vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q;
        if (vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__tx_fifo_rready) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x400U | ((0x200U & (((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q)) 
                                         | (((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                             & VL_REDXOR_8(__VdfgTmp_h22249bf6__0)) 
                                            ^ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q))) 
                                        << 9U)) | (
                                                   ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                                     ? 0U
                                                     : (IData)(__VdfgTmp_h22249bf6__0)) 
                                                   << 1U)));
        } else if (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q) 
                    & (0U != (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q)))) {
            vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d 
                = (0x400U | (0x3ffU & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_q) 
                                       >> 1U)));
        }
    } else {
        vlSelf->top_uart_tb__DOT__u_dut__DOT__uart_core__DOT__uart_tx__DOT__sreg_d = 0x7ffU;
    }
}

VL_INLINE_OPT void Vtop_uart_tb___024root___nba_comb__TOP__1(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger;
    top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x8000000U & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                << 0xfU)) | ((0x4000000U 
                                              & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                 << 0xfU)) 
                                             | ((0x2000000U 
                                                 & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                    << 0xfU)) 
                                                | ((0x1000000U 
                                                    & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                       << 0xfU)) 
                                                   | ((0x800000U 
                                                       & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                          << 0xfU)) 
                                                      | ((0x400000U 
                                                          & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                             << 0xfU)) 
                                                         | ((0x200000U 
                                                             & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                << 0xfU)) 
                                                            | ((0x100000U 
                                                                & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                   << 0xfU)) 
                                                               | ((0x80000U 
                                                                   & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                      << 0xfU)) 
                                                                  | ((0x40000U 
                                                                      & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                         << 0xfU)) 
                                                                     | ((0x20000U 
                                                                         & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                            << 0xfU)) 
                                                                        | ((0x10000U 
                                                                            & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                               << 0xfU)) 
                                                                           | ((0x8000U 
                                                                               & ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_check) 
                                                                                << 0xfU)) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree))))))))))))))))))))))))))))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree 
        = __Vtemp_1;
    vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_err 
        = (1U & (vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree 
                 | ((~ ((~ (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__addrmiss)) 
                        & (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we))) 
                    & vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree)));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d 
        = (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__err_q) 
            | ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__intg_err) 
               | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__u_reg__DOT__reg_we_err))) 
           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
    top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger 
        = ((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_d) 
           | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
    __Vtableidx1 = ((((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
                      | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint)) 
                     << 8U) | ((((IData)(top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger)
                                  ? 1U : 3U) << 5U) 
                               | ((((IData)(top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger) 
                                    | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger)) 
                                   << 4U) | (((IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d) 
                                              << 3U) 
                                             | (IData)(vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))));
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
        = Vtop_uart_tb__ConstPool__TABLE_h78c391ae_0
        [__Vtableidx1];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd 
        = Vtop_uart_tb__ConstPool__TABLE_hef47d439_0
        [__Vtableidx1];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd 
        = Vtop_uart_tb__ConstPool__TABLE_h4848046c_0
        [__Vtableidx1];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr 
        = Vtop_uart_tb__ConstPool__TABLE_he56e39c1_0
        [__Vtableidx1];
    vlSelf->top_uart_tb__DOT__u_dut__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr 
        = Vtop_uart_tb__ConstPool__TABLE_hb3c70136_0
        [__Vtableidx1];
}

void Vtop_uart_tb___024root___eval_nba(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_uart_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_uart_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_uart_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_uart_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0xcULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_uart_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtop_uart_tb___024root___timing_resume(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___timing_resume\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he1394c4f__0.resume("@(posedge top_uart_tb.clk)");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he949f80d__0.resume("@(posedge top_uart_tb.rst_n)");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtop_uart_tb___024root___timing_commit(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___timing_commit\n"); );
    // Body
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he1394c4f__0.commit("@(posedge top_uart_tb.clk)");
    }
    if ((! (0x40ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he949f80d__0.commit("@(posedge top_uart_tb.rst_n)");
    }
}

void Vtop_uart_tb___024root___eval_triggers__act(Vtop_uart_tb___024root* vlSelf);

bool Vtop_uart_tb___024root___eval_phase__act(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_uart_tb___024root___eval_triggers__act(vlSelf);
    Vtop_uart_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop_uart_tb___024root___timing_resume(vlSelf);
        Vtop_uart_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_uart_tb___024root___eval_phase__nba(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_uart_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__nba(Vtop_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_uart_tb___024root___dump_triggers__act(Vtop_uart_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_uart_tb___024root___eval(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_uart_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/top_uart_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_uart_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/top_uart_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop_uart_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop_uart_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_uart_tb___024root___eval_debug_assertions(Vtop_uart_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_uart_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_uart_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
