// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_dmem.h"

VL_INLINE_OPT void Vmycpu_top_dmem___combo__TOP__mycpu_top__u_riscv_cpu___dmem__0(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___combo__TOP__mycpu_top__u_riscv_cpu___dmem__0\n"); );
    // Body
    vlSelf->__PVT__ra = (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_Physisc_Address, 0U, 2U));
    vlSelf->__PVT___io_RD_T_1 = VL_CONCAT_III(3,2,1, (IData)(vlSelf->__PVT__ra), (IData)(vlSelf->__PVT__io_SIGN));
}

VL_INLINE_OPT void Vmycpu_top_dmem___combo__TOP__mycpu_top__u_riscv_cpu___dmem__1(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___combo__TOP__mycpu_top__u_riscv_cpu___dmem__1\n"); );
    // Body
    vlSelf->__PVT__io_data_pending = (1U & (~ (IData)(vlSelf->__PVT__io_data_ok)));
}

VL_INLINE_OPT void Vmycpu_top_dmem___combo__TOP__mycpu_top__u_riscv_cpu___dmem__2(Vmycpu_top_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmem___combo__TOP__mycpu_top__u_riscv_cpu___dmem__2\n"); );
    // Body
    vlSelf->__PVT___io_RD_T_378 = VL_EXTEND_II(17,16, 
                                               (0xffffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x10U, 0x10U)));
    vlSelf->__PVT___io_RD_T_253 = VL_EXTEND_II(9,8, 
                                               (0xffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x18U, 8U)));
    vlSelf->__PVT___io_RD_T_323 = VL_EXTEND_II(17,16, 
                                               (0xffffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0U, 0x10U)));
    vlSelf->__PVT___io_RD_T_190 = VL_EXTEND_II(9,8, 
                                               (0xffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x10U, 8U)));
    vlSelf->__PVT___io_RD_T_127 = VL_EXTEND_II(9,8, 
                                               (0xffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 8U, 8U)));
    vlSelf->__PVT__io_RD_lo_lo_lo_5 = VL_CONCAT_III(6,1,5, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                    VL_CONCAT_III(5,1,4, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                  VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)))))));
    vlSelf->__PVT___io_RD_T_64 = VL_EXTEND_II(9,8, 
                                              (0xffU 
                                               & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0U, 8U)));
    vlSelf->__PVT__io_RD_lo_lo_lo_3 = VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                    VL_CONCAT_III(6,1,5, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                  VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU))))))));
    vlSelf->__PVT__io_RD_lo_lo_lo_4 = VL_CONCAT_III(6,1,5, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                    VL_CONCAT_III(5,1,4, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                  VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)))))));
    vlSelf->__PVT__io_RD_lo_lo_lo_2 = VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                    VL_CONCAT_III(6,1,5, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                  VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U))))))));
    vlSelf->__PVT__io_RD_lo_lo_lo_1 = VL_CONCAT_III(7,1,6, 
                                                    (1U 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                    VL_CONCAT_III(6,1,5, 
                                                                  (1U 
                                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                  VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU))))))));
    vlSelf->__PVT__io_RD_lo_lo_lo = VL_CONCAT_III(7,1,6, 
                                                  (1U 
                                                   & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                  VL_CONCAT_III(6,1,5, 
                                                                (1U 
                                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                VL_CONCAT_III(5,1,4, 
                                                                              (1U 
                                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                              VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U))))))));
    vlSelf->__PVT__io_RD_lo_lo_5 = VL_CONCAT_III(12,1,11, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                 VL_CONCAT_III(11,1,10, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                               VL_CONCAT_III(10,1,9, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                             VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_5)))))));
    vlSelf->__PVT__io_RD_lo_lo_3 = VL_CONCAT_III(14,1,13, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                 VL_CONCAT_III(13,1,12, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                               VL_CONCAT_III(12,1,11, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                             VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_3))))))));
    vlSelf->__PVT__io_RD_lo_lo_4 = VL_CONCAT_III(12,1,11, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                 VL_CONCAT_III(11,1,10, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                               VL_CONCAT_III(10,1,9, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                             VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_4)))))));
    vlSelf->__PVT__io_RD_lo_lo_2 = VL_CONCAT_III(14,1,13, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                 VL_CONCAT_III(13,1,12, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                               VL_CONCAT_III(12,1,11, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                             VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_2))))))));
    vlSelf->__PVT__io_RD_lo_lo_1 = VL_CONCAT_III(14,1,13, 
                                                 (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                 VL_CONCAT_III(13,1,12, 
                                                               (1U 
                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                               VL_CONCAT_III(12,1,11, 
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                             VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_1))))))));
    vlSelf->__PVT__io_RD_lo_lo = VL_CONCAT_III(14,1,13, 
                                               (1U 
                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                               VL_CONCAT_III(13,1,12, 
                                                             (1U 
                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                             VL_CONCAT_III(12,1,11, 
                                                                           (1U 
                                                                            & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                           VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), (IData)(vlSelf->__PVT__io_RD_lo_lo_lo))))))));
    vlSelf->__PVT__io_RD_lo_5 = VL_CONCAT_III(24,1,23, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                              VL_CONCAT_III(23,1,22, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                            VL_CONCAT_III(22,1,21, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                          VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_5), (IData)(vlSelf->__PVT__io_RD_lo_lo_5))))))));
    vlSelf->__PVT__io_RD_lo_3 = VL_CONCAT_III(28,1,27, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                              VL_CONCAT_III(27,1,26, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                            VL_CONCAT_III(26,1,25, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                          VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_3), (IData)(vlSelf->__PVT__io_RD_lo_lo_3)))))))));
    vlSelf->__PVT__io_RD_lo_4 = VL_CONCAT_III(24,1,23, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                              VL_CONCAT_III(23,1,22, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                            VL_CONCAT_III(22,1,21, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                          VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_4), (IData)(vlSelf->__PVT__io_RD_lo_lo_4))))))));
    vlSelf->__PVT__io_RD_lo_2 = VL_CONCAT_III(28,1,27, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                              VL_CONCAT_III(27,1,26, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                            VL_CONCAT_III(26,1,25, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                          VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_2), (IData)(vlSelf->__PVT__io_RD_lo_lo_2)))))))));
    vlSelf->__PVT__io_RD_lo_1 = VL_CONCAT_III(28,1,27, 
                                              (1U & 
                                               VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                              VL_CONCAT_III(27,1,26, 
                                                            (1U 
                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                            VL_CONCAT_III(26,1,25, 
                                                                          (1U 
                                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                          VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_1), (IData)(vlSelf->__PVT__io_RD_lo_lo_1)))))))));
    vlSelf->__PVT__io_RD_lo = VL_CONCAT_III(28,1,27, 
                                            (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                            VL_CONCAT_III(27,1,26, 
                                                          (1U 
                                                           & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                          VL_CONCAT_III(26,1,25, 
                                                                        (1U 
                                                                         & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                        VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(24,1,23, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_III(21,7,14, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo), (IData)(vlSelf->__PVT__io_RD_lo_lo)))))))));
    vlSelf->__PVT___io_RD_T_375 = VL_CONCAT_QIQ(64,1,63, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                VL_CONCAT_QIQ(63,1,62, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                              VL_CONCAT_QIQ(62,1,61, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                            VL_CONCAT_QIQ(61,1,60, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(60,1,59, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(59,1,58, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(58,6,52, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_5), 
                                                                                VL_CONCAT_QIQ(52,12,40, (IData)(vlSelf->__PVT__io_RD_lo_lo_5), 
                                                                                VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_RD_lo_5, 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x10U, 0x10U)))))))))));
    vlSelf->__PVT___io_RD_T_248 = VL_CONCAT_QIQ(56,1,55, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                VL_CONCAT_QIQ(55,1,54, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                              VL_CONCAT_QIQ(54,1,53, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                            VL_CONCAT_QIQ(53,1,52, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_3), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSelf->__PVT__io_RD_lo_lo_3), vlSelf->__PVT__io_RD_lo_3)))))))));
    vlSelf->__PVT___io_RD_T_320 = VL_CONCAT_QIQ(64,1,63, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                VL_CONCAT_QIQ(63,1,62, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                              VL_CONCAT_QIQ(62,1,61, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                            VL_CONCAT_QIQ(61,1,60, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(60,1,59, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(59,1,58, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(58,6,52, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_4), 
                                                                                VL_CONCAT_QIQ(52,12,40, (IData)(vlSelf->__PVT__io_RD_lo_lo_4), 
                                                                                VL_CONCAT_QII(40,24,16, vlSelf->__PVT__io_RD_lo_4, 
                                                                                (0xffffU 
                                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0U, 0x10U)))))))))));
    vlSelf->__PVT___io_RD_T_185 = VL_CONCAT_QIQ(56,1,55, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                VL_CONCAT_QIQ(55,1,54, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                              VL_CONCAT_QIQ(54,1,53, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                            VL_CONCAT_QIQ(53,1,52, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0x17U)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_2), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSelf->__PVT__io_RD_lo_lo_2), vlSelf->__PVT__io_RD_lo_2)))))))));
    vlSelf->__PVT___io_RD_T_122 = VL_CONCAT_QIQ(56,1,55, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                VL_CONCAT_QIQ(55,1,54, 
                                                              (1U 
                                                               & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                              VL_CONCAT_QIQ(54,1,53, 
                                                                            (1U 
                                                                             & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                            VL_CONCAT_QIQ(53,1,52, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 0xfU)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo_1), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSelf->__PVT__io_RD_lo_lo_1), vlSelf->__PVT__io_RD_lo_1)))))))));
    vlSelf->__PVT___io_RD_T_59 = VL_CONCAT_QIQ(56,1,55, 
                                               (1U 
                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                               VL_CONCAT_QIQ(55,1,54, 
                                                             (1U 
                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                             VL_CONCAT_QIQ(54,1,53, 
                                                                           (1U 
                                                                            & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                           VL_CONCAT_QIQ(53,1,52, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_QIQ(52,1,51, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_QIQ(51,1,50, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_QIQ(50,1,49, 
                                                                                (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__io_rdata, 7U)), 
                                                                                VL_CONCAT_QIQ(49,7,42, (IData)(vlSelf->__PVT__io_RD_lo_lo_lo), 
                                                                                VL_CONCAT_QII(42,14,28, (IData)(vlSelf->__PVT__io_RD_lo_lo), vlSelf->__PVT__io_RD_lo)))))))));
    vlSelf->__PVT___io_RD_T_250 = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT___io_RD_T_248, 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x18U, 8U)));
    vlSelf->__PVT___io_RD_T_380 = ((1U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_320
                                    : 0ULL);
    vlSelf->__PVT___io_RD_T_187 = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT___io_RD_T_185, 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0x10U, 8U)));
    vlSelf->__PVT___io_RD_T_124 = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT___io_RD_T_122, 
                                                (0xffU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 8U, 8U)));
    vlSelf->__PVT___io_RD_T_61 = VL_CONCAT_QQI(64,56,8, vlSelf->__PVT___io_RD_T_59, 
                                               (0xffU 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_rdata, 0U, 8U)));
    vlSelf->__PVT___io_RD_T_382 = ((0U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,17, vlSelf->__PVT___io_RD_T_323)
                                    : vlSelf->__PVT___io_RD_T_380);
    vlSelf->__PVT___io_RD_T_255 = ((0U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___io_RD_T_64))
                                    : vlSelf->__PVT___io_RD_T_61);
    vlSelf->__PVT___io_RD_T_384 = ((5U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_375
                                    : vlSelf->__PVT___io_RD_T_382);
    vlSelf->__PVT___io_RD_T_257 = ((3U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_124
                                    : vlSelf->__PVT___io_RD_T_255);
    vlSelf->__PVT___io_RD_T_386 = ((4U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,17, vlSelf->__PVT___io_RD_T_378)
                                    : vlSelf->__PVT___io_RD_T_384);
    vlSelf->__PVT___io_RD_T_259 = ((2U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___io_RD_T_127))
                                    : vlSelf->__PVT___io_RD_T_257);
    vlSelf->__PVT___io_RD_T_261 = ((5U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_187
                                    : vlSelf->__PVT___io_RD_T_259);
    vlSelf->__PVT___io_RD_T_263 = ((4U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___io_RD_T_190))
                                    : vlSelf->__PVT___io_RD_T_261);
    vlSelf->__PVT___io_RD_T_265 = ((7U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? vlSelf->__PVT___io_RD_T_250
                                    : vlSelf->__PVT___io_RD_T_263);
    vlSelf->__PVT___io_RD_T_267 = ((6U == (IData)(vlSelf->__PVT___io_RD_T_1))
                                    ? VL_EXTEND_QI(64,9, (IData)(vlSelf->__PVT___io_RD_T_253))
                                    : vlSelf->__PVT___io_RD_T_265);
    vlSelf->__PVT___io_RD_T_388 = ((0U == (IData)(vlSelf->__PVT__io_WIDTH))
                                    ? vlSelf->__PVT___io_RD_T_267
                                    : 0ULL);
    vlSelf->__PVT___io_RD_T_390 = ((1U == (IData)(vlSelf->__PVT__io_WIDTH))
                                    ? vlSelf->__PVT___io_RD_T_386
                                    : vlSelf->__PVT___io_RD_T_388);
    vlSelf->__PVT__io_RD = ((2U == (IData)(vlSelf->__PVT__io_WIDTH))
                             ? vlSelf->__PVT__io_rdata
                             : vlSelf->__PVT___io_RD_T_390);
}
