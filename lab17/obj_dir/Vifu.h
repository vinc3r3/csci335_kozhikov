// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VIFU_H_
#define _VIFU_H_  // guard

#include "verilated_heavy.h"

//==========

class Vifu__Syms;

//----------

VL_MODULE(Vifu) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(en_pc,0,0);
    VL_OUT16(instruction,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*7:0*/ ifu__DOT__current_address;
    SData/*15:0*/ ifu__DOT__Memory__DOT__my_memory[256];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vifu__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vifu);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vifu(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vifu();
    
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
    static void _eval_initial_loop(Vifu__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vifu__Syms* symsp, bool first);
  private:
    static QData _change_request(Vifu__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vifu__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vifu__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vifu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vifu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(Vifu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vifu__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vifu__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
