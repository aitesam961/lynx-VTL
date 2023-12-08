// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblinker.h for the primary calling header

#include "verilated.h"

#include "Vblinker__Syms.h"
#include "Vblinker___024root.h"

void Vblinker___024root___eval_act(Vblinker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblinker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinker___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vblinker___024root___nba_sequent__TOP__0(Vblinker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblinker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinker___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->counter = ((IData)(vlSelf->rst_ni) ? (0xfU 
                                                  & ((IData)(vlSelf->ctrl)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->counter))
                                                      : 
                                                     ((IData)(vlSelf->counter) 
                                                      - (IData)(1U))))
                        : 0U);
}

void Vblinker___024root___eval_nba(Vblinker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblinker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinker___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vblinker___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vblinker___024root___eval_triggers__act(Vblinker___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vblinker___024root___dump_triggers__act(Vblinker___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vblinker___024root___dump_triggers__nba(Vblinker___024root* vlSelf);
#endif  // VL_DEBUG

void Vblinker___024root___eval(Vblinker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblinker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinker___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vblinker___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vblinker___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("blinker.sv", 7, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vblinker___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vblinker___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("blinker.sv", 7, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vblinker___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vblinker___024root___eval_debug_assertions(Vblinker___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblinker__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblinker___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->ctrl & 0xfeU))) {
        Verilated::overWidthError("ctrl");}
}
#endif  // VL_DEBUG
