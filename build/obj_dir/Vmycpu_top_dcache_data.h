// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_DCACHE_DATA_H_
#define VERILATED_VMYCPU_TOP_DCACHE_DATA_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;
class Vmycpu_top_data_ram_one_port;


class Vmycpu_top_dcache_data final : public VerilatedModule {
  public:
    // CELLS
    Vmycpu_top_data_ram_one_port* __PVT__dcache_data_ram_0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__io_wen,3,0);
    CData/*0:0*/ __PVT__dcache_data_ram_0_clock;
    CData/*0:0*/ __PVT__dcache_data_ram_0_reset;
    CData/*7:0*/ __PVT__dcache_data_ram_0_io_wea;
    CData/*6:0*/ __PVT__dcache_data_ram_0_io_addra;
    VL_IN64(__PVT__io_addr,63,0);
    VL_IN64(__PVT__io_wdata,63,0);
    VL_OUT64(__PVT__io_rdata,63,0);
    QData/*63:0*/ __PVT__dcache_data_ram_0_io_dina;
    QData/*63:0*/ __PVT__dcache_data_ram_0_io_douta;

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_dcache_data(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_dcache_data();
    VL_UNCOPYABLE(Vmycpu_top_dcache_data);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
