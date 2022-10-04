// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_bru_detail.h"

VL_INLINE_OPT void Vmycpu_top_bru_detail___sequent__TOP__mycpu_top__u_riscv_cpu__id_bru_state__0(Vmycpu_top_bru_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_bru_detail___sequent__TOP__mycpu_top__u_riscv_cpu__id_bru_state__0\n"); );
    // Body
    vlSelf->__Vdly__pht_lookup_value_data = vlSelf->__PVT__pht_lookup_value_data;
    vlSelf->__Vdly__lookup_data_value = vlSelf->__PVT__lookup_data_value;
    vlSelf->__Vdly__hashcode_value = vlSelf->__PVT__hashcode_value;
    vlSelf->__Vdly__bht_value = vlSelf->__PVT__bht_value;
    vlSelf->__Vdly__pht_value = vlSelf->__PVT__pht_value;
    vlSelf->__Vdly__target_pc_value = vlSelf->__PVT__target_pc_value;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pht_lookup_value_data = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pht_lookup_value_data = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pht_lookup_value_data = vlSelf->__PVT__io_in_pht_lookup_value;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lookup_data_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__lookup_data_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__lookup_data_value = vlSelf->__PVT__io_in_lookup_data;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__hashcode_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__hashcode_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__hashcode_value = vlSelf->__PVT__io_in_hashcode;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__bht_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__bht_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__bht_value = vlSelf->__PVT__io_in_bht;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pht_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pht_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pht_value = vlSelf->__PVT__io_in_pht;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__target_pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__target_pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__target_pc_value = vlSelf->__PVT__io_in_target_pc;
    }
    vlSelf->__PVT__pht_lookup_value_data = vlSelf->__Vdly__pht_lookup_value_data;
    vlSelf->__PVT__lookup_data_value = vlSelf->__Vdly__lookup_data_value;
    vlSelf->__PVT__hashcode_value = vlSelf->__Vdly__hashcode_value;
    vlSelf->__PVT__bht_value = vlSelf->__Vdly__bht_value;
    vlSelf->__PVT__pht_value = vlSelf->__Vdly__pht_value;
    vlSelf->__PVT__target_pc_value = vlSelf->__Vdly__target_pc_value;
    vlSelf->__PVT__io_out_pht_lookup_value = vlSelf->__PVT__pht_lookup_value_data;
    vlSelf->__PVT__io_out_lookup_data = vlSelf->__PVT__lookup_data_value;
    vlSelf->__PVT__io_out_hashcode = vlSelf->__PVT__hashcode_value;
    vlSelf->__PVT__io_out_bht = vlSelf->__PVT__bht_value;
    vlSelf->__PVT__io_out_pht = vlSelf->__PVT__pht_value;
    vlSelf->__PVT__io_out_target_pc = vlSelf->__PVT__target_pc_value;
}

VL_INLINE_OPT void Vmycpu_top_bru_detail___sequent__TOP__mycpu_top__u_riscv_cpu__ex_bru_state__0(Vmycpu_top_bru_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_bru_detail___sequent__TOP__mycpu_top__u_riscv_cpu__ex_bru_state__0\n"); );
    // Body
    vlSelf->__Vdly__target_pc_value = vlSelf->__PVT__target_pc_value;
    vlSelf->__Vdly__hashcode_value = vlSelf->__PVT__hashcode_value;
    vlSelf->__Vdly__bht_value = vlSelf->__PVT__bht_value;
    vlSelf->__Vdly__lookup_data_value = vlSelf->__PVT__lookup_data_value;
    vlSelf->__Vdly__pht_lookup_value_data = vlSelf->__PVT__pht_lookup_value_data;
    vlSelf->__Vdly__pht_value = vlSelf->__PVT__pht_value;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__target_pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__target_pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__target_pc_value = vlSelf->__PVT__io_in_target_pc;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__hashcode_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__hashcode_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__hashcode_value = vlSelf->__PVT__io_in_hashcode;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__bht_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__bht_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__bht_value = vlSelf->__PVT__io_in_bht;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lookup_data_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__lookup_data_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__lookup_data_value = vlSelf->__PVT__io_in_lookup_data;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pht_lookup_value_data = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pht_lookup_value_data = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pht_lookup_value_data = vlSelf->__PVT__io_in_pht_lookup_value;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pht_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pht_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pht_value = vlSelf->__PVT__io_in_pht;
    }
    vlSelf->__PVT__target_pc_value = vlSelf->__Vdly__target_pc_value;
    vlSelf->__PVT__hashcode_value = vlSelf->__Vdly__hashcode_value;
    vlSelf->__PVT__bht_value = vlSelf->__Vdly__bht_value;
    vlSelf->__PVT__lookup_data_value = vlSelf->__Vdly__lookup_data_value;
    vlSelf->__PVT__pht_lookup_value_data = vlSelf->__Vdly__pht_lookup_value_data;
    vlSelf->__PVT__pht_value = vlSelf->__Vdly__pht_value;
    vlSelf->__PVT__io_out_target_pc = vlSelf->__PVT__target_pc_value;
    vlSelf->__PVT__io_out_hashcode = vlSelf->__PVT__hashcode_value;
    vlSelf->__PVT__io_out_bht = vlSelf->__PVT__bht_value;
    vlSelf->__PVT__io_out_lookup_data = vlSelf->__PVT__lookup_data_value;
    vlSelf->__PVT__io_out_pht_lookup_value = vlSelf->__PVT__pht_lookup_value_data;
    vlSelf->__PVT__io_out_pht = vlSelf->__PVT__pht_value;
}

