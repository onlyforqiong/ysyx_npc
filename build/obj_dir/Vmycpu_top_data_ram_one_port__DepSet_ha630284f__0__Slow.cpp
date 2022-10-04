// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_data_ram_one_port.h"

VL_ATTR_COLD void Vmycpu_top_data_ram_one_port___ctor_var_reset(Vmycpu_top_data_ram_one_port* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_data_ram_one_port___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_wea = 0;
    vlSelf->__PVT__io_addra = 0;
    vlSelf->__PVT__io_dina = 0;
    vlSelf->__PVT__io_douta = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Fclock = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Freset = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in = 0;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F1_clock = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F1_reset = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_ar_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_aw_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_write = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_in = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F1_io_out = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F2_clock = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F2_reset = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_ar_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_aw_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_write = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_in = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F2_io_out = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F3_clock = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F3_reset = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_ar_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_aw_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_write = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_in = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F3_io_out = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F4_clock = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F4_reset = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_ar_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_aw_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_write = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_in = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F4_io_out = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F5_clock = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F5_reset = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_ar_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_aw_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_write = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_in = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F5_io_out = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F6_clock = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F6_reset = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_ar_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_aw_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_write = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_in = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F6_io_out = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F7_clock = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F7_reset = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_ar_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_aw_addr = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_write = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_in = 0;
    vlSelf->__PVT__Look_up_table_read_first___05F7_io_out = 0;
    vlSelf->__PVT__table_1_out = 0;
    vlSelf->__PVT__table_0_out = 0;
    vlSelf->__PVT__table_3_out = 0;
    vlSelf->__PVT__table_2_out = 0;
    vlSelf->__PVT__io_douta_lo = 0;
    vlSelf->__PVT__table_5_out = 0;
    vlSelf->__PVT__table_4_out = 0;
    vlSelf->__PVT__table_7_out = 0;
    vlSelf->__PVT__table_6_out = 0;
    vlSelf->__PVT__io_douta_hi = 0;
}
