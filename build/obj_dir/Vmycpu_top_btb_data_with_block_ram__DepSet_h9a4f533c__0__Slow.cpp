// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_btb_data_with_block_ram.h"
#include "Vmycpu_top_data_ram_simple_two_ports_36.h"

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__0(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_data_ram_0->__PVT__reset = vlSelf->__PVT__btb_data_ram_0_reset;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__1(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__1\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_data_ram_0_io_dina = VL_SEL_IQII(64, vlSelf->__PVT__io_wdata, 0U, 0x20U);
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__btb_data_ram_0->__PVT__clock = vlSelf->__PVT__btb_data_ram_0_clock;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_dina = vlSelf->__PVT__btb_data_ram_0_io_dina;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__btb_data_ram_0_io_addra;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_addrb 
        = vlSelf->__PVT__btb_data_ram_0_io_addrb;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_wea = vlSelf->__PVT__btb_data_ram_0_io_wea;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__2(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_doutb = vlSelf->__PVT__btb_data_ram_0->__PVT__io_doutb;
    vlSelf->__PVT__io_rdata = VL_EXTEND_QI(64,32, vlSelf->__PVT__btb_data_ram_0_io_doutb);
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__0(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_data_ram_0->__PVT__reset = vlSelf->__PVT__btb_data_ram_0_reset;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__1(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__1\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_data_ram_0_io_dina = VL_SEL_IQII(64, vlSelf->__PVT__io_wdata, 0U, 0x20U);
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__btb_data_ram_0->__PVT__clock = vlSelf->__PVT__btb_data_ram_0_clock;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_dina = vlSelf->__PVT__btb_data_ram_0_io_dina;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__btb_data_ram_0_io_addra;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_addrb 
        = vlSelf->__PVT__btb_data_ram_0_io_addrb;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_wea = vlSelf->__PVT__btb_data_ram_0_io_wea;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__2(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_1__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_doutb = vlSelf->__PVT__btb_data_ram_0->__PVT__io_doutb;
    vlSelf->__PVT__io_rdata = VL_EXTEND_QI(64,32, vlSelf->__PVT__btb_data_ram_0_io_doutb);
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__0(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_data_ram_0->__PVT__reset = vlSelf->__PVT__btb_data_ram_0_reset;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__1(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__1\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_data_ram_0_io_dina = VL_SEL_IQII(64, vlSelf->__PVT__io_wdata, 0U, 0x20U);
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__btb_data_ram_0->__PVT__clock = vlSelf->__PVT__btb_data_ram_0_clock;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_dina = vlSelf->__PVT__btb_data_ram_0_io_dina;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__btb_data_ram_0_io_addra;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_addrb 
        = vlSelf->__PVT__btb_data_ram_0_io_addrb;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_wea = vlSelf->__PVT__btb_data_ram_0_io_wea;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__2(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_2__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_doutb = vlSelf->__PVT__btb_data_ram_0->__PVT__io_doutb;
    vlSelf->__PVT__io_rdata = VL_EXTEND_QI(64,32, vlSelf->__PVT__btb_data_ram_0_io_doutb);
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__0(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__0\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__btb_data_ram_0->__PVT__reset = vlSelf->__PVT__btb_data_ram_0_reset;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__1(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__1\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__btb_data_ram_0_io_dina = VL_SEL_IQII(64, vlSelf->__PVT__io_wdata, 0U, 0x20U);
    vlSelf->__PVT__btb_data_ram_0_io_addra = vlSelf->__PVT__io_waddr;
    vlSelf->__PVT__btb_data_ram_0_io_addrb = vlSelf->__PVT__io_raddr;
    vlSelf->__PVT__btb_data_ram_0_io_wea = vlSelf->__PVT__io_wen;
    vlSelf->__PVT__btb_data_ram_0->__PVT__clock = vlSelf->__PVT__btb_data_ram_0_clock;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_dina = vlSelf->__PVT__btb_data_ram_0_io_dina;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_addra 
        = vlSelf->__PVT__btb_data_ram_0_io_addra;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_addrb 
        = vlSelf->__PVT__btb_data_ram_0_io_addrb;
    vlSelf->__PVT__btb_data_ram_0->__PVT__io_wea = vlSelf->__PVT__btb_data_ram_0_io_wea;
}

VL_ATTR_COLD void Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__2(Vmycpu_top_btb_data_with_block_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmycpu_top_btb_data_with_block_ram___settle__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram__btb_data_with_block_ram_3__2\n"); );
    // Body
    vlSelf->__PVT__btb_data_ram_0_io_doutb = vlSelf->__PVT__btb_data_ram_0->__PVT__io_doutb;
    vlSelf->__PVT__io_rdata = VL_EXTEND_QI(64,32, vlSelf->__PVT__btb_data_ram_0_io_doutb);
}
