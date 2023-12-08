// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblinker.h for the primary calling header

#include "verilated.h"

#include "Vblinker__Syms.h"
#include "Vblinker__Syms.h"
#include "Vblinker___024root.h"

void Vblinker___024root___ctor_var_reset(Vblinker___024root* vlSelf);

Vblinker___024root::Vblinker___024root(Vblinker__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vblinker___024root___ctor_var_reset(this);
}

void Vblinker___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vblinker___024root::~Vblinker___024root() {
}
