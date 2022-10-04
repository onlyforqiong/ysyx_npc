// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_mem2wb.h"

VL_ATTR_COLD void Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__0(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___settle__TOP__mycpu_top__u_riscv_cpu___mem22wb__0\n"); );
    // Body
    vlSelf->__PVT__io_eBreakW = vlSelf->__PVT__ebreak_Reg;
    vlSelf->__PVT__io_Pc_NextW = vlSelf->__PVT__pc_nextReg;
    vlSelf->__PVT__io_InDelaySlotW = vlSelf->__PVT__InDelaySlotW;
    vlSelf->__PVT__io_WriteCP0HiLoDataW = vlSelf->__PVT__WriteCP0HiLoDataW;
    vlSelf->__PVT__io_CP0WriteW = vlSelf->__PVT__CP0WriteW;
    vlSelf->__PVT__io_WriteCP0AddrW = vlSelf->__PVT__WriteCP0AddrW;
    vlSelf->__PVT__io_WriteCP0SelW = vlSelf->__PVT__WriteCP0SelW;
    vlSelf->__PVT__io_BranchJump_JrW = vlSelf->__PVT__BranchJump_JrW_Reg;
    vlSelf->__PVT__io_ExceptionTypeW_Out = vlSelf->__PVT__ExceptionTypeW;
    vlSelf->__PVT__io_ResultW = vlSelf->__PVT__ResultW;
    vlSelf->__PVT__io_RegWriteW_Out = vlSelf->__PVT__RegWriteW;
    vlSelf->__PVT__io_WriteRegW = vlSelf->__PVT__WriteRegW;
    vlSelf->__PVT__io_PCW = vlSelf->__PVT__PCW;
}

VL_ATTR_COLD void Vmycpu_top_mem2wb___ctor_var_reset(Vmycpu_top_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_mem2wb___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__io_en = 0;
    vlSelf->__PVT__io_clr = 0;
    vlSelf->__PVT__io_RegWriteM = 0;
    vlSelf->__PVT__io_ResultM = 0;
    vlSelf->__PVT__io_WriteRegM = 0;
    vlSelf->__PVT__io_CP0WriteM = 0;
    vlSelf->__PVT__io_WriteCP0AddrM = 0;
    vlSelf->__PVT__io_WriteCP0SelM = 0;
    vlSelf->__PVT__io_WriteCP0HiLoDataM = 0;
    vlSelf->__PVT__io_PCM = 0;
    vlSelf->__PVT__io_InDelaySlotM = 0;
    vlSelf->__PVT__io_ExceptionTypeM = 0;
    vlSelf->__PVT__io_BranchJump_JrM = 0;
    vlSelf->__PVT__io_eBreakM = 0;
    vlSelf->__PVT__io_Pc_NextM = 0;
    vlSelf->__PVT__io_RegWriteW_Out = 0;
    vlSelf->__PVT__io_ResultW = 0;
    vlSelf->__PVT__io_WriteRegW = 0;
    vlSelf->__PVT__io_CP0WriteW = 0;
    vlSelf->__PVT__io_WriteCP0AddrW = 0;
    vlSelf->__PVT__io_WriteCP0SelW = 0;
    vlSelf->__PVT__io_WriteCP0HiLoDataW = 0;
    vlSelf->__PVT__io_PCW = 0;
    vlSelf->__PVT__io_InDelaySlotW = 0;
    vlSelf->__PVT__io_ExceptionTypeW_Out = 0;
    vlSelf->__PVT__io_BranchJump_JrW = 0;
    vlSelf->__PVT__io_eBreakW = 0;
    vlSelf->__PVT__io_Pc_NextW = 0;
    vlSelf->__PVT__RegWriteW = 0;
    vlSelf->__PVT__ResultW = 0;
    vlSelf->__PVT__WriteRegW = 0;
    vlSelf->__PVT__CP0WriteW = 0;
    vlSelf->__PVT__WriteCP0AddrW = 0;
    vlSelf->__PVT__WriteCP0SelW = 0;
    vlSelf->__PVT__WriteCP0HiLoDataW = 0;
    vlSelf->__PVT__PCW = 0;
    vlSelf->__PVT__InDelaySlotW = 0;
    vlSelf->__PVT__ExceptionTypeW = 0;
    vlSelf->__PVT__BranchJump_JrW_Reg = 0;
    vlSelf->__PVT__ebreak_Reg = 0;
    vlSelf->__PVT__pc_nextReg = 0;
    vlSelf->__Vdly__RegWriteW = 0;
    vlSelf->__Vdly__ResultW = 0;
    vlSelf->__Vdly__WriteRegW = 0;
    vlSelf->__Vdly__CP0WriteW = 0;
    vlSelf->__Vdly__WriteCP0AddrW = 0;
    vlSelf->__Vdly__WriteCP0SelW = 0;
    vlSelf->__Vdly__WriteCP0HiLoDataW = 0;
    vlSelf->__Vdly__PCW = 0;
    vlSelf->__Vdly__InDelaySlotW = 0;
    vlSelf->__Vdly__ExceptionTypeW = 0;
    vlSelf->__Vdly__BranchJump_JrW_Reg = 0;
    vlSelf->__Vdly__ebreak_Reg = 0;
    vlSelf->__Vdly__pc_nextReg = 0;
}
