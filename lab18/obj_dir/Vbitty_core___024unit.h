// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbitty_core.h for the primary calling header

#ifndef _VBITTY_CORE___024UNIT_H_
#define _VBITTY_CORE___024UNIT_H_  // guard

#include "verilated.h"
#include "Vbitty_core__Dpi.h"

//==========

class Vbitty_core__Syms;

//----------

VL_MODULE(Vbitty_core___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vbitty_core__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbitty_core___024unit);  ///< Copying not allowed
  public:
    Vbitty_core___024unit(const char* name = "TOP");
    ~Vbitty_core___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vbitty_core__Syms* symsp, bool first);
    void __Vdpiimwrap_sana_TOP____024unit(SData/*15:0*/ instruction, SData/*15:0*/ expected, SData/*15:0*/ last);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
