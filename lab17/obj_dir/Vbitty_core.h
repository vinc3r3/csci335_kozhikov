// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VBITTY_CORE_H_
#define _VBITTY_CORE_H_  // guard

#include "verilated.h"
#include "Vbitty_core__Dpi.h"

//==========

class Vbitty_core__Syms;
class Vbitty_core___024unit;


//----------

VL_MODULE(Vbitty_core) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vbitty_core___024unit* __PVT____024unit;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(done,0,0);
    VL_IN8(run,0,0);
    VL_IN16(instr,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ bitty_core__DOT__en_s;
    CData/*0:0*/ bitty_core__DOT__en_c;
    CData/*0:0*/ bitty_core__DOT__en_0;
    CData/*0:0*/ bitty_core__DOT__en_1;
    CData/*0:0*/ bitty_core__DOT__en_2;
    CData/*0:0*/ bitty_core__DOT__en_3;
    CData/*0:0*/ bitty_core__DOT__en_4;
    CData/*0:0*/ bitty_core__DOT__en_5;
    CData/*0:0*/ bitty_core__DOT__en_6;
    CData/*0:0*/ bitty_core__DOT__en_7;
    CData/*0:0*/ bitty_core__DOT__en_i;
    CData/*2:0*/ bitty_core__DOT__sel_to_alu;
    CData/*3:0*/ bitty_core__DOT__sel_to_mux;
    CData/*2:0*/ bitty_core__DOT__Control__DOT__current_state;
    CData/*2:0*/ bitty_core__DOT__Control__DOT__next_state;
    SData/*15:0*/ bitty_core__DOT__to_control;
    SData/*15:0*/ bitty_core__DOT__mux_out;
    SData/*15:0*/ bitty_core__DOT__to_ina;
    SData/*15:0*/ bitty_core__DOT__outs;
    SData/*15:0*/ bitty_core__DOT__immediate;
    SData/*15:0*/ bitty_core__DOT__reg0;
    SData/*15:0*/ bitty_core__DOT__reg1;
    SData/*15:0*/ bitty_core__DOT__reg2;
    SData/*15:0*/ bitty_core__DOT__reg3;
    SData/*15:0*/ bitty_core__DOT__reg4;
    SData/*15:0*/ bitty_core__DOT__reg5;
    SData/*15:0*/ bitty_core__DOT__reg6;
    SData/*15:0*/ bitty_core__DOT__reg7;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*3:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    CData/*0:0*/ __Vclklast__TOP__done;
    static CData/*2:0*/ __Vtable1_bitty_core__DOT__Control__DOT__next_state[16];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vbitty_core__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vbitty_core);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vbitty_core(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vbitty_core();
    
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
    static void _eval_initial_loop(Vbitty_core__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vbitty_core__Syms* symsp, bool first);
  private:
    static QData _change_request(Vbitty_core__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vbitty_core__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vbitty_core__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vbitty_core__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vbitty_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vbitty_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vbitty_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vbitty_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vbitty_core__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vbitty_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
