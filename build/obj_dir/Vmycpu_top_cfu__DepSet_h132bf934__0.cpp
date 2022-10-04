// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_cfu.h"

VL_INLINE_OPT void Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__0(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__0\n"); );
    // Body
    vlSelf->__PVT___br_Stall_T_9 = ((IData)(vlSelf->__PVT__io_WriteRegM) 
                                    == (IData)(vlSelf->__PVT__io_R2D));
    vlSelf->__PVT___io_Forward1D_T_3 = (((IData)(vlSelf->__PVT__io_R1D) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM));
    vlSelf->__PVT___io_Forward2D_T_3 = (((IData)(vlSelf->__PVT__io_R2D) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM));
    vlSelf->__PVT___br_Stall_T_12 = ((IData)(vlSelf->__PVT__io_MemToRegM) 
                                     & (((IData)(vlSelf->__PVT__io_WriteRegM) 
                                         == (IData)(vlSelf->__PVT__io_R2D)) 
                                        | ((IData)(vlSelf->__PVT__io_WriteRegM) 
                                           == (IData)(vlSelf->__PVT__io_R1D))));
    vlSelf->__PVT___io_Forward2D_T_5 = (1U & (~ (IData)(vlSelf->__PVT__io_MemToRegM)));
    vlSelf->__PVT___br_Stall_T_4 = ((IData)(vlSelf->__PVT__io_WriteRegE) 
                                    == (IData)(vlSelf->__PVT__io_R2D));
    vlSelf->__PVT___io_Forward2E_T_3 = (((IData)(vlSelf->__PVT__io_R2E) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM));
    vlSelf->__PVT___io_Forward1E_T_3 = (((IData)(vlSelf->__PVT__io_R1E) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM));
    vlSelf->__PVT___br_Stall_T_15 = ((IData)(vlSelf->__PVT__io_WriteRegM2) 
                                     == (IData)(vlSelf->__PVT__io_R2D));
    vlSelf->__PVT___io_Forward1D_T_9 = (((IData)(vlSelf->__PVT__io_R1D) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM2));
    vlSelf->__PVT___io_Forward2D_T_9 = (((IData)(vlSelf->__PVT__io_R2D) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM2));
    vlSelf->__PVT___io_Forward1E_T_9 = (((IData)(vlSelf->__PVT__io_R1E) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM2));
    vlSelf->__PVT___io_Forward2E_T_9 = (((IData)(vlSelf->__PVT__io_R2E) 
                                         == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                        & (IData)(vlSelf->__PVT__io_RegWriteM2));
    vlSelf->__PVT___br_Stall_T_18 = ((IData)(vlSelf->__PVT__io_MemToRegM2) 
                                     & (((IData)(vlSelf->__PVT__io_WriteRegM2) 
                                         == (IData)(vlSelf->__PVT__io_R2D)) 
                                        | ((IData)(vlSelf->__PVT__io_WriteRegM2) 
                                           == (IData)(vlSelf->__PVT__io_R1D))));
    vlSelf->__PVT___io_Forward2D_T_12 = ((((IData)(vlSelf->__PVT__io_R2D) 
                                           == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                          & (IData)(vlSelf->__PVT__io_RegWriteM2)) 
                                         & (~ (IData)(vlSelf->__PVT__io_MemToRegM2)));
    vlSelf->__PVT___io_Forward2D_T_11 = (1U & (~ (IData)(vlSelf->__PVT__io_MemToRegM2)));
    vlSelf->__PVT___jr_Stall_T_8 = ((IData)(vlSelf->__PVT__io_MemToRegM) 
                                    & (IData)(vlSelf->__PVT___br_Stall_T_9));
    vlSelf->__PVT___mem2regM_Stall_T_21 = ((IData)(vlSelf->__PVT___io_Forward1D_T_3) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM));
    vlSelf->__PVT___mem2regM_Stall_T_15 = ((IData)(vlSelf->__PVT___io_Forward2D_T_3) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM));
    vlSelf->__PVT___br_Stall_T_13 = (((IData)(vlSelf->__PVT__io_RegWriteE) 
                                      & (((IData)(vlSelf->__PVT__io_WriteRegE) 
                                          == (IData)(vlSelf->__PVT__io_R2D)) 
                                         | ((IData)(vlSelf->__PVT__io_WriteRegE) 
                                            == (IData)(vlSelf->__PVT__io_R1D)))) 
                                     | (IData)(vlSelf->__PVT___br_Stall_T_12));
    vlSelf->__PVT___io_Forward2E_T_6 = ((((IData)(vlSelf->__PVT__io_R2E) 
                                          == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                         & (IData)(vlSelf->__PVT__io_RegWriteM)) 
                                        & (IData)(vlSelf->__PVT___io_Forward2D_T_5));
    vlSelf->__PVT___io_Forward1E_T_6 = ((((IData)(vlSelf->__PVT__io_R1E) 
                                          == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                         & (IData)(vlSelf->__PVT__io_RegWriteM)) 
                                        & (IData)(vlSelf->__PVT___io_Forward2D_T_5));
    vlSelf->__PVT___mem2regM_Stall_T_9 = ((IData)(vlSelf->__PVT___io_Forward1E_T_3) 
                                          & (IData)(vlSelf->__PVT__io_MemToRegM));
    vlSelf->__PVT___jr_Stall_T_12 = ((IData)(vlSelf->__PVT__io_MemToRegM2) 
                                     & (IData)(vlSelf->__PVT___br_Stall_T_15));
    vlSelf->__PVT___mem2regM_Stall_T_45 = ((IData)(vlSelf->__PVT___io_Forward1D_T_9) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM2));
    vlSelf->__PVT___mem2regM_Stall_T_39 = ((IData)(vlSelf->__PVT___io_Forward2D_T_9) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM2));
    vlSelf->__PVT___mem2regM_Stall_T_33 = ((IData)(vlSelf->__PVT___io_Forward1E_T_9) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM2));
    vlSelf->__PVT___mem2regM_Stall_T_27 = ((IData)(vlSelf->__PVT___io_Forward2E_T_9) 
                                           & (IData)(vlSelf->__PVT__io_MemToRegM2));
    vlSelf->__PVT___io_Forward2D_T_13 = ((IData)(vlSelf->__PVT___io_Forward2D_T_12)
                                          ? 2U : 0U);
    vlSelf->__PVT___io_Forward1D_T_12 = ((((IData)(vlSelf->__PVT__io_R1D) 
                                           == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                          & (IData)(vlSelf->__PVT__io_RegWriteM2)) 
                                         & (IData)(vlSelf->__PVT___io_Forward2D_T_11));
    vlSelf->__PVT___io_Forward2E_T_12 = ((((IData)(vlSelf->__PVT__io_R2E) 
                                           == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                          & (IData)(vlSelf->__PVT__io_RegWriteM2)) 
                                         & (IData)(vlSelf->__PVT___io_Forward2D_T_11));
    vlSelf->__PVT___io_Forward1E_T_12 = ((((IData)(vlSelf->__PVT__io_R1E) 
                                           == (IData)(vlSelf->__PVT__io_WriteRegM2)) 
                                          & (IData)(vlSelf->__PVT__io_RegWriteM2)) 
                                         & (IData)(vlSelf->__PVT___io_Forward2D_T_11));
    vlSelf->__PVT___jr_Stall_T_9 = (((IData)(vlSelf->__PVT__io_RegWriteE) 
                                     & (IData)(vlSelf->__PVT___br_Stall_T_4)) 
                                    | (IData)(vlSelf->__PVT___jr_Stall_T_8));
    vlSelf->__PVT___br_Stall_T_19 = ((IData)(vlSelf->__PVT___br_Stall_T_13) 
                                     | (IData)(vlSelf->__PVT___br_Stall_T_18));
    vlSelf->__PVT___mem2regM_Stall_T_10 = (((IData)(vlSelf->__PVT___io_Forward2E_T_3) 
                                            & (IData)(vlSelf->__PVT__io_MemToRegM)) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_9));
    vlSelf->__PVT___io_Forward2D_T_14 = (((((IData)(vlSelf->__PVT__io_R2D) 
                                            == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                           & (IData)(vlSelf->__PVT__io_RegWriteM)) 
                                          & (~ (IData)(vlSelf->__PVT__io_MemToRegM)))
                                          ? 1U : (IData)(vlSelf->__PVT___io_Forward2D_T_13));
    vlSelf->__PVT___io_Forward1D_T_13 = ((IData)(vlSelf->__PVT___io_Forward1D_T_12)
                                          ? 2U : 0U);
    vlSelf->__PVT___jr_Stall_T_13 = ((IData)(vlSelf->__PVT___jr_Stall_T_9) 
                                     | (IData)(vlSelf->__PVT___jr_Stall_T_12));
    vlSelf->__PVT___br_Stall_T_20 = (((IData)(vlSelf->__PVT__io_CanBranchD) 
                                      & (IData)(vlSelf->__PVT__io_BranchD_Flag)) 
                                     & (IData)(vlSelf->__PVT___br_Stall_T_19));
    vlSelf->__PVT___mem2regM_Stall_T_16 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_10) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_15));
    vlSelf->__PVT__io_Forward2D = ((0U == (IData)(vlSelf->__PVT__io_R2D))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward2D_T_14));
    vlSelf->__PVT___io_Forward1D_T_14 = (((((IData)(vlSelf->__PVT__io_R1D) 
                                            == (IData)(vlSelf->__PVT__io_WriteRegM)) 
                                           & (IData)(vlSelf->__PVT__io_RegWriteM)) 
                                          & (IData)(vlSelf->__PVT___io_Forward2D_T_5))
                                          ? 1U : (IData)(vlSelf->__PVT___io_Forward1D_T_13));
    vlSelf->__PVT___mem2regM_Stall_T_22 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_16) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_21));
    vlSelf->__PVT__io_Forward1D = ((0U == (IData)(vlSelf->__PVT__io_R1D))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward1D_T_14));
    vlSelf->__PVT___mem2regM_Stall_T_28 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_22) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_27));
    vlSelf->__PVT___mem2regM_Stall_T_34 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_28) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_33));
    vlSelf->__PVT___mem2regM_Stall_T_40 = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_34) 
                                           | (IData)(vlSelf->__PVT___mem2regM_Stall_T_39));
    vlSelf->__PVT__mem2regM_Stall = ((IData)(vlSelf->__PVT___mem2regM_Stall_T_40) 
                                     | (IData)(vlSelf->__PVT___mem2regM_Stall_T_45));
}

