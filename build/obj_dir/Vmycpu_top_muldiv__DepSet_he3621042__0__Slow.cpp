// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_muldiv.h"

VL_ATTR_COLD void Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__0(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___settle__TOP__mycpu_top__u_riscv_cpu___muldiv__0\n"); );
    // Body
    vlSelf->__PVT__mulu_answer = (VL_EXTEND_QI(64,32, vlSelf->__PVT__io_in1) 
                                  * VL_EXTEND_QI(64,32, vlSelf->__PVT__io_in2));
    vlSelf->__PVT__mul_answer = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->__PVT__io_in1), 
                                            VL_EXTENDS_QI(64,32, vlSelf->__PVT__io_in2));
    vlSelf->__PVT__div_answer_hi = VL_MODDIVS_III(32, vlSelf->__PVT__io_in1, vlSelf->__PVT__io_in2);
    vlSelf->__PVT___divu_answer_T_1 = VL_DIV_III(32, vlSelf->__PVT__io_in1, vlSelf->__PVT__io_in2);
    vlSelf->__PVT___GEN_0 = VL_MODDIV_III(32, vlSelf->__PVT__io_in1, vlSelf->__PVT__io_in2);
    vlSelf->__PVT___io_lo_T_14 = ((1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_ctrl), 4U))
                                   ? VL_SEL_IQII(64, vlSelf->__PVT__mulu_answer, 0U, 0x20U)
                                   : 0U);
    vlSelf->__PVT___io_lo_T_13 = ((1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_ctrl), 3U))
                                   ? VL_SEL_IQII(64, vlSelf->__PVT__mulu_answer, 0U, 0x20U)
                                   : 0U);
    vlSelf->__PVT___io_lo_T_12 = ((1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_ctrl), 2U))
                                   ? VL_SEL_IQII(64, vlSelf->__PVT__mul_answer, 0U, 0x20U)
                                   : 0U);
    vlSelf->__PVT__div_answer = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__div_answer_hi, vlSelf->__PVT___divu_answer_T_1);
    vlSelf->__PVT___divu_answer_T = vlSelf->__PVT___GEN_0;
    vlSelf->__PVT___io_lo_T_10 = ((1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_ctrl), 0U))
                                   ? VL_SEL_IQII(64, vlSelf->__PVT__div_answer, 0x20U, 0x20U)
                                   : 0U);
    vlSelf->__PVT__divu_answer = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___divu_answer_T, vlSelf->__PVT___divu_answer_T_1);
    vlSelf->__PVT___io_lo_T_11 = ((1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__io_ctrl), 1U))
                                   ? VL_SEL_IQII(64, vlSelf->__PVT__divu_answer, 0x20U, 0x20U)
                                   : 0U);
    vlSelf->__PVT___io_lo_T_15 = (vlSelf->__PVT___io_lo_T_10 
                                  | vlSelf->__PVT___io_lo_T_11);
    vlSelf->__PVT___io_lo_T_16 = (vlSelf->__PVT___io_lo_T_15 
                                  | vlSelf->__PVT___io_lo_T_12);
    vlSelf->__PVT___io_lo_T_17 = (vlSelf->__PVT___io_lo_T_16 
                                  | vlSelf->__PVT___io_lo_T_13);
    vlSelf->__PVT__io_lo = (vlSelf->__PVT___io_lo_T_17 
                            | vlSelf->__PVT___io_lo_T_14);
}

VL_ATTR_COLD void Vmycpu_top_muldiv___ctor_var_reset(Vmycpu_top_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_muldiv___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_ctrl = 0;
    vlSelf->__PVT__io_in1 = 0;
    vlSelf->__PVT__io_in2 = 0;
    vlSelf->__PVT__io_lo = 0;
    vlSelf->__PVT__mulu_answer = 0;
    vlSelf->__PVT__mul_answer = 0;
    vlSelf->__PVT___GEN_0 = 0;
    vlSelf->__PVT___divu_answer_T = 0;
    vlSelf->__PVT___divu_answer_T_1 = 0;
    vlSelf->__PVT__divu_answer = 0;
    vlSelf->__PVT__div_answer_hi = 0;
    vlSelf->__PVT__div_answer = 0;
    vlSelf->__PVT___io_lo_T_10 = 0;
    vlSelf->__PVT___io_lo_T_11 = 0;
    vlSelf->__PVT___io_lo_T_12 = 0;
    vlSelf->__PVT___io_lo_T_13 = 0;
    vlSelf->__PVT___io_lo_T_14 = 0;
    vlSelf->__PVT___io_lo_T_15 = 0;
    vlSelf->__PVT___io_lo_T_16 = 0;
    vlSelf->__PVT___io_lo_T_17 = 0;
}
