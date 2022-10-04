// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_DATA_RAM_SIMPLE_TWO_PORTS_36_H_
#define VERILATED_VMYCPU_TOP_DATA_RAM_SIMPLE_TWO_PORTS_36_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;
class Vmycpu_top_Look_up_table_read_first___05F36;


class Vmycpu_top_data_ram_simple_two_ports_36 final : public VerilatedModule {
  public:
    // CELLS
    Vmycpu_top_Look_up_table_read_first___05F36* __PVT__Look_up_table_read_first_;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__io_wea,0,0);
    CData/*0:0*/ __PVT__Look_up_table_read_first___05Fclock;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05Freset;
    CData/*0:0*/ __PVT__Look_up_table_read_first___05Fio_write;
    VL_IN16(__PVT__io_addra,8,0);
    VL_IN16(__PVT__io_addrb,8,0);
    SData/*8:0*/ __PVT__Look_up_table_read_first___05Fio_ar_addr;
    SData/*8:0*/ __PVT__Look_up_table_read_first___05Fio_aw_addr;
    VL_IN(__PVT__io_dina,31,0);
    VL_OUT(__PVT__io_doutb,31,0);
    IData/*31:0*/ __PVT__Look_up_table_read_first___05Fio_in;
    IData/*31:0*/ __PVT__Look_up_table_read_first___05Fio_out;

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_data_ram_simple_two_ports_36(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_data_ram_simple_two_ports_36();
    VL_UNCOPYABLE(Vmycpu_top_data_ram_simple_two_ports_36);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
