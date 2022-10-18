// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_id2ex.h"

VL_INLINE_OPT void Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__13(Vmycpu_top_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_id2ex___sequent__TOP__mycpu_top__u_riscv_cpu___id2ex__13\n"); );
    // Body
    vlSelf->__PVT__RegWriteE_Reg = vlSelf->__Vdly__RegWriteE_Reg;
    vlSelf->__PVT__RegDstE_Reg = vlSelf->__Vdly__RegDstE_Reg;
    vlSelf->__PVT__io2_RegWriteE = vlSelf->__PVT__RegWriteE_Reg;
    vlSelf->__PVT__io2_RegDstE = vlSelf->__PVT__RegDstE_Reg;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_RegWriteE 
        = vlSelf->__PVT__io2_RegWriteE;
    vlSymsp->TOP__mycpu_top__u_riscv_cpu.__PVT___id2ex_io2_RegDstE 
        = vlSelf->__PVT__io2_RegDstE;
}
