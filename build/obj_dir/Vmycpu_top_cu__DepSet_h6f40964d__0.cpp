// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_cu.h"

VL_INLINE_OPT void Vmycpu_top_cu___combo__TOP__mycpu_top__u_riscv_cpu___cu__0(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___combo__TOP__mycpu_top__u_riscv_cpu___cu__0\n"); );
    // Body
    vlSelf->__PVT__io_RegDstD = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 7U, 5U));
    vlSelf->__PVT__io_ebreakD = (0x100073U == vlSelf->__PVT__io1_InstrD);
    vlSelf->__PVT__immUJ = VL_CONCAT_III(20,1,19, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                         VL_CONCAT_III(19,8,11, 
                                                       (0xffU 
                                                        & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0xcU, 8U)), 
                                                       VL_CONCAT_III(11,1,10, 
                                                                     (1U 
                                                                      & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x14U)), 
                                                                     (0x3ffU 
                                                                      & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x15U, 0xaU)))));
    vlSelf->__PVT__immU = VL_CONCAT_III(32,20,12, (0xfffffU 
                                                   & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0xcU, 0x14U)), 0U);
    vlSelf->__PVT___immSB_T_4 = VL_CONCAT_III(13,1,12, 
                                              (1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                              VL_CONCAT_III(12,1,11, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 7U)), 
                                                            VL_CONCAT_III(11,6,5, 
                                                                          (0x3fU 
                                                                           & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x19U, 6U)), 
                                                                          VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 8U, 4U)), 0U))));
    vlSelf->__PVT__immI_lo_lo_lo = VL_CONCAT_III(6,1,5, 
                                                 (1U 
                                                  & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                 VL_CONCAT_III(5,1,4, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                               VL_CONCAT_III(4,1,3, 
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                             VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)))))));
    vlSelf->__PVT__OpD = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0U, 7U));
    vlSelf->__PVT__Funct6D = (0x3fU & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1aU, 6U));
    vlSelf->__PVT__Funct3D = (7U & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0xcU, 3U));
    vlSelf->__PVT__Funct7D = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x19U, 7U));
    vlSelf->__PVT__immSB_lo_lo_lo = VL_CONCAT_III(6,1,5, 
                                                  (1U 
                                                   & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                  VL_CONCAT_III(5,1,4, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                VL_CONCAT_III(4,1,3, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                              VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)))))));
    vlSelf->__PVT__immI_lo_lo = VL_CONCAT_III(13,1,12, 
                                              (1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                              VL_CONCAT_III(12,1,11, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                            VL_CONCAT_III(11,1,10, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                          VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), (IData)(vlSelf->__PVT__immI_lo_lo_lo))))))));
    vlSelf->__PVT___inst_code_type_T_4 = ((0U == (IData)(vlSelf->__PVT__Funct6D))
                                           ? 0x13U : 0U);
    vlSelf->__PVT__io_MemToRegD = ((3U == (IData)(vlSelf->__PVT__OpD)) 
                                   & ((3U == (IData)(vlSelf->__PVT__Funct3D)) 
                                      | ((6U == (IData)(vlSelf->__PVT__Funct3D)) 
                                         | ((5U == (IData)(vlSelf->__PVT__Funct3D)) 
                                            | ((4U 
                                                == (IData)(vlSelf->__PVT__Funct3D)) 
                                               | ((2U 
                                                   == (IData)(vlSelf->__PVT__Funct3D)) 
                                                  | ((1U 
                                                      == (IData)(vlSelf->__PVT__Funct3D)) 
                                                     | (0U 
                                                        == (IData)(vlSelf->__PVT__Funct3D)))))))));
    vlSelf->__PVT__io_LoadUnsignedD = ((3U == (IData)(vlSelf->__PVT__OpD)) 
                                       & ((6U == (IData)(vlSelf->__PVT__Funct3D)) 
                                          | ((5U == (IData)(vlSelf->__PVT__Funct3D)) 
                                             | (4U 
                                                == (IData)(vlSelf->__PVT__Funct3D)))));
    vlSelf->__PVT___io_MemWidthD_T_5 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                         ? 3U : VL_EXTEND_II(2,1, 
                                                             (1U 
                                                              == (IData)(vlSelf->__PVT__Funct3D))));
    vlSelf->__PVT__io1_dmem_addr_cal = ((0x23U == (IData)(vlSelf->__PVT__OpD))
                                         ? ((3U == (IData)(vlSelf->__PVT__Funct3D)) 
                                            | ((2U 
                                                == (IData)(vlSelf->__PVT__Funct3D)) 
                                               | ((1U 
                                                   == (IData)(vlSelf->__PVT__Funct3D)) 
                                                  | (0U 
                                                     == (IData)(vlSelf->__PVT__Funct3D)))))
                                         : ((3U == (IData)(vlSelf->__PVT__OpD)) 
                                            & ((3U 
                                                == (IData)(vlSelf->__PVT__Funct3D)) 
                                               | ((6U 
                                                   == (IData)(vlSelf->__PVT__Funct3D)) 
                                                  | ((5U 
                                                      == (IData)(vlSelf->__PVT__Funct3D)) 
                                                     | ((4U 
                                                         == (IData)(vlSelf->__PVT__Funct3D)) 
                                                        | ((2U 
                                                            == (IData)(vlSelf->__PVT__Funct3D)) 
                                                           | ((1U 
                                                               == (IData)(vlSelf->__PVT__Funct3D)) 
                                                              | (0U 
                                                                 == (IData)(vlSelf->__PVT__Funct3D))))))))));
    vlSelf->__PVT___inst_code_type_T_121 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 5U : 0U);
    vlSelf->__PVT___inst_code_type_T_108 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x18U
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_93 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 8U : 0U);
    vlSelf->__PVT___inst_code_type_T_76 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x1cU
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_8 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                           ? 4U : 0U);
    vlSelf->__PVT___immS_T_2 = VL_CONCAT_III(12,7,5, (IData)(vlSelf->__PVT__Funct7D), 
                                             (0x1fU 
                                              & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 7U, 5U)));
    vlSelf->__PVT___inst_code_type_T_117 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x11U
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_134 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x39U
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_136 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x3aU
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_128 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x3cU
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_57 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x37U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_53 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x38U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_2 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                           ? 0xfU : 0U);
    vlSelf->__PVT___inst_code_type_T_43 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x41U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_47 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x32U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_39 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x35U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_35 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x2fU
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_31 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x31U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_25 = ((0x20U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x36U
                                            : 0U);
    vlSelf->__PVT__immSB_lo_hi = VL_CONCAT_III(13,1,12, 
                                               (1U 
                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                               VL_CONCAT_III(12,1,11, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                             VL_CONCAT_III(11,1,10, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                           VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), (IData)(vlSelf->__PVT__immSB_lo_lo_lo))))))));
    vlSelf->__PVT__immSB_lo_lo = VL_CONCAT_III(12,1,11, 
                                               (1U 
                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                               VL_CONCAT_III(11,1,10, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                             VL_CONCAT_III(10,1,9, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                           VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), (IData)(vlSelf->__PVT__immSB_lo_lo_lo)))))));
    vlSelf->__PVT__immI_lo = VL_CONCAT_III(26,1,25, 
                                           (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                           VL_CONCAT_III(25,1,24, 
                                                         (1U 
                                                          & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                         VL_CONCAT_III(24,1,23, 
                                                                       (1U 
                                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                       VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_III(19,6,13, (IData)(vlSelf->__PVT__immI_lo_lo_lo), (IData)(vlSelf->__PVT__immI_lo_lo)))))))));
    vlSelf->__PVT___inst_code_type_T_6 = ((0x10U == (IData)(vlSelf->__PVT__Funct6D))
                                           ? 0x14U : (IData)(vlSelf->__PVT___inst_code_type_T_4));
    vlSelf->__PVT___io_MemWidthD_T_7 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                         ? 0U : (IData)(vlSelf->__PVT___io_MemWidthD_T_5));
    vlSelf->__PVT___inst_code_type_T_123 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x10U
                                             : VL_EXTEND_II(5,3, (IData)(vlSelf->__PVT___inst_code_type_T_121)));
    vlSelf->__PVT___inst_code_type_T_110 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x19U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_108));
    vlSelf->__PVT___inst_code_type_T_95 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0xaU : (IData)(vlSelf->__PVT___inst_code_type_T_93));
    vlSelf->__PVT___inst_code_type_T_78 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x1dU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_76));
    vlSelf->__PVT___inst_code_type_T_10 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0xdU : 
                                           VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___inst_code_type_T_8)));
    vlSelf->__PVT__immS_lo_lo_lo = VL_CONCAT_III(6,1,5, 
                                                 (1U 
                                                  & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                 VL_CONCAT_III(5,1,4, 
                                                               (1U 
                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                               VL_CONCAT_III(4,1,3, 
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                             VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)))))));
    vlSelf->__PVT___inst_code_type_T_119 = ((0x20U 
                                             == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x12U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_117));
    vlSelf->__PVT___inst_code_type_T_138 = ((0x20U 
                                             == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x3bU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_136));
    vlSelf->__PVT___inst_code_type_T_130 = ((0x20U 
                                             == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x3dU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_128));
    vlSelf->__PVT___inst_code_type_T_59 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x25U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_57));
    vlSelf->__PVT___inst_code_type_T_55 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x26U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_53));
    vlSelf->__PVT___inst_code_type_T_45 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x24U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_43));
    vlSelf->__PVT___inst_code_type_T_49 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x23U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_47));
    vlSelf->__PVT___inst_code_type_T_41 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x2eU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_39));
    vlSelf->__PVT___inst_code_type_T_37 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x34U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_35));
    vlSelf->__PVT___inst_code_type_T_33 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x2dU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_31));
    vlSelf->__PVT___inst_code_type_T_27 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x30U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_25));
    vlSelf->__PVT__immSB_lo_1 = VL_CONCAT_III(25,1,24, 
                                              (1U & 
                                               VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                              VL_CONCAT_III(24,1,23, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                            VL_CONCAT_III(23,1,22, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                          VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(19,1,18, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_III(18,6,12, (IData)(vlSelf->__PVT__immSB_lo_lo_lo), (IData)(vlSelf->__PVT__immSB_lo_lo)))))))));
    vlSelf->__PVT___immI_T_53 = VL_CONCAT_QIQ(52,1,51, 
                                              (1U & 
                                               VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                              VL_CONCAT_QIQ(51,1,50, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                            VL_CONCAT_QIQ(50,1,49, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                          VL_CONCAT_QIQ(49,1,48, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(48,1,47, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(47,1,46, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(46,1,45, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                                                VL_CONCAT_QIQ(45,6,39, (IData)(vlSelf->__PVT__immI_lo_lo_lo), 
                                                                                VL_CONCAT_QII(39,13,26, (IData)(vlSelf->__PVT__immI_lo_lo), vlSelf->__PVT__immI_lo)))))))));
    vlSelf->__PVT___io_MemWidthD_T_9 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                         ? 1U : (IData)(vlSelf->__PVT___io_MemWidthD_T_7));
    vlSelf->__PVT___inst_code_type_T_112 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x1aU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_110));
    vlSelf->__PVT___inst_code_type_T_97 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0xcU : (IData)(vlSelf->__PVT___inst_code_type_T_95));
    vlSelf->__PVT___inst_code_type_T_80 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x20U
                                            : VL_EXTEND_II(6,5, (IData)(vlSelf->__PVT___inst_code_type_T_78)));
    vlSelf->__PVT___inst_code_type_T_12 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0xeU : (IData)(vlSelf->__PVT___inst_code_type_T_10));
    vlSelf->__PVT__immS_lo_lo = VL_CONCAT_III(13,1,12, 
                                              (1U & 
                                               VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                              VL_CONCAT_III(12,1,11, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                            VL_CONCAT_III(11,1,10, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                          VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(8,1,7, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(7,1,6, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), (IData)(vlSelf->__PVT__immS_lo_lo_lo))))))));
    vlSelf->__PVT___inst_code_type_T_125 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_119)
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_123));
    vlSelf->__PVT___inst_code_type_T_140 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x28U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_138));
    vlSelf->__PVT___inst_code_type_T_132 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                             ? 0x2bU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_130));
    vlSelf->__PVT___inst_code_type_T_51 = ((0x20U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x33U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_49));
    vlSelf->__PVT___inst_code_type_T_29 = ((1U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x2cU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_27));
    vlSelf->__PVT___immSB_T_56 = VL_CONCAT_QIQ(51,1,50, 
                                               (1U 
                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                               VL_CONCAT_QIQ(50,1,49, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                             VL_CONCAT_QIQ(49,1,48, 
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                           VL_CONCAT_QIQ(48,1,47, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(47,1,46, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(46,1,45, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(45,1,44, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(13, (IData)(vlSelf->__PVT___immSB_T_4), 0xcU)), 
                                                                                VL_CONCAT_QIQ(44,6,38, (IData)(vlSelf->__PVT__immSB_lo_lo_lo), 
                                                                                VL_CONCAT_QII(38,13,25, (IData)(vlSelf->__PVT__immSB_lo_hi), vlSelf->__PVT__immSB_lo_1)))))))));
    vlSelf->__PVT__immI = VL_CONCAT_QQI(64,52,12, vlSelf->__PVT___immI_T_53, 
                                        (0xfffU & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x14U, 0xcU)));
    vlSelf->__PVT___io_MemWidthD_T_11 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                          ? 3U : (IData)(vlSelf->__PVT___io_MemWidthD_T_9));
    vlSelf->__PVT___inst_code_type_T_114 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x1bU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_112));
    vlSelf->__PVT___inst_code_type_T_99 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 7U : (IData)(vlSelf->__PVT___inst_code_type_T_97));
    vlSelf->__PVT___inst_code_type_T_82 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x1eU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_80));
    vlSelf->__PVT___inst_code_type_T_14 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x17U
                                            : VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___inst_code_type_T_12)));
    vlSelf->__PVT__immS_lo = VL_CONCAT_III(26,1,25, 
                                           (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                           VL_CONCAT_III(25,1,24, 
                                                         (1U 
                                                          & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                         VL_CONCAT_III(24,1,23, 
                                                                       (1U 
                                                                        & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                       VL_CONCAT_III(23,1,22, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(22,1,21, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(21,1,20, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(20,1,19, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_III(19,6,13, (IData)(vlSelf->__PVT__immS_lo_lo_lo), (IData)(vlSelf->__PVT__immS_lo_lo)))))))));
    vlSelf->__PVT___inst_code_type_T_126 = VL_CONCAT_III(8,5,3, (IData)(vlSelf->__PVT___inst_code_type_T_125), 2U);
    vlSelf->__PVT___inst_code_type_T_142 = ((0U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_132)
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_61 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_33)
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_29));
    vlSelf->__PVT__immSB = VL_CONCAT_QQI(64,51,13, vlSelf->__PVT___immSB_T_56, 
                                         VL_CONCAT_III(13,1,12, 
                                                       (1U 
                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x1fU)), 
                                                       VL_CONCAT_III(12,1,11, 
                                                                     (1U 
                                                                      & VL_BITSEL_IIII(32, vlSelf->__PVT__io1_InstrD, 7U)), 
                                                                     VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 8U, 4U)), 0U)))));
    vlSelf->__PVT___io_MemWidthD_T_13 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                          ? 2U : (IData)(vlSelf->__PVT___io_MemWidthD_T_11));
    vlSelf->__PVT___io_MemWriteD_T_9 = ((0x23U == (IData)(vlSelf->__PVT__OpD))
                                         ? (IData)(vlSelf->__PVT___inst_code_type_T_114)
                                         : 0U);
    vlSelf->__PVT___inst_code_type_T_115 = VL_CONCAT_III(8,5,3, (IData)(vlSelf->__PVT___inst_code_type_T_114), 3U);
    vlSelf->__PVT___inst_code_type_T_101 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 9U : (IData)(vlSelf->__PVT___inst_code_type_T_99));
    vlSelf->__PVT___inst_code_type_T_84 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x21U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_82));
    vlSelf->__PVT___inst_code_type_T_16 = ((7U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x15U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_14));
    vlSelf->__PVT___immS_T_55 = VL_CONCAT_QIQ(52,1,51, 
                                              (1U & 
                                               VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                              VL_CONCAT_QIQ(51,1,50, 
                                                            (1U 
                                                             & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                            VL_CONCAT_QIQ(50,1,49, 
                                                                          (1U 
                                                                           & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                          VL_CONCAT_QIQ(49,1,48, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_QIQ(48,1,47, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_QIQ(47,1,46, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_QIQ(46,1,45, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT___immS_T_2), 0xbU)), 
                                                                                VL_CONCAT_QIQ(45,6,39, (IData)(vlSelf->__PVT__immS_lo_lo_lo), 
                                                                                VL_CONCAT_QII(39,13,26, (IData)(vlSelf->__PVT__immS_lo_lo), vlSelf->__PVT__immS_lo)))))))));
    vlSelf->__PVT___inst_code_type_T_144 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_134)
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_142));
    vlSelf->__PVT___inst_code_type_T_63 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_37)
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_61));
    vlSelf->__PVT__io_MemWidthD = ((3U == (IData)(vlSelf->__PVT__OpD))
                                    ? (IData)(vlSelf->__PVT___io_MemWidthD_T_13)
                                    : 0U);
    vlSelf->__PVT__io_MemWriteD = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT___io_MemWriteD_T_9), 0U));
    vlSelf->__PVT___inst_code_type_T_103 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0xbU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_101));
    vlSelf->__PVT___inst_code_type_T_86 = ((7U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0x1fU
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_84));
    vlSelf->__PVT___inst_code_type_T_18 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___inst_code_type_T_2))
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_16));
    vlSelf->__PVT__immS = VL_CONCAT_QQI(64,52,12, vlSelf->__PVT___immS_T_55, 
                                        VL_CONCAT_III(12,7,5, (IData)(vlSelf->__PVT__Funct7D), 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 7U, 5U))));
    vlSelf->__PVT___inst_code_type_T_146 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_140)
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_144));
    vlSelf->__PVT___inst_code_type_T_65 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_41)
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_63));
    vlSelf->__PVT___inst_code_type_T_105 = ((3U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 6U : (IData)(vlSelf->__PVT___inst_code_type_T_103));
    vlSelf->__PVT___inst_code_type_T_87 = VL_CONCAT_III(9,6,3, (IData)(vlSelf->__PVT___inst_code_type_T_86), 4U);
    vlSelf->__PVT___inst_code_type_T_20 = ((1U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? 0xfU : (IData)(vlSelf->__PVT___inst_code_type_T_18));
    vlSelf->__PVT___inst_code_type_T_148 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x29U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_146));
    vlSelf->__PVT___inst_code_type_T_67 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_45)
                                            : VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___inst_code_type_T_65)));
    vlSelf->__PVT___inst_code_type_T_106 = VL_CONCAT_III(7,4,3, (IData)(vlSelf->__PVT___inst_code_type_T_105), 2U);
    vlSelf->__PVT___inst_code_type_T_22 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? (IData)(vlSelf->__PVT___inst_code_type_T_6)
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_20));
    vlSelf->__PVT___inst_code_type_T_150 = ((7U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x2aU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_148));
    vlSelf->__PVT___inst_code_type_T_69 = ((5U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___inst_code_type_T_51))
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_67));
    vlSelf->__PVT___inst_code_type_T_23 = VL_CONCAT_III(8,5,3, (IData)(vlSelf->__PVT___inst_code_type_T_22), 2U);
    vlSelf->__PVT___inst_code_type_T_152 = ((4U == (IData)(vlSelf->__PVT__Funct3D))
                                             ? 0x27U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_150));
    vlSelf->__PVT___inst_code_type_T_71 = ((6U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___inst_code_type_T_55))
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_69));
    vlSelf->__PVT___inst_code_type_T_156 = ((0x13U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_23)
                                             : 0U);
    vlSelf->__PVT___inst_code_type_T_153 = VL_CONCAT_III(9,6,3, (IData)(vlSelf->__PVT___inst_code_type_T_152), 5U);
    vlSelf->__PVT___inst_code_type_T_73 = ((7U == (IData)(vlSelf->__PVT__Funct3D))
                                            ? VL_EXTEND_II(7,6, (IData)(vlSelf->__PVT___inst_code_type_T_59))
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_71));
    vlSelf->__PVT___inst_code_type_T_74 = VL_CONCAT_III(10,7,3, (IData)(vlSelf->__PVT___inst_code_type_T_73), 5U);
    vlSelf->__PVT___inst_code_type_T_158 = ((0x33U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? (IData)(vlSelf->__PVT___inst_code_type_T_74)
                                             : VL_EXTEND_II(10,8, (IData)(vlSelf->__PVT___inst_code_type_T_156)));
    vlSelf->__PVT___inst_code_type_T_160 = ((0x63U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,9, (IData)(vlSelf->__PVT___inst_code_type_T_87))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_158));
    vlSelf->__PVT___inst_code_type_T_162 = ((0x6fU 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? 0x16U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_160));
    vlSelf->__PVT___inst_code_type_T_164 = ((0x67U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? 0x1aU
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_162));
    vlSelf->__PVT___inst_code_type_T_166 = ((0x37U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? 9U : (IData)(vlSelf->__PVT___inst_code_type_T_164));
    vlSelf->__PVT___inst_code_type_T_168 = ((0x17U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? 0x201U
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_166));
    vlSelf->__PVT___inst_code_type_T_170 = ((3U == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,7, (IData)(vlSelf->__PVT___inst_code_type_T_106))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_168));
    vlSelf->__PVT___inst_code_type_T_172 = ((0x23U 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,8, (IData)(vlSelf->__PVT___inst_code_type_T_115))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_170));
    vlSelf->__PVT___inst_code_type_T_174 = ((0x1bU 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,8, (IData)(vlSelf->__PVT___inst_code_type_T_126))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_172));
    vlSelf->__PVT___inst_code_type_T_176 = ((0x3bU 
                                             == (IData)(vlSelf->__PVT__OpD))
                                             ? VL_EXTEND_II(10,9, (IData)(vlSelf->__PVT___inst_code_type_T_153))
                                             : (IData)(vlSelf->__PVT___inst_code_type_T_174));
    vlSelf->__PVT__inst_code_type = ((0U == (IData)(vlSelf->__PVT__OpD))
                                      ? 0x282U : (IData)(vlSelf->__PVT___inst_code_type_T_176));
    vlSelf->__PVT__inst_type = (7U & VL_SEL_IIII(10, (IData)(vlSelf->__PVT__inst_code_type), 0U, 3U));
    vlSelf->__PVT__ins_code = (0x7fU & VL_SEL_IIII(10, (IData)(vlSelf->__PVT__inst_code_type), 3U, 7U));
    vlSelf->__PVT___io_ImmD_T_3 = (4U == (IData)(vlSelf->__PVT__inst_type));
    vlSelf->__PVT___io_ImmD_T_4 = (6U == (IData)(vlSelf->__PVT__inst_type));
    vlSelf->__PVT___io_ImmD_T_2 = (3U == (IData)(vlSelf->__PVT__inst_type));
    vlSelf->__PVT___io_ImmD_T_1 = (2U == (IData)(vlSelf->__PVT__inst_type));
    vlSelf->__PVT___io_ImmD_T = (1U == (IData)(vlSelf->__PVT__inst_type));
    vlSelf->__PVT__io_ALUSrcD_0 = VL_EXTEND_II(2,1, 
                                               (0x40U 
                                                == (IData)(vlSelf->__PVT__ins_code)));
    vlSelf->__PVT__io_LinkD = ((3U == (IData)(vlSelf->__PVT__ins_code)) 
                               | (2U == (IData)(vlSelf->__PVT__ins_code)));
    vlSelf->__PVT__io_data_wD = ((0x12U == (IData)(vlSelf->__PVT__ins_code)) 
                                 | ((0x11U == (IData)(vlSelf->__PVT__ins_code)) 
                                    | ((0x10U == (IData)(vlSelf->__PVT__ins_code)) 
                                       | ((5U == (IData)(vlSelf->__PVT__ins_code)) 
                                          | ((0x3dU 
                                              == (IData)(vlSelf->__PVT__ins_code)) 
                                             | ((0x3cU 
                                                 == (IData)(vlSelf->__PVT__ins_code)) 
                                                | ((0x3bU 
                                                    == (IData)(vlSelf->__PVT__ins_code)) 
                                                   | ((0x3aU 
                                                       == (IData)(vlSelf->__PVT__ins_code)) 
                                                      | ((0x39U 
                                                          == (IData)(vlSelf->__PVT__ins_code)) 
                                                         | ((0x2bU 
                                                             == (IData)(vlSelf->__PVT__ins_code)) 
                                                            | ((0x2bU 
                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                               | ((0x2aU 
                                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                                  | ((0x29U 
                                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                                     | ((0x28U 
                                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                                        | (0x27U 
                                                                           == (IData)(vlSelf->__PVT__ins_code))))))))))))))));
    vlSelf->__PVT___io_RegWriteD_T_29 = ((0x30U == (IData)(vlSelf->__PVT__ins_code)) 
                                         | ((0x2bU 
                                             == (IData)(vlSelf->__PVT__ins_code)) 
                                            | ((0x2fU 
                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                               | ((0x2eU 
                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                  | ((0x2dU 
                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                     | ((0x2cU 
                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                        | ((0x2bU 
                                                            == (IData)(vlSelf->__PVT__ins_code)) 
                                                           | ((0x2aU 
                                                               == (IData)(vlSelf->__PVT__ins_code)) 
                                                              | ((0x29U 
                                                                  == (IData)(vlSelf->__PVT__ins_code)) 
                                                                 | ((0x28U 
                                                                     == (IData)(vlSelf->__PVT__ins_code)) 
                                                                    | ((0x27U 
                                                                        == (IData)(vlSelf->__PVT__ins_code)) 
                                                                       | ((0x26U 
                                                                           == (IData)(vlSelf->__PVT__ins_code)) 
                                                                          | ((0x25U 
                                                                              == (IData)(vlSelf->__PVT__ins_code)) 
                                                                             | ((0x24U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | (0x23U 
                                                                                == (IData)(vlSelf->__PVT__ins_code))))))))))))))));
    vlSelf->__PVT__io1_BadInstrD = (0U == (IData)(vlSelf->__PVT__ins_code));
    vlSelf->__PVT___io_ALUCtrlD_T_32 = ((0x40U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : 0U);
    vlSelf->__PVT___io_ImmD_T_8 = ((IData)(vlSelf->__PVT___io_ImmD_T_3)
                                    ? vlSelf->__PVT__immSB
                                    : 0ULL);
    vlSelf->__PVT___io_ImmD_T_9 = ((IData)(vlSelf->__PVT___io_ImmD_T_4)
                                    ? vlSelf->__PVT__immUJ
                                    : 0U);
    vlSelf->__PVT___io_ImmD_T_7 = ((IData)(vlSelf->__PVT___io_ImmD_T_2)
                                    ? vlSelf->__PVT__immS
                                    : 0ULL);
    vlSelf->__PVT___io_ImmD_T_6 = ((IData)(vlSelf->__PVT___io_ImmD_T_1)
                                    ? vlSelf->__PVT__immI
                                    : 0ULL);
    vlSelf->__PVT___io_ALUSrcD_1_T_4 = (((IData)(vlSelf->__PVT___io_ImmD_T_1) 
                                         | (IData)(vlSelf->__PVT___io_ImmD_T_4)) 
                                        | (IData)(vlSelf->__PVT___io_ImmD_T));
    vlSelf->__PVT___io_ImmD_T_5 = ((IData)(vlSelf->__PVT___io_ImmD_T)
                                    ? vlSelf->__PVT__immU
                                    : 0U);
    vlSelf->__PVT___io_RegWriteD_T_59 = ((2U == (IData)(vlSelf->__PVT__ins_code)) 
                                         | ((3U == (IData)(vlSelf->__PVT__ins_code)) 
                                            | ((0x3dU 
                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                               | ((0x3cU 
                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                  | ((0x3bU 
                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                     | ((0x3aU 
                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                        | ((0x39U 
                                                            == (IData)(vlSelf->__PVT__ins_code)) 
                                                           | ((0x38U 
                                                               == (IData)(vlSelf->__PVT__ins_code)) 
                                                              | ((0x37U 
                                                                  == (IData)(vlSelf->__PVT__ins_code)) 
                                                                 | ((0x36U 
                                                                     == (IData)(vlSelf->__PVT__ins_code)) 
                                                                    | ((0x35U 
                                                                        == (IData)(vlSelf->__PVT__ins_code)) 
                                                                       | ((0x34U 
                                                                           == (IData)(vlSelf->__PVT__ins_code)) 
                                                                          | ((0x33U 
                                                                              == (IData)(vlSelf->__PVT__ins_code)) 
                                                                             | ((0x32U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | ((0x31U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | (IData)(vlSelf->__PVT___io_RegWriteD_T_29))))))))))))))));
    vlSelf->__PVT___io_ALUCtrlD_T_34 = ((0x30U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_32));
    vlSelf->__PVT___GEN_1 = VL_EXTEND_QI(64,20, vlSelf->__PVT___io_ImmD_T_9);
    vlSelf->__PVT__io_ALUSrcD_1 = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT___io_ALUSrcD_1_T_4));
    vlSelf->__PVT___GEN_0 = VL_EXTEND_QI(64,32, vlSelf->__PVT___io_ImmD_T_5);
    vlSelf->__PVT___io_RegWriteD_T_89 = ((0x10U == (IData)(vlSelf->__PVT__ins_code)) 
                                         | ((0xfU == (IData)(vlSelf->__PVT__ins_code)) 
                                            | ((0xeU 
                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                               | ((0xdU 
                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                  | ((9U 
                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                     | ((7U 
                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                        | ((0xcU 
                                                            == (IData)(vlSelf->__PVT__ins_code)) 
                                                           | ((0xbU 
                                                               == (IData)(vlSelf->__PVT__ins_code)) 
                                                              | ((0xaU 
                                                                  == (IData)(vlSelf->__PVT__ins_code)) 
                                                                 | ((9U 
                                                                     == (IData)(vlSelf->__PVT__ins_code)) 
                                                                    | ((8U 
                                                                        == (IData)(vlSelf->__PVT__ins_code)) 
                                                                       | ((7U 
                                                                           == (IData)(vlSelf->__PVT__ins_code)) 
                                                                          | ((6U 
                                                                              == (IData)(vlSelf->__PVT__ins_code)) 
                                                                             | ((5U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | ((4U 
                                                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                                                                | (IData)(vlSelf->__PVT___io_RegWriteD_T_59))))))))))))))));
    vlSelf->__PVT___io_ALUCtrlD_T_36 = ((5U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_34));
    vlSelf->__PVT___io_ImmD_T_10 = (vlSelf->__PVT___GEN_0 
                                    | vlSelf->__PVT___io_ImmD_T_6);
    vlSelf->__PVT__io_RegWriteD = ((1U == (IData)(vlSelf->__PVT__ins_code)) 
                                   | ((0x40U == (IData)(vlSelf->__PVT__ins_code)) 
                                      | ((0x17U == (IData)(vlSelf->__PVT__ins_code)) 
                                         | ((0x16U 
                                             == (IData)(vlSelf->__PVT__ins_code)) 
                                            | ((0x15U 
                                                == (IData)(vlSelf->__PVT__ins_code)) 
                                               | ((0x14U 
                                                   == (IData)(vlSelf->__PVT__ins_code)) 
                                                  | ((0x13U 
                                                      == (IData)(vlSelf->__PVT__ins_code)) 
                                                     | ((0x12U 
                                                         == (IData)(vlSelf->__PVT__ins_code)) 
                                                        | ((0x11U 
                                                            == (IData)(vlSelf->__PVT__ins_code)) 
                                                           | (IData)(vlSelf->__PVT___io_RegWriteD_T_89))))))))));
    vlSelf->__PVT___io_ALUCtrlD_T_38 = ((4U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_36));
    vlSelf->__PVT___io_ImmD_T_11 = (vlSelf->__PVT___io_ImmD_T_10 
                                    | vlSelf->__PVT___io_ImmD_T_7);
    vlSelf->__PVT___io_ALUCtrlD_T_40 = ((0x3cU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_38));
    vlSelf->__PVT___io_ImmD_T_12 = (vlSelf->__PVT___io_ImmD_T_11 
                                    | vlSelf->__PVT___io_ImmD_T_8);
    vlSelf->__PVT___io_ALUCtrlD_T_42 = ((0xdU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x2000U : 
                                        VL_EXTEND_II(16,2, (IData)(vlSelf->__PVT___io_ALUCtrlD_T_40)));
    vlSelf->__PVT__io_ImmD = (vlSelf->__PVT___io_ImmD_T_12 
                              | vlSelf->__PVT___GEN_1);
    vlSelf->__PVT___io_ALUCtrlD_T_44 = ((0xeU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x4000U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_42));
    vlSelf->__PVT___io_ALUCtrlD_T_46 = ((0xfU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x1000U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_44));
    vlSelf->__PVT___io_ALUCtrlD_T_48 = ((0x10U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x1000U : (IData)(vlSelf->__PVT___io_ALUCtrlD_T_46));
    vlSelf->__PVT___io_ALUCtrlD_T_50 = ((0x11U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10000U
                                         : VL_EXTEND_II(32,16, (IData)(vlSelf->__PVT___io_ALUCtrlD_T_48)));
    vlSelf->__PVT___io_ALUCtrlD_T_52 = ((0x12U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x8000U : vlSelf->__PVT___io_ALUCtrlD_T_50);
    vlSelf->__PVT___io_ALUCtrlD_T_54 = ((0x13U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_52);
    vlSelf->__PVT___io_ALUCtrlD_T_56 = ((0x14U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x8000U : vlSelf->__PVT___io_ALUCtrlD_T_54);
    vlSelf->__PVT___io_ALUCtrlD_T_58 = ((0x15U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10U : vlSelf->__PVT___io_ALUCtrlD_T_56);
    vlSelf->__PVT___io_ALUCtrlD_T_60 = ((0x16U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x800U : vlSelf->__PVT___io_ALUCtrlD_T_58);
    vlSelf->__PVT___io_ALUCtrlD_T_62 = ((0x17U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x100000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_60);
    vlSelf->__PVT___io_ALUCtrlD_T_64 = ((0x30U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : vlSelf->__PVT___io_ALUCtrlD_T_62);
    vlSelf->__PVT___io_ALUCtrlD_T_66 = ((0x31U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x1000U : vlSelf->__PVT___io_ALUCtrlD_T_64);
    vlSelf->__PVT___io_ALUCtrlD_T_68 = ((0x32U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_66);
    vlSelf->__PVT___io_ALUCtrlD_T_70 = ((0x33U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x8000U : vlSelf->__PVT___io_ALUCtrlD_T_68);
    vlSelf->__PVT___io_ALUCtrlD_T_72 = ((0x34U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x2000U : vlSelf->__PVT___io_ALUCtrlD_T_70);
    vlSelf->__PVT___io_ALUCtrlD_T_74 = ((0x35U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x4000U : vlSelf->__PVT___io_ALUCtrlD_T_72);
    vlSelf->__PVT___io_ALUCtrlD_T_76 = ((0x36U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x20000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_74);
    vlSelf->__PVT___io_ALUCtrlD_T_78 = ((0x37U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10U : vlSelf->__PVT___io_ALUCtrlD_T_76);
    vlSelf->__PVT___io_ALUCtrlD_T_80 = ((0x38U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x800U : vlSelf->__PVT___io_ALUCtrlD_T_78);
    vlSelf->__PVT___io_ALUCtrlD_T_82 = ((0x39U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x1000U : vlSelf->__PVT___io_ALUCtrlD_T_80);
    vlSelf->__PVT___io_ALUCtrlD_T_84 = ((0x3aU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x10000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_82);
    vlSelf->__PVT___io_ALUCtrlD_T_86 = ((0x3bU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x8000U : vlSelf->__PVT___io_ALUCtrlD_T_84);
    vlSelf->__PVT___io_ALUCtrlD_T_88 = ((0x3cU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 2U : vlSelf->__PVT___io_ALUCtrlD_T_86);
    vlSelf->__PVT___io_ALUCtrlD_T_90 = ((0x3dU == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x20000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_88);
    vlSelf->__PVT___io_ALUCtrlD_T_92 = ((0x41U == (IData)(vlSelf->__PVT__ins_code))
                                         ? 0x100000U
                                         : vlSelf->__PVT___io_ALUCtrlD_T_90);
    vlSelf->__PVT__io_ALUCtrlD = (0xffffffU & VL_SEL_IIII(32, vlSelf->__PVT___io_ALUCtrlD_T_92, 0U, 0x18U));
}
