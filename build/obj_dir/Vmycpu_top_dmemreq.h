// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_DMEMREQ_H_
#define VERILATED_VMYCPU_TOP_DMEMREQ_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;

class Vmycpu_top_dmemreq final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__io_en,0,0);
    VL_IN8(__PVT__io_MemWriteE,0,0);
    VL_IN8(__PVT__io_MemToRegE,0,0);
    VL_IN8(__PVT__io_MemWidthE,1,0);
    VL_OUT8(__PVT__io_req,0,0);
    VL_OUT8(__PVT__io_wr,0,0);
    VL_OUT8(__PVT__io_size,1,0);
    VL_OUT8(__PVT__io_wstrb,3,0);
    CData/*1:0*/ __PVT__ra;
    CData/*3:0*/ __PVT___io_wstrb_T_12;
    CData/*3:0*/ __PVT___io_wstrb_T_14;
    CData/*3:0*/ __PVT___io_wstrb_T_16;
    CData/*3:0*/ __PVT___io_wstrb_T_18;
    CData/*3:0*/ __PVT___io_wstrb_T_20;
    CData/*3:0*/ __PVT___io_wstrb_T_22;
    CData/*3:0*/ __PVT___io_wstrb_T_24;
    CData/*3:0*/ __PVT___io_wdata_T_24;
    IData/*31:0*/ __PVT___io_addr_T_4;
    IData/*31:0*/ __PVT___io_wdata_T_15;
    IData/*31:0*/ __PVT___io_wdata_T_17;
    IData/*31:0*/ __PVT___io_wdata_T_26;
    IData/*31:0*/ __PVT___io_wdata_T_28;
    IData/*31:0*/ __PVT___io_wdata_T_30;
    IData/*31:0*/ __PVT___io_wdata_T_32;
    IData/*31:0*/ __PVT___io_wdata_T_38;
    IData/*31:0*/ __PVT___io_wdata_T_40;
    VL_IN64(__PVT__io_VAddrE,63,0);
    VL_IN64(__PVT__io_WriteDataE,63,0);
    VL_OUT64(__PVT__io_addr,63,0);
    VL_OUT64(__PVT__io_wdata,63,0);
    QData/*63:0*/ __PVT___io_wdata_T_42;
    QData/*63:0*/ __PVT___io_wdata_T_44;
    QData/*63:0*/ __PVT___io_wdata_T_46;
    QData/*63:0*/ __PVT___io_wdata_T_48;

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_dmemreq(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_dmemreq();
    VL_UNCOPYABLE(Vmycpu_top_dmemreq);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