VL_INLINE_OPT void Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__1(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__1\n"); );
    // Body
    vlSelf->__PVT___jr_Stall_T_14 = (((IData)(vlSelf->__PVT__io_JRD) 
                                      | (IData)(vlSelf->__PVT__io_dmem_calD)) 
                                     & (IData)(vlSelf->__PVT___jr_Stall_T_13));
    vlSelf->__PVT__io_FlushM2 = ((~ (IData)(vlSelf->__PVT__reset)) 
                                 & (IData)(vlSelf->__PVT__io_InException));
    vlSelf->__PVT__io_FlushD = ((~ (IData)(vlSelf->__PVT__reset)) 
                                & (IData)(vlSelf->__PVT__io_InException));
    vlSelf->__PVT__br_Stall = ((IData)(vlSelf->__PVT___br_Stall_T_20) 
                               & (~ (IData)(vlSelf->__PVT__io_InException)));
    vlSelf->__PVT___br_Stall_T_22 = (1U & (~ (IData)(vlSelf->__PVT__io_InException)));
    vlSelf->__PVT__dmem_addr_cal_Stall = ((IData)(vlSelf->__PVT___jr_Stall_T_14) 
                                          & (IData)(vlSelf->__PVT___br_Stall_T_22));
    vlSelf->__PVT___has_Stall_T = ((IData)(vlSelf->__PVT__br_Stall) 
                                   | (IData)(vlSelf->__PVT__dmem_addr_cal_Stall));
}

