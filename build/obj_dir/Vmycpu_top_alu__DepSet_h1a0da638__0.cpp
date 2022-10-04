// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_alu.h"

VL_INLINE_OPT void Vmycpu_top_alu___combo__TOP__mycpu_top__u_riscv_cpu___alu__0(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___combo__TOP__mycpu_top__u_riscv_cpu___alu__0\n"); );
    // Body
    vlSelf->__PVT___normal_result_T_36 = VL_EXTEND_II(24,10, 
                                                      (0x3ffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xeU, 0xaU)));
    vlSelf->__PVT___normal_result_T_34 = VL_EXTEND_II(24,8, 
                                                      (0xffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0x10U, 8U)));
    vlSelf->__PVT___normal_result_T_32 = VL_EXTEND_II(24,9, 
                                                      (0x1ffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xfU, 9U)));
    vlSelf->__PVT___normal_result_T_30 = VL_EXTEND_II(24,11, 
                                                      (0x7ffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xdU, 0xbU)));
    vlSelf->__PVT___normal_result_T_28 = VL_EXTEND_II(24,12, 
                                                      (0xfffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xcU, 0xcU)));
    vlSelf->__PVT___normal_result_T_26 = VL_EXTEND_II(24,17, 
                                                      (0x1ffffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 7U, 0x11U)));
    vlSelf->__PVT___normal_result_T_24 = VL_EXTEND_II(24,4, 
                                                      (0xfU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0x14U, 4U)));
    vlSelf->__PVT___normal_result_T_22 = VL_EXTEND_II(24,14, 
                                                      (0x3fffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xaU, 0xeU)));
    vlSelf->__PVT___normal_result_T_20 = VL_EXTEND_II(24,13, 
                                                      (0x1fffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0xbU, 0xdU)));
    vlSelf->__PVT___normal_result_T_18 = VL_EXTEND_II(24,20, 
                                                      (0xfffffU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 4U, 0x14U)));
    vlSelf->__PVT___normal_result_T_15 = VL_EXTEND_II(24,5, 
                                                      (0x1fU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0x13U, 5U)));
    vlSelf->__PVT___normal_result_T_12 = VL_EXTEND_II(24,6, 
                                                      (0x3fU 
                                                       & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0x12U, 6U)));
    vlSelf->__PVT___normal_result_T_9 = VL_EXTEND_II(24,7, 
                                                     (0x7fU 
                                                      & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 0x11U, 7U)));
    vlSelf->__PVT___normal_result_T_6 = VL_EXTEND_II(24,21, 
                                                     (0x1fffffU 
                                                      & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 3U, 0x15U)));
    vlSelf->__PVT___normal_result_T = VL_EXTEND_II(24,23, 
                                                   (0x7fffffU 
                                                    & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 1U, 0x17U)));
    vlSelf->__PVT___normal_result_T_3 = VL_EXTEND_II(24,22, 
                                                     (0x3fffffU 
                                                      & VL_SEL_IIII(24, vlSelf->__PVT__io_ctrl, 2U, 0x16U)));
}

