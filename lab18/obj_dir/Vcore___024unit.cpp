// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore___024unit.h"
#include "Vcore__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vcore___024unit::__Vdpiimwrap_sana_TOP____024unit(SData/*15:0*/ instruction, SData/*15:0*/ expected, SData/*15:0*/ last) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore___024unit::__Vdpiimwrap_sana_TOP____024unit\n"); );
    // Body
    unsigned short instruction__Vcvt;
    instruction__Vcvt = instruction;
    unsigned short expected__Vcvt;
    expected__Vcvt = expected;
    unsigned short last__Vcvt;
    last__Vcvt = last;
    sana(instruction__Vcvt, expected__Vcvt, last__Vcvt);
}
