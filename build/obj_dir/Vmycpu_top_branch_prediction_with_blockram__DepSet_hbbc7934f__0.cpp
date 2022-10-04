// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_branch_prediction_with_blockram.h"

VL_INLINE_OPT void Vmycpu_top_branch_prediction_with_blockram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0(Vmycpu_top_branch_prediction_with_blockram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_branch_prediction_with_blockram___sequent__TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__0\n"); );
    // Body
    vlSelf->__Vdly__stage_2_pht_lookup_0 = vlSelf->__PVT__stage_2_pht_lookup_0;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage_2_pht_lookup_0 = 0U;
    } else if (vlSelf->__PVT__io_stage2_flush) {
        vlSelf->__Vdly__stage_2_pht_lookup_0 = 0U;
    } else if (vlSelf->__PVT__io_stage2_stall) {
        vlSelf->__Vdly__stage_2_pht_lookup_0 = vlSelf->__PVT__stage_1_pht_lookup_0;
    }
    vlSelf->__PVT__stage_2_pht_lookup_0 = vlSelf->__Vdly__stage_2_pht_lookup_0;
    vlSelf->__PVT__io_lookup_data_0 = vlSelf->__PVT__stage_2_pht_lookup_0;
}
