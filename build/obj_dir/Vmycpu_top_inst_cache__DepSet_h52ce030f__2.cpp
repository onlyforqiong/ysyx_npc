// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_inst_cache.h"

VL_INLINE_OPT void Vmycpu_top_inst_cache___sequent__TOP__mycpu_top__inst_cache__86(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___sequent__TOP__mycpu_top__inst_cache__86\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_wen 
        = vlSelf->__PVT__icache_tag_1_io_wen;
    vlSelf->__PVT__icache_tag_io_wen = ((IData)(vlSelf->__PVT___stage1_finished_T_1) 
                                        & (IData)(vlSelf->__PVT___lru_T_8));
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___sequent__TOP__mycpu_top__inst_cache__87(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___sequent__TOP__mycpu_top__inst_cache__87\n"); );
    // Body
    vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_wen 
        = vlSelf->__PVT__icache_tag_io_wen;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___combo__TOP__mycpu_top__inst_cache__20(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___combo__TOP__mycpu_top__inst_cache__20\n"); );
    // Body
    vlSelf->__PVT__icache_tag_io_valid = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_valid;
    vlSelf->__PVT__icache_tag_io_hit = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag.__PVT__io_hit;
    vlSelf->__PVT__icache_tag_1_io_valid = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_valid;
    vlSelf->__PVT__icache_tag_1_io_hit = vlSymsp->TOP__mycpu_top__inst_cache__icache_tag_1.__PVT__io_hit;
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awaddr 
        = ((0xfU == (IData)(vlSymsp->TOP__mycpu_top__data_cache.__PVT__work_state))
            ? vlSymsp->TOP__mycpu_top__data_cache.__PVT__awaddr_miss_addr
            : vlSymsp->TOP__mycpu_top__data_cache.__PVT___io_port_awaddr_T_4);
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_data_6_io_wen 
        = (((6U == (7U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache.__PVT__stage1_addr_line_mapping, 3U, 3U))) 
            & ((IData)(vlSymsp->TOP__mycpu_top__data_cache.__PVT___way0_dirty_T_4) 
               | (IData)(vlSymsp->TOP__mycpu_top__data_cache.__PVT___way0_dirty_T_12)))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache.__PVT__stage1_wstrb_reg)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache.__PVT___wen_way0_wire_6_T_13));
    vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_data_7_io_wen 
        = (((7U == (7U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__data_cache.__PVT__stage1_addr_line_mapping, 3U, 3U))) 
            & ((IData)(vlSymsp->TOP__mycpu_top__data_cache.__PVT___way0_dirty_T_4) 
               | (IData)(vlSymsp->TOP__mycpu_top__data_cache.__PVT___way0_dirty_T_12)))
            ? (IData)(vlSymsp->TOP__mycpu_top__data_cache.__PVT__stage1_wstrb_reg)
            : (IData)(vlSymsp->TOP__mycpu_top__data_cache.__PVT___wen_way0_wire_7_T_13));
    vlSelf->__PVT___hit_T_2 = ((IData)(vlSelf->__PVT__icache_tag_io_hit) 
                               & (IData)(vlSelf->__PVT__icache_tag_io_valid));
    vlSelf->__PVT___hit_T = vlSelf->__PVT__icache_tag_io_hit;
    vlSelf->__PVT___hit_T_3 = vlSelf->__PVT__icache_tag_1_io_hit;
    vlSelf->__PVT___hit_T_5 = ((IData)(vlSelf->__PVT__icache_tag_1_io_hit) 
                               & (IData)(vlSelf->__PVT__icache_tag_1_io_valid));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_wen 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_data_6_io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_wen 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__dcache_data_7_io_wen;
    vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awaddr 
        = vlSymsp->TOP__mycpu_top__data_cache.__PVT__io_port_awaddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__io_wen;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_out;
}