VL_INLINE_OPT void Vmycpu_top_alu___combo__TOP__mycpu_top__u_riscv_cpu___alu__1(Vmycpu_top_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_alu___combo__TOP__mycpu_top__u_riscv_cpu___alu__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h74bd6d88__0;
    VlWide<3>/*95:0*/ __Vtemp_h6f580bf7__0;
    VlWide<3>/*95:0*/ __Vtemp_h9cedee2f__0;
    VlWide<3>/*95:0*/ __Vtemp_he3e920cf__0;
    VlWide<3>/*95:0*/ __Vtemp_h9d413c94__0;
    VlWide<3>/*95:0*/ __Vtemp_hc6ada9ba__0;
    VlWide<3>/*95:0*/ __Vtemp_h83e9204a__0;
    VlWide<3>/*95:0*/ __Vtemp_h016b3b16__0;
    VlWide<3>/*95:0*/ __Vtemp_h4c58cd11__0;
    VlWide<3>/*95:0*/ __Vtemp_h83e9204a__1;
    VlWide<3>/*95:0*/ __Vtemp_hfefbd623__0;
    VlWide<3>/*95:0*/ __Vtemp_hda6493e6__0;
    VlWide<3>/*95:0*/ __Vtemp_h155a7a26__0;
    VlWide<3>/*95:0*/ __Vtemp_h9160d1f0__0;
    VlWide<3>/*95:0*/ __Vtemp_h888d6b87__0;
    CData/*31:0*/ __Vtemp_hf11a2f5b__0;
    VlWide<3>/*95:0*/ __Vtemp_ha41e58c2__0;
    VlWide<3>/*95:0*/ __Vtemp_h7efeabdc__0;
    VlWide<3>/*95:0*/ __Vtemp_h7e7a8077__0;
    VlWide<3>/*95:0*/ __Vtemp_h1fdd324c__0;
    VlWide<3>/*95:0*/ __Vtemp_hb48397f3__0;
    VlWide<3>/*95:0*/ __Vtemp_h3cf8e69e__0;
    VlWide<3>/*95:0*/ __Vtemp_h0c1d2111__0;
    VlWide<3>/*95:0*/ __Vtemp_h6699fd69__0;
    VlWide<3>/*95:0*/ __Vtemp_h9f8c15d2__0;
    VlWide<3>/*95:0*/ __Vtemp_h7ac03a27__0;
    VlWide<3>/*95:0*/ __Vtemp_h1d003eba__0;
    // Body
    VL_EXTEND_WQ(95,64, __Vtemp_h74bd6d88__0, vlSelf->__PVT__io_in2);
    VL_ASSIGN_W(95,vlSelf->__PVT___GEN_22, __Vtemp_h74bd6d88__0);
    vlSelf->__PVT__answer_lui = VL_CONCAT_III(32,16,16, 
                                              (0xffffU 
                                               & VL_SEL_IQII(64, vlSelf->__PVT__io_in2, 0U, 0x10U)), 0U);
    VL_CONCAT_WIQ(65,1,64, __Vtemp_h6f580bf7__0, (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_in2, 0x3fU)), vlSelf->__PVT__io_in2);
    VL_ASSIGN_W(65,vlSelf->__PVT__in2_extend, __Vtemp_h6f580bf7__0);
    vlSelf->__PVT__answer_sltu = (vlSelf->__PVT__io_in1 
                                  < vlSelf->__PVT__io_in2);
    vlSelf->__PVT__answer_slt = VL_LTS_IQQ(64, vlSelf->__PVT__io_in1, vlSelf->__PVT__io_in2);
    vlSelf->__PVT__sa = (0x1fU & VL_SEL_IQII(64, vlSelf->__PVT__io_in1, 0U, 5U));
    vlSelf->__PVT__answer_xor = (vlSelf->__PVT__io_in1 
                                 ^ vlSelf->__PVT__io_in2);
    vlSelf->__PVT__answer_or = (vlSelf->__PVT__io_in1 
                                | vlSelf->__PVT__io_in2);
    vlSelf->__PVT__answer_and = (vlSelf->__PVT__io_in1 
                                 & vlSelf->__PVT__io_in2);
    VL_CONCAT_WIQ(65,1,64, __Vtemp_h9cedee2f__0, (1U 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__io_in1, 0x3fU)), vlSelf->__PVT__io_in1);
    VL_ASSIGN_W(65,vlSelf->__PVT__in1_extend, __Vtemp_h9cedee2f__0);
    vlSelf->__PVT___normal_result_T_48 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_26, 0U))
                                           ? vlSelf->__PVT__answer_lui
                                           : 0U);
    vlSelf->__PVT___normal_result_T_53 = (VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_36, 0U) 
                                          & (IData)(vlSelf->__PVT__answer_sltu));
    vlSelf->__PVT___normal_result_T_50 = (VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_30, 0U) 
                                          & (IData)(vlSelf->__PVT__answer_slt));
    vlSelf->__PVT__answer_srl = (vlSelf->__PVT__io_in2 
                                 >> (IData)(vlSelf->__PVT__sa));
    vlSelf->__PVT__answer_sra = VL_SHIFTRS_QQI(64,64,5, vlSelf->__PVT__io_in2, (IData)(vlSelf->__PVT__sa));
    VL_CONST_W_3X(96,__Vtemp_he3e920cf__0,0x7fffffff,0xffffffff,0xffffffff);
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h9d413c94__0, vlSelf->__PVT___GEN_22, (IData)(vlSelf->__PVT__sa));
    VL_AND_W(3, __Vtemp_hc6ada9ba__0, __Vtemp_he3e920cf__0, __Vtemp_h9d413c94__0);
    VL_ASSIGN_W(95,vlSelf->__PVT__answer_sll, __Vtemp_hc6ada9ba__0);
    vlSelf->__PVT___normal_result_T_47 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_24, 0U))
                                           ? vlSelf->__PVT__answer_xor
                                           : 0ULL);
    vlSelf->__PVT__answer_nor = (~ vlSelf->__PVT__answer_or);
    vlSelf->__PVT___normal_result_T_45 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_20, 0U))
                                           ? vlSelf->__PVT__answer_or
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_44 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_18, 0U))
                                           ? vlSelf->__PVT__answer_and
                                           : 0ULL);
    VL_CONST_W_3X(96,__Vtemp_h83e9204a__0,0x00000001,0xffffffff,0xffffffff);
    VL_SUB_W(3, __Vtemp_h016b3b16__0, vlSelf->__PVT__in1_extend, vlSelf->__PVT__in2_extend);
    VL_AND_W(3, __Vtemp_h4c58cd11__0, __Vtemp_h83e9204a__0, __Vtemp_h016b3b16__0);
    VL_ASSIGN_W(65,vlSelf->__PVT__answer_sub, __Vtemp_h4c58cd11__0);
    VL_CONST_W_3X(96,__Vtemp_h83e9204a__1,0x00000001,0xffffffff,0xffffffff);
    VL_ADD_W(3, __Vtemp_hfefbd623__0, vlSelf->__PVT__in1_extend, vlSelf->__PVT__in2_extend);
    VL_AND_W(3, __Vtemp_hda6493e6__0, __Vtemp_h83e9204a__1, __Vtemp_hfefbd623__0);
    VL_ASSIGN_W(65,vlSelf->__PVT__answer_add, __Vtemp_hda6493e6__0);
    vlSelf->__PVT___GEN_16 = VL_EXTEND_QI(64,32, vlSelf->__PVT___normal_result_T_48);
    VL_EXTEND_WI(95,1, __Vtemp_h155a7a26__0, (IData)(vlSelf->__PVT___normal_result_T_53));
    VL_ASSIGN_W(95,vlSelf->__PVT___GEN_21, __Vtemp_h155a7a26__0);
    VL_EXTEND_WI(95,1, __Vtemp_h9160d1f0__0, (IData)(vlSelf->__PVT___normal_result_T_50));
    VL_ASSIGN_W(95,vlSelf->__PVT___GEN_18, __Vtemp_h9160d1f0__0);
    vlSelf->__PVT___normal_result_T_52 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_34, 0U))
                                           ? vlSelf->__PVT__answer_srl
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_51 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_32, 0U))
                                           ? vlSelf->__PVT__answer_sra
                                           : 0ULL);
    VL_CONST_W_1X(95,__Vtemp_h888d6b87__0,0x00000000);
    __Vtemp_hf11a2f5b__0 = (1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_28, 0U));
    VL_COND_WIWW(95, __Vtemp_ha41e58c2__0, __Vtemp_hf11a2f5b__0, vlSelf->__PVT__answer_sll, __Vtemp_h888d6b87__0);
    VL_ASSIGN_W(95,vlSelf->__PVT___normal_result_T_49, __Vtemp_ha41e58c2__0);
    vlSelf->__PVT___normal_result_T_46 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_22, 0U))
                                           ? vlSelf->__PVT__answer_nor
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_43 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_15, 0U))
                                           ? VL_SEL_QWII(65, vlSelf->__PVT__answer_sub, 0U, 0x40U)
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_42 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_12, 0U))
                                           ? VL_SEL_QWII(65, vlSelf->__PVT__answer_sub, 0U, 0x40U)
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_41 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_9, 0U))
                                           ? VL_SEL_QWII(65, vlSelf->__PVT__answer_sub, 0U, 0x40U)
                                           : 0ULL);
    vlSelf->__PVT__io_overflow = ((VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_3, 0U) 
                                   & ((1U & VL_BITSEL_IWII(65, vlSelf->__PVT__answer_add, 0x40U)) 
                                      != (1U & VL_BITSEL_IWII(65, vlSelf->__PVT__answer_add, 0x3fU)))) 
                                  | (VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_12, 0U) 
                                     & ((1U & VL_BITSEL_IWII(65, vlSelf->__PVT__answer_sub, 0x40U)) 
                                        != (1U & VL_BITSEL_IWII(65, vlSelf->__PVT__answer_sub, 0x3fU)))));
    vlSelf->__PVT___normal_result_T_40 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_6, 0U))
                                           ? VL_SEL_QWII(65, vlSelf->__PVT__answer_add, 0U, 0x40U)
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_38 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T, 0U))
                                           ? VL_SEL_QWII(65, vlSelf->__PVT__answer_add, 0U, 0x40U)
                                           : 0ULL);
    vlSelf->__PVT___normal_result_T_39 = ((1U & VL_BITSEL_IIII(24, vlSelf->__PVT___normal_result_T_3, 0U))
                                           ? VL_SEL_QWII(65, vlSelf->__PVT__answer_add, 0U, 0x40U)
                                           : 0ULL);
    VL_EXTEND_WQ(95,64, __Vtemp_h7efeabdc__0, vlSelf->__PVT___normal_result_T_52);
    VL_ASSIGN_W(95,vlSelf->__PVT___GEN_20, __Vtemp_h7efeabdc__0);
    VL_EXTEND_WQ(95,64, __Vtemp_h7e7a8077__0, vlSelf->__PVT___normal_result_T_51);
    VL_ASSIGN_W(95,vlSelf->__PVT___GEN_19, __Vtemp_h7e7a8077__0);
    vlSelf->__PVT___normal_result_T_54 = (vlSelf->__PVT___normal_result_T_38 
                                          | vlSelf->__PVT___normal_result_T_39);
    vlSelf->__PVT___normal_result_T_55 = (vlSelf->__PVT___normal_result_T_54 
                                          | vlSelf->__PVT___normal_result_T_40);
    vlSelf->__PVT___normal_result_T_56 = (vlSelf->__PVT___normal_result_T_55 
                                          | vlSelf->__PVT___normal_result_T_41);
    vlSelf->__PVT___normal_result_T_57 = (vlSelf->__PVT___normal_result_T_56 
                                          | vlSelf->__PVT___normal_result_T_42);
    vlSelf->__PVT___normal_result_T_58 = (vlSelf->__PVT___normal_result_T_57 
                                          | vlSelf->__PVT___normal_result_T_43);
    vlSelf->__PVT___normal_result_T_59 = (vlSelf->__PVT___normal_result_T_58 
                                          | vlSelf->__PVT___normal_result_T_44);
    vlSelf->__PVT___normal_result_T_60 = (vlSelf->__PVT___normal_result_T_59 
                                          | vlSelf->__PVT___normal_result_T_45);
    vlSelf->__PVT___normal_result_T_61 = (vlSelf->__PVT___normal_result_T_60 
                                          | vlSelf->__PVT___normal_result_T_46);
    vlSelf->__PVT___normal_result_T_62 = (vlSelf->__PVT___normal_result_T_61 
                                          | vlSelf->__PVT___normal_result_T_47);
    vlSelf->__PVT___normal_result_T_63 = (vlSelf->__PVT___normal_result_T_62 
                                          | vlSelf->__PVT___GEN_16);
    VL_EXTEND_WQ(95,64, __Vtemp_h1fdd324c__0, vlSelf->__PVT___normal_result_T_63);
    VL_ASSIGN_W(95,vlSelf->__PVT___GEN_17, __Vtemp_h1fdd324c__0);
    VL_OR_W(3, __Vtemp_hb48397f3__0, vlSelf->__PVT___GEN_17, vlSelf->__PVT___normal_result_T_49);
    VL_ASSIGN_W(95,vlSelf->__PVT___normal_result_T_64, __Vtemp_hb48397f3__0);
    VL_OR_W(3, __Vtemp_h3cf8e69e__0, vlSelf->__PVT___normal_result_T_64, vlSelf->__PVT___GEN_18);
    VL_ASSIGN_W(95,vlSelf->__PVT___normal_result_T_65, __Vtemp_h3cf8e69e__0);
    VL_OR_W(3, __Vtemp_h0c1d2111__0, vlSelf->__PVT___normal_result_T_65, vlSelf->__PVT___GEN_19);
    VL_ASSIGN_W(95,vlSelf->__PVT___normal_result_T_66, __Vtemp_h0c1d2111__0);
    VL_OR_W(3, __Vtemp_h6699fd69__0, vlSelf->__PVT___normal_result_T_66, vlSelf->__PVT___GEN_20);
    VL_ASSIGN_W(95,vlSelf->__PVT___normal_result_T_67, __Vtemp_h6699fd69__0);
    VL_OR_W(3, __Vtemp_h9f8c15d2__0, vlSelf->__PVT___normal_result_T_67, vlSelf->__PVT___GEN_21);
    VL_ASSIGN_W(95,vlSelf->__PVT__normal_result, __Vtemp_h9f8c15d2__0);
    vlSelf->__PVT__io_result_lo_lo = VL_CONCAT_III(8,1,7, 
                                                   (1U 
                                                    & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                   VL_CONCAT_III(7,1,6, 
                                                                 (1U 
                                                                  & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                 VL_CONCAT_III(6,1,5, 
                                                                               (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                               VL_CONCAT_III(5,1,4, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(3,1,2, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)))))))));
    vlSelf->__PVT__io_result_lo = VL_CONCAT_III(16,1,15, 
                                                (1U 
                                                 & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                VL_CONCAT_III(15,1,14, 
                                                              (1U 
                                                               & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                              VL_CONCAT_III(14,1,13, 
                                                                            (1U 
                                                                             & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                            VL_CONCAT_III(13,1,12, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(12,1,11, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(11,1,10, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(10,1,9, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(9,1,8, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), (IData)(vlSelf->__PVT__io_result_lo_lo)))))))));
    vlSelf->__PVT___io_result_T_33 = VL_CONCAT_III(32,1,31, 
                                                   (1U 
                                                    & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                   VL_CONCAT_III(31,1,30, 
                                                                 (1U 
                                                                  & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                 VL_CONCAT_III(30,1,29, 
                                                                               (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                               VL_CONCAT_III(29,1,28, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(28,1,27, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(27,1,26, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(26,1,25, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(25,1,24, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(95, vlSelf->__PVT__normal_result, 0x1fU)), 
                                                                                VL_CONCAT_III(24,8,16, (IData)(vlSelf->__PVT__io_result_lo_lo), (IData)(vlSelf->__PVT__io_result_lo))))))))));
    vlSelf->__PVT___io_result_T_35 = VL_CONCAT_QII(64,32,32, vlSelf->__PVT___io_result_T_33, 
                                                   VL_SEL_IWII(95, vlSelf->__PVT__normal_result, 0U, 0x20U));
    VL_EXTEND_WQ(95,64, __Vtemp_h7ac03a27__0, vlSelf->__PVT___io_result_T_35);
    VL_COND_WIWW(95, __Vtemp_h1d003eba__0, (IData)(vlSelf->__PVT__io_data_w), __Vtemp_h7ac03a27__0, vlSelf->__PVT__normal_result);
    VL_ASSIGN_W(95,vlSelf->__PVT___io_result_T_36, __Vtemp_h1d003eba__0);
    vlSelf->__PVT__io_result = VL_SEL_QWII(95, vlSelf->__PVT___io_result_T_36, 0U, 0x40U);
}
