// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_inst_cache.h"

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__0(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__0\n"); );
    // Body
    vlSelf->__PVT___GEN_516 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_1_rdata
                                : vlSelf->__PVT__icache_data_way0_0_rdata);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__1(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__1\n"); );
    // Body
    vlSelf->__PVT___GEN_524 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_1_rdata
                                : vlSelf->__PVT__icache_data_way1_0_rdata);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__2(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__2\n"); );
    // Body
    vlSelf->__PVT___GEN_517 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_2_rdata
                                : vlSelf->__PVT___GEN_516);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__3(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__3\n"); );
    // Body
    vlSelf->__PVT___GEN_525 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_2_rdata
                                : vlSelf->__PVT___GEN_524);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___combo__TOP__mycpu_top__inst_cache__4(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___combo__TOP__mycpu_top__inst_cache__4\n"); );
    // Body
    vlSelf->__PVT__stage1_flush = ((~ (IData)(vlSelf->__PVT__io_sram_req)) 
                                   & (IData)(vlSelf->__PVT__io_stage1_valid_flush));
    vlSelf->__PVT___stage1_sram_addr_reg_T_1 = ((IData)(vlSelf->__PVT__io_sram_req) 
                                                | (IData)(vlSelf->__PVT__stage1_flush));
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__4(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__4\n"); );
    // Body
    vlSelf->__PVT___GEN_518 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_3_rdata
                                : vlSelf->__PVT___GEN_517);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__5(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__5\n"); );
    // Body
    vlSelf->__PVT___GEN_526 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_3_rdata
                                : vlSelf->__PVT___GEN_525);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__6(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__6\n"); );
    // Body
    vlSelf->__PVT___GEN_519 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_4_rdata
                                : vlSelf->__PVT___GEN_518);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__7(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__7\n"); );
    // Body
    vlSelf->__PVT___GEN_527 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_4_rdata
                                : vlSelf->__PVT___GEN_526);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__8(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__8\n"); );
    // Body
    vlSelf->__PVT___GEN_520 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_5_rdata
                                : vlSelf->__PVT___GEN_519);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__9(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__9\n"); );
    // Body
    vlSelf->__PVT___GEN_528 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_5_rdata
                                : vlSelf->__PVT___GEN_527);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__10(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__10\n"); );
    // Body
    vlSelf->__PVT___GEN_521 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_6_rdata
                                : vlSelf->__PVT___GEN_520);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__11(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__11\n"); );
    // Body
    vlSelf->__PVT___GEN_529 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_6_rdata
                                : vlSelf->__PVT___GEN_528);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__12(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__12\n"); );
    // Body
    vlSelf->__PVT___GEN_522 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way0_7_rdata
                                : vlSelf->__PVT___GEN_521);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__13(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__13\n"); );
    // Body
    vlSelf->__PVT___GEN_530 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                ? vlSelf->__PVT__icache_data_way1_7_rdata
                                : vlSelf->__PVT___GEN_529);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__14(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___multiclk__TOP__mycpu_top__inst_cache__14\n"); );
    // Body
    vlSelf->__PVT__hit_word_L = ((IData)(vlSelf->__PVT__stage2_hit0_reg)
                                  ? vlSelf->__PVT___GEN_522
                                  : vlSelf->__PVT___GEN_530);
    vlSelf->__PVT___access_sram_rdata_L_T_2 = ((IData)(vlSelf->__PVT___access_work_state_T_23)
                                                ? vlSelf->__PVT__hit_word_L
                                                : 0ULL);
    vlSelf->__PVT__access_sram_rdata_L = ((IData)(vlSelf->__PVT___access_work_state_T_8)
                                           ? vlSelf->__PVT__wait_data_L
                                           : vlSelf->__PVT___access_sram_rdata_L_T_2);
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___combo__TOP__mycpu_top__inst_cache__5(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___combo__TOP__mycpu_top__inst_cache__5\n"); );
    // Body
    vlSelf->__PVT__io_sram_rdata_L = (((IData)(vlSelf->__PVT___stage2_stall_T_5) 
                                       & (IData)(vlSelf->__PVT__has_stage2_stall))
                                       ? vlSelf->__PVT__access_sram_rdata_L
                                       : vlSelf->__PVT__sram_rdata_L_Reg);
}
