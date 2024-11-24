// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core.h"
#include "Vbitty_core__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*2:0*/ Vbitty_core::__Vtable1_bitty_core__DOT__Control__DOT__next_state[8];

VL_CTOR_IMP(Vbitty_core) {
    Vbitty_core__Syms* __restrict vlSymsp = __VlSymsp = new Vbitty_core__Syms(this, name());
    Vbitty_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT____024unit, Vbitty_core___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vbitty_core::__Vconfigure(Vbitty_core__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vbitty_core::~Vbitty_core() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vbitty_core::_settle__TOP__2(Vbitty_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core::_settle__TOP__2\n"); );
    Vbitty_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vbitty_core::_eval_initial(Vbitty_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core::_eval_initial\n"); );
    Vbitty_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
    vlTOPp->__Vclklast__TOP__done = vlTOPp->done;
}

void Vbitty_core::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core::final\n"); );
    // Variables
    Vbitty_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vbitty_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vbitty_core::_eval_settle(Vbitty_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core::_eval_settle\n"); );
    Vbitty_core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vbitty_core::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    instr = VL_RAND_RESET_I(16);
    run = VL_RAND_RESET_I(1);
    done = VL_RAND_RESET_I(1);
    out_C = VL_RAND_RESET_I(16);
    bitty_core__DOT__en_s = VL_RAND_RESET_I(1);
    bitty_core__DOT__en_c = VL_RAND_RESET_I(1);
    bitty_core__DOT__en_0 = VL_RAND_RESET_I(1);
    bitty_core__DOT__en_1 = VL_RAND_RESET_I(1);
    bitty_core__DOT__en_2 = VL_RAND_RESET_I(1);
    bitty_core__DOT__en_3 = VL_RAND_RESET_I(1);
    bitty_core__DOT__en_4 = VL_RAND_RESET_I(1);
    bitty_core__DOT__en_5 = VL_RAND_RESET_I(1);
    bitty_core__DOT__en_6 = VL_RAND_RESET_I(1);
    bitty_core__DOT__en_7 = VL_RAND_RESET_I(1);
    bitty_core__DOT__en_i = VL_RAND_RESET_I(1);
    bitty_core__DOT__to_control = VL_RAND_RESET_I(16);
    bitty_core__DOT__mux_out = VL_RAND_RESET_I(16);
    bitty_core__DOT__to_ina = VL_RAND_RESET_I(16);
    bitty_core__DOT__immediate = VL_RAND_RESET_I(16);
    bitty_core__DOT__sel_to_alu = VL_RAND_RESET_I(3);
    bitty_core__DOT__sel_to_mux = VL_RAND_RESET_I(4);
    bitty_core__DOT__reg0 = VL_RAND_RESET_I(16);
    bitty_core__DOT__reg1 = VL_RAND_RESET_I(16);
    bitty_core__DOT__reg2 = VL_RAND_RESET_I(16);
    bitty_core__DOT__reg3 = VL_RAND_RESET_I(16);
    bitty_core__DOT__reg4 = VL_RAND_RESET_I(16);
    bitty_core__DOT__reg5 = VL_RAND_RESET_I(16);
    bitty_core__DOT__reg6 = VL_RAND_RESET_I(16);
    bitty_core__DOT__reg7 = VL_RAND_RESET_I(16);
    bitty_core__DOT__Control__DOT__current_state = VL_RAND_RESET_I(3);
    bitty_core__DOT__Control__DOT__next_state = VL_RAND_RESET_I(3);
    __Vtableidx1 = 0;
    __Vtable1_bitty_core__DOT__Control__DOT__next_state[0] = 1U;
    __Vtable1_bitty_core__DOT__Control__DOT__next_state[1] = 2U;
    __Vtable1_bitty_core__DOT__Control__DOT__next_state[2] = 3U;
    __Vtable1_bitty_core__DOT__Control__DOT__next_state[3] = 4U;
    __Vtable1_bitty_core__DOT__Control__DOT__next_state[4] = 5U;
    __Vtable1_bitty_core__DOT__Control__DOT__next_state[5] = 6U;
    __Vtable1_bitty_core__DOT__Control__DOT__next_state[6] = 1U;
    __Vtable1_bitty_core__DOT__Control__DOT__next_state[7] = 1U;
}