VL_INLINE_OPT void Vmycpu_top_bru_detail___sequent__TOP__mycpu_top__u_riscv_cpu__mem_bru_state__0(Vmycpu_top_bru_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_bru_detail___sequent__TOP__mycpu_top__u_riscv_cpu__mem_bru_state__0\n"); );
    // Body
    vlSelf->__Vdly__pht_lookup_value_data = vlSelf->__PVT__pht_lookup_value_data;
    vlSelf->__Vdly__lookup_data_value = vlSelf->__PVT__lookup_data_value;
    vlSelf->__Vdly__target_pc_value = vlSelf->__PVT__target_pc_value;
    vlSelf->__Vdly__hashcode_value = vlSelf->__PVT__hashcode_value;
    vlSelf->__Vdly__bht_value = vlSelf->__PVT__bht_value;
    vlSelf->__Vdly__pht_value = vlSelf->__PVT__pht_value;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pht_lookup_value_data = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pht_lookup_value_data = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pht_lookup_value_data = vlSelf->__PVT__io_in_pht_lookup_value;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lookup_data_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__lookup_data_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__lookup_data_value = vlSelf->__PVT__io_in_lookup_data;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__target_pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__target_pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__target_pc_value = vlSelf->__PVT__io_in_target_pc;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__hashcode_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__hashcode_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__hashcode_value = vlSelf->__PVT__io_in_hashcode;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__bht_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__bht_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__bht_value = vlSelf->__PVT__io_in_bht;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pht_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pht_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pht_value = vlSelf->__PVT__io_in_pht;
    }
    vlSelf->__PVT__pht_lookup_value_data = vlSelf->__Vdly__pht_lookup_value_data;
    vlSelf->__PVT__lookup_data_value = vlSelf->__Vdly__lookup_data_value;
    vlSelf->__PVT__target_pc_value = vlSelf->__Vdly__target_pc_value;
    vlSelf->__PVT__hashcode_value = vlSelf->__Vdly__hashcode_value;
    vlSelf->__PVT__bht_value = vlSelf->__Vdly__bht_value;
    vlSelf->__PVT__pht_value = vlSelf->__Vdly__pht_value;
    vlSelf->__PVT__io_out_pht_lookup_value = vlSelf->__PVT__pht_lookup_value_data;
    vlSelf->__PVT__io_out_lookup_data = vlSelf->__PVT__lookup_data_value;
    vlSelf->__PVT__io_out_target_pc = vlSelf->__PVT__target_pc_value;
    vlSelf->__PVT__io_out_hashcode = vlSelf->__PVT__hashcode_value;
    vlSelf->__PVT__io_out_bht = vlSelf->__PVT__bht_value;
    vlSelf->__PVT__io_out_pht = vlSelf->__PVT__pht_value;
}