VL_INLINE_OPT void Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__2(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__2\n"); );
    // Body
    vlSelf->__PVT__io_StallM = (1U & ((IData)(vlSelf->__PVT__reset) 
                                      | (~ (IData)(vlSelf->__PVT__io_DataPendingM))));
    vlSelf->__PVT___io_StallM_T_1 = (1U & (~ (IData)(vlSelf->__PVT__io_DataPendingM)));
    vlSelf->__PVT__io_StallE = (1U & ((IData)(vlSelf->__PVT__reset) 
                                      | (~ ((IData)(vlSelf->__PVT__io_DataPendingM) 
                                            | (IData)(vlSelf->__PVT__mem2regM_Stall)))));
    vlSelf->__PVT___io_StallF_T_5 = (((IData)(vlSelf->__PVT___has_Stall_T) 
                                      | (IData)(vlSelf->__PVT__io_DataPendingM)) 
                                     | (IData)(vlSelf->__PVT__mem2regM_Stall));
    vlSelf->__PVT__io_FlushM = ((~ (IData)(vlSelf->__PVT__reset)) 
                                & (((IData)(vlSelf->__PVT__io_StallM) 
                                    & (IData)(vlSelf->__PVT__mem2regM_Stall)) 
                                   | (IData)(vlSelf->__PVT__io_InException)));
    vlSelf->__PVT__io_StallM2 = ((IData)(vlSelf->__PVT__reset) 
                                 | (IData)(vlSelf->__PVT___io_StallM_T_1));
    vlSelf->__PVT__io_StallW = ((IData)(vlSelf->__PVT__reset) 
                                | (IData)(vlSelf->__PVT___io_StallM_T_1));
    vlSelf->__PVT__io_FlushE = ((~ (IData)(vlSelf->__PVT__reset)) 
                                & (((IData)(vlSelf->__PVT__io_StallE) 
                                    & (IData)(vlSelf->__PVT___has_Stall_T)) 
                                   | (IData)(vlSelf->__PVT__io_InException)));
    vlSelf->__PVT__io_StallD = (1U & ((IData)(vlSelf->__PVT__reset) 
                                      | (~ (IData)(vlSelf->__PVT___io_StallF_T_5))));
    vlSelf->__PVT__io_FlushW = ((~ (IData)(vlSelf->__PVT__reset)) 
                                & ((IData)(vlSelf->__PVT__io_StallW) 
                                   & ((IData)(vlSelf->__PVT__io_DataPendingM) 
                                      | (IData)(vlSelf->__PVT__io_InException))));
}

