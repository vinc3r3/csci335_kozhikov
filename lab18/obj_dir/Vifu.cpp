// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vifu.h for the primary calling header

#include "Vifu.h"
#include "Vifu__Syms.h"

//==========

void Vifu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vifu::eval\n"); );
    Vifu__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vifu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("rtl/ifu.v", 4, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vifu::_eval_initial_loop(Vifu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("rtl/ifu.v", 4, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vifu::_sequent__TOP__1(Vifu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifu::_sequent__TOP__1\n"); );
    Vifu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->instruction = vlTOPp->ifu__DOT__Memory__DOT__my_memory
        [vlTOPp->ifu__DOT__current_address];
}

VL_INLINE_OPT void Vifu::_sequent__TOP__2(Vifu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifu::_sequent__TOP__2\n"); );
    Vifu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->ifu__DOT__next_address = 0U;
    } else {
        if (vlTOPp->en_pc) {
            vlTOPp->ifu__DOT__next_address = vlTOPp->ifu__DOT__current_address;
        }
    }
}

VL_INLINE_OPT void Vifu::_settle__TOP__4(Vifu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifu::_settle__TOP__4\n"); );
    Vifu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->done) {
        if ((0U == (3U & (IData)(vlTOPp->instruction)))) {
            vlTOPp->ifu__DOT__current_address = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->ifu__DOT__next_address)));
        } else {
            if ((1U == (3U & (IData)(vlTOPp->instruction)))) {
                vlTOPp->ifu__DOT__current_address = 
                    (0xfffU & ((IData)(1U) + (IData)(vlTOPp->ifu__DOT__next_address)));
            } else {
                if ((2U == (3U & (IData)(vlTOPp->instruction)))) {
                    if ((0U == (3U & ((IData)(vlTOPp->instruction) 
                                      >> 2U)))) {
                        if ((0U == (IData)(vlTOPp->last_alu))) {
                            vlTOPp->ifu__DOT__current_address 
                                = (0xfffU & ((IData)(vlTOPp->instruction) 
                                             >> 4U));
                        }
                    } else {
                        if ((1U == (3U & ((IData)(vlTOPp->instruction) 
                                          >> 2U)))) {
                            if ((1U == (IData)(vlTOPp->last_alu))) {
                                vlTOPp->ifu__DOT__current_address 
                                    = (0xfffU & ((IData)(vlTOPp->instruction) 
                                                 >> 4U));
                            }
                        } else {
                            if ((2U == (3U & ((IData)(vlTOPp->instruction) 
                                              >> 2U)))) {
                                if ((2U == (IData)(vlTOPp->last_alu))) {
                                    vlTOPp->ifu__DOT__current_address 
                                        = (0xfffU & 
                                           ((IData)(vlTOPp->instruction) 
                                            >> 4U));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vifu::_eval(Vifu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifu::_eval\n"); );
    Vifu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_settle__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData Vifu::_change_request(Vifu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifu::_change_request\n"); );
    Vifu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vifu::_change_request_1(Vifu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifu::_change_request_1\n"); );
    Vifu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vifu::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vifu::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((en_pc & 0xfeU))) {
        Verilated::overWidthError("en_pc");}
    if (VL_UNLIKELY((done & 0xfeU))) {
        Verilated::overWidthError("done");}
}
#endif  // VL_DEBUG
