// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_dmemreq.h"

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__0(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__0\n"); );
    // Body
    vlSelf->__PVT__io_wr = vlSelf->__PVT__io_MemWriteE;
    vlSelf->__PVT__io_size = vlSelf->__PVT__io_MemWidthE;
    vlSelf->__PVT___io_wstrb_T_14 = ((2U == (IData)(vlSelf->__PVT__io_MemWidthE))
                                      ? 0xfU : 0U);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__1(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__1\n"); );
    // Body
    vlSelf->__PVT___io_wdata_T_17 = VL_CONCAT_III(32,8,24, 
                                                  (0xffU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 8U)), 0U);
    vlSelf->__PVT___io_wdata_T_15 = VL_CONCAT_III(32,16,16, 
                                                  (0xffffU 
                                                   & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 0x10U)), 0U);
    vlSelf->__PVT___io_wdata_T_32 = VL_CONCAT_III(32,16,16, 
                                                  VL_EXTEND_II(16,8, 
                                                               (0xffU 
                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSelf->__PVT___io_wdata_T_30 = VL_CONCAT_III(32,24,8, 
                                                  VL_EXTEND_II(24,8, 
                                                               (0xffU 
                                                                & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 8U))), 0U);
    vlSelf->__PVT___io_wdata_T_28 = VL_EXTEND_II(32,16, 
                                                 (0xffffU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 0x10U)));
    vlSelf->__PVT___io_wdata_T_26 = VL_EXTEND_II(32,8, 
                                                 (0xffU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__io_WriteDataE, 0U, 8U)));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__2(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__2\n"); );
    // Body
    vlSelf->__PVT__ra = (3U & VL_SEL_IQII(64, vlSelf->__PVT__io_VAddrE, 0U, 2U));
    vlSelf->__PVT___io_wstrb_T_12 = VL_CONCAT_III(4,2,2, (IData)(vlSelf->__PVT__io_MemWidthE), (IData)(vlSelf->__PVT__ra));
    vlSelf->__PVT___io_wdata_T_24 = VL_CONCAT_III(4,2,2, (IData)(vlSelf->__PVT__ra), (IData)(vlSelf->__PVT__io_MemWidthE));
    vlSelf->__PVT___io_addr_T_4 = VL_CONCAT_III(32,30,2, 
                                                (0x3fffffffU 
                                                 & VL_SEL_IQII(64, vlSelf->__PVT__io_VAddrE, 2U, 0x1eU)), (IData)(vlSelf->__PVT__ra));
    vlSelf->__PVT___io_wstrb_T_16 = ((0U == (IData)(vlSelf->__PVT___io_wstrb_T_12))
                                      ? 1U : (IData)(vlSelf->__PVT___io_wstrb_T_14));
    vlSelf->__PVT___io_wdata_T_38 = ((0U == (IData)(vlSelf->__PVT___io_wdata_T_24))
                                      ? vlSelf->__PVT___io_wdata_T_26
                                      : 0U);
    vlSelf->__PVT__io_addr = VL_EXTEND_QI(64,32, vlSelf->__PVT___io_addr_T_4);
    vlSelf->__PVT___io_wstrb_T_18 = ((1U == (IData)(vlSelf->__PVT___io_wstrb_T_12))
                                      ? 2U : (IData)(vlSelf->__PVT___io_wstrb_T_16));
    vlSelf->__PVT___io_wdata_T_40 = ((1U == (IData)(vlSelf->__PVT___io_wdata_T_24))
                                      ? vlSelf->__PVT___io_wdata_T_28
                                      : vlSelf->__PVT___io_wdata_T_38);
    vlSelf->__PVT___io_wstrb_T_20 = ((2U == (IData)(vlSelf->__PVT___io_wstrb_T_12))
                                      ? 4U : (IData)(vlSelf->__PVT___io_wstrb_T_18));
    vlSelf->__PVT___io_wdata_T_42 = ((2U == (IData)(vlSelf->__PVT___io_wdata_T_24))
                                      ? vlSelf->__PVT__io_WriteDataE
                                      : VL_EXTEND_QI(64,32, vlSelf->__PVT___io_wdata_T_40));
    vlSelf->__PVT___io_wstrb_T_22 = ((3U == (IData)(vlSelf->__PVT___io_wstrb_T_12))
                                      ? 8U : (IData)(vlSelf->__PVT___io_wstrb_T_20));
    vlSelf->__PVT___io_wdata_T_44 = ((4U == (IData)(vlSelf->__PVT___io_wdata_T_24))
                                      ? VL_EXTEND_QI(64,32, vlSelf->__PVT___io_wdata_T_30)
                                      : vlSelf->__PVT___io_wdata_T_42);
    vlSelf->__PVT___io_wstrb_T_24 = ((4U == (IData)(vlSelf->__PVT___io_wstrb_T_12))
                                      ? 3U : (IData)(vlSelf->__PVT___io_wstrb_T_22));
    vlSelf->__PVT___io_wdata_T_46 = ((8U == (IData)(vlSelf->__PVT___io_wdata_T_24))
                                      ? VL_EXTEND_QI(64,32, vlSelf->__PVT___io_wdata_T_32)
                                      : vlSelf->__PVT___io_wdata_T_44);
    vlSelf->__PVT__io_wstrb = ((6U == (IData)(vlSelf->__PVT___io_wstrb_T_12))
                                ? 0xcU : (IData)(vlSelf->__PVT___io_wstrb_T_24));
    vlSelf->__PVT___io_wdata_T_48 = ((9U == (IData)(vlSelf->__PVT___io_wdata_T_24))
                                      ? VL_EXTEND_QI(64,32, vlSelf->__PVT___io_wdata_T_15)
                                      : vlSelf->__PVT___io_wdata_T_46);
    vlSelf->__PVT__io_wdata = ((0xcU == (IData)(vlSelf->__PVT___io_wdata_T_24))
                                ? VL_EXTEND_QI(64,32, vlSelf->__PVT___io_wdata_T_17)
                                : vlSelf->__PVT___io_wdata_T_48);
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__3(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___settle__TOP__mycpu_top__u_riscv_cpu___dmemreq__3\n"); );
    // Body
    vlSelf->__PVT__io_req = ((IData)(vlSelf->__PVT__io_en) 
                             & ((IData)(vlSelf->__PVT__io_MemToRegE) 
                                | (IData)(vlSelf->__PVT__io_MemWriteE)));
}

VL_ATTR_COLD void Vmycpu_top_dmemreq___ctor_var_reset(Vmycpu_top_dmemreq* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_dmemreq___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_en = 0;
    vlSelf->__PVT__io_MemWriteE = 0;
    vlSelf->__PVT__io_MemToRegE = 0;
    vlSelf->__PVT__io_MemWidthE = 0;
    vlSelf->__PVT__io_VAddrE = 0;
    vlSelf->__PVT__io_WriteDataE = 0;
    vlSelf->__PVT__io_req = 0;
    vlSelf->__PVT__io_wr = 0;
    vlSelf->__PVT__io_size = 0;
    vlSelf->__PVT__io_addr = 0;
    vlSelf->__PVT__io_wdata = 0;
    vlSelf->__PVT__io_wstrb = 0;
    vlSelf->__PVT__ra = 0;
    vlSelf->__PVT___io_addr_T_4 = 0;
    vlSelf->__PVT___io_wstrb_T_12 = 0;
    vlSelf->__PVT___io_wstrb_T_14 = 0;
    vlSelf->__PVT___io_wstrb_T_16 = 0;
    vlSelf->__PVT___io_wstrb_T_18 = 0;
    vlSelf->__PVT___io_wstrb_T_20 = 0;
    vlSelf->__PVT___io_wstrb_T_22 = 0;
    vlSelf->__PVT___io_wstrb_T_24 = 0;
    vlSelf->__PVT___io_wdata_T_15 = 0;
    vlSelf->__PVT___io_wdata_T_17 = 0;
    vlSelf->__PVT___io_wdata_T_24 = 0;
    vlSelf->__PVT___io_wdata_T_26 = 0;
    vlSelf->__PVT___io_wdata_T_28 = 0;
    vlSelf->__PVT___io_wdata_T_30 = 0;
    vlSelf->__PVT___io_wdata_T_32 = 0;
    vlSelf->__PVT___io_wdata_T_38 = 0;
    vlSelf->__PVT___io_wdata_T_40 = 0;
    vlSelf->__PVT___io_wdata_T_42 = 0;
    vlSelf->__PVT___io_wdata_T_44 = 0;
    vlSelf->__PVT___io_wdata_T_46 = 0;
    vlSelf->__PVT___io_wdata_T_48 = 0;
}
