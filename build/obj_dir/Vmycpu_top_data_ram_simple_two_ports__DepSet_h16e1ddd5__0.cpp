// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_Look_up_table_read_first_.h"
#include "Vmycpu_top_data_ram_simple_two_ports.h"

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_1__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_2__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_3__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_4__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_5__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_6__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram__pht_data_with_block_ram_7__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_1__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_2__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_3__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_4__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_5__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_6__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_1__pht_data_with_block_ram_7__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_1__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_2__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_3__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_4__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_5__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_6__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_2__pht_data_with_block_ram_7__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_1__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_2__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_3__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_4__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_5__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_6__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__1(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__1\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fclock 
        = vlSelf->__PVT__clock;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__clock 
        = vlSelf->__PVT__Look_up_table_read_first___05Fclock;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__2(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__2\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__reset 
        = vlSelf->__PVT__Look_up_table_read_first___05Freset;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__3(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__3\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_in 
        = vlSelf->__PVT__io_dina;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr 
        = vlSelf->__PVT__io_addra;
    vlSelf->__PVT__Look_up_table_read_first___05Fio_write 
        = vlSelf->__PVT__io_wea;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_in 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_in;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_ar_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_ar_addr;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_write 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_write;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__4(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__4\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_out 
        = vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_out;
    vlSelf->__PVT__io_doutb = vlSelf->__PVT__Look_up_table_read_first___05Fio_out;
}

VL_INLINE_OPT void Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__5(Vmycpu_top_data_ram_simple_two_ports* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmycpu_top_data_ram_simple_two_ports___combo__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__PHTS_banks_oneissue_block_ram__PHTS_with_block_ram_3__pht_data_with_block_ram_7__btb_data_ram_0__5\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr 
        = vlSelf->__PVT__io_addrb;
    vlSelf->__PVT__Look_up_table_read_first_->__PVT__io_aw_addr 
        = vlSelf->__PVT__Look_up_table_read_first___05Fio_aw_addr;
}
