// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_addr_cal.h"

VL_INLINE_OPT void Vmycpu_top_addr_cal___combo__TOP__mycpu_top__u_riscv_cpu___addr_cal__0(Vmycpu_top_addr_cal* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_addr_cal___combo__TOP__mycpu_top__u_riscv_cpu___addr_cal__0\n"); );
    // Body
    vlSelf->__PVT__io_d_cached = (4U == (7U & VL_SEL_IQII(64, vlSelf->__PVT__io_d_vaddr, 0x1dU, 3U)));
    vlSelf->__PVT__io_d_paddr = vlSelf->__PVT__io_d_vaddr;
}
