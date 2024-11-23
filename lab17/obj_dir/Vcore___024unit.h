// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef _VCORE___024UNIT_H_
#define _VCORE___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "Vcore__Dpi.h"

//==========

class Vcore__Syms;

//----------

VL_MODULE(Vcore___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vcore__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcore___024unit);  ///< Copying not allowed
  public:
    Vcore___024unit(const char* name = "TOP");
    ~Vcore___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vcore__Syms* symsp, bool first);
    void __Vdpiimwrap_sana_TOP____024unit(SData/*15:0*/ instruction, SData/*15:0*/ expected);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
