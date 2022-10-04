// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_BTB_DATA_WITH_BLOCK_RAM_H_
#define VERILATED_VMYCPU_TOP_BTB_DATA_WITH_BLOCK_RAM_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;
class Vmycpu_top_data_ram_simple_two_ports_36;


class Vmycpu_top_btb_data_with_block_ram final : public VerilatedModule {
  public:
    // CELLS
    Vmycpu_top_data_ram_simple_two_ports_36* __PVT__btb_data_ram_0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__io_wen,0,0);
    CData/*0:0*/ __PVT__btb_data_ram_0_clock;
    CData/*0:0*/ __PVT__btb_data_ram_0_reset;
    CData/*0:0*/ __PVT__btb_data_ram_0_io_wea;
    VL_IN16(__PVT__io_raddr,8,0);
    VL_IN16(__PVT__io_waddr,8,0);
    SData/*8:0*/ __PVT__btb_data_ram_0_io_addra;
    SData/*8:0*/ __PVT__btb_data_ram_0_io_addrb;
    IData/*31:0*/ __PVT__btb_data_ram_0_io_dina;
    IData/*31:0*/ __PVT__btb_data_ram_0_io_doutb;
    VL_IN64(__PVT__io_wdata,63,0);
    VL_OUT64(__PVT__io_rdata,63,0);

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_btb_data_with_block_ram(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_btb_data_with_block_ram();
    VL_UNCOPYABLE(Vmycpu_top_btb_data_with_block_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
