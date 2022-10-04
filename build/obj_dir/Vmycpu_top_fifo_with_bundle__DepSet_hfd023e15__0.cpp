// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_fifo_with_bundle.h"

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__0(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__0\n"); );
    // Body
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_1_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_2_reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__Look_up_table_read_first_with_bundle_3_reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__6(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__6\n"); );
    // Body
    vlSelf->__PVT___write_banks_points_T = ((IData)(vlSelf->__PVT__io_point_flush) 
                                            | (IData)(vlSelf->__PVT__io_point_write_en));
    vlSelf->__PVT__io_empty = ((((IData)(vlSelf->__PVT__write_banks_points) 
                                 == (IData)(vlSelf->__PVT__read_banks_points)) 
                                & ((IData)(vlSelf->__PVT__write_length_points) 
                                   == (IData)(vlSelf->__PVT__read_length_points))) 
                               | (IData)(vlSelf->__PVT__io_point_write_en));
    vlSelf->__PVT__io_read_out_0_pre_decoder_branchD_flag 
        = ((~ (IData)(vlSelf->__PVT__io_empty)) & (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT__io_read_out_0_pre_decoder_jump = 
        ((~ (IData)(vlSelf->__PVT__io_empty)) & (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT__io_read_out_0_pre_decoder_branchdata 
        = ((IData)(vlSelf->__PVT__io_empty) ? 0U : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT__io_read_out_0_pre_decoder_jr = (
                                                   (~ (IData)(vlSelf->__PVT__io_empty)) 
                                                   & (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT__io_read_out_0_true_branch_state 
        = ((~ (IData)(vlSelf->__PVT__io_empty)) & (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT__io_read_out_0_pre_pc_target = ((IData)(vlSelf->__PVT__io_empty)
                                                   ? 0ULL
                                                   : vlSelf->__PVT___GEN_45);
    vlSelf->__PVT__io_read_out_0_pre_lookup_data = 
        ((IData)(vlSelf->__PVT__io_empty) ? 0U : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT__io_read_out_0_pre_hashcode = ((IData)(vlSelf->__PVT__io_empty)
                                                  ? 0U
                                                  : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT__io_read_out_0_pre_pht = ((IData)(vlSelf->__PVT__io_empty)
                                             ? 0U : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT__io_read_out_0_pre_bht = ((IData)(vlSelf->__PVT__io_empty)
                                             ? 0U : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT__io_read_out_0_pre_lookup_value = 
        ((IData)(vlSelf->__PVT__io_empty) ? 0U : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT__io_read_out_0_exception_type = ((IData)(vlSelf->__PVT__io_empty)
                                                    ? 0U
                                                    : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT__io_read_out_0_pc = ((IData)(vlSelf->__PVT__io_empty)
                                        ? 0ULL : vlSelf->__PVT___GEN_42);
    vlSelf->__PVT__io_read_out_0_inst = ((IData)(vlSelf->__PVT__io_empty)
                                          ? 0U : vlSelf->__PVT___GEN_43);
}

VL_INLINE_OPT void Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__7(Vmycpu_top_fifo_with_bundle* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_fifo_with_bundle___combo__TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__7\n"); );
    // Body
    vlSelf->__PVT___read_banks_points_T_2 = (3U & ((IData)(vlSelf->__PVT__read_banks_points) 
                                                   + (IData)(vlSelf->__PVT__io_read_en)));
    vlSelf->__PVT___GEN_58 = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__io_read_en));
    vlSelf->__PVT___read_length_points_T_3 = (7U & 
                                              ((IData)(vlSelf->__PVT___read_length_points_T_1) 
                                               + (IData)(vlSelf->__PVT___GEN_58)));
    vlSelf->__PVT___GEN_59 = VL_EXTEND_II(4,1, (1U 
                                                & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT___read_length_points_T_3), 2U)));
    vlSelf->__PVT___read_length_points_T_7 = (0xfU 
                                              & ((IData)(vlSelf->__PVT__read_length_points) 
                                                 + (IData)(vlSelf->__PVT___GEN_59)));
}
