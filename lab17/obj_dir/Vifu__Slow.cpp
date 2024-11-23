// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vifu.h for the primary calling header

#include "Vifu.h"
#include "Vifu__Syms.h"

//==========

VL_CTOR_IMP(Vifu) {
    Vifu__Syms* __restrict vlSymsp = __VlSymsp = new Vifu__Syms(this, name());
    Vifu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vifu::__Vconfigure(Vifu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vifu::~Vifu() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vifu::_initial__TOP__3(Vifu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifu::_initial__TOP__3\n"); );
    Vifu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp1[5];
    // Body
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x696f6e73U;
    __Vtemp1[2U] = 0x72756374U;
    __Vtemp1[3U] = 0x696e7374U;
    __Vtemp1[4U] = 0x2e2fU;
    VL_READMEM_N(true, 16, 256, 0, VL_CVT_PACK_STR_NW(5, __Vtemp1)
                 , vlTOPp->ifu__DOT__Memory__DOT__my_memory
                 , 0, ~0ULL);
}

void Vifu::_eval_initial(Vifu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifu::_eval_initial\n"); );
    Vifu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__3(vlSymsp);
}

void Vifu::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifu::final\n"); );
    // Variables
    Vifu__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vifu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vifu::_eval_settle(Vifu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifu::_eval_settle\n"); );
    Vifu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vifu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifu::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    en_pc = VL_RAND_RESET_I(1);
    instruction = VL_RAND_RESET_I(16);
    ifu__DOT__current_address = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            ifu__DOT__Memory__DOT__my_memory[__Vi0] = VL_RAND_RESET_I(16);
    }}
}
