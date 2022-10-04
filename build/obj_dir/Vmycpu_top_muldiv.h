// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_MULDIV_H_
#define VERILATED_VMYCPU_TOP_MULDIV_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;

class Vmycpu_top_muldiv final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__io_ctrl,4,0);
    VL_IN(__PVT__io_in1,31,0);
    VL_IN(__PVT__io_in2,31,0);
    VL_OUT(__PVT__io_lo,31,0);
    IData/*31:0*/ __PVT___GEN_0;
    IData/*31:0*/ __PVT___divu_answer_T;
    IData/*31:0*/ __PVT___divu_answer_T_1;
    IData/*31:0*/ __PVT__div_answer_hi;
    IData/*31:0*/ __PVT___io_lo_T_10;
    IData/*31:0*/ __PVT___io_lo_T_11;
    IData/*31:0*/ __PVT___io_lo_T_12;
    IData/*31:0*/ __PVT___io_lo_T_13;
    IData/*31:0*/ __PVT___io_lo_T_14;
    IData/*31:0*/ __PVT___io_lo_T_15;
    IData/*31:0*/ __PVT___io_lo_T_16;
    IData/*31:0*/ __PVT___io_lo_T_17;
    QData/*63:0*/ __PVT__mulu_answer;
    QData/*63:0*/ __PVT__mul_answer;
    QData/*63:0*/ __PVT__divu_answer;
    QData/*63:0*/ __PVT__div_answer;

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_muldiv(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_muldiv();
    VL_UNCOPYABLE(Vmycpu_top_muldiv);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