VL_INLINE_OPT void Vmycpu_top_inst_cache___combo__TOP__mycpu_top__inst_cache__21(Vmycpu_top_inst_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_inst_cache___combo__TOP__mycpu_top__inst_cache__21\n"); );
    // Body
    vlSelf->__PVT___lru_T_4 = ((~ (IData)(vlSelf->__PVT___hit_T_3)) 
                               & (IData)(vlSelf->__PVT___GEN_130));
    vlSelf->__PVT__hit = (((IData)(vlSelf->__PVT__icache_tag_io_hit) 
                           & (IData)(vlSelf->__PVT__icache_tag_io_valid)) 
                          | (IData)(vlSelf->__PVT___hit_T_5));
    vlSymsp->TOP__mycpu_top.axi_mem_port_1_awaddr = vlSymsp->TOP__mycpu_top.__PVT__data_cache_io_port_awaddr;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7.__PVT__dcache_data_ram_0_io_wea;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__table_6_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_1__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__table_0_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__table_6_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_2__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_3_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_2_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_5_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_4_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__table_7_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_3__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_1_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_0_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_5_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_4_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__table_7_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_5__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_1_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_3_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_2_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_7_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__table_6_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 0U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 1U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 2U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 3U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 4U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 5U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 6U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write 
        = (1U & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__io_wea), 7U));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_0_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_2_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_5_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__table_6_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_8__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_3_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__table_2_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_11__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_0_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__table_2_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_12__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_0_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_3_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__table_2_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_13__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__table_4_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_14__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_0_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_7_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_out;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__table_6_out 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_15__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_out;
    vlSelf->__PVT___lru_T_5 = ((IData)(vlSelf->__PVT___hit_T) 
                               | (IData)(vlSelf->__PVT___lru_T_4));
    vlSelf->__PVT___access_work_state_T_22 = ((IData)(vlSelf->__PVT__hit)
                                               ? (IData)(vlSelf->__PVT___access_work_state_T_15)
                                               : (IData)(vlSelf->__PVT___access_work_state_T_21));
    vlSelf->__PVT___access_work_state_T_34 = ((IData)(vlSelf->__PVT__hit)
                                               ? VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT___access_work_state_T_29))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_33));
    vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__io_douta_hi 
        = VL_CONCAT_III(24,8,16, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__table_4_out), 
                        VL_CONCAT_III(16,8,8, (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__table_3_out), (IData)(vlSymsp->TOP__mycpu_top__inst_cache__icache_data__icache_data_ram_0.__PVT__table_2_out)));
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_6__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first_.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05Fio_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F1.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F1_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F2.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F2_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F3.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F3_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F4.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F4_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F5.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F5_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F6.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F6_io_write;
    vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0__Look_up_table_read_first___05F7.__PVT__io_write 
        = vlSymsp->TOP__mycpu_top__data_cache__dcache_data_7__dcache_data_ram_0.__PVT__Look_up_table_read_first___05F7_io_write;
    vlSelf->__PVT___access_work_state_T_47 = ((1U == (IData)(vlSelf->__PVT__work_state))
                                               ? VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___access_work_state_T_34))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_46));
    vlSymsp->TOP.axi_mem_port_1_awaddr = vlSymsp->TOP__mycpu_top.axi_mem_port_1_awaddr;
    vlSelf->__PVT___access_work_state_T_48 = ((4U == (IData)(vlSelf->__PVT__work_state))
                                               ? VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___access_work_state_T_22))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_47));
    vlSelf->__PVT___access_work_state_T_49 = ((IData)(vlSelf->__PVT___stage1_finished_T_2)
                                               ? VL_EXTEND_II(4,3, (IData)(vlSelf->__PVT___access_work_state_T_7))
                                               : (IData)(vlSelf->__PVT___access_work_state_T_48));
    vlSelf->__PVT__access_work_state = (((2U == (IData)(vlSelf->__PVT__work_state)) 
                                         & (IData)(vlSelf->__PVT__io_port_arready))
                                         ? 3U : (IData)(vlSelf->__PVT___access_work_state_T_49));
    vlSelf->__PVT___stage2_stall_T = (1U == (IData)(vlSelf->__PVT__access_work_state));
    vlSelf->__PVT__stage2_stall = (((1U == (IData)(vlSelf->__PVT__access_work_state)) 
                                    | (4U == (IData)(vlSelf->__PVT__access_work_state))) 
                                   & (IData)(vlSelf->__PVT___stage2_stall_T_5));
    vlSelf->__PVT__io_stage2_stall = (((1U == (IData)(vlSelf->__PVT__access_work_state)) 
                                       | (4U == (IData)(vlSelf->__PVT__access_work_state))) 
                                      & (IData)(vlSelf->__PVT___stage2_stall_T_5));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_L 
        = VL_EXTEND_II(7,3, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BHT_banks_oneissue_io_out_L));
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_stage2_stall 
        = vlSelf->__PVT__io_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_bht_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_bht_L;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_stage2_stall 
        = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_L_io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_M_io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_R_io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_L_io_flush 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_7) 
           & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_M_io_flush 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_7) 
           & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_R_io_flush 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_7) 
           & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___T_4 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_en)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_L_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_L_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_M_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_M_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_R_io_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_R_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___GEN_2 
        = ((~ ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__returnPc_req_wait) 
               & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_en))) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__returnPc_req_wait));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___GEN_0 
        = ((~ ((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__pc_req_wait) 
                 & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_en)) 
                | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_7)) 
               | ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ready_to_branch) 
                  & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_en)))) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__pc_req_wait));
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_sram_en 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_en;
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_req 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_sram_en;
    vlSelf->__PVT__io_sram_req = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_req;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT___GEN_1 
        = ((1U == (3U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__ar_addr_reg, 2U, 2U)))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_banks_1_rdata
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_banks_0_rdata);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT___GEN_13 
        = ((1U == (3U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__ar_addr_reg, 2U, 2U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__tag_banks_1_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__tag_banks_0_rdata));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT___GEN_2 
        = ((2U == (3U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__ar_addr_reg, 2U, 2U)))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_banks_2_rdata
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT___GEN_1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT___GEN_14 
        = ((2U == (3U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__ar_addr_reg, 2U, 2U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__tag_banks_2_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT___GEN_13));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_out_L 
        = ((3U == (3U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__ar_addr_reg, 2U, 2U)))
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__btb_banks_3_rdata
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT___GEN_2);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT___GEN_15 
        = ((3U == (3U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__ar_addr_reg, 2U, 2U)))
            ? (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__tag_banks_3_rdata)
            : (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT___GEN_14));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_hit_L 
        = (((0xfU & VL_SEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT___GEN_15), 0U, 4U)) 
            == (0xfU & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_ar_addr_L, 0xdU, 4U))) 
           & VL_BITSEL_IIII(8, (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT___GEN_15), 4U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BTB_banks_oneissue_with_block_ram_io_out_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_out_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pre_target_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BTB_banks_oneissue_with_block_ram_io_out_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BTB_banks_oneissue_with_block_ram_io_hit_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram__BTB_banks_oneissue_with_block_ram.__PVT__io_hit_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_btb_hit_0 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__BTB_banks_oneissue_with_block_ram_io_hit_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_pre_target_L 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_pre_target_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_pre_target_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pre_target_0 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_pre_target_L;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_btb_hit_0 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_btb_hit_0;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_true_branch_state 
        = ((((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_pre_L) 
               & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_inst_branch) 
                  | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_inst_jump))) 
              & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_btb_hit_0)) 
             & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_stall_reg)) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_valid)) 
           & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_exception)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_branch_answer 
        = ((((((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_pre_L) 
               & ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_inst_branch) 
                  | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_inst_jump))) 
              & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_btb_hit_0)) 
             & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_stall_reg)) 
            & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_valid)) 
           & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_exception)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_write_in_0_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___pc_next_wait_T 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ready_to_branch) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_branch_answer));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage1_valid_flush 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ready_to_branch) 
           | (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_branch_answer));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_next 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_branch_answer)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pre_target_0
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_1_pc_next_T_1);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_pre_pc_target 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_pre_pc_target;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__io_write_in_0_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_1_valid_T_2 
        = ((~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___pc_next_wait_T)) 
           & (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_valid));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_stall 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall) 
           & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___pc_next_wait_T)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_stage2_stall 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall) 
           & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___pc_next_wait_T)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_L_io_stall 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall) 
           & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___pc_next_wait_T)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_M_io_stall 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall) 
           & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___pc_next_wait_T)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_R_io_stall 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage2_stall) 
           & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___pc_next_wait_T)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Pc_Next_normal 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__fifo_with_bundle_io_point_write_en)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__PC_nextD
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_next);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle.__PVT__io_in_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_io_in_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_1.__PVT__io_in_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_1_io_in_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_2.__PVT__io_in_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_2_io_in_true_branch_state;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle__Look_up_table_read_first_with_bundle_3.__PVT__io_in_true_branch_state 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu__fifo_with_bundle.__PVT__Look_up_table_read_first_with_bundle_3_io_in_true_branch_state;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_stage1_valid_flush 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage1_valid_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__branch_prediction_with_blockram.__PVT__io_stage2_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__branch_prediction_with_blockram_io_stage2_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_L.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_L_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_M.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_M_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_2_pc_R.__PVT__io_stall 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_2_pc_R_io_stall;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Pc_Next_T_1 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__pc_req_wait)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__pc_next_wait
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Pc_Next_normal);
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_stage1_valid_flush 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_stage1_valid_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Pc_Next_T_2 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__ready_to_branch)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Pc_Next_normal
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Pc_Next_T_1);
    vlSelf->__PVT__io_stage1_valid_flush = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_stage1_valid_flush;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Pc_Next_T_3 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__returnPc_req_wait)
            ? vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__exception_Pc_reg
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Pc_Next_T_2);
    vlSelf->__PVT__stage1_flush = ((~ (IData)(vlSelf->__PVT__io_sram_req)) 
                                   & (IData)(vlSelf->__PVT__io_stage1_valid_flush));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_L_io_in_pc_value_in 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_7)
            ? VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_return_pc)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Pc_Next_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_M_io_in_pc_value_in 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_7)
            ? VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_return_pc)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Pc_Next_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_R_io_in_pc_value_in 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_7)
            ? VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_return_pc)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Pc_Next_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_addr 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_7)
            ? VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_return_pc)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Pc_Next_T_3);
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Pc_Next 
        = ((IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___stage_fec_2_branch_answer_T_7)
            ? VL_EXTEND_QI(64,32, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___cp0_io_return_pc)
            : vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___Pc_Next_T_3);
    vlSelf->__PVT___stage1_sram_req_reg_T_1 = ((IData)(vlSelf->__PVT__io_sram_req) 
                                               | (IData)(vlSelf->__PVT__stage1_flush));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_L.__PVT__io_in_pc_value_in 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_L_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_M.__PVT__io_in_pc_value_in 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_M_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu__stage_fec_1_pc_R.__PVT__io_in_pc_value_in 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__stage_fec_1_pc_R_io_in_pc_value_in;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_cache 
        = (4U == (7U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Pc_Next, 0x1dU, 3U)));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_ready_to_use 
        = (0U == (3U & VL_SEL_IQII(64, vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__Pc_Next, 0U, 2U)));
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_sram_addr 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_sram_addr;
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_addr 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_sram_addr;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_ready_to_use 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_ready_to_use;
    vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_cache 
        = vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT__inst_cache;
    vlSelf->__PVT__io_sram_addr = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_addr;
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_inst_ready_to_use 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_ready_to_use;
    vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_cache 
        = vlSymsp->TOP__mycpu_top.__PVT__u_riscv_cpu_inst_cache;
    vlSelf->__PVT__io_sram_cache = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_sram_cache;
    vlSelf->__PVT__io_inst_ready_to_use = vlSymsp->TOP__mycpu_top.__PVT__inst_cache_io_inst_ready_to_use;
}
