// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpin.h for the primary calling header

#include "Vpin.h"
#include "Vpin__Syms.h"

//==========
CData/*3:0*/ Vpin::__Vtable1_pin_fsm__DOT__next_state[256];

VL_CTOR_IMP(Vpin) {
    Vpin__Syms* __restrict vlSymsp = __VlSymsp = new Vpin__Syms(this, name());
    Vpin* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vpin::__Vconfigure(Vpin__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vpin::~Vpin() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vpin::_settle__TOP__2(Vpin__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpin::_settle__TOP__2\n"); );
    Vpin* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->status = (1U & ((~ ((IData)(vlTOPp->pin_fsm__DOT__current_state) 
                                >> 3U)) & (((IData)(vlTOPp->pin_fsm__DOT__current_state) 
                                            >> 2U) 
                                           & (((IData)(vlTOPp->pin_fsm__DOT__current_state) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->pin_fsm__DOT__current_state))))));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->digit) 
                             << 4U) | (IData)(vlTOPp->pin_fsm__DOT__current_state));
    vlTOPp->pin_fsm__DOT__next_state = vlTOPp->__Vtable1_pin_fsm__DOT__next_state
        [vlTOPp->__Vtableidx1];
}

void Vpin::_eval_initial(Vpin__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpin::_eval_initial\n"); );
    Vpin* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vpin::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpin::final\n"); );
    // Variables
    Vpin__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vpin* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpin::_eval_settle(Vpin__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpin::_eval_settle\n"); );
    Vpin* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vpin::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpin::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    digit = VL_RAND_RESET_I(4);
    status = VL_RAND_RESET_I(1);
    pin_fsm__DOT__current_state = VL_RAND_RESET_I(4);
    pin_fsm__DOT__next_state = VL_RAND_RESET_I(4);
    __Vtableidx1 = 0;
    __Vtable1_pin_fsm__DOT__next_state[0] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[1] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[2] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[3] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[4] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[5] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[6] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[7] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[8] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[9] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[10] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[11] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[12] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[13] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[14] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[15] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[16] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[17] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[18] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[19] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[20] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[21] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[22] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[23] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[24] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[25] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[26] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[27] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[28] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[29] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[30] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[31] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[32] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[33] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[34] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[35] = 4U;
    __Vtable1_pin_fsm__DOT__next_state[36] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[37] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[38] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[39] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[40] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[41] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[42] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[43] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[44] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[45] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[46] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[47] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[48] = 1U;
    __Vtable1_pin_fsm__DOT__next_state[49] = 2U;
    __Vtable1_pin_fsm__DOT__next_state[50] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[51] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[52] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[53] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[54] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[55] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[56] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[57] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[58] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[59] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[60] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[61] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[62] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[63] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[64] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[65] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[66] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[67] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[68] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[69] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[70] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[71] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[72] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[73] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[74] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[75] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[76] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[77] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[78] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[79] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[80] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[81] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[82] = 3U;
    __Vtable1_pin_fsm__DOT__next_state[83] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[84] = 5U;
    __Vtable1_pin_fsm__DOT__next_state[85] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[86] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[87] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[88] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[89] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[90] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[91] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[92] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[93] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[94] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[95] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[96] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[97] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[98] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[99] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[100] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[101] = 6U;
    __Vtable1_pin_fsm__DOT__next_state[102] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[103] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[104] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[105] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[106] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[107] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[108] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[109] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[110] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[111] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[112] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[113] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[114] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[115] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[116] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[117] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[118] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[119] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[120] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[121] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[122] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[123] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[124] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[125] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[126] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[127] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[128] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[129] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[130] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[131] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[132] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[133] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[134] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[135] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[136] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[137] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[138] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[139] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[140] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[141] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[142] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[143] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[144] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[145] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[146] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[147] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[148] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[149] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[150] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[151] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[152] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[153] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[154] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[155] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[156] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[157] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[158] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[159] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[160] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[161] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[162] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[163] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[164] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[165] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[166] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[167] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[168] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[169] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[170] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[171] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[172] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[173] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[174] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[175] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[176] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[177] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[178] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[179] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[180] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[181] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[182] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[183] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[184] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[185] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[186] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[187] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[188] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[189] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[190] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[191] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[192] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[193] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[194] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[195] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[196] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[197] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[198] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[199] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[200] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[201] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[202] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[203] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[204] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[205] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[206] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[207] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[208] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[209] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[210] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[211] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[212] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[213] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[214] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[215] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[216] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[217] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[218] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[219] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[220] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[221] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[222] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[223] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[224] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[225] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[226] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[227] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[228] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[229] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[230] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[231] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[232] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[233] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[234] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[235] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[236] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[237] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[238] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[239] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[240] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[241] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[242] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[243] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[244] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[245] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[246] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[247] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[248] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[249] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[250] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[251] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[252] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[253] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[254] = 0U;
    __Vtable1_pin_fsm__DOT__next_state[255] = 0U;
}
