// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_BTB_banks_oneissue_with_block_ram.h"

VL_ATTR_COLD void Vmycpu_top_BTB_banks_oneissue_with_block_ram___ctor_var_reset(Vmycpu_top_BTB_banks_oneissue_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_BTB_banks_oneissue_with_block_ram___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_ar_addr_L = 0;
    vlSelf->__PVT__io_aw_addr = 0;
    vlSelf->__PVT__io_aw_target_addr = 0;
    vlSelf->__PVT__io_write = 0;
    vlSelf->__PVT__io_out_L = 0;
    vlSelf->__PVT__io_hit_L = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_clock = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_reset = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_io_wen = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_io_raddr = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_io_waddr = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_io_wdata = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_io_rdata = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_1_clock = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_1_reset = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_1_io_wen = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_1_io_raddr = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_1_io_waddr = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_1_io_wdata = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_1_io_rdata = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_2_clock = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_2_reset = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_2_io_wen = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_2_io_raddr = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_2_io_waddr = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_2_io_wdata = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_2_io_rdata = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_3_clock = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_3_reset = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_3_io_wen = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_3_io_raddr = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_3_io_waddr = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_3_io_wdata = 0;
    vlSelf->__PVT__btb_tag_with_block_ram_3_io_rdata = 0;
    vlSelf->__PVT__btb_data_with_block_ram_clock = 0;
    vlSelf->__PVT__btb_data_with_block_ram_reset = 0;
    vlSelf->__PVT__btb_data_with_block_ram_io_wen = 0;
    vlSelf->__PVT__btb_data_with_block_ram_io_raddr = 0;
    vlSelf->__PVT__btb_data_with_block_ram_io_waddr = 0;
    vlSelf->__PVT__btb_data_with_block_ram_io_wdata = 0;
    vlSelf->__PVT__btb_data_with_block_ram_io_rdata = 0;
    vlSelf->__PVT__btb_data_with_block_ram_1_clock = 0;
    vlSelf->__PVT__btb_data_with_block_ram_1_reset = 0;
    vlSelf->__PVT__btb_data_with_block_ram_1_io_wen = 0;
    vlSelf->__PVT__btb_data_with_block_ram_1_io_raddr = 0;
    vlSelf->__PVT__btb_data_with_block_ram_1_io_waddr = 0;
    vlSelf->__PVT__btb_data_with_block_ram_1_io_wdata = 0;
    vlSelf->__PVT__btb_data_with_block_ram_1_io_rdata = 0;
    vlSelf->__PVT__btb_data_with_block_ram_2_clock = 0;
    vlSelf->__PVT__btb_data_with_block_ram_2_reset = 0;
    vlSelf->__PVT__btb_data_with_block_ram_2_io_wen = 0;
    vlSelf->__PVT__btb_data_with_block_ram_2_io_raddr = 0;
    vlSelf->__PVT__btb_data_with_block_ram_2_io_waddr = 0;
    vlSelf->__PVT__btb_data_with_block_ram_2_io_wdata = 0;
    vlSelf->__PVT__btb_data_with_block_ram_2_io_rdata = 0;
    vlSelf->__PVT__btb_data_with_block_ram_3_clock = 0;
    vlSelf->__PVT__btb_data_with_block_ram_3_reset = 0;
    vlSelf->__PVT__btb_data_with_block_ram_3_io_wen = 0;
    vlSelf->__PVT__btb_data_with_block_ram_3_io_raddr = 0;
    vlSelf->__PVT__btb_data_with_block_ram_3_io_waddr = 0;
    vlSelf->__PVT__btb_data_with_block_ram_3_io_wdata = 0;
    vlSelf->__PVT__btb_data_with_block_ram_3_io_rdata = 0;
    vlSelf->__PVT___btb_banks_0_wen_T_1 = 0;
    vlSelf->__PVT___btb_banks_1_wen_T_1 = 0;
    vlSelf->__PVT___btb_banks_2_wen_T_1 = 0;
    vlSelf->__PVT___btb_banks_3_wen_T_1 = 0;
    vlSelf->__PVT__ar_addr_reg = 0;
    vlSelf->__PVT__btb_banks_0_rdata = 0;
    vlSelf->__PVT__btb_banks_1_rdata = 0;
    vlSelf->__PVT___GEN_1 = 0;
    vlSelf->__PVT__btb_banks_2_rdata = 0;
    vlSelf->__PVT___GEN_2 = 0;
    vlSelf->__PVT__btb_banks_3_rdata = 0;
    vlSelf->__PVT___tag_banks_0_wdata_T_1 = 0;
    vlSelf->__PVT__tag_banks_0_rdata = 0;
    vlSelf->__PVT__tag_banks_1_rdata = 0;
    vlSelf->__PVT___GEN_13 = 0;
    vlSelf->__PVT__tag_banks_2_rdata = 0;
    vlSelf->__PVT___GEN_14 = 0;
    vlSelf->__PVT__tag_banks_3_rdata = 0;
    vlSelf->__PVT___GEN_15 = 0;
    vlSelf->__Vdly__ar_addr_reg = 0;
}