VL_INLINE_OPT void Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__3(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__3\n"); );
    // Body
    vlSelf->__PVT___io_Forward2E_T_15 = (((IData)(vlSelf->__PVT__io_R2E) 
                                          == (IData)(vlSelf->__PVT__io_WriteRegW)) 
                                         & (IData)(vlSelf->__PVT__io_RegWriteW));
    vlSelf->__PVT___io_Forward1E_T_15 = (((IData)(vlSelf->__PVT__io_R1E) 
                                          == (IData)(vlSelf->__PVT__io_WriteRegW)) 
                                         & (IData)(vlSelf->__PVT__io_RegWriteW));
    vlSelf->__PVT___io_Forward2E_T_17 = ((IData)(vlSelf->__PVT___io_Forward2E_T_12)
                                          ? 3U : VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___io_Forward2E_T_15)));
    vlSelf->__PVT___io_Forward1E_T_17 = ((IData)(vlSelf->__PVT___io_Forward1E_T_12)
                                          ? 3U : VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___io_Forward1E_T_15)));
    vlSelf->__PVT___io_Forward2E_T_18 = ((IData)(vlSelf->__PVT___io_Forward2E_T_6)
                                          ? 2U : (IData)(vlSelf->__PVT___io_Forward2E_T_17));
    vlSelf->__PVT___io_Forward1E_T_18 = ((IData)(vlSelf->__PVT___io_Forward1E_T_6)
                                          ? 2U : (IData)(vlSelf->__PVT___io_Forward1E_T_17));
    vlSelf->__PVT__io_Forward2E = ((0U == (IData)(vlSelf->__PVT__io_R2E))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward2E_T_18));
    vlSelf->__PVT__io_Forward1E = ((0U == (IData)(vlSelf->__PVT__io_R1E))
                                    ? 0U : (IData)(vlSelf->__PVT___io_Forward1E_T_18));
}

VL_INLINE_OPT void Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__4(Vmycpu_top_cfu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cfu___combo__TOP__mycpu_top__u_riscv_cpu___cfu__4\n"); );
    // Body
    vlSelf->__PVT__io_StallF = (1U & ((IData)(vlSelf->__PVT__reset) 
                                      | (~ ((((IData)(vlSelf->__PVT___has_Stall_T) 
                                              | (IData)(vlSelf->__PVT__io_DataPendingM)) 
                                             | (IData)(vlSelf->__PVT__mem2regM_Stall)) 
                                            | (IData)(vlSelf->__PVT__io_Inst_Fifo_Empty)))));
}
