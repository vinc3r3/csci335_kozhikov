// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "Vcontrol_unit.h"
#include "Vcontrol_unit__Syms.h"

//==========
CData/*2:0*/ Vcontrol_unit::__Vtable1_control_unit__DOT__next_state[16];

VL_CTOR_IMP(Vcontrol_unit) {
    Vcontrol_unit__Syms* __restrict vlSymsp = __VlSymsp = new Vcontrol_unit__Syms(this, name());
    Vcontrol_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcontrol_unit::__Vconfigure(Vcontrol_unit__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vcontrol_unit::~Vcontrol_unit() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vcontrol_unit::_settle__TOP__2(Vcontrol_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit::_settle__TOP__2\n"); );
    Vcontrol_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->done = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                            vlTOPp->done = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->en_c = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    if ((5U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                        vlTOPp->en_c = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->en_s = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    vlTOPp->en_s = 1U;
                }
            }
        }
    }
    vlTOPp->en_i = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                vlTOPp->en_i = 1U;
            }
        }
    }
    vlTOPp->immediate = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    if ((5U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                        if ((1U & (~ ((IData)(vlTOPp->reg_inst) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlTOPp->reg_inst))) {
                                vlTOPp->immediate = 
                                    (0xffU & ((IData)(vlTOPp->reg_inst) 
                                              >> 5U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->en_0 = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                            if ((1U & (~ ((IData)(vlTOPp->reg_inst) 
                                          >> 0xfU)))) {
                                if ((1U & (~ ((IData)(vlTOPp->reg_inst) 
                                              >> 0xeU)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->reg_inst) 
                                                  >> 0xdU)))) {
                                        vlTOPp->en_0 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->en_1 = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                            if ((1U & (~ ((IData)(vlTOPp->reg_inst) 
                                          >> 0xfU)))) {
                                if ((1U & (~ ((IData)(vlTOPp->reg_inst) 
                                              >> 0xeU)))) {
                                    if ((0x2000U & (IData)(vlTOPp->reg_inst))) {
                                        vlTOPp->en_1 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->en_2 = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                            if ((1U & (~ ((IData)(vlTOPp->reg_inst) 
                                          >> 0xfU)))) {
                                if ((0x4000U & (IData)(vlTOPp->reg_inst))) {
                                    if ((1U & (~ ((IData)(vlTOPp->reg_inst) 
                                                  >> 0xdU)))) {
                                        vlTOPp->en_2 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->en_3 = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                            if ((1U & (~ ((IData)(vlTOPp->reg_inst) 
                                          >> 0xfU)))) {
                                if ((0x4000U & (IData)(vlTOPp->reg_inst))) {
                                    if ((0x2000U & (IData)(vlTOPp->reg_inst))) {
                                        vlTOPp->en_3 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->en_4 = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                            if ((0x8000U & (IData)(vlTOPp->reg_inst))) {
                                if ((1U & (~ ((IData)(vlTOPp->reg_inst) 
                                              >> 0xeU)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->reg_inst) 
                                                  >> 0xdU)))) {
                                        vlTOPp->en_4 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->en_5 = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                            if ((0x8000U & (IData)(vlTOPp->reg_inst))) {
                                if ((1U & (~ ((IData)(vlTOPp->reg_inst) 
                                              >> 0xeU)))) {
                                    if ((0x2000U & (IData)(vlTOPp->reg_inst))) {
                                        vlTOPp->en_5 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->en_6 = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                            if ((0x8000U & (IData)(vlTOPp->reg_inst))) {
                                if ((0x4000U & (IData)(vlTOPp->reg_inst))) {
                                    if ((1U & (~ ((IData)(vlTOPp->reg_inst) 
                                                  >> 0xdU)))) {
                                        vlTOPp->en_6 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->en_7 = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                            if ((0x8000U & (IData)(vlTOPp->reg_inst))) {
                                if ((0x4000U & (IData)(vlTOPp->reg_inst))) {
                                    if ((0x2000U & (IData)(vlTOPp->reg_inst))) {
                                        vlTOPp->en_7 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->mux_select = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    vlTOPp->mux_select = (7U & ((IData)(vlTOPp->reg_inst) 
                                                >> 0xdU));
                } else {
                    if ((5U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                        vlTOPp->mux_select = ((2U & (IData)(vlTOPp->reg_inst))
                                               ? ((1U 
                                                   & (IData)(vlTOPp->reg_inst))
                                                   ? 
                                                  (7U 
                                                   & ((IData)(vlTOPp->reg_inst) 
                                                      >> 0xaU))
                                                   : 
                                                  (7U 
                                                   & ((IData)(vlTOPp->reg_inst) 
                                                      >> 0xaU)))
                                               : ((1U 
                                                   & (IData)(vlTOPp->reg_inst))
                                                   ? 8U
                                                   : 
                                                  (7U 
                                                   & ((IData)(vlTOPp->reg_inst) 
                                                      >> 0xaU))));
                    }
                }
            }
        }
    }
    vlTOPp->alu_select = 0U;
    if ((1U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->control_unit__DOT__current_state))) {
                    if ((5U == (IData)(vlTOPp->control_unit__DOT__current_state))) {
                        vlTOPp->alu_select = (7U & 
                                              ((IData)(vlTOPp->reg_inst) 
                                               >> 2U));
                    }
                }
            }
        }
    }
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->run) << 3U) 
                            | (IData)(vlTOPp->control_unit__DOT__current_state));
    vlTOPp->control_unit__DOT__next_state = vlTOPp->__Vtable1_control_unit__DOT__next_state
        [vlTOPp->__Vtableidx1];
}

void Vcontrol_unit::_eval_initial(Vcontrol_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit::_eval_initial\n"); );
    Vcontrol_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vcontrol_unit::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit::final\n"); );
    // Variables
    Vcontrol_unit__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcontrol_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcontrol_unit::_eval_settle(Vcontrol_unit__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit::_eval_settle\n"); );
    Vcontrol_unit* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vcontrol_unit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    run = VL_RAND_RESET_I(1);
    reg_inst = VL_RAND_RESET_I(16);
    alu_select = VL_RAND_RESET_I(3);
    mux_select = VL_RAND_RESET_I(4);
    en_s = VL_RAND_RESET_I(1);
    en_c = VL_RAND_RESET_I(1);
    en_0 = VL_RAND_RESET_I(1);
    en_1 = VL_RAND_RESET_I(1);
    en_2 = VL_RAND_RESET_I(1);
    en_3 = VL_RAND_RESET_I(1);
    en_4 = VL_RAND_RESET_I(1);
    en_5 = VL_RAND_RESET_I(1);
    en_6 = VL_RAND_RESET_I(1);
    en_7 = VL_RAND_RESET_I(1);
    en_i = VL_RAND_RESET_I(1);
    done = VL_RAND_RESET_I(1);
    immediate = VL_RAND_RESET_I(16);
    control_unit__DOT__current_state = VL_RAND_RESET_I(3);
    control_unit__DOT__next_state = VL_RAND_RESET_I(3);
    __Vtableidx1 = 0;
    __Vtable1_control_unit__DOT__next_state[0] = 0U;
    __Vtable1_control_unit__DOT__next_state[1] = 1U;
    __Vtable1_control_unit__DOT__next_state[2] = 2U;
    __Vtable1_control_unit__DOT__next_state[3] = 3U;
    __Vtable1_control_unit__DOT__next_state[4] = 4U;
    __Vtable1_control_unit__DOT__next_state[5] = 5U;
    __Vtable1_control_unit__DOT__next_state[6] = 6U;
    __Vtable1_control_unit__DOT__next_state[7] = 7U;
    __Vtable1_control_unit__DOT__next_state[8] = 1U;
    __Vtable1_control_unit__DOT__next_state[9] = 2U;
    __Vtable1_control_unit__DOT__next_state[10] = 3U;
    __Vtable1_control_unit__DOT__next_state[11] = 4U;
    __Vtable1_control_unit__DOT__next_state[12] = 5U;
    __Vtable1_control_unit__DOT__next_state[13] = 6U;
    __Vtable1_control_unit__DOT__next_state[14] = 1U;
    __Vtable1_control_unit__DOT__next_state[15] = 1U;
}
