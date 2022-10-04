// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_br.h"

VL_INLINE_OPT void Vmycpu_top_br___combo__TOP__mycpu_top__u_riscv_cpu___br__0(Vmycpu_top_br* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmycpu_top_br___combo__TOP__mycpu_top__u_riscv_cpu___br__0\n"); );
    // Body
    vlSelf->__PVT___result_T = (vlSelf->__PVT__io_r1 
                                >= vlSelf->__PVT__io_r2);
    vlSelf->__PVT___result_T_1 = (vlSelf->__PVT__io_r1 
                                  < vlSelf->__PVT__io_r2);
    vlSelf->__PVT___result_T_4 = VL_GTES_IQQ(64, vlSelf->__PVT__io_r1, vlSelf->__PVT__io_r2);
    vlSelf->__PVT___result_T_7 = VL_LTS_IQQ(64, vlSelf->__PVT__io_r1, vlSelf->__PVT__io_r2);
    vlSelf->__PVT___result_T_8 = (vlSelf->__PVT__io_r1 
                                  != vlSelf->__PVT__io_r2);
    vlSelf->__PVT___result_T_9 = (vlSelf->__PVT__io_r1 
                                  == vlSelf->__PVT__io_r2);
    vlSelf->__PVT__result = VL_CONCAT_III(6,1,5, (IData)(vlSelf->__PVT___result_T), 
                                          VL_CONCAT_III(5,1,4, (IData)(vlSelf->__PVT___result_T_1), 
                                                        VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT___result_T_4), 
                                                                      VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT___result_T_7), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT___result_T_8), (IData)(vlSelf->__PVT___result_T_9))))));
    vlSelf->__PVT___io_exe_T_4 = ((IData)(vlSelf->__PVT__result) 
                                  & (IData)(vlSelf->__PVT__io_branch));
    vlSelf->__PVT__io_exe = ((~ (IData)(vlSelf->__PVT__reset)) 
                             & (0U != (IData)(vlSelf->__PVT___io_exe_T_4)));
}
