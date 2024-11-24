// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore.h"
#include "Vcore__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*2:0*/ Vcore::__Vtable1_core__DOT__bitty_core_inst__DOT__Control__DOT__next_state[8];

VL_CTOR_IMP(Vcore) {
    Vcore__Syms* __restrict vlSymsp = __VlSymsp = new Vcore__Syms(this, name());
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT____024unit, Vcore___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcore::__Vconfigure(Vcore__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vcore::~Vcore() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vcore::_settle__TOP__3(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_settle__TOP__3\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state;
    vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__next_state 
        = vlTOPp->__Vtable1_core__DOT__bitty_core_inst__DOT__Control__DOT__next_state
        [vlTOPp->__Vtableidx1];
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
                            if ((2U > (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                              >> 0xfU)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
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
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_1 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                              >> 0xfU)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
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
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_2 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                              >> 0xfU)))) {
                                    if ((0x4000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
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
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_3 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                              >> 0xfU)))) {
                                    if ((0x4000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                        if ((0x2000U 
                                             & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
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
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_4 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                if ((0x8000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                    if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
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
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_5 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                if ((0x8000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                    if ((1U & (~ ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
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
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_6 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                if ((0x8000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                    if ((0x4000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
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
    }
    vlTOPp->core__DOT__bitty_core_inst__DOT__en_7 = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((6U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                            if ((2U > (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                if ((0x8000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                    if ((0x4000U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
                                        if ((0x2000U 
                                             & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control))) {
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
    vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu = 0U;
    if ((1U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
        if ((2U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
            if ((3U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                if ((4U != (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                    if ((5U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((2U != (3U & (IData)(vlTOPp->instruction)))) {
                            if ((0U == (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu 
                                    = (7U & ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                             >> 2U));
                            } else {
                                if ((1U == (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                    vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_alu 
                                        = (7U & ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                                 >> 2U));
                                }
                            }
                        }
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
                        if ((2U != (3U & (IData)(vlTOPp->instruction)))) {
                            if ((0U != (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                if ((1U == (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                    vlTOPp->core__DOT__bitty_core_inst__DOT__immediate 
                                        = (0xffU & 
                                           ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                            >> 5U));
                                }
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
                    if ((2U > (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                        vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux 
                            = (7U & ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                     >> 0xdU));
                    }
                } else {
                    if ((5U == (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__Control__DOT__current_state))) {
                        if ((2U != (3U & (IData)(vlTOPp->instruction)))) {
                            if ((0U == (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux 
                                    = (7U & ((IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control) 
                                             >> 0xaU));
                            } else {
                                if ((1U == (3U & (IData)(vlTOPp->core__DOT__bitty_core_inst__DOT__to_control)))) {
                                    vlTOPp->core__DOT__bitty_core_inst__DOT__sel_to_mux = 8U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->core_done = ((IData)(vlTOPp->core__DOT__bitty_core_done) 
                         & (2U != (3U & (IData)(vlTOPp->instruction))));
    if (vlTOPp->core__DOT__bitty_core_done) {
        if ((0U == (3U & (IData)(vlTOPp->instruction)))) {
            vlTOPp->core__DOT__ifu_inst__DOT__current_address 
                = (0xfffU & ((IData)(1U) + (IData)(vlTOPp->core__DOT__ifu_inst__DOT__next_address)));
        } else {
            if ((1U == (3U & (IData)(vlTOPp->instruction)))) {
                vlTOPp->core__DOT__ifu_inst__DOT__current_address 
                    = (0xfffU & ((IData)(1U) + (IData)(vlTOPp->core__DOT__ifu_inst__DOT__next_address)));
            } else {
                if ((2U == (3U & (IData)(vlTOPp->instruction)))) {
                    if ((0U == (3U & ((IData)(vlTOPp->instruction) 
                                      >> 2U)))) {
                        if ((0U == (IData)(vlTOPp->core__DOT__last_alu_result))) {
                            vlTOPp->core__DOT__ifu_inst__DOT__current_address 
                                = (0xfffU & ((IData)(vlTOPp->instruction) 
                                             >> 4U));
                        }
                    } else {
                        if ((1U == (3U & ((IData)(vlTOPp->instruction) 
                                          >> 2U)))) {
                            if ((1U == (IData)(vlTOPp->core__DOT__last_alu_result))) {
                                vlTOPp->core__DOT__ifu_inst__DOT__current_address 
                                    = (0xfffU & ((IData)(vlTOPp->instruction) 
                                                 >> 4U));
                            }
                        } else {
                            if ((2U == (3U & ((IData)(vlTOPp->instruction) 
                                              >> 2U)))) {
                                if ((2U == (IData)(vlTOPp->core__DOT__last_alu_result))) {
                                    vlTOPp->core__DOT__ifu_inst__DOT__current_address 
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

void Vcore::_initial__TOP__4(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_initial__TOP__4\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    // Body
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x61636369U;
    __Vtemp1[2U] = 0x69626f6eU;
    __Vtemp1[3U] = 0x2e2f66U;
    VL_READMEM_N(true, 16, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 , vlTOPp->core__DOT__ifu_inst__DOT__Memory__DOT__my_memory
                 , 0, ~0ULL);
}

void Vcore::_eval_initial(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_eval_initial\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__4(vlSymsp);
    vlTOPp->__Vclklast__TOP__core__DOT__bitty_core_done 
        = vlTOPp->core__DOT__bitty_core_done;
}

void Vcore::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::final\n"); );
    // Variables
    Vcore__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcore::_eval_settle(Vcore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_eval_settle\n"); );
    Vcore* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vcore::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    instruction = VL_RAND_RESET_I(16);
    core_done = VL_RAND_RESET_I(1);
    core__DOT__bitty_core_done = VL_RAND_RESET_I(1);
    core__DOT__last_alu_result = VL_RAND_RESET_I(16);
    core__DOT__ifu_inst__DOT__current_address = VL_RAND_RESET_I(12);
    core__DOT__ifu_inst__DOT__next_address = VL_RAND_RESET_I(12);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
            core__DOT__ifu_inst__DOT__Memory__DOT__my_memory[__Vi0] = VL_RAND_RESET_I(16);
    }}
    core__DOT__bitty_core_inst__DOT__en_s = VL_RAND_RESET_I(1);
    core__DOT__bitty_core_inst__DOT__en_c = VL_RAND_RESET_I(1);
    core__DOT__bitty_core_inst__DOT__en_0 = VL_RAND_RESET_I(1);
    core__DOT__bitty_core_inst__DOT__en_1 = VL_RAND_RESET_I(1);
    core__DOT__bitty_core_inst__DOT__en_2 = VL_RAND_RESET_I(1);
    core__DOT__bitty_core_inst__DOT__en_3 = VL_RAND_RESET_I(1);
    core__DOT__bitty_core_inst__DOT__en_4 = VL_RAND_RESET_I(1);
    core__DOT__bitty_core_inst__DOT__en_5 = VL_RAND_RESET_I(1);
    core__DOT__bitty_core_inst__DOT__en_6 = VL_RAND_RESET_I(1);
    core__DOT__bitty_core_inst__DOT__en_7 = VL_RAND_RESET_I(1);
    core__DOT__bitty_core_inst__DOT__en_i = VL_RAND_RESET_I(1);
    core__DOT__bitty_core_inst__DOT__to_control = VL_RAND_RESET_I(16);
    core__DOT__bitty_core_inst__DOT__mux_out = VL_RAND_RESET_I(16);
    core__DOT__bitty_core_inst__DOT__to_ina = VL_RAND_RESET_I(16);
    core__DOT__bitty_core_inst__DOT__immediate = VL_RAND_RESET_I(16);
    core__DOT__bitty_core_inst__DOT__sel_to_alu = VL_RAND_RESET_I(3);
    core__DOT__bitty_core_inst__DOT__sel_to_mux = VL_RAND_RESET_I(4);
    core__DOT__bitty_core_inst__DOT__reg0 = VL_RAND_RESET_I(16);
    core__DOT__bitty_core_inst__DOT__reg1 = VL_RAND_RESET_I(16);
    core__DOT__bitty_core_inst__DOT__reg2 = VL_RAND_RESET_I(16);
    core__DOT__bitty_core_inst__DOT__reg3 = VL_RAND_RESET_I(16);
    core__DOT__bitty_core_inst__DOT__reg4 = VL_RAND_RESET_I(16);
    core__DOT__bitty_core_inst__DOT__reg5 = VL_RAND_RESET_I(16);
    core__DOT__bitty_core_inst__DOT__reg6 = VL_RAND_RESET_I(16);
    core__DOT__bitty_core_inst__DOT__reg7 = VL_RAND_RESET_I(16);
    core__DOT__bitty_core_inst__DOT__Control__DOT__current_state = VL_RAND_RESET_I(3);
    core__DOT__bitty_core_inst__DOT__Control__DOT__next_state = VL_RAND_RESET_I(3);
    __Vtableidx1 = 0;
    __Vtable1_core__DOT__bitty_core_inst__DOT__Control__DOT__next_state[0] = 1U;
    __Vtable1_core__DOT__bitty_core_inst__DOT__Control__DOT__next_state[1] = 2U;
    __Vtable1_core__DOT__bitty_core_inst__DOT__Control__DOT__next_state[2] = 3U;
    __Vtable1_core__DOT__bitty_core_inst__DOT__Control__DOT__next_state[3] = 4U;
    __Vtable1_core__DOT__bitty_core_inst__DOT__Control__DOT__next_state[4] = 5U;
    __Vtable1_core__DOT__bitty_core_inst__DOT__Control__DOT__next_state[5] = 6U;
    __Vtable1_core__DOT__bitty_core_inst__DOT__Control__DOT__next_state[6] = 1U;
    __Vtable1_core__DOT__bitty_core_inst__DOT__Control__DOT__next_state[7] = 1U;
}
