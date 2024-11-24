// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCORE__SYMS_H_
#define _VCORE__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vcore.h"
#include "Vcore___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vcore__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vcore*                         TOPp;
    Vcore___024unit                TOP____024unit;
    
    // CREATORS
    Vcore__Syms(Vcore* topp, const char* namep);
    ~Vcore__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
