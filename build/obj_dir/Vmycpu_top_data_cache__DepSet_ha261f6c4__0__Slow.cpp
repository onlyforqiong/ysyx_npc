// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_data_cache.h"

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__0(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__0\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_tag_1_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_1_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_2_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_3_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_4_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_5_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_6_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_7_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_8_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_9_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_10_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_11_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_12_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_13_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_14_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__dcache_data_15_reset = vlSelf->__PVT__reset;
    vlSelf->__PVT___read_counter_T_6 = (7U & ((IData)(1U) 
                                              + (IData)(vlSelf->__PVT__read_counter)));
    vlSelf->__PVT___write_counter_T_4 = (7U & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT__io_port_arburst = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__stage1_sram_cache_reg));
    vlSelf->__PVT__io_port_awburst = VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__stage1_sram_cache_reg));
    vlSelf->__PVT___T_29 = (3U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_araddr_T = (1U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_araddr_T_1 = (0xcU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_araddr_T_2 = (8U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_arlen_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                          ? 7U : 0U);
    vlSelf->__PVT___io_port_arsize_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
                                           ? 2U : (IData)(vlSelf->__PVT__stage1_sram_size_reg));
    vlSelf->__PVT___io_port_araddr_T_5 = VL_CONCAT_QQI(64,59,5, 
                                                       (0x7ffffffffffffffULL 
                                                        & VL_SEL_QQII(64, vlSelf->__PVT__stage1_sram_phy_addr_reg, 5U, 0x3bU)), 0U);
    vlSelf->__PVT___access_work_state_T_19 = (7U == (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__PVT___io_port_wdata_T = (4U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___io_port_awaddr_T_2 = ((3U == (IData)(vlSelf->__PVT__work_state))
                                           ? VL_SEL_IQII(64, vlSelf->__PVT__stage1_sram_phy_addr_reg, 0U, 0x20U)
                                           : 0U);
    vlSelf->__PVT___write_counter_T = (0xaU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___write_counter_T_7 = (6U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___way0_wen_0_T = (0U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_1_T = (1U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_2_T = (2U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_3_T = (3U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_4_T = (4U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_5_T = (5U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_6_T = (6U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_wen_7_T = (7U == (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___wait_data_T_3 = (0xdU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___read_counter_T_9 = (0U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_3 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? 0x19U : 3U);
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_5 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? 0x19U : 1U);
    vlSelf->__PVT___io_sram_data_ok_T_1 = (0x18U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___state_ready_lookup_should_be_T_5 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? 0U : 0x19U);
    vlSelf->__PVT___cache_wdata_T_3 = (0x19U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___state_ready_lookup_should_be_T_2 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? 0x19U : 0U);
    vlSelf->__PVT___way0_dirty_T_5 = (0xeU == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___way0_dirty_T_9 = (0x10U == (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___hit_T = ((IData)(vlSelf->__PVT__stage1_sram_hit0_reg) 
                             & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg));
    vlSelf->__PVT__stage2_write_stage1_read = ((IData)(vlSelf->__PVT__stage2_sram_write_reg) 
                                               & (~ (IData)(vlSelf->__PVT__stage1_sram_wr_reg)));
    vlSelf->__PVT___access_work_state_T_14 = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
                                               ? 0x10U
                                               : 0xeU);
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_12 
        = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
            ? 3U : 1U);
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_15 
        = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
            ? 8U : 0xcU);
    vlSelf->__PVT___hit_T_1 = ((IData)(vlSelf->__PVT__stage1_sram_hit1_reg) 
                               & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg));
    vlSelf->__PVT___io_tlb_req_T_4 = (1U & ((~ VL_BITSEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0x1fU)) 
                                            | (3U == 
                                               (3U 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0x1eU, 2U)))));
    vlSelf->__PVT___T_21 = VL_CONCAT_III(21,1,20, 1U, 
                                         (0xfffffU 
                                          & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0xcU, 0x14U)));
    vlSelf->__PVT__io_v_addr_for_tlb = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__stage2_addr_same_as_stage1 = (vlSelf->__PVT__stage2_sram_addr_reg 
                                                 == vlSelf->__PVT__stage1_addr_line_mapping);
    vlSelf->__PVT___wen_way0_wire_0_T_1 = (0U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U)));
    vlSelf->__PVT___wen_way0_wire_1_T_1 = (1U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U)));
    vlSelf->__PVT___wen_way0_wire_2_T_1 = (2U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U)));
    vlSelf->__PVT___wen_way0_wire_3_T_1 = (3U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U)));
    vlSelf->__PVT___wen_way0_wire_4_T_1 = (4U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U)));
    vlSelf->__PVT___wen_way0_wire_5_T_1 = (5U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U)));
    vlSelf->__PVT___wen_way0_wire_6_T_1 = (6U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U)));
    vlSelf->__PVT___wen_way0_wire_7_T_1 = (7U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U)));
    vlSelf->__PVT__dcache_tag_io_waddr = VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0U, 0x20U);
    vlSelf->__PVT__dcache_tag_1_io_waddr = VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 0U, 0x20U);
    vlSelf->__PVT___GEN_258 = ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_1)
                                : (IData)(vlSelf->__PVT__way0_dirty_0));
    vlSelf->__PVT___GEN_770 = ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_1)
                                : (IData)(vlSelf->__PVT__way1_dirty_0));
    vlSelf->__PVT___GEN_2 = ((1U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_1)
                              : (IData)(vlSelf->__PVT__lru_0));
    vlSelf->__PVT__dcache_data_7_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_15_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_6_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_14_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_5_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_13_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_4_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_12_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_3_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_11_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_2_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_10_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_1_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_8_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSelf->__PVT__dcache_data_9_io_addr = vlSelf->__PVT__stage1_addr_line_mapping;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__reset 
        = vlSelf->__PVT__dcache_tag_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__reset 
        = vlSelf->__PVT__dcache_tag_1_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__reset 
        = vlSelf->__PVT__dcache_data_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__reset 
        = vlSelf->__PVT__dcache_data_1_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__reset 
        = vlSelf->__PVT__dcache_data_2_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__reset 
        = vlSelf->__PVT__dcache_data_3_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__reset 
        = vlSelf->__PVT__dcache_data_4_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__reset 
        = vlSelf->__PVT__dcache_data_5_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__reset 
        = vlSelf->__PVT__dcache_data_6_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__reset 
        = vlSelf->__PVT__dcache_data_7_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__reset 
        = vlSelf->__PVT__dcache_data_8_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__reset 
        = vlSelf->__PVT__dcache_data_9_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__reset 
        = vlSelf->__PVT__dcache_data_10_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__reset 
        = vlSelf->__PVT__dcache_data_11_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__reset 
        = vlSelf->__PVT__dcache_data_12_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__reset 
        = vlSelf->__PVT__dcache_data_13_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__reset 
        = vlSelf->__PVT__dcache_data_14_reset;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__reset 
        = vlSelf->__PVT__dcache_data_15_reset;
    vlSelf->__PVT__io_port_awvalid = (((IData)(vlSelf->__PVT___T_29) 
                                       | (0xfU == (IData)(vlSelf->__PVT__work_state))) 
                                      | (9U == (IData)(vlSelf->__PVT__work_state)));
    vlSelf->__PVT__io_port_arlen = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_port_arlen_T_1));
    vlSelf->__PVT__io_port_awlen = VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___io_port_arlen_T_1));
    vlSelf->__PVT__io_port_arsize = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___io_port_arsize_T_1));
    vlSelf->__PVT__io_port_awsize = VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___io_port_arsize_T_1));
    vlSelf->__PVT___io_port_araddr_T_6 = (((0xcU == (IData)(vlSelf->__PVT__work_state)) 
                                           | (8U == (IData)(vlSelf->__PVT__work_state)))
                                           ? vlSelf->__PVT___io_port_araddr_T_5
                                           : 0ULL);
    vlSelf->__PVT___write_counter_T_5 = ((IData)(vlSelf->__PVT___access_work_state_T_19)
                                          ? 0U : (IData)(vlSelf->__PVT___write_counter_T_4));
    vlSelf->__PVT__io_port_wvalid = (((IData)(vlSelf->__PVT___io_port_wdata_T) 
                                      | (IData)(vlSelf->__PVT___write_counter_T)) 
                                     | (IData)(vlSelf->__PVT___write_counter_T_7));
    vlSelf->__PVT___io_port_wdata_T_3 = ((IData)(vlSelf->__PVT___write_counter_T) 
                                         | (IData)(vlSelf->__PVT___write_counter_T_7));
    vlSelf->__PVT___way0_burst_read_wen_T_2 = ((IData)(vlSelf->__PVT___wait_data_T_3) 
                                               | (IData)(vlSelf->__PVT___read_counter_T_9));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_6 
        = ((IData)(vlSelf->__PVT__stage1_sram_wr_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_3)
            : (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_5));
    vlSelf->__PVT___state_ready_lookup_should_be_T_3 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_should_be_T_2)
            : 0x19U);
    vlSelf->__PVT__hit = (((IData)(vlSelf->__PVT__stage1_sram_hit0_reg) 
                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                          | (IData)(vlSelf->__PVT___hit_T_1));
    vlSelf->__PVT__io_tlb_req = ((IData)(vlSelf->__PVT___io_tlb_req_T_4) 
                                 & (IData)(vlSelf->__PVT__stage1_sram_req_reg));
    vlSelf->__PVT___io_port_arvalid_T_7 = (1U & (~ 
                                                 (((IData)(vlSelf->__PVT__stage2_addr_same_as_stage1) 
                                                   & (IData)(vlSelf->__PVT__stage2_write_stage1_read)) 
                                                  & (IData)(vlSelf->__PVT__write_access_complete_reg))));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_waddr 
        = vlSelf->__PVT__dcache_tag_io_waddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_waddr 
        = vlSelf->__PVT__dcache_tag_1_io_waddr;
    vlSelf->__PVT___GEN_259 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_2)
                                : (IData)(vlSelf->__PVT___GEN_258));
    vlSelf->__PVT___GEN_771 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_2)
                                : (IData)(vlSelf->__PVT___GEN_770));
    vlSelf->__PVT___GEN_3 = ((2U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_2)
                              : (IData)(vlSelf->__PVT___GEN_2));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_7_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_15_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_6_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_14_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_5_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_13_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_4_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_12_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_3_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_11_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_2_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_10_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_1_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_8_io_addr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_addr 
        = vlSelf->__PVT__dcache_data_9_io_addr;
    vlSelf->__PVT__io_port_araddr = ((1U == (IData)(vlSelf->__PVT__work_state))
                                      ? vlSelf->__PVT__stage1_sram_phy_addr_reg
                                      : vlSelf->__PVT___io_port_araddr_T_6);
    vlSelf->__PVT___io_port_wlast_T_5 = ((IData)(vlSelf->__PVT___io_port_wdata_T_3) 
                                         & (IData)(vlSelf->__PVT___access_work_state_T_19));
    vlSelf->__PVT___io_port_wstrb_T_4 = ((IData)(vlSelf->__PVT___io_port_wdata_T_3)
                                          ? 0xfU : 0U);
    vlSelf->__PVT__dcache_tag_io_wdata = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
                                           ? vlSelf->__PVT___T_21
                                           : 0U);
    vlSelf->__PVT__dcache_tag_1_io_wdata = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
                                             ? vlSelf->__PVT___T_21
                                             : 0U);
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_7 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_6)
            : 0x19U);
    vlSelf->__PVT__state_ready_lookup_should_be = ((IData)(vlSelf->__PVT__hit)
                                                    ? (IData)(vlSelf->__PVT___state_ready_lookup_should_be_T_3)
                                                    : (IData)(vlSelf->__PVT___state_ready_lookup_should_be_T_5));
    vlSelf->__PVT__io_port_arvalid = ((((IData)(vlSelf->__PVT___io_port_araddr_T) 
                                        | (IData)(vlSelf->__PVT___io_port_araddr_T_1)) 
                                       | (IData)(vlSelf->__PVT___io_port_araddr_T_2)) 
                                      & (IData)(vlSelf->__PVT___io_port_arvalid_T_7));
    vlSelf->__PVT___GEN_260 = ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_3)
                                : (IData)(vlSelf->__PVT___GEN_259));
    vlSelf->__PVT___GEN_772 = ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_3)
                                : (IData)(vlSelf->__PVT___GEN_771));
    vlSelf->__PVT___GEN_4 = ((3U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_3)
                              : (IData)(vlSelf->__PVT___GEN_3));
    vlSelf->__PVT__io_port_wlast = ((IData)(vlSelf->__PVT___io_port_wdata_T) 
                                    | (IData)(vlSelf->__PVT___io_port_wlast_T_5));
    vlSelf->__PVT__io_port_wstrb = ((IData)(vlSelf->__PVT___io_port_wdata_T)
                                     ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                     : (IData)(vlSelf->__PVT___io_port_wstrb_T_4));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_tag_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_tag_1_io_wdata;
    vlSelf->__PVT___state_lookup_for_less_delay_T_1 
        = ((0x18U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___GEN_261 = ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_4)
                                : (IData)(vlSelf->__PVT___GEN_260));
    vlSelf->__PVT___GEN_773 = ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_4)
                                : (IData)(vlSelf->__PVT___GEN_772));
    vlSelf->__PVT___GEN_5 = ((4U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_4)
                              : (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT__state_lookup_for_less_delay = ((0x19U 
                                                   == (IData)(vlSelf->__PVT__work_state))
                                                   ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
                                                   : (IData)(vlSelf->__PVT___state_lookup_for_less_delay_T_1));
    vlSelf->__PVT___GEN_262 = ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_5)
                                : (IData)(vlSelf->__PVT___GEN_261));
    vlSelf->__PVT___GEN_774 = ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_5)
                                : (IData)(vlSelf->__PVT___GEN_773));
    vlSelf->__PVT___GEN_6 = ((5U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_5)
                              : (IData)(vlSelf->__PVT___GEN_5));
    vlSelf->__PVT___way0_dirty_T_4 = ((((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                        & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                       & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg));
    vlSelf->__PVT___way0_dirty_T_2 = ((0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_wr_reg));
    vlSelf->__PVT___way0_dirty_T = (0x19U == (IData)(vlSelf->__PVT__state_lookup_for_less_delay));
    vlSelf->__PVT___GEN_263 = ((6U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_6)
                                : (IData)(vlSelf->__PVT___GEN_262));
    vlSelf->__PVT___GEN_775 = ((6U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_6)
                                : (IData)(vlSelf->__PVT___GEN_774));
    vlSelf->__PVT___GEN_7 = ((6U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_6)
                              : (IData)(vlSelf->__PVT___GEN_6));
    vlSelf->__PVT___way1_dirty_T_4 = (((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                       & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                      & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg));
    vlSelf->__PVT___dcache_data_way0_0_wdata_T_2 = 
        ((IData)(vlSelf->__PVT___way0_dirty_T_9) | (IData)(vlSelf->__PVT___way0_dirty_T));
    vlSelf->__PVT___GEN_264 = ((7U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_7)
                                : (IData)(vlSelf->__PVT___GEN_263));
    vlSelf->__PVT___GEN_776 = ((7U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_7)
                                : (IData)(vlSelf->__PVT___GEN_775));
    vlSelf->__PVT___GEN_8 = ((7U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_7)
                              : (IData)(vlSelf->__PVT___GEN_7));
    vlSelf->__PVT___GEN_265 = ((8U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_8)
                                : (IData)(vlSelf->__PVT___GEN_264));
    vlSelf->__PVT___GEN_777 = ((8U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_8)
                                : (IData)(vlSelf->__PVT___GEN_776));
    vlSelf->__PVT___GEN_9 = ((8U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                              ? (IData)(vlSelf->__PVT__lru_8)
                              : (IData)(vlSelf->__PVT___GEN_8));
    vlSelf->__PVT___GEN_266 = ((9U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_9)
                                : (IData)(vlSelf->__PVT___GEN_265));
    vlSelf->__PVT___GEN_778 = ((9U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_9)
                                : (IData)(vlSelf->__PVT___GEN_777));
    vlSelf->__PVT___GEN_10 = ((9U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_9)
                               : (IData)(vlSelf->__PVT___GEN_9));
    vlSelf->__PVT___GEN_267 = ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_10)
                                : (IData)(vlSelf->__PVT___GEN_266));
    vlSelf->__PVT___GEN_779 = ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_10)
                                : (IData)(vlSelf->__PVT___GEN_778));
    vlSelf->__PVT___GEN_11 = ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_10)
                               : (IData)(vlSelf->__PVT___GEN_10));
    vlSelf->__PVT___GEN_268 = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_11)
                                : (IData)(vlSelf->__PVT___GEN_267));
    vlSelf->__PVT___GEN_780 = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_11)
                                : (IData)(vlSelf->__PVT___GEN_779));
    vlSelf->__PVT___GEN_12 = ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_11)
                               : (IData)(vlSelf->__PVT___GEN_11));
    vlSelf->__PVT___GEN_269 = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_12)
                                : (IData)(vlSelf->__PVT___GEN_268));
    vlSelf->__PVT___GEN_781 = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_12)
                                : (IData)(vlSelf->__PVT___GEN_780));
    vlSelf->__PVT___GEN_13 = ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_12)
                               : (IData)(vlSelf->__PVT___GEN_12));
    vlSelf->__PVT___GEN_270 = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_13)
                                : (IData)(vlSelf->__PVT___GEN_269));
    vlSelf->__PVT___GEN_782 = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_13)
                                : (IData)(vlSelf->__PVT___GEN_781));
    vlSelf->__PVT___GEN_14 = ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_13)
                               : (IData)(vlSelf->__PVT___GEN_13));
    vlSelf->__PVT___GEN_271 = ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_14)
                                : (IData)(vlSelf->__PVT___GEN_270));
    vlSelf->__PVT___GEN_783 = ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_14)
                                : (IData)(vlSelf->__PVT___GEN_782));
    vlSelf->__PVT___GEN_15 = ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_14)
                               : (IData)(vlSelf->__PVT___GEN_14));
    vlSelf->__PVT___GEN_272 = ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_15)
                                : (IData)(vlSelf->__PVT___GEN_271));
    vlSelf->__PVT___GEN_784 = ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_15)
                                : (IData)(vlSelf->__PVT___GEN_783));
    vlSelf->__PVT___GEN_16 = ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_15)
                               : (IData)(vlSelf->__PVT___GEN_15));
    vlSelf->__PVT___GEN_273 = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_16)
                                : (IData)(vlSelf->__PVT___GEN_272));
    vlSelf->__PVT___GEN_785 = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_16)
                                : (IData)(vlSelf->__PVT___GEN_784));
    vlSelf->__PVT___GEN_17 = ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_16)
                               : (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT___GEN_274 = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_17)
                                : (IData)(vlSelf->__PVT___GEN_273));
    vlSelf->__PVT___GEN_786 = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_17)
                                : (IData)(vlSelf->__PVT___GEN_785));
    vlSelf->__PVT___GEN_18 = ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_17)
                               : (IData)(vlSelf->__PVT___GEN_17));
    vlSelf->__PVT___GEN_275 = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_18)
                                : (IData)(vlSelf->__PVT___GEN_274));
    vlSelf->__PVT___GEN_787 = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_18)
                                : (IData)(vlSelf->__PVT___GEN_786));
    vlSelf->__PVT___GEN_19 = ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_18)
                               : (IData)(vlSelf->__PVT___GEN_18));
    vlSelf->__PVT___GEN_276 = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_19)
                                : (IData)(vlSelf->__PVT___GEN_275));
    vlSelf->__PVT___GEN_788 = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_19)
                                : (IData)(vlSelf->__PVT___GEN_787));
    vlSelf->__PVT___GEN_20 = ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_19)
                               : (IData)(vlSelf->__PVT___GEN_19));
    vlSelf->__PVT___GEN_277 = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_20)
                                : (IData)(vlSelf->__PVT___GEN_276));
    vlSelf->__PVT___GEN_789 = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_20)
                                : (IData)(vlSelf->__PVT___GEN_788));
    vlSelf->__PVT___GEN_21 = ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_20)
                               : (IData)(vlSelf->__PVT___GEN_20));
    vlSelf->__PVT___GEN_278 = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_21)
                                : (IData)(vlSelf->__PVT___GEN_277));
    vlSelf->__PVT___GEN_790 = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_21)
                                : (IData)(vlSelf->__PVT___GEN_789));
    vlSelf->__PVT___GEN_22 = ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_21)
                               : (IData)(vlSelf->__PVT___GEN_21));
    vlSelf->__PVT___GEN_279 = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_22)
                                : (IData)(vlSelf->__PVT___GEN_278));
    vlSelf->__PVT___GEN_791 = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_22)
                                : (IData)(vlSelf->__PVT___GEN_790));
    vlSelf->__PVT___GEN_23 = ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_22)
                               : (IData)(vlSelf->__PVT___GEN_22));
    vlSelf->__PVT___GEN_280 = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_23)
                                : (IData)(vlSelf->__PVT___GEN_279));
    vlSelf->__PVT___GEN_792 = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_23)
                                : (IData)(vlSelf->__PVT___GEN_791));
    vlSelf->__PVT___GEN_24 = ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_23)
                               : (IData)(vlSelf->__PVT___GEN_23));
    vlSelf->__PVT___GEN_281 = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_24)
                                : (IData)(vlSelf->__PVT___GEN_280));
    vlSelf->__PVT___GEN_793 = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_24)
                                : (IData)(vlSelf->__PVT___GEN_792));
    vlSelf->__PVT___GEN_25 = ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_24)
                               : (IData)(vlSelf->__PVT___GEN_24));
    vlSelf->__PVT___GEN_282 = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_25)
                                : (IData)(vlSelf->__PVT___GEN_281));
    vlSelf->__PVT___GEN_794 = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_25)
                                : (IData)(vlSelf->__PVT___GEN_793));
    vlSelf->__PVT___GEN_26 = ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_25)
                               : (IData)(vlSelf->__PVT___GEN_25));
    vlSelf->__PVT___GEN_283 = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_26)
                                : (IData)(vlSelf->__PVT___GEN_282));
    vlSelf->__PVT___GEN_795 = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_26)
                                : (IData)(vlSelf->__PVT___GEN_794));
    vlSelf->__PVT___GEN_27 = ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_26)
                               : (IData)(vlSelf->__PVT___GEN_26));
    vlSelf->__PVT___GEN_284 = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_27)
                                : (IData)(vlSelf->__PVT___GEN_283));
    vlSelf->__PVT___GEN_796 = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_27)
                                : (IData)(vlSelf->__PVT___GEN_795));
    vlSelf->__PVT___GEN_28 = ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_27)
                               : (IData)(vlSelf->__PVT___GEN_27));
    vlSelf->__PVT___GEN_285 = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_28)
                                : (IData)(vlSelf->__PVT___GEN_284));
    vlSelf->__PVT___GEN_797 = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_28)
                                : (IData)(vlSelf->__PVT___GEN_796));
    vlSelf->__PVT___GEN_29 = ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_28)
                               : (IData)(vlSelf->__PVT___GEN_28));
    vlSelf->__PVT___GEN_286 = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_29)
                                : (IData)(vlSelf->__PVT___GEN_285));
    vlSelf->__PVT___GEN_798 = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_29)
                                : (IData)(vlSelf->__PVT___GEN_797));
    vlSelf->__PVT___GEN_30 = ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_29)
                               : (IData)(vlSelf->__PVT___GEN_29));
    vlSelf->__PVT___GEN_287 = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_30)
                                : (IData)(vlSelf->__PVT___GEN_286));
    vlSelf->__PVT___GEN_799 = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_30)
                                : (IData)(vlSelf->__PVT___GEN_798));
    vlSelf->__PVT___GEN_31 = ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_30)
                               : (IData)(vlSelf->__PVT___GEN_30));
    vlSelf->__PVT___GEN_288 = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_31)
                                : (IData)(vlSelf->__PVT___GEN_287));
    vlSelf->__PVT___GEN_800 = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_31)
                                : (IData)(vlSelf->__PVT___GEN_799));
    vlSelf->__PVT___GEN_32 = ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_31)
                               : (IData)(vlSelf->__PVT___GEN_31));
    vlSelf->__PVT___GEN_289 = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_32)
                                : (IData)(vlSelf->__PVT___GEN_288));
    vlSelf->__PVT___GEN_801 = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_32)
                                : (IData)(vlSelf->__PVT___GEN_800));
    vlSelf->__PVT___GEN_33 = ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_32)
                               : (IData)(vlSelf->__PVT___GEN_32));
    vlSelf->__PVT___GEN_290 = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_33)
                                : (IData)(vlSelf->__PVT___GEN_289));
    vlSelf->__PVT___GEN_802 = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_33)
                                : (IData)(vlSelf->__PVT___GEN_801));
    vlSelf->__PVT___GEN_34 = ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_33)
                               : (IData)(vlSelf->__PVT___GEN_33));
    vlSelf->__PVT___GEN_291 = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_34)
                                : (IData)(vlSelf->__PVT___GEN_290));
    vlSelf->__PVT___GEN_803 = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_34)
                                : (IData)(vlSelf->__PVT___GEN_802));
    vlSelf->__PVT___GEN_35 = ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_34)
                               : (IData)(vlSelf->__PVT___GEN_34));
    vlSelf->__PVT___GEN_292 = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_35)
                                : (IData)(vlSelf->__PVT___GEN_291));
    vlSelf->__PVT___GEN_804 = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_35)
                                : (IData)(vlSelf->__PVT___GEN_803));
    vlSelf->__PVT___GEN_36 = ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_35)
                               : (IData)(vlSelf->__PVT___GEN_35));
    vlSelf->__PVT___GEN_293 = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_36)
                                : (IData)(vlSelf->__PVT___GEN_292));
    vlSelf->__PVT___GEN_805 = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_36)
                                : (IData)(vlSelf->__PVT___GEN_804));
    vlSelf->__PVT___GEN_37 = ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_36)
                               : (IData)(vlSelf->__PVT___GEN_36));
    vlSelf->__PVT___GEN_294 = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_37)
                                : (IData)(vlSelf->__PVT___GEN_293));
    vlSelf->__PVT___GEN_806 = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_37)
                                : (IData)(vlSelf->__PVT___GEN_805));
    vlSelf->__PVT___GEN_38 = ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_37)
                               : (IData)(vlSelf->__PVT___GEN_37));
    vlSelf->__PVT___GEN_295 = ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_38)
                                : (IData)(vlSelf->__PVT___GEN_294));
    vlSelf->__PVT___GEN_807 = ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_38)
                                : (IData)(vlSelf->__PVT___GEN_806));
    vlSelf->__PVT___GEN_39 = ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_38)
                               : (IData)(vlSelf->__PVT___GEN_38));
    vlSelf->__PVT___GEN_296 = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_39)
                                : (IData)(vlSelf->__PVT___GEN_295));
    vlSelf->__PVT___GEN_808 = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_39)
                                : (IData)(vlSelf->__PVT___GEN_807));
    vlSelf->__PVT___GEN_40 = ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_39)
                               : (IData)(vlSelf->__PVT___GEN_39));
    vlSelf->__PVT___GEN_297 = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_40)
                                : (IData)(vlSelf->__PVT___GEN_296));
    vlSelf->__PVT___GEN_809 = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_40)
                                : (IData)(vlSelf->__PVT___GEN_808));
    vlSelf->__PVT___GEN_41 = ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_40)
                               : (IData)(vlSelf->__PVT___GEN_40));
    vlSelf->__PVT___GEN_298 = ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_41)
                                : (IData)(vlSelf->__PVT___GEN_297));
    vlSelf->__PVT___GEN_810 = ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_41)
                                : (IData)(vlSelf->__PVT___GEN_809));
    vlSelf->__PVT___GEN_42 = ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_41)
                               : (IData)(vlSelf->__PVT___GEN_41));
    vlSelf->__PVT___GEN_299 = ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_42)
                                : (IData)(vlSelf->__PVT___GEN_298));
    vlSelf->__PVT___GEN_811 = ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_42)
                                : (IData)(vlSelf->__PVT___GEN_810));
    vlSelf->__PVT___GEN_43 = ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_42)
                               : (IData)(vlSelf->__PVT___GEN_42));
    vlSelf->__PVT___GEN_300 = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_43)
                                : (IData)(vlSelf->__PVT___GEN_299));
    vlSelf->__PVT___GEN_812 = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_43)
                                : (IData)(vlSelf->__PVT___GEN_811));
    vlSelf->__PVT___GEN_44 = ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_43)
                               : (IData)(vlSelf->__PVT___GEN_43));
    vlSelf->__PVT___GEN_301 = ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_44)
                                : (IData)(vlSelf->__PVT___GEN_300));
    vlSelf->__PVT___GEN_813 = ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_44)
                                : (IData)(vlSelf->__PVT___GEN_812));
    vlSelf->__PVT___GEN_45 = ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_44)
                               : (IData)(vlSelf->__PVT___GEN_44));
    vlSelf->__PVT___GEN_302 = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_45)
                                : (IData)(vlSelf->__PVT___GEN_301));
    vlSelf->__PVT___GEN_814 = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_45)
                                : (IData)(vlSelf->__PVT___GEN_813));
    vlSelf->__PVT___GEN_46 = ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_45)
                               : (IData)(vlSelf->__PVT___GEN_45));
    vlSelf->__PVT___GEN_303 = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_46)
                                : (IData)(vlSelf->__PVT___GEN_302));
    vlSelf->__PVT___GEN_815 = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_46)
                                : (IData)(vlSelf->__PVT___GEN_814));
    vlSelf->__PVT___GEN_47 = ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_46)
                               : (IData)(vlSelf->__PVT___GEN_46));
    vlSelf->__PVT___GEN_304 = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_47)
                                : (IData)(vlSelf->__PVT___GEN_303));
    vlSelf->__PVT___GEN_816 = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_47)
                                : (IData)(vlSelf->__PVT___GEN_815));
    vlSelf->__PVT___GEN_48 = ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_47)
                               : (IData)(vlSelf->__PVT___GEN_47));
    vlSelf->__PVT___GEN_305 = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_48)
                                : (IData)(vlSelf->__PVT___GEN_304));
    vlSelf->__PVT___GEN_817 = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_48)
                                : (IData)(vlSelf->__PVT___GEN_816));
    vlSelf->__PVT___GEN_49 = ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_48)
                               : (IData)(vlSelf->__PVT___GEN_48));
    vlSelf->__PVT___GEN_306 = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_49)
                                : (IData)(vlSelf->__PVT___GEN_305));
    vlSelf->__PVT___GEN_818 = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_49)
                                : (IData)(vlSelf->__PVT___GEN_817));
    vlSelf->__PVT___GEN_50 = ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_49)
                               : (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT___GEN_307 = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_50)
                                : (IData)(vlSelf->__PVT___GEN_306));
    vlSelf->__PVT___GEN_819 = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_50)
                                : (IData)(vlSelf->__PVT___GEN_818));
    vlSelf->__PVT___GEN_51 = ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_50)
                               : (IData)(vlSelf->__PVT___GEN_50));
    vlSelf->__PVT___GEN_308 = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_51)
                                : (IData)(vlSelf->__PVT___GEN_307));
    vlSelf->__PVT___GEN_820 = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_51)
                                : (IData)(vlSelf->__PVT___GEN_819));
    vlSelf->__PVT___GEN_52 = ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_51)
                               : (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT___GEN_309 = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_52)
                                : (IData)(vlSelf->__PVT___GEN_308));
    vlSelf->__PVT___GEN_821 = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_52)
                                : (IData)(vlSelf->__PVT___GEN_820));
    vlSelf->__PVT___GEN_53 = ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_52)
                               : (IData)(vlSelf->__PVT___GEN_52));
    vlSelf->__PVT___GEN_310 = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_53)
                                : (IData)(vlSelf->__PVT___GEN_309));
    vlSelf->__PVT___GEN_822 = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_53)
                                : (IData)(vlSelf->__PVT___GEN_821));
    vlSelf->__PVT___GEN_54 = ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_53)
                               : (IData)(vlSelf->__PVT___GEN_53));
    vlSelf->__PVT___GEN_311 = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_54)
                                : (IData)(vlSelf->__PVT___GEN_310));
    vlSelf->__PVT___GEN_823 = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_54)
                                : (IData)(vlSelf->__PVT___GEN_822));
    vlSelf->__PVT___GEN_55 = ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_54)
                               : (IData)(vlSelf->__PVT___GEN_54));
    vlSelf->__PVT___GEN_312 = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_55)
                                : (IData)(vlSelf->__PVT___GEN_311));
    vlSelf->__PVT___GEN_824 = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_55)
                                : (IData)(vlSelf->__PVT___GEN_823));
    vlSelf->__PVT___GEN_56 = ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_55)
                               : (IData)(vlSelf->__PVT___GEN_55));
    vlSelf->__PVT___GEN_313 = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_56)
                                : (IData)(vlSelf->__PVT___GEN_312));
    vlSelf->__PVT___GEN_825 = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_56)
                                : (IData)(vlSelf->__PVT___GEN_824));
    vlSelf->__PVT___GEN_57 = ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_56)
                               : (IData)(vlSelf->__PVT___GEN_56));
    vlSelf->__PVT___GEN_314 = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_57)
                                : (IData)(vlSelf->__PVT___GEN_313));
    vlSelf->__PVT___GEN_826 = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_57)
                                : (IData)(vlSelf->__PVT___GEN_825));
    vlSelf->__PVT___GEN_58 = ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_57)
                               : (IData)(vlSelf->__PVT___GEN_57));
    vlSelf->__PVT___GEN_315 = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_58)
                                : (IData)(vlSelf->__PVT___GEN_314));
    vlSelf->__PVT___GEN_827 = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_58)
                                : (IData)(vlSelf->__PVT___GEN_826));
    vlSelf->__PVT___GEN_59 = ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_58)
                               : (IData)(vlSelf->__PVT___GEN_58));
    vlSelf->__PVT___GEN_316 = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_59)
                                : (IData)(vlSelf->__PVT___GEN_315));
    vlSelf->__PVT___GEN_828 = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_59)
                                : (IData)(vlSelf->__PVT___GEN_827));
    vlSelf->__PVT___GEN_60 = ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_59)
                               : (IData)(vlSelf->__PVT___GEN_59));
    vlSelf->__PVT___GEN_317 = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_60)
                                : (IData)(vlSelf->__PVT___GEN_316));
    vlSelf->__PVT___GEN_829 = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_60)
                                : (IData)(vlSelf->__PVT___GEN_828));
    vlSelf->__PVT___GEN_61 = ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_60)
                               : (IData)(vlSelf->__PVT___GEN_60));
    vlSelf->__PVT___GEN_318 = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_61)
                                : (IData)(vlSelf->__PVT___GEN_317));
    vlSelf->__PVT___GEN_830 = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_61)
                                : (IData)(vlSelf->__PVT___GEN_829));
    vlSelf->__PVT___GEN_62 = ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_61)
                               : (IData)(vlSelf->__PVT___GEN_61));
    vlSelf->__PVT___GEN_319 = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_62)
                                : (IData)(vlSelf->__PVT___GEN_318));
    vlSelf->__PVT___GEN_831 = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_62)
                                : (IData)(vlSelf->__PVT___GEN_830));
    vlSelf->__PVT___GEN_63 = ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_62)
                               : (IData)(vlSelf->__PVT___GEN_62));
    vlSelf->__PVT___GEN_320 = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_63)
                                : (IData)(vlSelf->__PVT___GEN_319));
    vlSelf->__PVT___GEN_832 = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_63)
                                : (IData)(vlSelf->__PVT___GEN_831));
    vlSelf->__PVT___GEN_64 = ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_63)
                               : (IData)(vlSelf->__PVT___GEN_63));
    vlSelf->__PVT___GEN_321 = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_64)
                                : (IData)(vlSelf->__PVT___GEN_320));
    vlSelf->__PVT___GEN_833 = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_64)
                                : (IData)(vlSelf->__PVT___GEN_832));
    vlSelf->__PVT___GEN_65 = ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_64)
                               : (IData)(vlSelf->__PVT___GEN_64));
    vlSelf->__PVT___GEN_322 = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_65)
                                : (IData)(vlSelf->__PVT___GEN_321));
    vlSelf->__PVT___GEN_834 = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_65)
                                : (IData)(vlSelf->__PVT___GEN_833));
    vlSelf->__PVT___GEN_66 = ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_65)
                               : (IData)(vlSelf->__PVT___GEN_65));
    vlSelf->__PVT___GEN_323 = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_66)
                                : (IData)(vlSelf->__PVT___GEN_322));
    vlSelf->__PVT___GEN_835 = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_66)
                                : (IData)(vlSelf->__PVT___GEN_834));
    vlSelf->__PVT___GEN_67 = ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_66)
                               : (IData)(vlSelf->__PVT___GEN_66));
    vlSelf->__PVT___GEN_324 = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_67)
                                : (IData)(vlSelf->__PVT___GEN_323));
    vlSelf->__PVT___GEN_836 = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_67)
                                : (IData)(vlSelf->__PVT___GEN_835));
    vlSelf->__PVT___GEN_68 = ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_67)
                               : (IData)(vlSelf->__PVT___GEN_67));
    vlSelf->__PVT___GEN_325 = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_68)
                                : (IData)(vlSelf->__PVT___GEN_324));
    vlSelf->__PVT___GEN_837 = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_68)
                                : (IData)(vlSelf->__PVT___GEN_836));
    vlSelf->__PVT___GEN_69 = ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_68)
                               : (IData)(vlSelf->__PVT___GEN_68));
    vlSelf->__PVT___GEN_326 = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_69)
                                : (IData)(vlSelf->__PVT___GEN_325));
    vlSelf->__PVT___GEN_838 = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_69)
                                : (IData)(vlSelf->__PVT___GEN_837));
    vlSelf->__PVT___GEN_70 = ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_69)
                               : (IData)(vlSelf->__PVT___GEN_69));
    vlSelf->__PVT___GEN_327 = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_70)
                                : (IData)(vlSelf->__PVT___GEN_326));
    vlSelf->__PVT___GEN_839 = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_70)
                                : (IData)(vlSelf->__PVT___GEN_838));
    vlSelf->__PVT___GEN_71 = ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_70)
                               : (IData)(vlSelf->__PVT___GEN_70));
    vlSelf->__PVT___GEN_328 = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_71)
                                : (IData)(vlSelf->__PVT___GEN_327));
    vlSelf->__PVT___GEN_840 = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_71)
                                : (IData)(vlSelf->__PVT___GEN_839));
    vlSelf->__PVT___GEN_72 = ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_71)
                               : (IData)(vlSelf->__PVT___GEN_71));
    vlSelf->__PVT___GEN_329 = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_72)
                                : (IData)(vlSelf->__PVT___GEN_328));
    vlSelf->__PVT___GEN_841 = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_72)
                                : (IData)(vlSelf->__PVT___GEN_840));
    vlSelf->__PVT___GEN_73 = ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_72)
                               : (IData)(vlSelf->__PVT___GEN_72));
    vlSelf->__PVT___GEN_330 = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_73)
                                : (IData)(vlSelf->__PVT___GEN_329));
    vlSelf->__PVT___GEN_842 = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_73)
                                : (IData)(vlSelf->__PVT___GEN_841));
    vlSelf->__PVT___GEN_74 = ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_73)
                               : (IData)(vlSelf->__PVT___GEN_73));
    vlSelf->__PVT___GEN_331 = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_74)
                                : (IData)(vlSelf->__PVT___GEN_330));
    vlSelf->__PVT___GEN_843 = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_74)
                                : (IData)(vlSelf->__PVT___GEN_842));
    vlSelf->__PVT___GEN_75 = ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_74)
                               : (IData)(vlSelf->__PVT___GEN_74));
    vlSelf->__PVT___GEN_332 = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_75)
                                : (IData)(vlSelf->__PVT___GEN_331));
    vlSelf->__PVT___GEN_844 = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_75)
                                : (IData)(vlSelf->__PVT___GEN_843));
    vlSelf->__PVT___GEN_76 = ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_75)
                               : (IData)(vlSelf->__PVT___GEN_75));
    vlSelf->__PVT___GEN_333 = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_76)
                                : (IData)(vlSelf->__PVT___GEN_332));
    vlSelf->__PVT___GEN_845 = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_76)
                                : (IData)(vlSelf->__PVT___GEN_844));
    vlSelf->__PVT___GEN_77 = ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_76)
                               : (IData)(vlSelf->__PVT___GEN_76));
    vlSelf->__PVT___GEN_334 = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_77)
                                : (IData)(vlSelf->__PVT___GEN_333));
    vlSelf->__PVT___GEN_846 = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_77)
                                : (IData)(vlSelf->__PVT___GEN_845));
    vlSelf->__PVT___GEN_78 = ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_77)
                               : (IData)(vlSelf->__PVT___GEN_77));
    vlSelf->__PVT___GEN_335 = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_78)
                                : (IData)(vlSelf->__PVT___GEN_334));
    vlSelf->__PVT___GEN_847 = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_78)
                                : (IData)(vlSelf->__PVT___GEN_846));
    vlSelf->__PVT___GEN_79 = ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_78)
                               : (IData)(vlSelf->__PVT___GEN_78));
    vlSelf->__PVT___GEN_336 = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_79)
                                : (IData)(vlSelf->__PVT___GEN_335));
    vlSelf->__PVT___GEN_848 = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_79)
                                : (IData)(vlSelf->__PVT___GEN_847));
    vlSelf->__PVT___GEN_80 = ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_79)
                               : (IData)(vlSelf->__PVT___GEN_79));
    vlSelf->__PVT___GEN_337 = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_80)
                                : (IData)(vlSelf->__PVT___GEN_336));
    vlSelf->__PVT___GEN_849 = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_80)
                                : (IData)(vlSelf->__PVT___GEN_848));
    vlSelf->__PVT___GEN_81 = ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_80)
                               : (IData)(vlSelf->__PVT___GEN_80));
    vlSelf->__PVT___GEN_338 = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_81)
                                : (IData)(vlSelf->__PVT___GEN_337));
    vlSelf->__PVT___GEN_850 = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_81)
                                : (IData)(vlSelf->__PVT___GEN_849));
    vlSelf->__PVT___GEN_82 = ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_81)
                               : (IData)(vlSelf->__PVT___GEN_81));
    vlSelf->__PVT___GEN_339 = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_82)
                                : (IData)(vlSelf->__PVT___GEN_338));
    vlSelf->__PVT___GEN_851 = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_82)
                                : (IData)(vlSelf->__PVT___GEN_850));
    vlSelf->__PVT___GEN_83 = ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_82)
                               : (IData)(vlSelf->__PVT___GEN_82));
    vlSelf->__PVT___GEN_340 = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_83)
                                : (IData)(vlSelf->__PVT___GEN_339));
    vlSelf->__PVT___GEN_852 = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_83)
                                : (IData)(vlSelf->__PVT___GEN_851));
    vlSelf->__PVT___GEN_84 = ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_83)
                               : (IData)(vlSelf->__PVT___GEN_83));
    vlSelf->__PVT___GEN_341 = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_84)
                                : (IData)(vlSelf->__PVT___GEN_340));
    vlSelf->__PVT___GEN_853 = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_84)
                                : (IData)(vlSelf->__PVT___GEN_852));
    vlSelf->__PVT___GEN_85 = ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_84)
                               : (IData)(vlSelf->__PVT___GEN_84));
    vlSelf->__PVT___GEN_342 = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_85)
                                : (IData)(vlSelf->__PVT___GEN_341));
    vlSelf->__PVT___GEN_854 = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_85)
                                : (IData)(vlSelf->__PVT___GEN_853));
    vlSelf->__PVT___GEN_86 = ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_85)
                               : (IData)(vlSelf->__PVT___GEN_85));
    vlSelf->__PVT___GEN_343 = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_86)
                                : (IData)(vlSelf->__PVT___GEN_342));
    vlSelf->__PVT___GEN_855 = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_86)
                                : (IData)(vlSelf->__PVT___GEN_854));
    vlSelf->__PVT___GEN_87 = ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_86)
                               : (IData)(vlSelf->__PVT___GEN_86));
    vlSelf->__PVT___GEN_344 = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_87)
                                : (IData)(vlSelf->__PVT___GEN_343));
    vlSelf->__PVT___GEN_856 = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_87)
                                : (IData)(vlSelf->__PVT___GEN_855));
    vlSelf->__PVT___GEN_88 = ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_87)
                               : (IData)(vlSelf->__PVT___GEN_87));
    vlSelf->__PVT___GEN_345 = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_88)
                                : (IData)(vlSelf->__PVT___GEN_344));
    vlSelf->__PVT___GEN_857 = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_88)
                                : (IData)(vlSelf->__PVT___GEN_856));
    vlSelf->__PVT___GEN_89 = ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_88)
                               : (IData)(vlSelf->__PVT___GEN_88));
    vlSelf->__PVT___GEN_346 = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_89)
                                : (IData)(vlSelf->__PVT___GEN_345));
    vlSelf->__PVT___GEN_858 = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_89)
                                : (IData)(vlSelf->__PVT___GEN_857));
    vlSelf->__PVT___GEN_90 = ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_89)
                               : (IData)(vlSelf->__PVT___GEN_89));
    vlSelf->__PVT___GEN_347 = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_90)
                                : (IData)(vlSelf->__PVT___GEN_346));
    vlSelf->__PVT___GEN_859 = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_90)
                                : (IData)(vlSelf->__PVT___GEN_858));
    vlSelf->__PVT___GEN_91 = ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_90)
                               : (IData)(vlSelf->__PVT___GEN_90));
    vlSelf->__PVT___GEN_348 = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_91)
                                : (IData)(vlSelf->__PVT___GEN_347));
    vlSelf->__PVT___GEN_860 = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_91)
                                : (IData)(vlSelf->__PVT___GEN_859));
    vlSelf->__PVT___GEN_92 = ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_91)
                               : (IData)(vlSelf->__PVT___GEN_91));
    vlSelf->__PVT___GEN_349 = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_92)
                                : (IData)(vlSelf->__PVT___GEN_348));
    vlSelf->__PVT___GEN_861 = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_92)
                                : (IData)(vlSelf->__PVT___GEN_860));
    vlSelf->__PVT___GEN_93 = ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_92)
                               : (IData)(vlSelf->__PVT___GEN_92));
    vlSelf->__PVT___GEN_350 = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_93)
                                : (IData)(vlSelf->__PVT___GEN_349));
    vlSelf->__PVT___GEN_862 = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_93)
                                : (IData)(vlSelf->__PVT___GEN_861));
    vlSelf->__PVT___GEN_94 = ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_93)
                               : (IData)(vlSelf->__PVT___GEN_93));
    vlSelf->__PVT___GEN_351 = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_94)
                                : (IData)(vlSelf->__PVT___GEN_350));
    vlSelf->__PVT___GEN_863 = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_94)
                                : (IData)(vlSelf->__PVT___GEN_862));
    vlSelf->__PVT___GEN_95 = ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_94)
                               : (IData)(vlSelf->__PVT___GEN_94));
    vlSelf->__PVT___GEN_352 = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_95)
                                : (IData)(vlSelf->__PVT___GEN_351));
    vlSelf->__PVT___GEN_864 = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_95)
                                : (IData)(vlSelf->__PVT___GEN_863));
    vlSelf->__PVT___GEN_96 = ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_95)
                               : (IData)(vlSelf->__PVT___GEN_95));
    vlSelf->__PVT___GEN_353 = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_96)
                                : (IData)(vlSelf->__PVT___GEN_352));
    vlSelf->__PVT___GEN_865 = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_96)
                                : (IData)(vlSelf->__PVT___GEN_864));
    vlSelf->__PVT___GEN_97 = ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_96)
                               : (IData)(vlSelf->__PVT___GEN_96));
    vlSelf->__PVT___GEN_354 = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_97)
                                : (IData)(vlSelf->__PVT___GEN_353));
    vlSelf->__PVT___GEN_866 = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_97)
                                : (IData)(vlSelf->__PVT___GEN_865));
    vlSelf->__PVT___GEN_98 = ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_97)
                               : (IData)(vlSelf->__PVT___GEN_97));
    vlSelf->__PVT___GEN_355 = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_98)
                                : (IData)(vlSelf->__PVT___GEN_354));
    vlSelf->__PVT___GEN_867 = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_98)
                                : (IData)(vlSelf->__PVT___GEN_866));
    vlSelf->__PVT___GEN_99 = ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                               ? (IData)(vlSelf->__PVT__lru_98)
                               : (IData)(vlSelf->__PVT___GEN_98));
    vlSelf->__PVT___GEN_356 = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_99)
                                : (IData)(vlSelf->__PVT___GEN_355));
    vlSelf->__PVT___GEN_868 = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_99)
                                : (IData)(vlSelf->__PVT___GEN_867));
    vlSelf->__PVT___GEN_100 = ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_99)
                                : (IData)(vlSelf->__PVT___GEN_99));
    vlSelf->__PVT___GEN_357 = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_100)
                                : (IData)(vlSelf->__PVT___GEN_356));
    vlSelf->__PVT___GEN_869 = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_100)
                                : (IData)(vlSelf->__PVT___GEN_868));
    vlSelf->__PVT___GEN_101 = ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_100)
                                : (IData)(vlSelf->__PVT___GEN_100));
    vlSelf->__PVT___GEN_358 = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_101)
                                : (IData)(vlSelf->__PVT___GEN_357));
    vlSelf->__PVT___GEN_870 = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_101)
                                : (IData)(vlSelf->__PVT___GEN_869));
    vlSelf->__PVT___GEN_102 = ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_101)
                                : (IData)(vlSelf->__PVT___GEN_101));
    vlSelf->__PVT___GEN_359 = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_102)
                                : (IData)(vlSelf->__PVT___GEN_358));
    vlSelf->__PVT___GEN_871 = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_102)
                                : (IData)(vlSelf->__PVT___GEN_870));
    vlSelf->__PVT___GEN_103 = ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_102)
                                : (IData)(vlSelf->__PVT___GEN_102));
    vlSelf->__PVT___GEN_360 = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_103)
                                : (IData)(vlSelf->__PVT___GEN_359));
    vlSelf->__PVT___GEN_872 = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_103)
                                : (IData)(vlSelf->__PVT___GEN_871));
    vlSelf->__PVT___GEN_104 = ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_103)
                                : (IData)(vlSelf->__PVT___GEN_103));
    vlSelf->__PVT___GEN_361 = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_104)
                                : (IData)(vlSelf->__PVT___GEN_360));
    vlSelf->__PVT___GEN_873 = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_104)
                                : (IData)(vlSelf->__PVT___GEN_872));
    vlSelf->__PVT___GEN_105 = ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_104)
                                : (IData)(vlSelf->__PVT___GEN_104));
    vlSelf->__PVT___GEN_362 = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_105)
                                : (IData)(vlSelf->__PVT___GEN_361));
    vlSelf->__PVT___GEN_874 = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_105)
                                : (IData)(vlSelf->__PVT___GEN_873));
    vlSelf->__PVT___GEN_106 = ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_105)
                                : (IData)(vlSelf->__PVT___GEN_105));
    vlSelf->__PVT___GEN_363 = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_106)
                                : (IData)(vlSelf->__PVT___GEN_362));
    vlSelf->__PVT___GEN_875 = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_106)
                                : (IData)(vlSelf->__PVT___GEN_874));
    vlSelf->__PVT___GEN_107 = ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_106)
                                : (IData)(vlSelf->__PVT___GEN_106));
    vlSelf->__PVT___GEN_364 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_107)
                                : (IData)(vlSelf->__PVT___GEN_363));
    vlSelf->__PVT___GEN_876 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_107)
                                : (IData)(vlSelf->__PVT___GEN_875));
    vlSelf->__PVT___GEN_108 = ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_107)
                                : (IData)(vlSelf->__PVT___GEN_107));
    vlSelf->__PVT___GEN_365 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_108)
                                : (IData)(vlSelf->__PVT___GEN_364));
    vlSelf->__PVT___GEN_877 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_108)
                                : (IData)(vlSelf->__PVT___GEN_876));
    vlSelf->__PVT___GEN_109 = ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_108)
                                : (IData)(vlSelf->__PVT___GEN_108));
    vlSelf->__PVT___GEN_366 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_109)
                                : (IData)(vlSelf->__PVT___GEN_365));
    vlSelf->__PVT___GEN_878 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_109)
                                : (IData)(vlSelf->__PVT___GEN_877));
    vlSelf->__PVT___GEN_110 = ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_109)
                                : (IData)(vlSelf->__PVT___GEN_109));
    vlSelf->__PVT___GEN_367 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_110)
                                : (IData)(vlSelf->__PVT___GEN_366));
    vlSelf->__PVT___GEN_879 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_110)
                                : (IData)(vlSelf->__PVT___GEN_878));
    vlSelf->__PVT___GEN_111 = ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_110)
                                : (IData)(vlSelf->__PVT___GEN_110));
    vlSelf->__PVT___GEN_368 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_111)
                                : (IData)(vlSelf->__PVT___GEN_367));
    vlSelf->__PVT___GEN_880 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_111)
                                : (IData)(vlSelf->__PVT___GEN_879));
    vlSelf->__PVT___GEN_112 = ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_111)
                                : (IData)(vlSelf->__PVT___GEN_111));
    vlSelf->__PVT___GEN_369 = ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_112)
                                : (IData)(vlSelf->__PVT___GEN_368));
    vlSelf->__PVT___GEN_881 = ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_112)
                                : (IData)(vlSelf->__PVT___GEN_880));
    vlSelf->__PVT___GEN_113 = ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_112)
                                : (IData)(vlSelf->__PVT___GEN_112));
    vlSelf->__PVT___GEN_370 = ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_113)
                                : (IData)(vlSelf->__PVT___GEN_369));
    vlSelf->__PVT___GEN_882 = ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_113)
                                : (IData)(vlSelf->__PVT___GEN_881));
    vlSelf->__PVT___GEN_114 = ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_113)
                                : (IData)(vlSelf->__PVT___GEN_113));
    vlSelf->__PVT___GEN_371 = ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_114)
                                : (IData)(vlSelf->__PVT___GEN_370));
    vlSelf->__PVT___GEN_883 = ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_114)
                                : (IData)(vlSelf->__PVT___GEN_882));
    vlSelf->__PVT___GEN_115 = ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_114)
                                : (IData)(vlSelf->__PVT___GEN_114));
    vlSelf->__PVT___GEN_372 = ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_115)
                                : (IData)(vlSelf->__PVT___GEN_371));
    vlSelf->__PVT___GEN_884 = ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_115)
                                : (IData)(vlSelf->__PVT___GEN_883));
    vlSelf->__PVT___GEN_116 = ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_115)
                                : (IData)(vlSelf->__PVT___GEN_115));
    vlSelf->__PVT___GEN_373 = ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_116)
                                : (IData)(vlSelf->__PVT___GEN_372));
    vlSelf->__PVT___GEN_885 = ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_116)
                                : (IData)(vlSelf->__PVT___GEN_884));
    vlSelf->__PVT___GEN_117 = ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_116)
                                : (IData)(vlSelf->__PVT___GEN_116));
    vlSelf->__PVT___GEN_374 = ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_117)
                                : (IData)(vlSelf->__PVT___GEN_373));
    vlSelf->__PVT___GEN_886 = ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_117)
                                : (IData)(vlSelf->__PVT___GEN_885));
    vlSelf->__PVT___GEN_118 = ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_117)
                                : (IData)(vlSelf->__PVT___GEN_117));
    vlSelf->__PVT___GEN_375 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_118)
                                : (IData)(vlSelf->__PVT___GEN_374));
    vlSelf->__PVT___GEN_887 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_118)
                                : (IData)(vlSelf->__PVT___GEN_886));
    vlSelf->__PVT___GEN_119 = ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_118)
                                : (IData)(vlSelf->__PVT___GEN_118));
    vlSelf->__PVT___GEN_376 = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_119)
                                : (IData)(vlSelf->__PVT___GEN_375));
    vlSelf->__PVT___GEN_888 = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_119)
                                : (IData)(vlSelf->__PVT___GEN_887));
    vlSelf->__PVT___GEN_120 = ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_119)
                                : (IData)(vlSelf->__PVT___GEN_119));
    vlSelf->__PVT___GEN_377 = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_120)
                                : (IData)(vlSelf->__PVT___GEN_376));
    vlSelf->__PVT___GEN_889 = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_120)
                                : (IData)(vlSelf->__PVT___GEN_888));
    vlSelf->__PVT___GEN_121 = ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_120)
                                : (IData)(vlSelf->__PVT___GEN_120));
    vlSelf->__PVT___GEN_378 = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_121)
                                : (IData)(vlSelf->__PVT___GEN_377));
    vlSelf->__PVT___GEN_890 = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_121)
                                : (IData)(vlSelf->__PVT___GEN_889));
    vlSelf->__PVT___GEN_122 = ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_121)
                                : (IData)(vlSelf->__PVT___GEN_121));
    vlSelf->__PVT___GEN_379 = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_122)
                                : (IData)(vlSelf->__PVT___GEN_378));
    vlSelf->__PVT___GEN_891 = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_122)
                                : (IData)(vlSelf->__PVT___GEN_890));
    vlSelf->__PVT___GEN_123 = ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_122)
                                : (IData)(vlSelf->__PVT___GEN_122));
    vlSelf->__PVT___GEN_380 = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_123)
                                : (IData)(vlSelf->__PVT___GEN_379));
    vlSelf->__PVT___GEN_892 = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_123)
                                : (IData)(vlSelf->__PVT___GEN_891));
    vlSelf->__PVT___GEN_124 = ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_123)
                                : (IData)(vlSelf->__PVT___GEN_123));
    vlSelf->__PVT___GEN_381 = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_124)
                                : (IData)(vlSelf->__PVT___GEN_380));
    vlSelf->__PVT___GEN_893 = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_124)
                                : (IData)(vlSelf->__PVT___GEN_892));
    vlSelf->__PVT___GEN_125 = ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_124)
                                : (IData)(vlSelf->__PVT___GEN_124));
    vlSelf->__PVT___GEN_382 = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_125)
                                : (IData)(vlSelf->__PVT___GEN_381));
    vlSelf->__PVT___GEN_894 = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_125)
                                : (IData)(vlSelf->__PVT___GEN_893));
    vlSelf->__PVT___GEN_126 = ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_125)
                                : (IData)(vlSelf->__PVT___GEN_125));
    vlSelf->__PVT___GEN_383 = ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_126)
                                : (IData)(vlSelf->__PVT___GEN_382));
    vlSelf->__PVT___GEN_895 = ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_126)
                                : (IData)(vlSelf->__PVT___GEN_894));
    vlSelf->__PVT___GEN_127 = ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_126)
                                : (IData)(vlSelf->__PVT___GEN_126));
    vlSelf->__PVT___GEN_384 = ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way0_dirty_127)
                                : (IData)(vlSelf->__PVT___GEN_383));
    vlSelf->__PVT___GEN_896 = ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__way1_dirty_127)
                                : (IData)(vlSelf->__PVT___GEN_895));
    vlSelf->__PVT___GEN_128 = ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))
                                ? (IData)(vlSelf->__PVT__lru_127)
                                : (IData)(vlSelf->__PVT___GEN_127));
    vlSelf->__PVT__dcache_tag_1_io_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2) 
                                          & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___lru_T_4 = ((~ (IData)(vlSelf->__PVT___hit_T_1)) 
                               & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___way1_dirty_T_14 = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                        & (IData)(vlSelf->__PVT___GEN_128)) 
                                       | (IData)(vlSelf->__PVT___GEN_896));
    vlSelf->__PVT___way1_dirty_T_12 = ((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                       & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___way0_dirty_T_7 = (1U & (~ (IData)(vlSelf->__PVT___GEN_128)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_wen 
        = vlSelf->__PVT__dcache_tag_1_io_wen;
    vlSelf->__PVT___lru_T_5 = ((IData)(vlSelf->__PVT___hit_T) 
                               | (IData)(vlSelf->__PVT___lru_T_4));
    vlSelf->__PVT___way1_dirty_T_15 = ((~ ((IData)(vlSelf->__PVT___way0_dirty_T_5) 
                                           & (IData)(vlSelf->__PVT___GEN_128))) 
                                       & (IData)(vlSelf->__PVT___way1_dirty_T_14));
    vlSelf->__PVT__dcache_tag_io_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2) 
                                        & (IData)(vlSelf->__PVT___way0_dirty_T_7));
    vlSelf->__PVT___way0_dirty_T_14 = (((0x10U == (IData)(vlSelf->__PVT__work_state)) 
                                        & (IData)(vlSelf->__PVT___way0_dirty_T_7)) 
                                       | (IData)(vlSelf->__PVT___GEN_384));
    vlSelf->__PVT___way0_dirty_T_12 = ((0x10U == (IData)(vlSelf->__PVT__work_state)) 
                                       & (IData)(vlSelf->__PVT___way0_dirty_T_7));
    vlSelf->__PVT__dirty_victim = ((IData)(vlSelf->__PVT___way0_dirty_T_7)
                                    ? (IData)(vlSelf->__PVT___GEN_384)
                                    : (IData)(vlSelf->__PVT___GEN_896));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_wen 
        = vlSelf->__PVT__dcache_tag_io_wen;
    vlSelf->__PVT___way0_dirty_T_15 = ((~ ((0xeU == (IData)(vlSelf->__PVT__work_state)) 
                                           & (~ (IData)(vlSelf->__PVT___GEN_128)))) 
                                       & (IData)(vlSelf->__PVT___way0_dirty_T_14));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_16 
        = ((IData)(vlSelf->__PVT__dirty_victim) ? 9U
            : (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_15));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_17 
        = ((IData)(vlSelf->__PVT__stage1_sram_cache_reg)
            ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_16)
            : VL_EXTEND_II(4,2, (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_12)));
    vlSelf->__PVT___state_ready_lookup_will_to_be_T_18 
        = ((IData)(vlSelf->__PVT__stage1_sram_req_reg)
            ? VL_EXTEND_II(5,4, (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_17))
            : 0x19U);
    vlSelf->__PVT__state_ready_lookup_will_to_be = 
        ((IData)(vlSelf->__PVT__hit) ? (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_7)
          : (IData)(vlSelf->__PVT___state_ready_lookup_will_to_be_T_18));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__1(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__1\n"); );
    // Body
    vlSelf->__PVT___GEN_4642 = ((~ (IData)(vlSelf->__PVT__io_port_bvalid)) 
                                & (IData)(vlSelf->__PVT__write_access_complete_reg));
    vlSelf->__PVT___access_work_state_T_23 = ((IData)(vlSelf->__PVT__io_port_bvalid)
                                               ? 0xcU
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_20 = ((IData)(vlSelf->__PVT__io_port_wready) 
                                              & (7U 
                                                 == (IData)(vlSelf->__PVT__write_counter)));
    vlSelf->__PVT___access_work_state_T_21 = (((IData)(vlSelf->__PVT__io_port_wready) 
                                               & (7U 
                                                  == (IData)(vlSelf->__PVT__write_counter)))
                                               ? 0xbU
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_7 = ((IData)(vlSelf->__PVT__io_port_wready)
                                              ? 5U : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___write_counter_T_6 = ((IData)(vlSelf->__PVT__io_port_wready)
                                          ? (IData)(vlSelf->__PVT___write_counter_T_5)
                                          : (IData)(vlSelf->__PVT__write_counter));
    vlSelf->__PVT___access_work_state_T_17 = ((IData)(vlSelf->__PVT__io_port_awready)
                                               ? 0xaU
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_5 = ((IData)(vlSelf->__PVT__io_port_awready)
                                              ? 4U : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___dcache_data_way0_0_wdata_T_6 = 
        ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_2)
          ? vlSelf->__PVT__io_port_rdata : 0ULL);
    vlSelf->__PVT___access_work_state_T_25 = ((IData)(vlSelf->__PVT__io_port_arready)
                                               ? 0U
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_9 = ((IData)(vlSelf->__PVT__io_port_arready)
                                              ? 0xdU
                                              : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_1 = ((IData)(vlSelf->__PVT__io_port_arready)
                                              ? 2U : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_T_28 = ((IData)(vlSelf->__PVT__io_port_rvalid) 
                                              & (IData)(vlSelf->__PVT__io_port_rlast));
    vlSelf->__PVT___access_work_state_T_29 = (((IData)(vlSelf->__PVT__io_port_rvalid) 
                                               & (IData)(vlSelf->__PVT__io_port_rlast))
                                               ? 0x10U
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_for_stall_T_1 
        = ((IData)(vlSelf->__PVT__io_port_rvalid) ? 0x18U
            : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___read_counter_T_7 = ((IData)(vlSelf->__PVT__io_port_rvalid)
                                         ? (IData)(vlSelf->__PVT___read_counter_T_6)
                                         : (IData)(vlSelf->__PVT__read_counter));
    vlSelf->__PVT___way0_burst_read_wen_T_4 = (((IData)(vlSelf->__PVT___wait_data_T_3) 
                                                | (IData)(vlSelf->__PVT___read_counter_T_9)) 
                                               & (IData)(vlSelf->__PVT__io_port_rvalid));
    vlSelf->__PVT___access_work_state_T_15 = (((IData)(vlSelf->__PVT__io_port_rlast) 
                                               & (IData)(vlSelf->__PVT__io_port_rvalid))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_14)
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___wait_data_T_9 = ((((0xdU == (IData)(vlSelf->__PVT__work_state)) 
                                       & (IData)(vlSelf->__PVT__io_port_rvalid)) 
                                      & ((IData)(vlSelf->__PVT__read_counter) 
                                         == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U))))
                                      ? vlSelf->__PVT__io_port_rdata
                                      : VL_EXTEND_QI(64,32, vlSelf->__PVT__wait_data));
    vlSelf->__PVT__way0_burst_read_wen = ((((IData)(vlSelf->__PVT___wait_data_T_3) 
                                            | (IData)(vlSelf->__PVT___read_counter_T_9)) 
                                           & (IData)(vlSelf->__PVT__io_port_rvalid)) 
                                          & (IData)(vlSelf->__PVT___way0_dirty_T_7));
    vlSelf->__PVT__dcache_tag_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_tag_1_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_7_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_15_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_6_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_14_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_5_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_13_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_4_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_12_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_3_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_11_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_2_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_10_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_1_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_8_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_data_9_clock = vlSelf->__PVT__clock;
    vlSelf->__PVT__dcache_tag_io_tag = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_tag;
    vlSelf->__PVT__dcache_tag_1_io_tag = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_tag;
    vlSelf->__PVT__dcache_data_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                            | (IData)(vlSelf->__PVT___way0_dirty_T))
                                            ? vlSelf->__PVT__stage1_sram_wdata_reg
                                            : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_1_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_2_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_3_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_4_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_5_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_6_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_7_io_wdata = (((IData)(vlSelf->__PVT___way0_dirty_T_9) 
                                              | (IData)(vlSelf->__PVT___way0_dirty_T))
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_8_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_9_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                              ? vlSelf->__PVT__stage1_sram_wdata_reg
                                              : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_10_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                               ? vlSelf->__PVT__stage1_sram_wdata_reg
                                               : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_11_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                               ? vlSelf->__PVT__stage1_sram_wdata_reg
                                               : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_12_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                               ? vlSelf->__PVT__stage1_sram_wdata_reg
                                               : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_13_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                               ? vlSelf->__PVT__stage1_sram_wdata_reg
                                               : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_14_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                               ? vlSelf->__PVT__stage1_sram_wdata_reg
                                               : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT__dcache_data_15_io_wdata = ((IData)(vlSelf->__PVT___dcache_data_way0_0_wdata_T_2)
                                               ? vlSelf->__PVT__stage1_sram_wdata_reg
                                               : vlSelf->__PVT___dcache_data_way0_0_wdata_T_6);
    vlSelf->__PVT___access_work_state_T_39 = ((1U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_1)
                                               : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___access_work_state_for_stall_T_3 
        = ((2U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT___access_work_state_for_stall_T_1)
            : (IData)(vlSelf->__PVT__work_state));
    vlSelf->__PVT___read_counter_T_8 = ((IData)(vlSelf->__PVT___access_work_state_T_28)
                                         ? 0U : (IData)(vlSelf->__PVT___read_counter_T_7));
    vlSelf->__PVT__way1_burst_read_wen = ((IData)(vlSelf->__PVT___way0_burst_read_wen_T_4) 
                                          & (IData)(vlSelf->__PVT___GEN_128));
    vlSelf->__PVT___wait_data_T_10 = (((2U == (IData)(vlSelf->__PVT__work_state)) 
                                       & (IData)(vlSelf->__PVT__io_port_rvalid))
                                       ? vlSelf->__PVT__io_port_rdata
                                       : vlSelf->__PVT___wait_data_T_9);
    vlSelf->__PVT__way0_wen_0 = ((0U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_1 = ((1U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_2 = ((2U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_3 = ((3U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_4 = ((4U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_5 = ((5U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_6 = ((6U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSelf->__PVT__way0_wen_7 = ((7U == (IData)(vlSelf->__PVT__read_counter)) 
                                 & (IData)(vlSelf->__PVT__way0_burst_read_wen));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__clock 
        = vlSelf->__PVT__dcache_tag_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__clock 
        = vlSelf->__PVT__dcache_tag_1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__clock 
        = vlSelf->__PVT__dcache_data_7_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__clock 
        = vlSelf->__PVT__dcache_data_15_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__clock 
        = vlSelf->__PVT__dcache_data_6_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__clock 
        = vlSelf->__PVT__dcache_data_14_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__clock 
        = vlSelf->__PVT__dcache_data_5_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__clock 
        = vlSelf->__PVT__dcache_data_13_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__clock 
        = vlSelf->__PVT__dcache_data_4_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__clock 
        = vlSelf->__PVT__dcache_data_12_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__clock 
        = vlSelf->__PVT__dcache_data_3_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__clock 
        = vlSelf->__PVT__dcache_data_11_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__clock 
        = vlSelf->__PVT__dcache_data_2_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__clock 
        = vlSelf->__PVT__dcache_data_10_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__clock 
        = vlSelf->__PVT__dcache_data_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__clock 
        = vlSelf->__PVT__dcache_data_1_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__clock 
        = vlSelf->__PVT__dcache_data_8_clock;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__clock 
        = vlSelf->__PVT__dcache_data_9_clock;
    vlSelf->__PVT___awaddr_miss_addr_T_2 = ((IData)(vlSelf->__PVT___way0_dirty_T_7)
                                             ? vlSelf->__PVT__dcache_tag_io_tag
                                             : vlSelf->__PVT__dcache_tag_1_io_tag);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_1_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_2_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_3_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_4_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_5_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_6_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_7_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_8_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_9_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_10_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_11_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_12_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_13_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_14_io_wdata;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_wdata 
        = vlSelf->__PVT__dcache_data_15_io_wdata;
    vlSelf->__PVT___access_work_state_T_41 = ((2U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_for_stall_T_1)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_39));
    vlSelf->__PVT___access_work_state_for_stall_T_5 
        = ((0x18U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_3));
    vlSelf->__PVT__way1_wen_0 = ((IData)(vlSelf->__PVT___way0_wen_0_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_1 = ((IData)(vlSelf->__PVT___way0_wen_1_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_2 = ((IData)(vlSelf->__PVT___way0_wen_2_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_3 = ((IData)(vlSelf->__PVT___way0_wen_3_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_4 = ((IData)(vlSelf->__PVT___way0_wen_4_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_5 = ((IData)(vlSelf->__PVT___way0_wen_5_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_6 = ((IData)(vlSelf->__PVT___way0_wen_6_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT__way1_wen_7 = ((IData)(vlSelf->__PVT___way0_wen_7_T) 
                                 & (IData)(vlSelf->__PVT__way1_burst_read_wen));
    vlSelf->__PVT___wen_way0_wire_0_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_0), 4U));
    vlSelf->__PVT___wen_way0_wire_1_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_1), 4U));
    vlSelf->__PVT___wen_way0_wire_2_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_2), 4U));
    vlSelf->__PVT___wen_way0_wire_3_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_3), 4U));
    vlSelf->__PVT___wen_way0_wire_4_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_4), 4U));
    vlSelf->__PVT___wen_way0_wire_5_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_5), 4U));
    vlSelf->__PVT___wen_way0_wire_6_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_6), 4U));
    vlSelf->__PVT___wen_way0_wire_7_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way0_wen_7), 4U));
    vlSelf->__PVT__awaddr_miss_addr = VL_CONCAT_III(32,20,12, vlSelf->__PVT___awaddr_miss_addr_T_2, 
                                                    VL_CONCAT_III(12,7,5, 
                                                                  (0x7fU 
                                                                   & VL_SEL_IQII(64, vlSelf->__PVT__stage1_sram_phy_addr_reg, 5U, 7U)), 0U));
    vlSelf->__PVT___access_work_state_T_43 = ((0x18U 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT__state_ready_lookup_will_to_be)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_41));
    vlSelf->__PVT___access_work_state_for_stall_T_7 
        = ((5U == (IData)(vlSelf->__PVT__work_state))
            ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_5));
    vlSelf->__PVT___wen_way1_wire_0_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_0), 4U));
    vlSelf->__PVT___wen_way1_wire_1_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_1), 4U));
    vlSelf->__PVT___wen_way1_wire_2_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_2), 4U));
    vlSelf->__PVT___wen_way1_wire_3_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_3), 4U));
    vlSelf->__PVT___wen_way1_wire_4_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_4), 4U));
    vlSelf->__PVT___wen_way1_wire_5_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_5), 4U));
    vlSelf->__PVT___wen_way1_wire_6_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_6), 4U));
    vlSelf->__PVT___wen_way1_wire_7_T_13 = (0xfU & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__way1_wen_7), 4U));
    vlSelf->__PVT__dcache_data_io_wen = (((0U == (7U 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U))) 
                                          & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                             | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                          ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                          : (IData)(vlSelf->__PVT___wen_way0_wire_0_T_13));
    vlSelf->__PVT__dcache_data_1_io_wen = (((1U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_1_T_13));
    vlSelf->__PVT__dcache_data_2_io_wen = (((2U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_2_T_13));
    vlSelf->__PVT__dcache_data_3_io_wen = (((3U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_3_T_13));
    vlSelf->__PVT__dcache_data_4_io_wen = (((4U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_4_T_13));
    vlSelf->__PVT__dcache_data_5_io_wen = (((5U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_5_T_13));
    vlSelf->__PVT__dcache_data_6_io_wen = (((6U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_6_T_13));
    vlSelf->__PVT__dcache_data_7_io_wen = (((7U == 
                                             (7U & 
                                              VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 2U, 3U))) 
                                            & ((IData)(vlSelf->__PVT___way0_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way0_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way0_wire_7_T_13));
    vlSelf->__PVT___io_port_awaddr_T_4 = ((9U == (IData)(vlSelf->__PVT__work_state))
                                           ? vlSelf->__PVT__awaddr_miss_addr
                                           : vlSelf->__PVT___io_port_awaddr_T_2);
    vlSelf->__PVT___access_work_state_T_45 = ((3U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_5)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_43));
    vlSelf->__PVT___access_work_state_for_stall_T_9 
        = ((0x19U == (IData)(vlSelf->__PVT__work_state))
            ? (IData)(vlSelf->__PVT__state_ready_lookup_should_be)
            : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_7));
    vlSelf->__PVT__dcache_data_8_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_0_T_1) 
                                            & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way1_wire_0_T_13));
    vlSelf->__PVT__dcache_data_9_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_1_T_1) 
                                            & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                               | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                            ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                            : (IData)(vlSelf->__PVT___wen_way1_wire_1_T_13));
    vlSelf->__PVT__dcache_data_10_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_2_T_1) 
                                             & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                                | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                             ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                             : (IData)(vlSelf->__PVT___wen_way1_wire_2_T_13));
    vlSelf->__PVT__dcache_data_11_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_3_T_1) 
                                             & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                                | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                             ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                             : (IData)(vlSelf->__PVT___wen_way1_wire_3_T_13));
    vlSelf->__PVT__dcache_data_12_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_4_T_1) 
                                             & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                                | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                             ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                             : (IData)(vlSelf->__PVT___wen_way1_wire_4_T_13));
    vlSelf->__PVT__dcache_data_13_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_5_T_1) 
                                             & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                                | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                             ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                             : (IData)(vlSelf->__PVT___wen_way1_wire_5_T_13));
    vlSelf->__PVT__dcache_data_14_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_6_T_1) 
                                             & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                                | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                             ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                             : (IData)(vlSelf->__PVT___wen_way1_wire_6_T_13));
    vlSelf->__PVT__dcache_data_15_io_wen = (((IData)(vlSelf->__PVT___wen_way0_wire_7_T_1) 
                                             & ((IData)(vlSelf->__PVT___way1_dirty_T_4) 
                                                | (IData)(vlSelf->__PVT___way1_dirty_T_12)))
                                             ? (IData)(vlSelf->__PVT__stage1_wstrb_reg)
                                             : (IData)(vlSelf->__PVT___wen_way1_wire_7_T_13));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_1_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_2_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_3_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_4_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_5_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_6_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_7_io_wen;
    vlSelf->__PVT___io_port_awaddr_T_6 = ((0xfU == (IData)(vlSelf->__PVT__work_state))
                                           ? vlSelf->__PVT__awaddr_miss_addr
                                           : vlSelf->__PVT___io_port_awaddr_T_4);
    vlSelf->__PVT___access_work_state_T_47 = ((4U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_7)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_45));
    vlSelf->__PVT___access_work_state_for_stall_T_11 
        = ((0xeU == (IData)(vlSelf->__PVT__work_state))
            ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_9));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_8_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_9_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_10_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_11_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_12_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_13_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_14_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_wen 
        = vlSelf->__PVT__dcache_data_15_io_wen;
    vlSelf->__PVT__io_port_awaddr = VL_EXTEND_QI(64,32, vlSelf->__PVT___io_port_awaddr_T_6);
    vlSelf->__PVT___access_work_state_T_49 = ((5U == (IData)(vlSelf->__PVT__work_state))
                                               ? 0x18U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_47));
    vlSelf->__PVT__access_work_state_for_stall = ((0x10U 
                                                   == (IData)(vlSelf->__PVT__work_state))
                                                   ? 0x18U
                                                   : (IData)(vlSelf->__PVT___access_work_state_for_stall_T_11));
    vlSelf->__PVT___access_work_state_T_51 = ((0x19U 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT__state_ready_lookup_will_to_be)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_49));
    vlSelf->__PVT__stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
    vlSelf->__PVT__io_stage2_stall = (3U == (3U & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U)));
    vlSelf->__PVT___access_work_state_T_53 = ((0xcU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_9)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_51));
    vlSelf->__PVT___stage1_sram_req_reg_T_1 = ((~ (IData)(vlSelf->__PVT__stage2_stall)) 
                                               & (IData)(vlSelf->__PVT__stage1_sram_req_reg));
    vlSelf->__PVT___access_work_state_T_55 = ((0xdU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_15)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_53));
    vlSelf->__PVT___access_work_state_T_57 = ((0xeU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? 0x18U
                                               : (IData)(vlSelf->__PVT___access_work_state_T_55));
    vlSelf->__PVT___access_work_state_T_59 = ((9U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_17)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_57));
    vlSelf->__PVT___access_work_state_T_61 = ((0xaU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_21)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_59));
    vlSelf->__PVT___access_work_state_T_63 = ((0xbU 
                                               == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_23)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_61));
    vlSelf->__PVT___access_work_state_T_65 = ((8U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_25)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_63));
    vlSelf->__PVT___access_work_state_T_67 = ((0U == (IData)(vlSelf->__PVT__work_state))
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_29)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_65));
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__2(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__2\n"); );
    // Body
    vlSelf->__PVT__dcache_data_7_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_15_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_6_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_14_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_5_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_13_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_4_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_4.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_12_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_3_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_11_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_2_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_10_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_10.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_1_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_8_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_9_io_rdata = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_9.__PVT__io_rdata;
    vlSelf->__PVT__dcache_data_way0_7_rdata = vlSelf->__PVT__dcache_data_7_io_rdata;
    vlSelf->__PVT__dcache_data_way1_7_rdata = vlSelf->__PVT__dcache_data_15_io_rdata;
    vlSelf->__PVT__dcache_data_way0_6_rdata = vlSelf->__PVT__dcache_data_6_io_rdata;
    vlSelf->__PVT__dcache_data_way1_6_rdata = vlSelf->__PVT__dcache_data_14_io_rdata;
    vlSelf->__PVT__dcache_data_way0_5_rdata = vlSelf->__PVT__dcache_data_5_io_rdata;
    vlSelf->__PVT__dcache_data_way1_5_rdata = vlSelf->__PVT__dcache_data_13_io_rdata;
    vlSelf->__PVT__dcache_data_way0_4_rdata = vlSelf->__PVT__dcache_data_4_io_rdata;
    vlSelf->__PVT__dcache_data_way1_4_rdata = vlSelf->__PVT__dcache_data_12_io_rdata;
    vlSelf->__PVT__dcache_data_way0_3_rdata = vlSelf->__PVT__dcache_data_3_io_rdata;
    vlSelf->__PVT__dcache_data_way1_3_rdata = vlSelf->__PVT__dcache_data_11_io_rdata;
    vlSelf->__PVT__dcache_data_way0_2_rdata = vlSelf->__PVT__dcache_data_2_io_rdata;
    vlSelf->__PVT__dcache_data_way1_2_rdata = vlSelf->__PVT__dcache_data_10_io_rdata;
    vlSelf->__PVT__dcache_data_way0_0_rdata = vlSelf->__PVT__dcache_data_io_rdata;
    vlSelf->__PVT__dcache_data_way0_1_rdata = vlSelf->__PVT__dcache_data_1_io_rdata;
    vlSelf->__PVT__dcache_data_way1_0_rdata = vlSelf->__PVT__dcache_data_8_io_rdata;
    vlSelf->__PVT__dcache_data_way1_1_rdata = vlSelf->__PVT__dcache_data_9_io_rdata;
    vlSelf->__PVT___GEN_2075 = ((1U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_1_rdata
                                 : vlSelf->__PVT__dcache_data_way0_0_rdata);
    vlSelf->__PVT___GEN_1923 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_1_rdata
                                 : vlSelf->__PVT__dcache_data_way0_0_rdata);
    vlSelf->__PVT___GEN_2067 = ((1U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_1_rdata
                                 : vlSelf->__PVT__dcache_data_way1_0_rdata);
    vlSelf->__PVT___GEN_1931 = ((1U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_1_rdata
                                 : vlSelf->__PVT__dcache_data_way1_0_rdata);
    vlSelf->__PVT___GEN_2076 = ((2U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_2_rdata
                                 : vlSelf->__PVT___GEN_2075);
    vlSelf->__PVT___GEN_1924 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_2_rdata
                                 : vlSelf->__PVT___GEN_1923);
    vlSelf->__PVT___GEN_2068 = ((2U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_2_rdata
                                 : vlSelf->__PVT___GEN_2067);
    vlSelf->__PVT___GEN_1932 = ((2U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_2_rdata
                                 : vlSelf->__PVT___GEN_1931);
    vlSelf->__PVT___GEN_2077 = ((3U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_3_rdata
                                 : vlSelf->__PVT___GEN_2076);
    vlSelf->__PVT___GEN_1925 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_3_rdata
                                 : vlSelf->__PVT___GEN_1924);
    vlSelf->__PVT___GEN_2069 = ((3U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_3_rdata
                                 : vlSelf->__PVT___GEN_2068);
    vlSelf->__PVT___GEN_1933 = ((3U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_3_rdata
                                 : vlSelf->__PVT___GEN_1932);
    vlSelf->__PVT___GEN_2078 = ((4U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_4_rdata
                                 : vlSelf->__PVT___GEN_2077);
    vlSelf->__PVT___GEN_1926 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_4_rdata
                                 : vlSelf->__PVT___GEN_1925);
    vlSelf->__PVT___GEN_2070 = ((4U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_4_rdata
                                 : vlSelf->__PVT___GEN_2069);
    vlSelf->__PVT___GEN_1934 = ((4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_4_rdata
                                 : vlSelf->__PVT___GEN_1933);
    vlSelf->__PVT___GEN_2079 = ((5U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_5_rdata
                                 : vlSelf->__PVT___GEN_2078);
    vlSelf->__PVT___GEN_1927 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_5_rdata
                                 : vlSelf->__PVT___GEN_1926);
    vlSelf->__PVT___GEN_2071 = ((5U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_5_rdata
                                 : vlSelf->__PVT___GEN_2070);
    vlSelf->__PVT___GEN_1935 = ((5U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_5_rdata
                                 : vlSelf->__PVT___GEN_1934);
    vlSelf->__PVT___GEN_2080 = ((6U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_6_rdata
                                 : vlSelf->__PVT___GEN_2079);
    vlSelf->__PVT___GEN_1928 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_6_rdata
                                 : vlSelf->__PVT___GEN_1927);
    vlSelf->__PVT___GEN_2072 = ((6U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_6_rdata
                                 : vlSelf->__PVT___GEN_2071);
    vlSelf->__PVT___GEN_1936 = ((6U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_6_rdata
                                 : vlSelf->__PVT___GEN_1935);
    vlSelf->__PVT___GEN_2081 = ((7U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way0_7_rdata
                                 : vlSelf->__PVT___GEN_2080);
    vlSelf->__PVT___GEN_1929 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way0_7_rdata
                                 : vlSelf->__PVT___GEN_1928);
    vlSelf->__PVT___GEN_2073 = ((7U == (IData)(vlSelf->__PVT__write_counter))
                                 ? vlSelf->__PVT__dcache_data_way1_7_rdata
                                 : vlSelf->__PVT___GEN_2072);
    vlSelf->__PVT___GEN_1937 = ((7U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                 ? vlSelf->__PVT__dcache_data_way1_7_rdata
                                 : vlSelf->__PVT___GEN_1936);
    vlSelf->__PVT__writeback_data = ((IData)(vlSelf->__PVT___GEN_128)
                                      ? vlSelf->__PVT___GEN_2073
                                      : vlSelf->__PVT___GEN_2081);
    vlSelf->__PVT__hit_word = ((IData)(vlSelf->__PVT__stage2_hit0_reg)
                                ? vlSelf->__PVT___GEN_1929
                                : vlSelf->__PVT___GEN_1937);
    vlSelf->__PVT___io_port_wdata_T_4 = (((IData)(vlSelf->__PVT___write_counter_T) 
                                          | (IData)(vlSelf->__PVT___write_counter_T_7))
                                          ? vlSelf->__PVT__writeback_data
                                          : 0ULL);
    vlSelf->__PVT___io_sram_rdata_T_2 = ((IData)(vlSelf->__PVT___cache_wdata_T_3)
                                          ? vlSelf->__PVT__hit_word
                                          : 0ULL);
    vlSelf->__PVT__io_port_wdata = ((4U == (IData)(vlSelf->__PVT__work_state))
                                     ? vlSelf->__PVT__stage1_sram_wdata_reg
                                     : vlSelf->__PVT___io_port_wdata_T_4);
    vlSelf->__PVT___io_sram_rdata_T_3 = ((IData)(vlSelf->__PVT___io_sram_data_ok_T_1)
                                          ? VL_EXTEND_QI(64,32, vlSelf->__PVT__wait_data)
                                          : vlSelf->__PVT___io_sram_rdata_T_2);
    vlSelf->__PVT__io_sram_rdata = ((IData)(vlSelf->__PVT__stage2_stall_reg)
                                     ? vlSelf->__PVT___io_sram_rdata_T_3
                                     : vlSelf->__PVT__sram_rdata_reg);
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__3(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__3\n"); );
    // Body
    vlSelf->__PVT__dcache_tag_io_raddr = VL_SEL_IQII(64, vlSelf->__PVT__io_sram_addr, 0U, 0x20U);
    vlSelf->__PVT__dcache_tag_1_io_raddr = VL_SEL_IQII(64, vlSelf->__PVT__io_sram_addr, 0U, 0x20U);
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_raddr 
        = vlSelf->__PVT__dcache_tag_io_raddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_raddr 
        = vlSelf->__PVT__dcache_tag_1_io_raddr;
}

VL_ATTR_COLD void Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__4(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___settle__TOP__mycpu_top__data_cache__4\n"); );
    // Body
    vlSelf->__PVT___stage1_sram_size_reg_T_1 = ((IData)(vlSelf->__PVT__io_sram_req)
                                                 ? (IData)(vlSelf->__PVT__io_sram_size)
                                                 : 
                                                VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__stage1_sram_size_reg)));
    vlSelf->__PVT__dcache_tag_io_hit = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_hit;
    vlSelf->__PVT__dcache_tag_io_valid = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag.__PVT__io_valid;
    vlSelf->__PVT__dcache_tag_1_io_hit = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_hit;
    vlSelf->__PVT__dcache_tag_1_io_valid = vlSymsp->TOP__mycpu_top__data_cache__dcache_tag_1.__PVT__io_valid;
}
