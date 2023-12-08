// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vblinker.h for the primary calling header

#ifndef VERILATED_VBLINKER___024ROOT_H_
#define VERILATED_VBLINKER___024ROOT_H_  // guard

#include "verilated.h"


class Vblinker__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vblinker___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(ctrl,0,0);
    VL_OUT8(counter,3,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vblinker__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vblinker___024root(Vblinker__Syms* symsp, const char* v__name);
    ~Vblinker___024root();
    VL_UNCOPYABLE(Vblinker___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
