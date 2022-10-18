// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_cu.h"

VL_INLINE_OPT void Vmycpu_top_cu___combo__TOP__mycpu_top__u_riscv_cpu___cu__0(Vmycpu_top_cu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_cu___combo__TOP__mycpu_top__u_riscv_cpu___cu__0\n"); );
    // Body
    vlSelf->__PVT__Funct3D = (7U & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0xcU, 3U));
    vlSelf->__PVT__Funct7D = (0x7fU & VL_SEL_IIII(32, vlSelf->__PVT__io1_InstrD, 0x19U, 7U));
    vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT___io_Forward2D_T_11 
        = (1U & (~ (IData)(vlSymsp->TOP__mycpu_top__u_riscv_cpu___cfu.__PVT__io_MemToRegM2)));
    vlSelf->__PVT___inst_code_type_T_2 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                           ? 0xfU : 0U);
    vlSelf->__PVT___inst_code_type_T_8 = ((2U == (IData)(vlSelf->__PVT__Funct3D))
                                           ? 0xdU : 4U);
    vlSelf->__PVT___inst_code_type_T_25 = ((0x20U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x36U
                                            : 0U);
    vlSelf->__PVT___inst_code_type_T_27 = ((0U == (IData)(vlSelf->__PVT__Funct7D))
                                            ? 0x30U
                                            : (IData)(vlSelf->__PVT___inst_code_type_T_25));
}
