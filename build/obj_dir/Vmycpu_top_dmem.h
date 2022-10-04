// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_DMEM_H_
#define VERILATED_VMYCPU_TOP_DMEM_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;

class Vmycpu_top_dmem final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__io_data_ok,0,0);
    VL_IN8(__PVT__io_WIDTH,1,0);
    VL_IN8(__PVT__io_SIGN,0,0);
    VL_OUT8(__PVT__io_data_pending,0,0);
    CData/*1:0*/ __PVT__ra;
    CData/*2:0*/ __PVT___io_RD_T_1;
    CData/*6:0*/ __PVT__io_RD_lo_lo_lo;
    CData/*6:0*/ __PVT__io_RD_lo_lo_lo_1;
    CData/*6:0*/ __PVT__io_RD_lo_lo_lo_2;
    CData/*6:0*/ __PVT__io_RD_lo_lo_lo_3;
    CData/*5:0*/ __PVT__io_RD_lo_lo_lo_4;
    CData/*5:0*/ __PVT__io_RD_lo_lo_lo_5;
    SData/*13:0*/ __PVT__io_RD_lo_lo;
    SData/*8:0*/ __PVT___io_RD_T_64;
    SData/*13:0*/ __PVT__io_RD_lo_lo_1;
    SData/*8:0*/ __PVT___io_RD_T_127;
    SData/*13:0*/ __PVT__io_RD_lo_lo_2;
    SData/*8:0*/ __PVT___io_RD_T_190;
    SData/*13:0*/ __PVT__io_RD_lo_lo_3;
    SData/*8:0*/ __PVT___io_RD_T_253;
    SData/*11:0*/ __PVT__io_RD_lo_lo_4;
    SData/*11:0*/ __PVT__io_RD_lo_lo_5;
    IData/*27:0*/ __PVT__io_RD_lo;
    IData/*27:0*/ __PVT__io_RD_lo_1;
    IData/*27:0*/ __PVT__io_RD_lo_2;
    IData/*27:0*/ __PVT__io_RD_lo_3;
    IData/*23:0*/ __PVT__io_RD_lo_4;
    IData/*16:0*/ __PVT___io_RD_T_323;
    IData/*23:0*/ __PVT__io_RD_lo_5;
    IData/*16:0*/ __PVT___io_RD_T_378;
    VL_IN64(__PVT__io_rdata,63,0);
    VL_IN64(__PVT__io_Physisc_Address,63,0);
    VL_OUT64(__PVT__io_RD,63,0);
    QData/*55:0*/ __PVT___io_RD_T_59;
    QData/*63:0*/ __PVT___io_RD_T_61;
    QData/*55:0*/ __PVT___io_RD_T_122;
    QData/*63:0*/ __PVT___io_RD_T_124;
    QData/*55:0*/ __PVT___io_RD_T_185;
    QData/*63:0*/ __PVT___io_RD_T_187;
    QData/*55:0*/ __PVT___io_RD_T_248;
    QData/*63:0*/ __PVT___io_RD_T_250;
    QData/*63:0*/ __PVT___io_RD_T_255;
    QData/*63:0*/ __PVT___io_RD_T_257;
    QData/*63:0*/ __PVT___io_RD_T_259;
    QData/*63:0*/ __PVT___io_RD_T_261;
    QData/*63:0*/ __PVT___io_RD_T_263;
    QData/*63:0*/ __PVT___io_RD_T_265;
    QData/*63:0*/ __PVT___io_RD_T_267;
    QData/*63:0*/ __PVT___io_RD_T_320;
    QData/*63:0*/ __PVT___io_RD_T_375;
    QData/*63:0*/ __PVT___io_RD_T_380;
    QData/*63:0*/ __PVT___io_RD_T_382;
    QData/*63:0*/ __PVT___io_RD_T_384;
    QData/*63:0*/ __PVT___io_RD_T_386;
    QData/*63:0*/ __PVT___io_RD_T_388;
    QData/*63:0*/ __PVT___io_RD_T_390;

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_dmem(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_dmem();
    VL_UNCOPYABLE(Vmycpu_top_dmem);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
