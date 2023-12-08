// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblinker.h for the primary calling header

#include "verilated.h"

#include "Vblinker__Syms.h"
#include "Vblinker___024root.h"

VL_ATTR_COLD void Vblinker___024root___eval_static(Vblinker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblinker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinker___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vblinker___024root___eval_initial(Vblinker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblinker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinker___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vblinker___024root___eval_final(Vblinker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblinker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinker___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vblinker___024root___eval_settle(Vblinker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblinker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinker___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblinker___024root___dump_triggers__act(Vblinker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblinker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinker___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vblinker___024root___dump_triggers__nba(Vblinker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblinker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinker___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vblinker___024root___ctor_var_reset(Vblinker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblinker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinker___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->ctrl = VL_RAND_RESET_I(1);
    vlSelf->counter = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
}