VL_INLINE_OPT void Vmycpu_top_bru_detail___sequent__TOP__mycpu_top__u_riscv_cpu__mem2_bru_state__0(Vmycpu_top_bru_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_bru_detail___sequent__TOP__mycpu_top__u_riscv_cpu__mem2_bru_state__0\n"); );
    // Body
    vlSelf->__Vdly__pht_lookup_value_data = vlSelf->__PVT__pht_lookup_value_data;
    vlSelf->__Vdly__lookup_data_value = vlSelf->__PVT__lookup_data_value;
    vlSelf->__Vdly__target_pc_value = vlSelf->__PVT__target_pc_value;
    vlSelf->__Vdly__hashcode_value = vlSelf->__PVT__hashcode_value;
    vlSelf->__Vdly__bht_value = vlSelf->__PVT__bht_value;
    vlSelf->__Vdly__pht_value = vlSelf->__PVT__pht_value;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pht_lookup_value_data = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pht_lookup_value_data = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pht_lookup_value_data = vlSelf->__PVT__io_in_pht_lookup_value;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lookup_data_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__lookup_data_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__lookup_data_value = vlSelf->__PVT__io_in_lookup_data;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__target_pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__target_pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__target_pc_value = vlSelf->__PVT__io_in_target_pc;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__hashcode_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__hashcode_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__hashcode_value = vlSelf->__PVT__io_in_hashcode;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__bht_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__bht_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__bht_value = vlSelf->__PVT__io_in_bht;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pht_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pht_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pht_value = vlSelf->__PVT__io_in_pht;
    }
    vlSelf->__PVT__pht_lookup_value_data = vlSelf->__Vdly__pht_lookup_value_data;
    vlSelf->__PVT__lookup_data_value = vlSelf->__Vdly__lookup_data_value;
    vlSelf->__PVT__target_pc_value = vlSelf->__Vdly__target_pc_value;
    vlSelf->__PVT__hashcode_value = vlSelf->__Vdly__hashcode_value;
    vlSelf->__PVT__bht_value = vlSelf->__Vdly__bht_value;
    vlSelf->__PVT__pht_value = vlSelf->__Vdly__pht_value;
    vlSelf->__PVT__io_out_pht_lookup_value = vlSelf->__PVT__pht_lookup_value_data;
    vlSelf->__PVT__io_out_lookup_data = vlSelf->__PVT__lookup_data_value;
    vlSelf->__PVT__io_out_target_pc = vlSelf->__PVT__target_pc_value;
    vlSelf->__PVT__io_out_hashcode = vlSelf->__PVT__hashcode_value;
    vlSelf->__PVT__io_out_bht = vlSelf->__PVT__bht_value;
    vlSelf->__PVT__io_out_pht = vlSelf->__PVT__pht_value;
}

VL_INLINE_OPT void Vmycpu_top_bru_detail___sequent__TOP__mycpu_top__u_riscv_cpu__wb_bru_state__0(Vmycpu_top_bru_detail* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_bru_detail___sequent__TOP__mycpu_top__u_riscv_cpu__wb_bru_state__0\n"); );
    // Body
    vlSelf->__Vdly__pht_value = vlSelf->__PVT__pht_value;
    vlSelf->__Vdly__bht_value = vlSelf->__PVT__bht_value;
    vlSelf->__Vdly__target_pc_value = vlSelf->__PVT__target_pc_value;
    vlSelf->__Vdly__pht_lookup_value_data = vlSelf->__PVT__pht_lookup_value_data;
    vlSelf->__Vdly__hashcode_value = vlSelf->__PVT__hashcode_value;
    vlSelf->__Vdly__lookup_data_value = vlSelf->__PVT__lookup_data_value;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__pht_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__pht_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__pht_value = vlSelf->__PVT__io_in_pht;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__bht_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__bht_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__bht_value = vlSelf->__PVT__io_in_bht;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__target_pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__target_pc_value = 0ULL;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__target_pc_value = vlSelf->__PVT__io_in_target_pc;
    }
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
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__lookup_data_value = 0U;
    } else if (vlSelf->__PVT__io_flush) {
        vlSelf->__Vdly__lookup_data_value = 0U;
    } else if (vlSelf->__PVT__io_stall) {
        vlSelf->__Vdly__lookup_data_value = vlSelf->__PVT__io_in_lookup_data;
    }
    vlSelf->__PVT__pht_value = vlSelf->__Vdly__pht_value;
    vlSelf->__PVT__bht_value = vlSelf->__Vdly__bht_value;
    vlSelf->__PVT__target_pc_value = vlSelf->__Vdly__target_pc_value;
    vlSelf->__PVT__pht_lookup_value_data = vlSelf->__Vdly__pht_lookup_value_data;
    vlSelf->__PVT__hashcode_value = vlSelf->__Vdly__hashcode_value;
    vlSelf->__PVT__lookup_data_value = vlSelf->__Vdly__lookup_data_value;
    vlSelf->__PVT__io_out_pht = vlSelf->__PVT__pht_value;
    vlSelf->__PVT__io_out_bht = vlSelf->__PVT__bht_value;
    vlSelf->__PVT__io_out_target_pc = vlSelf->__PVT__target_pc_value;
    vlSelf->__PVT__io_out_pht_lookup_value = vlSelf->__PVT__pht_lookup_value_data;
    vlSelf->__PVT__io_out_hashcode = vlSelf->__PVT__hashcode_value;
    vlSelf->__PVT__io_out_lookup_data = vlSelf->__PVT__lookup_data_value;
}
