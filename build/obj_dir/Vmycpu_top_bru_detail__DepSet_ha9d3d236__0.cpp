// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_bru_detail.h"

VL_INLINE_OPT void Vmycpu_top_bru_detail___sequent__TOP__mycpu_top__u_riscv_cpu__wb_bru_state__5(Vmycpu_top_bru_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_bru_detail___sequent__TOP__mycpu_top__u_riscv_cpu__wb_bru_state__5\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pht_lookup_value_data = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pht_lookup_value_data = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pht_lookup_value_data = vlSelf->__PVT__io_in_pht_lookup_value;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__hashcode_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__hashcode_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__hashcode_value = vlSelf->__PVT__io_in_hashcode;
    }
    vlSelf->__PVT__pht_lookup_value_data = vlSelf->__Vdly__pht_lookup_value_data;
    vlSelf->__PVT__hashcode_value = vlSelf->__Vdly__hashcode_value;
    vlSelf->__PVT__io_out_pht_lookup_value = vlSelf->__PVT__pht_lookup_value_data;
    vlSelf->__PVT__io_out_hashcode = vlSelf->__PVT__hashcode_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_bru_state_io_out_pht_lookup_value 
        = vlSelf->__PVT__io_out_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_bru_state_io_out_hashcode 
        = vlSelf->__PVT__io_out_hashcode;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_pht_in 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_bru_state_io_out_pht_lookup_value;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_aw_pht_ways_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__wb_bru_state_io_out_hashcode;
}
