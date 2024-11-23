// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister.h for the primary calling header

#include "Vregister.h"
#include "Vregister__Syms.h"

//==========

VL_CTOR_IMP(Vregister) {
    Vregister__Syms* __restrict vlSymsp = __VlSymsp = new Vregister__Syms(this, name());
    Vregister* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vregister::__Vconfigure(Vregister__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vregister::~Vregister() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vregister::_eval_initial(Vregister__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister::_eval_initial\n"); );
    Vregister* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vregister::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister::final\n"); );
    // Variables
    Vregister__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vregister* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vregister::_eval_settle(Vregister__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister::_eval_settle\n"); );
    Vregister* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vregister::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    d_in = VL_RAND_RESET_I(16);
    en = VL_RAND_RESET_I(1);
    d_out = VL_RAND_RESET_I(16);
}
