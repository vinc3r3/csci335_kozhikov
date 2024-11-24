// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCORE_H_
#define _VCORE_H_  // guard

#include "verilated_heavy.h"
#include "Vcore__Dpi.h"

//==========

class Vcore__Syms;
class Vcore___024unit;


//----------

VL_MODULE(Vcore) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vcore___024unit* __PVT____024unit;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(core_done,0,0);
    VL_OUT16(instruction,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ core__DOT__bitty_core_done;
    CData/*0:0*/ core__DOT__bitty_core_inst__DOT__en_s;
    CData/*0:0*/ core__DOT__bitty_core_inst__DOT__en_c;
    CData/*0:0*/ core__DOT__bitty_core_inst__DOT__en_0;
    CData/*0:0*/ core__DOT__bitty_core_inst__DOT__en_1;
    CData/*0:0*/ core__DOT__bitty_core_inst__DOT__en_2;
    CData/*0:0*/ core__DOT__bitty_core_inst__DOT__en_3;
    CData/*0:0*/ core__DOT__bitty_core_inst__DOT__en_4;
    CData/*0:0*/ core__DOT__bitty_core_inst__DOT__en_5;
    CData/*0:0*/ core__DOT__bitty_core_inst__DOT__en_6;
    CData/*0:0*/ core__DOT__bitty_core_inst__DOT__en_7;
    CData/*0:0*/ core__DOT__bitty_core_inst__DOT__en_i;
    CData/*2:0*/ core__DOT__bitty_core_inst__DOT__sel_to_alu;
    CData/*3:0*/ core__DOT__bitty_core_inst__DOT__sel_to_mux;
    CData/*2:0*/ core__DOT__bitty_core_inst__DOT__Control__DOT__current_state;
    CData/*2:0*/ core__DOT__bitty_core_inst__DOT__Control__DOT__next_state;
    SData/*15:0*/ core__DOT__last_alu_result;
    SData/*11:0*/ core__DOT__ifu_inst__DOT__current_address;
    SData/*11:0*/ core__DOT__ifu_inst__DOT__next_address;
    SData/*15:0*/ core__DOT__bitty_core_inst__DOT__to_control;
    SData/*15:0*/ core__DOT__bitty_core_inst__DOT__mux_out;
    SData/*15:0*/ core__DOT__bitty_core_inst__DOT__to_ina;
    SData/*15:0*/ core__DOT__bitty_core_inst__DOT__immediate;
    SData/*15:0*/ core__DOT__bitty_core_inst__DOT__reg0;
    SData/*15:0*/ core__DOT__bitty_core_inst__DOT__reg1;
    SData/*15:0*/ core__DOT__bitty_core_inst__DOT__reg2;
    SData/*15:0*/ core__DOT__bitty_core_inst__DOT__reg3;
    SData/*15:0*/ core__DOT__bitty_core_inst__DOT__reg4;
    SData/*15:0*/ core__DOT__bitty_core_inst__DOT__reg5;
    SData/*15:0*/ core__DOT__bitty_core_inst__DOT__reg6;
    SData/*15:0*/ core__DOT__bitty_core_inst__DOT__reg7;
    SData/*15:0*/ core__DOT__ifu_inst__DOT__Memory__DOT__my_memory[4096];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vclklast__TOP__core__DOT__bitty_core_done;
    static CData/*2:0*/ __Vtable1_core__DOT__bitty_core_inst__DOT__Control__DOT__next_state[8];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vcore__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcore);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vcore(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vcore();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vcore__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vcore__Syms* symsp, bool first);
  private:
    static QData _change_request(Vcore__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vcore__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vcore__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vcore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vcore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__4(Vcore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vcore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vcore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vcore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vcore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(Vcore__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vcore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
