// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_myCPU.h"

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__1(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__1\n"); );
    // Body
    vlSelf->__PVT__target_neq_branchD = (vlSelf->__PVT__id_bru_state_io_out_target_pc 
                                         != vlSelf->__PVT__PCBranchD);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__3(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__3\n"); );
    // Body
    vlSelf->__PVT_____05Fmem2mem2_io_WriteCP0HiLoDataE_T_5 
        = VL_CONCAT_III(32,19,13, (0x7ffffU & VL_SEL_IQII(64, vlSelf->__PVT___ex2mem_io_PCM, 0xdU, 0x13U)), 
                        VL_EXTEND_II(13,8, (IData)(vlSelf->__PVT___cp0_io_asid)));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__4(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__4\n"); );
    // Body
    vlSelf->__PVT___Forward_Lock1E_T_3 = (1U & (~ ((IData)(vlSelf->__PVT___ex2mem_io_MemToRegM) 
                                                   | (IData)(vlSelf->__PVT___mem2mem2_io_MemToRegM))));
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__5(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__5\n"); );
    // Body
    vlSelf->__PVT___Forward_for_epc_T_6 = ((IData)(vlSelf->__PVT___Forward_for_epc_T_5)
                                            ? vlSelf->__PVT___mem2mem2_io_WriteCP0HiLoDataM
                                            : vlSelf->__PVT___cp0_io_epc);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__8(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__8\n"); );
    // Body
    vlSelf->__PVT__Forward_for_epc = (((IData)(vlSelf->__PVT___ex2mem_io_CP0WriteM) 
                                       & (0xeU == (IData)(vlSelf->__PVT___ex2mem_io_WriteCP0AddrM)))
                                       ? vlSelf->__PVT___ex2mem_io_WriteCP0HiLoDataM
                                       : vlSelf->__PVT___Forward_for_epc_T_6);
}

VL_INLINE_OPT void Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__10(Vmycpu_top_myCPU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_myCPU___multiclk__TOP__mycpu_top__u_riscv_cpu__10\n"); );
    // Body
    vlSelf->__PVT___BadVAddrE_T_8 = (VL_BITSEL_IIII(32, vlSelf->__PVT___id2ex_io_ExceptionTypeE_Out, 0x1fU) 
                                     & (0U != (3U & 
                                               VL_SEL_IIII(32, vlSelf->__PVT__Forward_for_epc, 0U, 2U))));
    vlSelf->__PVT_____05Fex2mem_io_ExceptionTypeE_T_4 
        = ((IData)(vlSelf->__PVT___BadVAddrE_T_8) ? 0x100000U
            : 0U);
    vlSelf->__PVT___GEN_18 = VL_EXTEND_II(32,21, vlSelf->__PVT_____05Fex2mem_io_ExceptionTypeE_T_4);
}
