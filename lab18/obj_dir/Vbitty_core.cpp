// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core.h"
#include "Vbitty_core__Syms.h"

#include "verilated_dpi.h"

//==========

void Vbitty_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbitty_core::eval\n"); );
    Vbitty_core__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vbitty_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("rtl/bitty_core.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vbitty_core::_eval_initial_loop(Vbitty_core__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("rtl/bitty_core.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vbitty_core::_sequent__TOP__1(Vbitty_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core::_sequent__TOP__1\n"); );
    Vbitty_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst) {
        vlTOPp->bitty_core__DOT__reg7 = 1U;
    } else {
        if (vlTOPp->bitty_core__DOT__en_7) {
            vlTOPp->bitty_core__DOT__reg7 = vlTOPp->out_C;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->bitty_core__DOT__reg6 = 1U;
    } else {
        if (vlTOPp->bitty_core__DOT__en_6) {
            vlTOPp->bitty_core__DOT__reg6 = vlTOPp->out_C;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->bitty_core__DOT__reg5 = 1U;
    } else {
        if (vlTOPp->bitty_core__DOT__en_5) {
            vlTOPp->bitty_core__DOT__reg5 = vlTOPp->out_C;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->bitty_core__DOT__reg4 = 1U;
    } else {
        if (vlTOPp->bitty_core__DOT__en_4) {
            vlTOPp->bitty_core__DOT__reg4 = vlTOPp->out_C;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->bitty_core__DOT__reg3 = 1U;
    } else {
        if (vlTOPp->bitty_core__DOT__en_3) {
            vlTOPp->bitty_core__DOT__reg3 = vlTOPp->out_C;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->bitty_core__DOT__reg2 = 1U;
    } else {
        if (vlTOPp->bitty_core__DOT__en_2) {
            vlTOPp->bitty_core__DOT__reg2 = vlTOPp->out_C;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->bitty_core__DOT__reg1 = 1U;
    } else {
        if (vlTOPp->bitty_core__DOT__en_1) {
            vlTOPp->bitty_core__DOT__reg1 = vlTOPp->out_C;
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->bitty_core__DOT__reg0 = 1U;
    } else {
        if (vlTOPp->bitty_core__DOT__en_0) {
            vlTOPp->bitty_core__DOT__reg0 = vlTOPp->out_C;
        }
    }
    vlTOPp->bitty_core__DOT__Control__DOT__current_state 
        = ((IData)(vlTOPp->rst) ? 1U : (IData)(vlTOPp->bitty_core__DOT__Control__DOT__next_state));
    vlTOPp->__Vtableidx1 = vlTOPp->bitty_core__DOT__Control__DOT__current_state;
    vlTOPp->bitty_core__DOT__Control__DOT__next_state 
        = vlTOPp->__Vtable1_bitty_core__DOT__Control__DOT__next_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->done = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                            vlTOPp->done = 1U;
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vbitty_core::_sequent__TOP__3(Vbitty_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core::_sequent__TOP__3\n"); );
    Vbitty_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP____024unit.__Vdpiimwrap_sana_TOP____024unit(vlTOPp->bitty_core__DOT__to_control, 
                                                             (0xffffU 
                                                              & ((4U 
                                                                  & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                                                  ? 
                                                                 ((2U 
                                                                   & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                                                   ? 
                                                                  ((1U 
                                                                    & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                                                    ? 
                                                                   (((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                                     == (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                                     ? 0U
                                                                     : 
                                                                    (((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                                      > (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                                      ? 1U
                                                                      : 2U))
                                                                    : 
                                                                   ((0x10U 
                                                                     > (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                                     ? 
                                                                    ((0x1fU 
                                                                      >= (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                                      ? 
                                                                     ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                                      >> (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                                      : 0U)
                                                                     : 0U))
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                                                    ? 
                                                                   ((0x10U 
                                                                     > (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                                     ? 
                                                                    ((0x1fU 
                                                                      >= (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                                      ? 
                                                                     ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                                      << (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                                      : 0U)
                                                                     : 0U)
                                                                    : 
                                                                   ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                                    ^ (IData)(vlTOPp->bitty_core__DOT__mux_out))))
                                                                  : 
                                                                 ((2U 
                                                                   & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                                                   ? 
                                                                  ((1U 
                                                                    & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                                                    ? 
                                                                   ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                                    | (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                                    : 
                                                                   ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                                    & (IData)(vlTOPp->bitty_core__DOT__mux_out)))
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                                                    ? 
                                                                   ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                                    - (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                                    : 
                                                                   ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                                    + (IData)(vlTOPp->bitty_core__DOT__mux_out)))))), (IData)(vlTOPp->out_C));
}

VL_INLINE_OPT void Vbitty_core::_sequent__TOP__4(Vbitty_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core::_sequent__TOP__4\n"); );
    Vbitty_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst) {
        vlTOPp->out_C = 1U;
    } else {
        if (vlTOPp->bitty_core__DOT__en_c) {
            vlTOPp->out_C = (0xffffU & ((4U & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                         ? ((2U & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                                 ? 
                                                (((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                  == (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                  ? 0U
                                                  : 
                                                 (((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                   > (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                   ? 1U
                                                   : 2U))
                                                 : 
                                                ((0x10U 
                                                  > (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                  ? 
                                                 ((0x1fU 
                                                   >= (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                   ? 
                                                  ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                   >> (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                   : 0U)
                                                  : 0U))
                                             : ((1U 
                                                 & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                                 ? 
                                                ((0x10U 
                                                  > (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                  ? 
                                                 ((0x1fU 
                                                   >= (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                   ? 
                                                  ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                   << (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                   : 0U)
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                 ^ (IData)(vlTOPp->bitty_core__DOT__mux_out))))
                                         : ((2U & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                             ? ((1U 
                                                 & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                                 ? 
                                                ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                 | (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                 : 
                                                ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                 & (IData)(vlTOPp->bitty_core__DOT__mux_out)))
                                             : ((1U 
                                                 & (IData)(vlTOPp->bitty_core__DOT__sel_to_alu))
                                                 ? 
                                                ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                 - (IData)(vlTOPp->bitty_core__DOT__mux_out))
                                                 : 
                                                ((IData)(vlTOPp->bitty_core__DOT__to_ina) 
                                                 + (IData)(vlTOPp->bitty_core__DOT__mux_out))))));
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->bitty_core__DOT__to_control = 1U;
    } else {
        if (vlTOPp->bitty_core__DOT__en_i) {
            vlTOPp->bitty_core__DOT__to_control = vlTOPp->instr;
        }
    }
    vlTOPp->bitty_core__DOT__en_c = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    if ((5U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                        vlTOPp->bitty_core__DOT__en_c = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->bitty_core__DOT__en_i = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                vlTOPp->bitty_core__DOT__en_i = 1U;
            }
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->bitty_core__DOT__to_ina = 1U;
    } else {
        if (vlTOPp->bitty_core__DOT__en_s) {
            vlTOPp->bitty_core__DOT__to_ina = vlTOPp->bitty_core__DOT__mux_out;
        }
    }
    vlTOPp->bitty_core__DOT__en_0 = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                              >> 0xfU)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                                    >> 0xdU)))) {
                                            vlTOPp->bitty_core__DOT__en_0 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bitty_core__DOT__en_1 = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                              >> 0xfU)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & (IData)(vlTOPp->bitty_core__DOT__to_control))) {
                                            vlTOPp->bitty_core__DOT__en_1 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bitty_core__DOT__en_2 = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                              >> 0xfU)))) {
                                    if ((0x4000U & (IData)(vlTOPp->bitty_core__DOT__to_control))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                                    >> 0xdU)))) {
                                            vlTOPp->bitty_core__DOT__en_2 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bitty_core__DOT__en_3 = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                if ((1U & (~ ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                              >> 0xfU)))) {
                                    if ((0x4000U & (IData)(vlTOPp->bitty_core__DOT__to_control))) {
                                        if ((0x2000U 
                                             & (IData)(vlTOPp->bitty_core__DOT__to_control))) {
                                            vlTOPp->bitty_core__DOT__en_3 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bitty_core__DOT__en_4 = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                if ((0x8000U & (IData)(vlTOPp->bitty_core__DOT__to_control))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                                    >> 0xdU)))) {
                                            vlTOPp->bitty_core__DOT__en_4 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bitty_core__DOT__en_5 = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                if ((0x8000U & (IData)(vlTOPp->bitty_core__DOT__to_control))) {
                                    if ((1U & (~ ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & (IData)(vlTOPp->bitty_core__DOT__to_control))) {
                                            vlTOPp->bitty_core__DOT__en_5 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bitty_core__DOT__en_6 = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                if ((0x8000U & (IData)(vlTOPp->bitty_core__DOT__to_control))) {
                                    if ((0x4000U & (IData)(vlTOPp->bitty_core__DOT__to_control))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                                    >> 0xdU)))) {
                                            vlTOPp->bitty_core__DOT__en_6 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bitty_core__DOT__en_7 = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                if ((0x8000U & (IData)(vlTOPp->bitty_core__DOT__to_control))) {
                                    if ((0x4000U & (IData)(vlTOPp->bitty_core__DOT__to_control))) {
                                        if ((0x2000U 
                                             & (IData)(vlTOPp->bitty_core__DOT__to_control))) {
                                            vlTOPp->bitty_core__DOT__en_7 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bitty_core__DOT__en_s = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    vlTOPp->bitty_core__DOT__en_s = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vbitty_core::_combo__TOP__5(Vbitty_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core::_combo__TOP__5\n"); );
    Vbitty_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->bitty_core__DOT__sel_to_alu = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    if ((5U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                        if (vlTOPp->run) {
                            if ((0U == (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                vlTOPp->bitty_core__DOT__sel_to_alu 
                                    = (7U & ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                             >> 2U));
                            } else {
                                if ((1U == (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                    vlTOPp->bitty_core__DOT__sel_to_alu 
                                        = (7U & ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                                 >> 2U));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bitty_core__DOT__immediate = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    if ((5U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                        if (vlTOPp->run) {
                            if ((0U != (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                if ((1U == (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                    vlTOPp->bitty_core__DOT__immediate 
                                        = (0xffU & 
                                           ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                            >> 5U));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bitty_core__DOT__sel_to_mux = 0U;
    if ((1U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                if ((4U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                    if ((2U > (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                        vlTOPp->bitty_core__DOT__sel_to_mux 
                            = (7U & ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                     >> 0xdU));
                    }
                } else {
                    if ((5U == (IData)(vlTOPp->bitty_core__DOT__Control__DOT__current_state))) {
                        if (vlTOPp->run) {
                            if ((0U == (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                vlTOPp->bitty_core__DOT__sel_to_mux 
                                    = (7U & ((IData)(vlTOPp->bitty_core__DOT__to_control) 
                                             >> 0xaU));
                            } else {
                                if ((1U == (3U & (IData)(vlTOPp->bitty_core__DOT__to_control)))) {
                                    vlTOPp->bitty_core__DOT__sel_to_mux = 8U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->bitty_core__DOT__mux_out = ((8U & (IData)(vlTOPp->bitty_core__DOT__sel_to_mux))
                                         ? ((4U & (IData)(vlTOPp->bitty_core__DOT__sel_to_mux))
                                             ? 0U : 
                                            ((2U & (IData)(vlTOPp->bitty_core__DOT__sel_to_mux))
                                              ? 0U : 
                                             ((1U & (IData)(vlTOPp->bitty_core__DOT__sel_to_mux))
                                               ? 0U
                                               : (IData)(vlTOPp->bitty_core__DOT__immediate))))
                                         : ((4U & (IData)(vlTOPp->bitty_core__DOT__sel_to_mux))
                                             ? ((2U 
                                                 & (IData)(vlTOPp->bitty_core__DOT__sel_to_mux))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->bitty_core__DOT__sel_to_mux))
                                                  ? (IData)(vlTOPp->bitty_core__DOT__reg7)
                                                  : (IData)(vlTOPp->bitty_core__DOT__reg6))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->bitty_core__DOT__sel_to_mux))
                                                  ? (IData)(vlTOPp->bitty_core__DOT__reg5)
                                                  : (IData)(vlTOPp->bitty_core__DOT__reg4)))
                                             : ((2U 
                                                 & (IData)(vlTOPp->bitty_core__DOT__sel_to_mux))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->bitty_core__DOT__sel_to_mux))
                                                  ? (IData)(vlTOPp->bitty_core__DOT__reg3)
                                                  : (IData)(vlTOPp->bitty_core__DOT__reg2))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlTOPp->bitty_core__DOT__sel_to_mux))
                                                  ? (IData)(vlTOPp->bitty_core__DOT__reg1)
                                                  : (IData)(vlTOPp->bitty_core__DOT__reg0)))));
}

void Vbitty_core::_eval(Vbitty_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core::_eval\n"); );
    Vbitty_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if (((IData)(vlTOPp->done) & (~ (IData)(vlTOPp->__Vclklast__TOP__done)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
    vlTOPp->__Vclklast__TOP__done = vlTOPp->done;
}

VL_INLINE_OPT QData Vbitty_core::_change_request(Vbitty_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core::_change_request\n"); );
    Vbitty_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vbitty_core::_change_request_1(Vbitty_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core::_change_request_1\n"); );
    Vbitty_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vbitty_core::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((run & 0xfeU))) {
        Verilated::overWidthError("run");}
}
#endif  // VL_DEBUG
