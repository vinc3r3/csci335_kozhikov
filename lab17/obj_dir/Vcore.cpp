// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore.h"
#include "Vcore__Syms.h"

#include "verilated_dpi.h"

//==========

void Vcore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcore::eval\n"); );
    Vcore__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("rtl/core.v", 4, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcore::_eval_initial_loop(Vcore__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("rtl/core.v", 4, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vcore::_sequent__TOP__2(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_sequent__TOP__2\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__core__DOT__ifu_inst__DOT__current_address 
        = vlTOPp->core__DOT__ifu_inst__DOT__current_address;
    if (vlTOPp->reset) {
        vlTOPp->core__DOT__bitty_core_inst__DOT__reg7 = 1U;
    } else {
        if (vlTOPp->core__DOT__bitty_core_inst__DOT__en_7) {
            vlTOPp->core__DOT__bitty_core_inst__DOT__reg7 
                = vlTOPp->core__DOT__bitty_core_inst__DOT__outs;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->core__DOT__bitty_core_inst__DOT__reg6 = 1U;
    } else {
        if (vlTOPp->core__DOT__bitty_core_inst__DOT__en_6) {
            vlTOPp->core__DOT__bitty_core_inst__DOT__reg6 
                = vlTOPp->core__DOT__bitty_core_inst__DOT__outs;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->core__DOT__bitty_core_inst__DOT__reg5 = 1U;
    } else {
        if (vlTOPp->core__DOT__bitty_core_inst__DOT__en_5) {
            vlTOPp->core__DOT__bitty_core_inst__DOT__reg5 
                = vlTOPp->core__DOT__bitty_core_inst__DOT__outs;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->core__DOT__bitty_core_inst__DOT__reg4 = 1U;
    } else {
        if (vlTOPp->core__DOT__bitty_core_inst__DOT__en_4) {
            vlTOPp->core__DOT__bitty_core_inst__DOT__reg4 
                = vlTOPp->core__DOT__bitty_core_inst__DOT__outs;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->core__DOT__bitty_core_inst__DOT__reg3 = 1U;
    } else {
        if (vlTOPp->core__DOT__bitty_core_inst__DOT__en_3) {
            vlTOPp->core__DOT__bitty_core_inst__DOT__reg3 
                = vlTOPp->core__DOT__bitty_core_inst__DOT__outs;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->core__DOT__bitty_core_inst__DOT__reg2 = 1U;
    } else {
        if (vlTOPp->core__DOT__bitty_core_inst__DOT__en_2) {
            vlTOPp->core__DOT__bitty_core_inst__DOT__reg2 
                = vlTOPp->core__DOT__bitty_core_inst__DOT__outs;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->core__DOT__bitty_core_inst__DOT__reg1 = 1U;
    } else {
        if (vlTOPp->core__DOT__bitty_core_inst__DOT__en_1) {
            vlTOPp->core__DOT__bitty_core_inst__DOT__reg1 
                = vlTOPp->core__DOT__bitty_core_inst__DOT__outs;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->core__DOT__bitty_core_inst__DOT__reg0 = 1U;
    } else {
        if (vlTOPp->core__DOT__bitty_core_inst__DOT__en_0) {
            vlTOPp->core__DOT__bitty_core_inst__DOT__reg0 
                = vlTOPp->core__DOT__bitty_core_inst__DOT__outs;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__core__DOT__ifu_inst__DOT__current_address = 0U;
    } else {
        if (vlTOPp->core__DOT__bitty_core_done) {
            vlTOPp->__Vdly__core__DOT__ifu_inst__DOT__current_address 
                = (0xffU & ((IData)(1U) + (IData)(vlTOPp->core__DOT__ifu_inst__DOT__current_address)));
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state 
        = ((IData)(vlTOPp->reset) ? 1U : (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__next_state));
    if (vlTOPp->reset) {
        vlTOPp->core__DOT__bitty_core_inst__DOT__outs = 1U;
    } else {
        if (vlTOPp->core__DOT__bitty_core_inst__DOT__en_c) {
            vlTOPp->core__DOT__bitty_core_inst__DOT__outs 
                = (0xffffU & ((4U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                               ? ((2U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                                   ? ((1U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                                       ? (((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                           == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                           ? 0U : (
                                                   ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                                    > (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                                    ? 1U
                                                    : 2U))
                                       : ((0x10U > (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                           ? ((0x1fU 
                                               >= (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                               ? ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                                  >> (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                               : 0U)
                                           : 0U)) : 
                                  ((1U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                                    ? ((0x10U > (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                        ? ((0x1fU >= (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                            ? ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                               << (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                            : 0U) : 0U)
                                    : ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                       ^ (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))))
                               : ((2U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                                   ? ((1U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                                       ? ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                          | (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                       : ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                          & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out)))
                                   : ((1U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                                       ? ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                          - (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                       : ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                          + (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))))));
        }
    }
    vlTOPp->core__DOT__bitty_core_done = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            vlTOPp->core__DOT__bitty_core_done = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_c = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        vlTOPp->core__DOT__bitty_core_inst__DOT__en_c = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vcore::_combo__TOP__5(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_combo__TOP__5\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->run) << 3U) 
                            | (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state));
    vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__next_state 
        = vlTOPp->__Vtable1_core__DOT__bitty_core_inst__DOT__Control__DOT__next_state
        [vlTOPp->__Vtableidx1];
    vlTOPp->core_done = ((IData)(vlTOPp->core__DOT__bitty_core_done) 
                         & (IData)(vlTOPp->run));
}

VL_INLINE_OPT void Vcore::_sequent__TOP__6(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_sequent__TOP__6\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP____024unit.__Vdpiimwrap_sana_TOP____024unit(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control, 
                                                             (0xffffU 
                                                              & ((4U 
                                                                  & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                                                                  ? 
                                                                 ((2U 
                                                                   & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                                                                   ? 
                                                                  ((1U 
                                                                    & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                                                                    ? 
                                                                   (((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                                                     == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                                                     ? 0U
                                                                     : 
                                                                    (((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                                                      > (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                                                      ? 1U
                                                                      : 2U))
                                                                    : 
                                                                   ((0x10U 
                                                                     > (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                                                     ? 
                                                                    ((0x1fU 
                                                                      >= (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                                                      ? 
                                                                     ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                                                      >> (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                                                      : 0U)
                                                                     : 0U))
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                                                                    ? 
                                                                   ((0x10U 
                                                                     > (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                                                     ? 
                                                                    ((0x1fU 
                                                                      >= (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                                                      ? 
                                                                     ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                                                      << (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                                                      : 0U)
                                                                     : 0U)
                                                                    : 
                                                                   ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                                                    ^ (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))))
                                                                  : 
                                                                 ((2U 
                                                                   & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                                                                   ? 
                                                                  ((1U 
                                                                    & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                                                                    ? 
                                                                   ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                                                    | (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                                                    : 
                                                                   ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                                                    & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out)))
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu))
                                                                    ? 
                                                                   ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                                                    - (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out))
                                                                    : 
                                                                   ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina) 
                                                                    + (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out)))))));
}

VL_INLINE_OPT void Vcore::_sequent__TOP__7(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_sequent__TOP__7\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina = 1U;
    } else {
        if (vlTOPp->core__DOT__bitty_core_inst__DOT__en_s) {
            vlTOPp->core__DOT__bitty_core_inst__DOT__to_ina 
                = vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->core__DOT__bitty_core_inst__DOT__to_control = 1U;
    } else {
        if (vlTOPp->core__DOT__bitty_core_inst__DOT__en_i) {
            vlTOPp->core__DOT__bitty_core_inst__DOT__to_control 
                = vlTOPp->instruction;
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_s = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    vlTOPp->core__DOT__bitty_core_inst__DOT__en_s = 1U;
                }
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_i = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                vlTOPp->core__DOT__bitty_core_inst__DOT__en_i = 1U;
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_0 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                          >> 0xfU)))) {
                                if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                              >> 0xeU)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                                  >> 0xdU)))) {
                                        vlTOPp->core__DOT__bitty_core_inst__DOT__en_0 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_1 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                          >> 0xfU)))) {
                                if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                              >> 0xeU)))) {
                                    if ((0x2000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                        vlTOPp->core__DOT__bitty_core_inst__DOT__en_1 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_2 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                          >> 0xfU)))) {
                                if ((0x4000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                    if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                                  >> 0xdU)))) {
                                        vlTOPp->core__DOT__bitty_core_inst__DOT__en_2 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_3 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                          >> 0xfU)))) {
                                if ((0x4000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                    if ((0x2000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                        vlTOPp->core__DOT__bitty_core_inst__DOT__en_3 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_4 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((0x8000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                              >> 0xeU)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                                  >> 0xdU)))) {
                                        vlTOPp->core__DOT__bitty_core_inst__DOT__en_4 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_5 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((0x8000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                              >> 0xeU)))) {
                                    if ((0x2000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                        vlTOPp->core__DOT__bitty_core_inst__DOT__en_5 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_6 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((0x8000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                if ((0x4000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                    if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                                  >> 0xdU)))) {
                                        vlTOPp->core__DOT__bitty_core_inst__DOT__en_6 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_7 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((0x8000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                if ((0x4000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                    if ((0x2000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                        vlTOPp->core__DOT__bitty_core_inst__DOT__en_7 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu 
                            = (7U & ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                     >> 2U));
                    }
                }
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__immediate = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                vlTOPp->core__DOT__bitty_core_inst__DOT__immediate 
                                    = (0xffU & ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                                >> 5U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux 
                        = (7U & ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                 >> 0xdU));
                } else {
                    if ((5U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux 
                            = ((2U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))
                                ? ((1U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))
                                    ? (7U & ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                             >> 0xaU))
                                    : (7U & ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                             >> 0xaU)))
                                : ((1U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))
                                    ? 8U : (7U & ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                                  >> 0xaU))));
                    }
                }
            }
        }
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__mux_out 
        = ((8U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux))
            ? ((4U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux))
                ? 0U : ((2U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux))
                         ? 0U : ((1U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux))
                                  ? 0U : (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__immediate))))
            : ((4U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux))
                ? ((2U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux))
                    ? ((1U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux))
                        ? (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__reg7)
                        : (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__reg6))
                    : ((1U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux))
                        ? (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__reg5)
                        : (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__reg4)))
                : ((2U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux))
                    ? ((1U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux))
                        ? (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__reg3)
                        : (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__reg2))
                    : ((1U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux))
                        ? (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__reg1)
                        : (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__reg0)))));
}

VL_INLINE_OPT void Vcore::_sequent__TOP__8(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_sequent__TOP__8\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->instruction = vlTOPp->core__DOT__ifu_inst__DOT__Memory__DOT__my_memory
        [vlTOPp->core__DOT__ifu_inst__DOT__current_address];
}

VL_INLINE_OPT void Vcore::_sequent__TOP__9(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_sequent__TOP__9\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->core__DOT__ifu_inst__DOT__current_address 
        = vlTOPp->__Vdly__core__DOT__ifu_inst__DOT__current_address;
}

void Vcore::_eval(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_eval\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    if (((IData)(vlTOPp->core__DOT__bitty_core_done) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__core__DOT__bitty_core_done)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP__core__DOT__bitty_core_done 
        = vlTOPp->core__DOT__bitty_core_done;
}

VL_INLINE_OPT QData Vcore::_change_request(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_change_request\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vcore::_change_request_1(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_change_request_1\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcore::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((run & 0xfeU))) {
        Verilated::overWidthError("run");}
}
#endif  // VL_DEBUG
