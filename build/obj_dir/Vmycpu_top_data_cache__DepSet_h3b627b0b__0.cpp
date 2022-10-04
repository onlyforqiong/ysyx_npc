// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top_data_cache.h"

VL_INLINE_OPT void Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__0(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___sequent__TOP__mycpu_top__data_cache__0\n"); );
    // Body
    vlSelf->__Vdly__stage1_sram_size_reg = vlSelf->__PVT__stage1_sram_size_reg;
    vlSelf->__Vdly__stage1_sram_wdata_reg = vlSelf->__PVT__stage1_sram_wdata_reg;
    vlSelf->__Vdly__stage1_wstrb_reg = vlSelf->__PVT__stage1_wstrb_reg;
    vlSelf->__Vdly__stage2_sram_write_reg = vlSelf->__PVT__stage2_sram_write_reg;
    vlSelf->__Vdly__stage2_stall_reg = vlSelf->__PVT__stage2_stall_reg;
    vlSelf->__Vdly__write_access_complete_reg = vlSelf->__PVT__write_access_complete_reg;
    vlSelf->__Vdly__write_counter = vlSelf->__PVT__write_counter;
    vlSelf->__Vdly__read_counter = vlSelf->__PVT__read_counter;
    vlSelf->__Vdly__stage1_sram_req_reg = vlSelf->__PVT__stage1_sram_req_reg;
    vlSelf->__Vdly__stage1_sram_cache_reg = vlSelf->__PVT__stage1_sram_cache_reg;
    vlSelf->__Vdly__work_state = vlSelf->__PVT__work_state;
    vlSelf->__Vdly__sram_rdata_reg = vlSelf->__PVT__sram_rdata_reg;
    vlSelf->__Vdly__stage1_sram_phy_addr_reg = vlSelf->__PVT__stage1_sram_phy_addr_reg;
    vlSelf->__Vdly__way1_dirty_127 = vlSelf->__PVT__way1_dirty_127;
    vlSelf->__Vdly__way1_dirty_126 = vlSelf->__PVT__way1_dirty_126;
    vlSelf->__Vdly__way1_dirty_125 = vlSelf->__PVT__way1_dirty_125;
    vlSelf->__Vdly__way1_dirty_124 = vlSelf->__PVT__way1_dirty_124;
    vlSelf->__Vdly__way1_dirty_123 = vlSelf->__PVT__way1_dirty_123;
    vlSelf->__Vdly__way1_dirty_122 = vlSelf->__PVT__way1_dirty_122;
    vlSelf->__Vdly__way1_dirty_121 = vlSelf->__PVT__way1_dirty_121;
    vlSelf->__Vdly__way1_dirty_120 = vlSelf->__PVT__way1_dirty_120;
    vlSelf->__Vdly__way1_dirty_119 = vlSelf->__PVT__way1_dirty_119;
    vlSelf->__Vdly__way1_dirty_118 = vlSelf->__PVT__way1_dirty_118;
    vlSelf->__Vdly__way1_dirty_117 = vlSelf->__PVT__way1_dirty_117;
    vlSelf->__Vdly__way1_dirty_116 = vlSelf->__PVT__way1_dirty_116;
    vlSelf->__Vdly__way1_dirty_115 = vlSelf->__PVT__way1_dirty_115;
    vlSelf->__Vdly__way1_dirty_114 = vlSelf->__PVT__way1_dirty_114;
    vlSelf->__Vdly__way1_dirty_113 = vlSelf->__PVT__way1_dirty_113;
    vlSelf->__Vdly__way1_dirty_112 = vlSelf->__PVT__way1_dirty_112;
    vlSelf->__Vdly__way1_dirty_111 = vlSelf->__PVT__way1_dirty_111;
    vlSelf->__Vdly__way1_dirty_110 = vlSelf->__PVT__way1_dirty_110;
    vlSelf->__Vdly__way1_dirty_109 = vlSelf->__PVT__way1_dirty_109;
    vlSelf->__Vdly__way1_dirty_108 = vlSelf->__PVT__way1_dirty_108;
    vlSelf->__Vdly__way1_dirty_107 = vlSelf->__PVT__way1_dirty_107;
    vlSelf->__Vdly__way1_dirty_106 = vlSelf->__PVT__way1_dirty_106;
    vlSelf->__Vdly__way1_dirty_105 = vlSelf->__PVT__way1_dirty_105;
    vlSelf->__Vdly__way1_dirty_104 = vlSelf->__PVT__way1_dirty_104;
    vlSelf->__Vdly__way1_dirty_103 = vlSelf->__PVT__way1_dirty_103;
    vlSelf->__Vdly__way1_dirty_102 = vlSelf->__PVT__way1_dirty_102;
    vlSelf->__Vdly__way1_dirty_101 = vlSelf->__PVT__way1_dirty_101;
    vlSelf->__Vdly__way1_dirty_100 = vlSelf->__PVT__way1_dirty_100;
    vlSelf->__Vdly__way1_dirty_99 = vlSelf->__PVT__way1_dirty_99;
    vlSelf->__Vdly__way1_dirty_98 = vlSelf->__PVT__way1_dirty_98;
    vlSelf->__Vdly__way1_dirty_97 = vlSelf->__PVT__way1_dirty_97;
    vlSelf->__Vdly__way1_dirty_96 = vlSelf->__PVT__way1_dirty_96;
    vlSelf->__Vdly__way1_dirty_95 = vlSelf->__PVT__way1_dirty_95;
    vlSelf->__Vdly__way1_dirty_94 = vlSelf->__PVT__way1_dirty_94;
    vlSelf->__Vdly__way1_dirty_93 = vlSelf->__PVT__way1_dirty_93;
    vlSelf->__Vdly__way1_dirty_92 = vlSelf->__PVT__way1_dirty_92;
    vlSelf->__Vdly__way1_dirty_91 = vlSelf->__PVT__way1_dirty_91;
    vlSelf->__Vdly__way1_dirty_90 = vlSelf->__PVT__way1_dirty_90;
    vlSelf->__Vdly__way1_dirty_89 = vlSelf->__PVT__way1_dirty_89;
    vlSelf->__Vdly__way1_dirty_88 = vlSelf->__PVT__way1_dirty_88;
    vlSelf->__Vdly__way1_dirty_87 = vlSelf->__PVT__way1_dirty_87;
    vlSelf->__Vdly__way1_dirty_86 = vlSelf->__PVT__way1_dirty_86;
    vlSelf->__Vdly__way1_dirty_85 = vlSelf->__PVT__way1_dirty_85;
    vlSelf->__Vdly__way1_dirty_84 = vlSelf->__PVT__way1_dirty_84;
    vlSelf->__Vdly__way1_dirty_83 = vlSelf->__PVT__way1_dirty_83;
    vlSelf->__Vdly__way1_dirty_82 = vlSelf->__PVT__way1_dirty_82;
    vlSelf->__Vdly__way1_dirty_81 = vlSelf->__PVT__way1_dirty_81;
    vlSelf->__Vdly__way1_dirty_80 = vlSelf->__PVT__way1_dirty_80;
    vlSelf->__Vdly__way1_dirty_79 = vlSelf->__PVT__way1_dirty_79;
    vlSelf->__Vdly__way1_dirty_78 = vlSelf->__PVT__way1_dirty_78;
    vlSelf->__Vdly__way1_dirty_77 = vlSelf->__PVT__way1_dirty_77;
    vlSelf->__Vdly__way1_dirty_76 = vlSelf->__PVT__way1_dirty_76;
    vlSelf->__Vdly__way1_dirty_75 = vlSelf->__PVT__way1_dirty_75;
    vlSelf->__Vdly__way1_dirty_74 = vlSelf->__PVT__way1_dirty_74;
    vlSelf->__Vdly__way1_dirty_73 = vlSelf->__PVT__way1_dirty_73;
    vlSelf->__Vdly__way1_dirty_72 = vlSelf->__PVT__way1_dirty_72;
    vlSelf->__Vdly__way1_dirty_71 = vlSelf->__PVT__way1_dirty_71;
    vlSelf->__Vdly__way1_dirty_70 = vlSelf->__PVT__way1_dirty_70;
    vlSelf->__Vdly__way1_dirty_69 = vlSelf->__PVT__way1_dirty_69;
    vlSelf->__Vdly__way1_dirty_68 = vlSelf->__PVT__way1_dirty_68;
    vlSelf->__Vdly__way1_dirty_67 = vlSelf->__PVT__way1_dirty_67;
    vlSelf->__Vdly__way1_dirty_66 = vlSelf->__PVT__way1_dirty_66;
    vlSelf->__Vdly__way1_dirty_65 = vlSelf->__PVT__way1_dirty_65;
    vlSelf->__Vdly__way1_dirty_64 = vlSelf->__PVT__way1_dirty_64;
    vlSelf->__Vdly__way1_dirty_63 = vlSelf->__PVT__way1_dirty_63;
    vlSelf->__Vdly__way1_dirty_62 = vlSelf->__PVT__way1_dirty_62;
    vlSelf->__Vdly__way1_dirty_61 = vlSelf->__PVT__way1_dirty_61;
    vlSelf->__Vdly__way1_dirty_60 = vlSelf->__PVT__way1_dirty_60;
    vlSelf->__Vdly__way1_dirty_59 = vlSelf->__PVT__way1_dirty_59;
    vlSelf->__Vdly__way1_dirty_58 = vlSelf->__PVT__way1_dirty_58;
    vlSelf->__Vdly__way1_dirty_57 = vlSelf->__PVT__way1_dirty_57;
    vlSelf->__Vdly__way1_dirty_56 = vlSelf->__PVT__way1_dirty_56;
    vlSelf->__Vdly__way1_dirty_55 = vlSelf->__PVT__way1_dirty_55;
    vlSelf->__Vdly__way1_dirty_54 = vlSelf->__PVT__way1_dirty_54;
    vlSelf->__Vdly__way1_dirty_53 = vlSelf->__PVT__way1_dirty_53;
    vlSelf->__Vdly__way1_dirty_52 = vlSelf->__PVT__way1_dirty_52;
    vlSelf->__Vdly__way1_dirty_51 = vlSelf->__PVT__way1_dirty_51;
    vlSelf->__Vdly__way1_dirty_50 = vlSelf->__PVT__way1_dirty_50;
    vlSelf->__Vdly__way1_dirty_49 = vlSelf->__PVT__way1_dirty_49;
    vlSelf->__Vdly__way1_dirty_48 = vlSelf->__PVT__way1_dirty_48;
    vlSelf->__Vdly__way1_dirty_47 = vlSelf->__PVT__way1_dirty_47;
    vlSelf->__Vdly__way1_dirty_46 = vlSelf->__PVT__way1_dirty_46;
    vlSelf->__Vdly__way1_dirty_45 = vlSelf->__PVT__way1_dirty_45;
    vlSelf->__Vdly__way1_dirty_44 = vlSelf->__PVT__way1_dirty_44;
    vlSelf->__Vdly__way1_dirty_43 = vlSelf->__PVT__way1_dirty_43;
    vlSelf->__Vdly__way1_dirty_42 = vlSelf->__PVT__way1_dirty_42;
    vlSelf->__Vdly__way1_dirty_41 = vlSelf->__PVT__way1_dirty_41;
    vlSelf->__Vdly__way1_dirty_40 = vlSelf->__PVT__way1_dirty_40;
    vlSelf->__Vdly__way1_dirty_39 = vlSelf->__PVT__way1_dirty_39;
    vlSelf->__Vdly__way1_dirty_38 = vlSelf->__PVT__way1_dirty_38;
    vlSelf->__Vdly__way1_dirty_37 = vlSelf->__PVT__way1_dirty_37;
    vlSelf->__Vdly__way1_dirty_36 = vlSelf->__PVT__way1_dirty_36;
    vlSelf->__Vdly__way1_dirty_35 = vlSelf->__PVT__way1_dirty_35;
    vlSelf->__Vdly__way1_dirty_34 = vlSelf->__PVT__way1_dirty_34;
    vlSelf->__Vdly__way1_dirty_33 = vlSelf->__PVT__way1_dirty_33;
    vlSelf->__Vdly__way1_dirty_32 = vlSelf->__PVT__way1_dirty_32;
    vlSelf->__Vdly__way1_dirty_31 = vlSelf->__PVT__way1_dirty_31;
    vlSelf->__Vdly__way1_dirty_30 = vlSelf->__PVT__way1_dirty_30;
    vlSelf->__Vdly__way1_dirty_29 = vlSelf->__PVT__way1_dirty_29;
    vlSelf->__Vdly__way1_dirty_28 = vlSelf->__PVT__way1_dirty_28;
    vlSelf->__Vdly__way1_dirty_27 = vlSelf->__PVT__way1_dirty_27;
    vlSelf->__Vdly__way1_dirty_26 = vlSelf->__PVT__way1_dirty_26;
    vlSelf->__Vdly__way1_dirty_25 = vlSelf->__PVT__way1_dirty_25;
    vlSelf->__Vdly__way1_dirty_24 = vlSelf->__PVT__way1_dirty_24;
    vlSelf->__Vdly__way1_dirty_23 = vlSelf->__PVT__way1_dirty_23;
    vlSelf->__Vdly__way1_dirty_22 = vlSelf->__PVT__way1_dirty_22;
    vlSelf->__Vdly__way1_dirty_21 = vlSelf->__PVT__way1_dirty_21;
    vlSelf->__Vdly__way1_dirty_20 = vlSelf->__PVT__way1_dirty_20;
    vlSelf->__Vdly__way1_dirty_19 = vlSelf->__PVT__way1_dirty_19;
    vlSelf->__Vdly__way1_dirty_18 = vlSelf->__PVT__way1_dirty_18;
    vlSelf->__Vdly__way1_dirty_17 = vlSelf->__PVT__way1_dirty_17;
    vlSelf->__Vdly__way1_dirty_16 = vlSelf->__PVT__way1_dirty_16;
    vlSelf->__Vdly__way1_dirty_15 = vlSelf->__PVT__way1_dirty_15;
    vlSelf->__Vdly__way1_dirty_14 = vlSelf->__PVT__way1_dirty_14;
    vlSelf->__Vdly__way1_dirty_13 = vlSelf->__PVT__way1_dirty_13;
    vlSelf->__Vdly__way1_dirty_12 = vlSelf->__PVT__way1_dirty_12;
    vlSelf->__Vdly__way1_dirty_11 = vlSelf->__PVT__way1_dirty_11;
    vlSelf->__Vdly__way1_dirty_10 = vlSelf->__PVT__way1_dirty_10;
    vlSelf->__Vdly__way1_dirty_9 = vlSelf->__PVT__way1_dirty_9;
    vlSelf->__Vdly__way1_dirty_8 = vlSelf->__PVT__way1_dirty_8;
    vlSelf->__Vdly__way1_dirty_7 = vlSelf->__PVT__way1_dirty_7;
    vlSelf->__Vdly__way0_dirty_127 = vlSelf->__PVT__way0_dirty_127;
    vlSelf->__Vdly__way0_dirty_126 = vlSelf->__PVT__way0_dirty_126;
    vlSelf->__Vdly__way0_dirty_125 = vlSelf->__PVT__way0_dirty_125;
    vlSelf->__Vdly__way0_dirty_124 = vlSelf->__PVT__way0_dirty_124;
    vlSelf->__Vdly__way0_dirty_123 = vlSelf->__PVT__way0_dirty_123;
    vlSelf->__Vdly__way0_dirty_122 = vlSelf->__PVT__way0_dirty_122;
    vlSelf->__Vdly__way0_dirty_121 = vlSelf->__PVT__way0_dirty_121;
    vlSelf->__Vdly__way0_dirty_120 = vlSelf->__PVT__way0_dirty_120;
    vlSelf->__Vdly__way0_dirty_119 = vlSelf->__PVT__way0_dirty_119;
    vlSelf->__Vdly__way0_dirty_118 = vlSelf->__PVT__way0_dirty_118;
    vlSelf->__Vdly__way0_dirty_117 = vlSelf->__PVT__way0_dirty_117;
    vlSelf->__Vdly__way0_dirty_116 = vlSelf->__PVT__way0_dirty_116;
    vlSelf->__Vdly__way0_dirty_115 = vlSelf->__PVT__way0_dirty_115;
    vlSelf->__Vdly__way0_dirty_114 = vlSelf->__PVT__way0_dirty_114;
    vlSelf->__Vdly__way0_dirty_113 = vlSelf->__PVT__way0_dirty_113;
    vlSelf->__Vdly__way0_dirty_112 = vlSelf->__PVT__way0_dirty_112;
    vlSelf->__Vdly__way0_dirty_111 = vlSelf->__PVT__way0_dirty_111;
    vlSelf->__Vdly__way0_dirty_110 = vlSelf->__PVT__way0_dirty_110;
    vlSelf->__Vdly__way0_dirty_109 = vlSelf->__PVT__way0_dirty_109;
    vlSelf->__Vdly__way0_dirty_108 = vlSelf->__PVT__way0_dirty_108;
    vlSelf->__Vdly__way0_dirty_107 = vlSelf->__PVT__way0_dirty_107;
    vlSelf->__Vdly__way0_dirty_106 = vlSelf->__PVT__way0_dirty_106;
    vlSelf->__Vdly__way0_dirty_105 = vlSelf->__PVT__way0_dirty_105;
    vlSelf->__Vdly__way0_dirty_104 = vlSelf->__PVT__way0_dirty_104;
    vlSelf->__Vdly__way0_dirty_103 = vlSelf->__PVT__way0_dirty_103;
    vlSelf->__Vdly__way0_dirty_102 = vlSelf->__PVT__way0_dirty_102;
    vlSelf->__Vdly__way0_dirty_101 = vlSelf->__PVT__way0_dirty_101;
    vlSelf->__Vdly__way0_dirty_100 = vlSelf->__PVT__way0_dirty_100;
    vlSelf->__Vdly__way0_dirty_99 = vlSelf->__PVT__way0_dirty_99;
    vlSelf->__Vdly__way0_dirty_98 = vlSelf->__PVT__way0_dirty_98;
    vlSelf->__Vdly__way0_dirty_97 = vlSelf->__PVT__way0_dirty_97;
    vlSelf->__Vdly__way0_dirty_96 = vlSelf->__PVT__way0_dirty_96;
    vlSelf->__Vdly__way0_dirty_95 = vlSelf->__PVT__way0_dirty_95;
    vlSelf->__Vdly__way0_dirty_94 = vlSelf->__PVT__way0_dirty_94;
    vlSelf->__Vdly__way0_dirty_93 = vlSelf->__PVT__way0_dirty_93;
    vlSelf->__Vdly__way0_dirty_92 = vlSelf->__PVT__way0_dirty_92;
    vlSelf->__Vdly__way0_dirty_91 = vlSelf->__PVT__way0_dirty_91;
    vlSelf->__Vdly__way0_dirty_90 = vlSelf->__PVT__way0_dirty_90;
    vlSelf->__Vdly__way0_dirty_89 = vlSelf->__PVT__way0_dirty_89;
    vlSelf->__Vdly__way0_dirty_88 = vlSelf->__PVT__way0_dirty_88;
    vlSelf->__Vdly__way0_dirty_87 = vlSelf->__PVT__way0_dirty_87;
    vlSelf->__Vdly__way0_dirty_86 = vlSelf->__PVT__way0_dirty_86;
    vlSelf->__Vdly__way0_dirty_85 = vlSelf->__PVT__way0_dirty_85;
    vlSelf->__Vdly__way0_dirty_84 = vlSelf->__PVT__way0_dirty_84;
    vlSelf->__Vdly__way0_dirty_83 = vlSelf->__PVT__way0_dirty_83;
    vlSelf->__Vdly__way0_dirty_82 = vlSelf->__PVT__way0_dirty_82;
    vlSelf->__Vdly__way0_dirty_81 = vlSelf->__PVT__way0_dirty_81;
    vlSelf->__Vdly__way0_dirty_80 = vlSelf->__PVT__way0_dirty_80;
    vlSelf->__Vdly__way0_dirty_79 = vlSelf->__PVT__way0_dirty_79;
    vlSelf->__Vdly__way0_dirty_78 = vlSelf->__PVT__way0_dirty_78;
    vlSelf->__Vdly__way0_dirty_77 = vlSelf->__PVT__way0_dirty_77;
    vlSelf->__Vdly__way0_dirty_76 = vlSelf->__PVT__way0_dirty_76;
    vlSelf->__Vdly__way0_dirty_75 = vlSelf->__PVT__way0_dirty_75;
    vlSelf->__Vdly__way0_dirty_74 = vlSelf->__PVT__way0_dirty_74;
    vlSelf->__Vdly__way0_dirty_73 = vlSelf->__PVT__way0_dirty_73;
    vlSelf->__Vdly__way0_dirty_72 = vlSelf->__PVT__way0_dirty_72;
    vlSelf->__Vdly__way0_dirty_71 = vlSelf->__PVT__way0_dirty_71;
    vlSelf->__Vdly__way0_dirty_70 = vlSelf->__PVT__way0_dirty_70;
    vlSelf->__Vdly__way0_dirty_69 = vlSelf->__PVT__way0_dirty_69;
    vlSelf->__Vdly__way0_dirty_68 = vlSelf->__PVT__way0_dirty_68;
    vlSelf->__Vdly__way0_dirty_67 = vlSelf->__PVT__way0_dirty_67;
    vlSelf->__Vdly__way0_dirty_66 = vlSelf->__PVT__way0_dirty_66;
    vlSelf->__Vdly__way0_dirty_65 = vlSelf->__PVT__way0_dirty_65;
    vlSelf->__Vdly__way0_dirty_64 = vlSelf->__PVT__way0_dirty_64;
    vlSelf->__Vdly__way0_dirty_63 = vlSelf->__PVT__way0_dirty_63;
    vlSelf->__Vdly__way0_dirty_62 = vlSelf->__PVT__way0_dirty_62;
    vlSelf->__Vdly__way0_dirty_61 = vlSelf->__PVT__way0_dirty_61;
    vlSelf->__Vdly__way0_dirty_60 = vlSelf->__PVT__way0_dirty_60;
    vlSelf->__Vdly__way0_dirty_59 = vlSelf->__PVT__way0_dirty_59;
    vlSelf->__Vdly__way0_dirty_58 = vlSelf->__PVT__way0_dirty_58;
    vlSelf->__Vdly__way0_dirty_57 = vlSelf->__PVT__way0_dirty_57;
    vlSelf->__Vdly__way0_dirty_56 = vlSelf->__PVT__way0_dirty_56;
    vlSelf->__Vdly__way0_dirty_55 = vlSelf->__PVT__way0_dirty_55;
    vlSelf->__Vdly__way0_dirty_54 = vlSelf->__PVT__way0_dirty_54;
    vlSelf->__Vdly__way0_dirty_53 = vlSelf->__PVT__way0_dirty_53;
    vlSelf->__Vdly__way0_dirty_52 = vlSelf->__PVT__way0_dirty_52;
    vlSelf->__Vdly__way0_dirty_51 = vlSelf->__PVT__way0_dirty_51;
    vlSelf->__Vdly__way0_dirty_50 = vlSelf->__PVT__way0_dirty_50;
    vlSelf->__Vdly__way0_dirty_49 = vlSelf->__PVT__way0_dirty_49;
    vlSelf->__Vdly__way0_dirty_48 = vlSelf->__PVT__way0_dirty_48;
    vlSelf->__Vdly__way0_dirty_47 = vlSelf->__PVT__way0_dirty_47;
    vlSelf->__Vdly__way0_dirty_46 = vlSelf->__PVT__way0_dirty_46;
    vlSelf->__Vdly__way0_dirty_45 = vlSelf->__PVT__way0_dirty_45;
    vlSelf->__Vdly__way0_dirty_44 = vlSelf->__PVT__way0_dirty_44;
    vlSelf->__Vdly__way0_dirty_43 = vlSelf->__PVT__way0_dirty_43;
    vlSelf->__Vdly__way0_dirty_42 = vlSelf->__PVT__way0_dirty_42;
    vlSelf->__Vdly__way0_dirty_41 = vlSelf->__PVT__way0_dirty_41;
    vlSelf->__Vdly__way0_dirty_40 = vlSelf->__PVT__way0_dirty_40;
    vlSelf->__Vdly__way0_dirty_39 = vlSelf->__PVT__way0_dirty_39;
    vlSelf->__Vdly__way0_dirty_38 = vlSelf->__PVT__way0_dirty_38;
    vlSelf->__Vdly__way0_dirty_37 = vlSelf->__PVT__way0_dirty_37;
    vlSelf->__Vdly__way0_dirty_36 = vlSelf->__PVT__way0_dirty_36;
    vlSelf->__Vdly__way0_dirty_35 = vlSelf->__PVT__way0_dirty_35;
    vlSelf->__Vdly__way0_dirty_34 = vlSelf->__PVT__way0_dirty_34;
    vlSelf->__Vdly__way0_dirty_33 = vlSelf->__PVT__way0_dirty_33;
    vlSelf->__Vdly__way0_dirty_32 = vlSelf->__PVT__way0_dirty_32;
    vlSelf->__Vdly__way0_dirty_31 = vlSelf->__PVT__way0_dirty_31;
    vlSelf->__Vdly__way0_dirty_30 = vlSelf->__PVT__way0_dirty_30;
    vlSelf->__Vdly__way0_dirty_29 = vlSelf->__PVT__way0_dirty_29;
    vlSelf->__Vdly__way0_dirty_28 = vlSelf->__PVT__way0_dirty_28;
    vlSelf->__Vdly__way0_dirty_27 = vlSelf->__PVT__way0_dirty_27;
    vlSelf->__Vdly__way0_dirty_26 = vlSelf->__PVT__way0_dirty_26;
    vlSelf->__Vdly__way0_dirty_25 = vlSelf->__PVT__way0_dirty_25;
    vlSelf->__Vdly__way0_dirty_24 = vlSelf->__PVT__way0_dirty_24;
    vlSelf->__Vdly__way0_dirty_23 = vlSelf->__PVT__way0_dirty_23;
    vlSelf->__Vdly__way0_dirty_22 = vlSelf->__PVT__way0_dirty_22;
    vlSelf->__Vdly__way0_dirty_21 = vlSelf->__PVT__way0_dirty_21;
    vlSelf->__Vdly__way0_dirty_20 = vlSelf->__PVT__way0_dirty_20;
    vlSelf->__Vdly__way0_dirty_19 = vlSelf->__PVT__way0_dirty_19;
    vlSelf->__Vdly__way0_dirty_18 = vlSelf->__PVT__way0_dirty_18;
    vlSelf->__Vdly__way0_dirty_17 = vlSelf->__PVT__way0_dirty_17;
    vlSelf->__Vdly__way0_dirty_16 = vlSelf->__PVT__way0_dirty_16;
    vlSelf->__Vdly__way0_dirty_15 = vlSelf->__PVT__way0_dirty_15;
    vlSelf->__Vdly__way0_dirty_14 = vlSelf->__PVT__way0_dirty_14;
    vlSelf->__Vdly__way0_dirty_13 = vlSelf->__PVT__way0_dirty_13;
    vlSelf->__Vdly__way0_dirty_12 = vlSelf->__PVT__way0_dirty_12;
    vlSelf->__Vdly__way0_dirty_11 = vlSelf->__PVT__way0_dirty_11;
    vlSelf->__Vdly__way0_dirty_10 = vlSelf->__PVT__way0_dirty_10;
    vlSelf->__Vdly__way0_dirty_9 = vlSelf->__PVT__way0_dirty_9;
    vlSelf->__Vdly__way0_dirty_8 = vlSelf->__PVT__way0_dirty_8;
    vlSelf->__Vdly__way0_dirty_7 = vlSelf->__PVT__way0_dirty_7;
    vlSelf->__Vdly__way1_dirty_6 = vlSelf->__PVT__way1_dirty_6;
    vlSelf->__Vdly__way0_dirty_6 = vlSelf->__PVT__way0_dirty_6;
    vlSelf->__Vdly__way1_dirty_5 = vlSelf->__PVT__way1_dirty_5;
    vlSelf->__Vdly__way0_dirty_5 = vlSelf->__PVT__way0_dirty_5;
    vlSelf->__Vdly__way1_dirty_4 = vlSelf->__PVT__way1_dirty_4;
    vlSelf->__Vdly__way0_dirty_4 = vlSelf->__PVT__way0_dirty_4;
    vlSelf->__Vdly__way1_dirty_3 = vlSelf->__PVT__way1_dirty_3;
    vlSelf->__Vdly__way0_dirty_3 = vlSelf->__PVT__way0_dirty_3;
    vlSelf->__Vdly__way1_dirty_2 = vlSelf->__PVT__way1_dirty_2;
    vlSelf->__Vdly__way0_dirty_2 = vlSelf->__PVT__way0_dirty_2;
    vlSelf->__Vdly__way1_dirty_1 = vlSelf->__PVT__way1_dirty_1;
    vlSelf->__Vdly__way1_dirty_0 = vlSelf->__PVT__way1_dirty_0;
    vlSelf->__Vdly__way0_dirty_1 = vlSelf->__PVT__way0_dirty_1;
    vlSelf->__Vdly__way0_dirty_0 = vlSelf->__PVT__way0_dirty_0;
    vlSelf->__Vdly__lru_126 = vlSelf->__PVT__lru_126;
    vlSelf->__Vdly__lru_125 = vlSelf->__PVT__lru_125;
    vlSelf->__Vdly__lru_124 = vlSelf->__PVT__lru_124;
    vlSelf->__Vdly__lru_123 = vlSelf->__PVT__lru_123;
    vlSelf->__Vdly__lru_122 = vlSelf->__PVT__lru_122;
    vlSelf->__Vdly__lru_121 = vlSelf->__PVT__lru_121;
    vlSelf->__Vdly__lru_120 = vlSelf->__PVT__lru_120;
    vlSelf->__Vdly__lru_119 = vlSelf->__PVT__lru_119;
    vlSelf->__Vdly__lru_118 = vlSelf->__PVT__lru_118;
    vlSelf->__Vdly__lru_117 = vlSelf->__PVT__lru_117;
    vlSelf->__Vdly__lru_116 = vlSelf->__PVT__lru_116;
    vlSelf->__Vdly__lru_115 = vlSelf->__PVT__lru_115;
    vlSelf->__Vdly__lru_114 = vlSelf->__PVT__lru_114;
    vlSelf->__Vdly__lru_113 = vlSelf->__PVT__lru_113;
    vlSelf->__Vdly__lru_112 = vlSelf->__PVT__lru_112;
    vlSelf->__Vdly__lru_111 = vlSelf->__PVT__lru_111;
    vlSelf->__Vdly__lru_110 = vlSelf->__PVT__lru_110;
    vlSelf->__Vdly__lru_109 = vlSelf->__PVT__lru_109;
    vlSelf->__Vdly__lru_108 = vlSelf->__PVT__lru_108;
    vlSelf->__Vdly__lru_107 = vlSelf->__PVT__lru_107;
    vlSelf->__Vdly__lru_106 = vlSelf->__PVT__lru_106;
    vlSelf->__Vdly__lru_105 = vlSelf->__PVT__lru_105;
    vlSelf->__Vdly__lru_104 = vlSelf->__PVT__lru_104;
    vlSelf->__Vdly__lru_103 = vlSelf->__PVT__lru_103;
    vlSelf->__Vdly__lru_102 = vlSelf->__PVT__lru_102;
    vlSelf->__Vdly__lru_101 = vlSelf->__PVT__lru_101;
    vlSelf->__Vdly__lru_100 = vlSelf->__PVT__lru_100;
    vlSelf->__Vdly__lru_99 = vlSelf->__PVT__lru_99;
    vlSelf->__Vdly__lru_98 = vlSelf->__PVT__lru_98;
    vlSelf->__Vdly__lru_97 = vlSelf->__PVT__lru_97;
    vlSelf->__Vdly__lru_96 = vlSelf->__PVT__lru_96;
    vlSelf->__Vdly__lru_95 = vlSelf->__PVT__lru_95;
    vlSelf->__Vdly__lru_94 = vlSelf->__PVT__lru_94;
    vlSelf->__Vdly__lru_93 = vlSelf->__PVT__lru_93;
    vlSelf->__Vdly__lru_92 = vlSelf->__PVT__lru_92;
    vlSelf->__Vdly__lru_91 = vlSelf->__PVT__lru_91;
    vlSelf->__Vdly__lru_90 = vlSelf->__PVT__lru_90;
    vlSelf->__Vdly__lru_89 = vlSelf->__PVT__lru_89;
    vlSelf->__Vdly__lru_88 = vlSelf->__PVT__lru_88;
    vlSelf->__Vdly__lru_87 = vlSelf->__PVT__lru_87;
    vlSelf->__Vdly__lru_86 = vlSelf->__PVT__lru_86;
    vlSelf->__Vdly__lru_85 = vlSelf->__PVT__lru_85;
    vlSelf->__Vdly__lru_84 = vlSelf->__PVT__lru_84;
    vlSelf->__Vdly__lru_83 = vlSelf->__PVT__lru_83;
    vlSelf->__Vdly__lru_82 = vlSelf->__PVT__lru_82;
    vlSelf->__Vdly__lru_81 = vlSelf->__PVT__lru_81;
    vlSelf->__Vdly__lru_80 = vlSelf->__PVT__lru_80;
    vlSelf->__Vdly__lru_79 = vlSelf->__PVT__lru_79;
    vlSelf->__Vdly__lru_78 = vlSelf->__PVT__lru_78;
    vlSelf->__Vdly__lru_77 = vlSelf->__PVT__lru_77;
    vlSelf->__Vdly__lru_76 = vlSelf->__PVT__lru_76;
    vlSelf->__Vdly__lru_75 = vlSelf->__PVT__lru_75;
    vlSelf->__Vdly__lru_74 = vlSelf->__PVT__lru_74;
    vlSelf->__Vdly__lru_73 = vlSelf->__PVT__lru_73;
    vlSelf->__Vdly__lru_72 = vlSelf->__PVT__lru_72;
    vlSelf->__Vdly__lru_71 = vlSelf->__PVT__lru_71;
    vlSelf->__Vdly__lru_70 = vlSelf->__PVT__lru_70;
    vlSelf->__Vdly__lru_69 = vlSelf->__PVT__lru_69;
    vlSelf->__Vdly__lru_68 = vlSelf->__PVT__lru_68;
    vlSelf->__Vdly__lru_67 = vlSelf->__PVT__lru_67;
    vlSelf->__Vdly__lru_66 = vlSelf->__PVT__lru_66;
    vlSelf->__Vdly__lru_65 = vlSelf->__PVT__lru_65;
    vlSelf->__Vdly__lru_64 = vlSelf->__PVT__lru_64;
    vlSelf->__Vdly__lru_63 = vlSelf->__PVT__lru_63;
    vlSelf->__Vdly__lru_62 = vlSelf->__PVT__lru_62;
    vlSelf->__Vdly__lru_61 = vlSelf->__PVT__lru_61;
    vlSelf->__Vdly__lru_60 = vlSelf->__PVT__lru_60;
    vlSelf->__Vdly__lru_59 = vlSelf->__PVT__lru_59;
    vlSelf->__Vdly__lru_58 = vlSelf->__PVT__lru_58;
    vlSelf->__Vdly__lru_57 = vlSelf->__PVT__lru_57;
    vlSelf->__Vdly__lru_56 = vlSelf->__PVT__lru_56;
    vlSelf->__Vdly__lru_55 = vlSelf->__PVT__lru_55;
    vlSelf->__Vdly__lru_54 = vlSelf->__PVT__lru_54;
    vlSelf->__Vdly__lru_53 = vlSelf->__PVT__lru_53;
    vlSelf->__Vdly__lru_52 = vlSelf->__PVT__lru_52;
    vlSelf->__Vdly__lru_51 = vlSelf->__PVT__lru_51;
    vlSelf->__Vdly__lru_50 = vlSelf->__PVT__lru_50;
    vlSelf->__Vdly__lru_49 = vlSelf->__PVT__lru_49;
    vlSelf->__Vdly__lru_48 = vlSelf->__PVT__lru_48;
    vlSelf->__Vdly__lru_47 = vlSelf->__PVT__lru_47;
    vlSelf->__Vdly__lru_46 = vlSelf->__PVT__lru_46;
    vlSelf->__Vdly__lru_45 = vlSelf->__PVT__lru_45;
    vlSelf->__Vdly__lru_44 = vlSelf->__PVT__lru_44;
    vlSelf->__Vdly__lru_43 = vlSelf->__PVT__lru_43;
    vlSelf->__Vdly__lru_42 = vlSelf->__PVT__lru_42;
    vlSelf->__Vdly__lru_41 = vlSelf->__PVT__lru_41;
    vlSelf->__Vdly__lru_40 = vlSelf->__PVT__lru_40;
    vlSelf->__Vdly__lru_39 = vlSelf->__PVT__lru_39;
    vlSelf->__Vdly__lru_38 = vlSelf->__PVT__lru_38;
    vlSelf->__Vdly__lru_37 = vlSelf->__PVT__lru_37;
    vlSelf->__Vdly__lru_36 = vlSelf->__PVT__lru_36;
    vlSelf->__Vdly__lru_35 = vlSelf->__PVT__lru_35;
    vlSelf->__Vdly__lru_34 = vlSelf->__PVT__lru_34;
    vlSelf->__Vdly__lru_33 = vlSelf->__PVT__lru_33;
    vlSelf->__Vdly__lru_32 = vlSelf->__PVT__lru_32;
    vlSelf->__Vdly__lru_31 = vlSelf->__PVT__lru_31;
    vlSelf->__Vdly__lru_30 = vlSelf->__PVT__lru_30;
    vlSelf->__Vdly__lru_29 = vlSelf->__PVT__lru_29;
    vlSelf->__Vdly__lru_28 = vlSelf->__PVT__lru_28;
    vlSelf->__Vdly__lru_27 = vlSelf->__PVT__lru_27;
    vlSelf->__Vdly__lru_26 = vlSelf->__PVT__lru_26;
    vlSelf->__Vdly__lru_25 = vlSelf->__PVT__lru_25;
    vlSelf->__Vdly__lru_24 = vlSelf->__PVT__lru_24;
    vlSelf->__Vdly__lru_23 = vlSelf->__PVT__lru_23;
    vlSelf->__Vdly__lru_22 = vlSelf->__PVT__lru_22;
    vlSelf->__Vdly__lru_21 = vlSelf->__PVT__lru_21;
    vlSelf->__Vdly__lru_20 = vlSelf->__PVT__lru_20;
    vlSelf->__Vdly__lru_19 = vlSelf->__PVT__lru_19;
    vlSelf->__Vdly__lru_18 = vlSelf->__PVT__lru_18;
    vlSelf->__Vdly__lru_17 = vlSelf->__PVT__lru_17;
    vlSelf->__Vdly__lru_16 = vlSelf->__PVT__lru_16;
    vlSelf->__Vdly__lru_15 = vlSelf->__PVT__lru_15;
    vlSelf->__Vdly__lru_14 = vlSelf->__PVT__lru_14;
    vlSelf->__Vdly__lru_13 = vlSelf->__PVT__lru_13;
    vlSelf->__Vdly__lru_12 = vlSelf->__PVT__lru_12;
    vlSelf->__Vdly__lru_11 = vlSelf->__PVT__lru_11;
    vlSelf->__Vdly__lru_10 = vlSelf->__PVT__lru_10;
    vlSelf->__Vdly__lru_9 = vlSelf->__PVT__lru_9;
    vlSelf->__Vdly__lru_8 = vlSelf->__PVT__lru_8;
    vlSelf->__Vdly__lru_7 = vlSelf->__PVT__lru_7;
    vlSelf->__Vdly__lru_6 = vlSelf->__PVT__lru_6;
    vlSelf->__Vdly__lru_5 = vlSelf->__PVT__lru_5;
    vlSelf->__Vdly__lru_4 = vlSelf->__PVT__lru_4;
    vlSelf->__Vdly__lru_3 = vlSelf->__PVT__lru_3;
    vlSelf->__Vdly__lru_2 = vlSelf->__PVT__lru_2;
    vlSelf->__Vdly__lru_1 = vlSelf->__PVT__lru_1;
    vlSelf->__Vdly__lru_0 = vlSelf->__PVT__lru_0;
    vlSelf->__Vdly__stage1_sram_size_reg = (3U & ((IData)(vlSelf->__PVT__reset)
                                                   ? 0U
                                                   : 
                                                  VL_SEL_IIII(3, (IData)(vlSelf->__PVT___stage1_sram_size_reg_T_1), 0U, 2U)));
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_sram_wdata_reg = 0ULL;
    } else if (vlSelf->__PVT__io_sram_req) {
        vlSelf->__Vdly__stage1_sram_wdata_reg = vlSelf->__PVT__io_sram_wdata;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_wstrb_reg = 0U;
    } else if (vlSelf->__PVT__io_sram_req) {
        vlSelf->__Vdly__stage1_wstrb_reg = vlSelf->__PVT__io_data_wstrb;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage2_sram_write_reg = 0U;
    } else if (vlSelf->__PVT__stage2_stall) {
        vlSelf->__Vdly__stage2_sram_write_reg = vlSelf->__PVT__stage1_sram_wr_reg;
    }
    vlSelf->__Vdly__stage2_stall_reg = ((~ (IData)(vlSelf->__PVT__reset)) 
                                        & (3U == (3U 
                                                  & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__access_work_state_for_stall), 3U, 2U))));
    vlSelf->__Vdly__write_access_complete_reg = ((~ (IData)(vlSelf->__PVT__reset)) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->__PVT__work_state)) 
                                                    | (IData)(vlSelf->__PVT___GEN_4642)));
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__write_counter = 0U;
    } else if ((0xaU == (IData)(vlSelf->__PVT__work_state))) {
        vlSelf->__Vdly__write_counter = vlSelf->__PVT___write_counter_T_6;
    } else if ((6U == (IData)(vlSelf->__PVT__work_state))) {
        vlSelf->__Vdly__write_counter = vlSelf->__PVT___write_counter_T_6;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__read_counter = 0U;
    } else if (vlSelf->__PVT___wait_data_T_3) {
        vlSelf->__Vdly__read_counter = vlSelf->__PVT___read_counter_T_8;
    } else if ((0U == (IData)(vlSelf->__PVT__work_state))) {
        vlSelf->__Vdly__read_counter = vlSelf->__PVT___read_counter_T_8;
    }
    vlSelf->__Vdly__stage1_sram_req_reg = ((~ (IData)(vlSelf->__PVT__reset)) 
                                           & ((IData)(vlSelf->__PVT__io_sram_req) 
                                              | (IData)(vlSelf->__PVT___stage1_sram_req_reg_T_1)));
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_sram_cache_reg = 0U;
    } else if (vlSelf->__PVT__io_sram_req) {
        vlSelf->__Vdly__stage1_sram_cache_reg = vlSelf->__PVT__io_sram_cache;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__work_state = 0x18U;
    } else if ((7U == (IData)(vlSelf->__PVT__work_state))) {
        if (vlSelf->__PVT__io_port_bvalid) {
            vlSelf->__Vdly__work_state = 8U;
        }
    } else if ((6U == (IData)(vlSelf->__PVT__work_state))) {
        if (vlSelf->__PVT___access_work_state_T_20) {
            vlSelf->__Vdly__work_state = 7U;
        }
    } else if ((0xfU == (IData)(vlSelf->__PVT__work_state))) {
        if (vlSelf->__PVT__io_port_awready) {
            vlSelf->__Vdly__work_state = 6U;
        }
    } else {
        vlSelf->__Vdly__work_state = ((0x10U == (IData)(vlSelf->__PVT__work_state))
                                       ? 0x18U : (IData)(vlSelf->__PVT___access_work_state_T_67));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__sram_rdata_reg = 0ULL;
    } else if (vlSelf->__PVT___io_sram_data_ok_T_1) {
        vlSelf->__Vdly__sram_rdata_reg = VL_EXTEND_QI(64,32, vlSelf->__PVT__wait_data);
    } else if (vlSelf->__PVT___cache_wdata_T_3) {
        vlSelf->__Vdly__sram_rdata_reg = ((IData)(vlSelf->__PVT__stage2_hit0_reg)
                                           ? ((7U == 
                                               (7U 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                               ? vlSelf->__PVT__dcache_data_way0_7_rdata
                                               : vlSelf->__PVT___GEN_1928)
                                           : ((7U == 
                                               (7U 
                                                & VL_SEL_IQII(64, vlSelf->__PVT__stage2_sram_addr_reg, 2U, 3U)))
                                               ? vlSelf->__PVT__dcache_data_way1_7_rdata
                                               : vlSelf->__PVT___GEN_1936));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__stage1_sram_phy_addr_reg = 0ULL;
    } else if (vlSelf->__PVT__stage1_stall_reg) {
        vlSelf->__Vdly__stage1_sram_phy_addr_reg = 
            ((IData)(vlSelf->__PVT__io_tlb_req) ? vlSelf->__PVT__io_p_addr_for_tlb
              : vlSelf->__PVT__stage1_addr_line_mapping);
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_127 = 0U;
    } else if ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_127 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_126 = 0U;
    } else if ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_126 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_125 = 0U;
    } else if ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_125 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_124 = 0U;
    } else if ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_124 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_123 = 0U;
    } else if ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_123 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_122 = 0U;
    } else if ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_122 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_121 = 0U;
    } else if ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_121 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_120 = 0U;
    } else if ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_120 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_119 = 0U;
    } else if ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_119 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_118 = 0U;
    } else if ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_118 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_117 = 0U;
    } else if ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_117 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_116 = 0U;
    } else if ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_116 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_115 = 0U;
    } else if ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_115 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_114 = 0U;
    } else if ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_114 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_113 = 0U;
    } else if ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_113 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_112 = 0U;
    } else if ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_112 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_111 = 0U;
    } else if ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_111 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_110 = 0U;
    } else if ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_110 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_109 = 0U;
    } else if ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_109 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_108 = 0U;
    } else if ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_108 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_107 = 0U;
    } else if ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_107 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_106 = 0U;
    } else if ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_106 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_105 = 0U;
    } else if ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_105 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_104 = 0U;
    } else if ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_104 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_103 = 0U;
    } else if ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_103 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_102 = 0U;
    } else if ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_102 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_101 = 0U;
    } else if ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_101 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_100 = 0U;
    } else if ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_100 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                          | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_99 = 0U;
    } else if ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_99 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_98 = 0U;
    } else if ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_98 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_97 = 0U;
    } else if ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_97 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_96 = 0U;
    } else if ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_96 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_95 = 0U;
    } else if ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_95 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_94 = 0U;
    } else if ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_94 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_93 = 0U;
    } else if ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_93 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_92 = 0U;
    } else if ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_92 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_91 = 0U;
    } else if ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_91 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_90 = 0U;
    } else if ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_90 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_89 = 0U;
    } else if ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_89 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_88 = 0U;
    } else if ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_88 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_87 = 0U;
    } else if ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_87 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_86 = 0U;
    } else if ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_86 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_85 = 0U;
    } else if ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_85 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_84 = 0U;
    } else if ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_84 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_83 = 0U;
    } else if ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_83 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_82 = 0U;
    } else if ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_82 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_81 = 0U;
    } else if ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_81 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_80 = 0U;
    } else if ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_80 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_79 = 0U;
    } else if ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_79 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_78 = 0U;
    } else if ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_78 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_77 = 0U;
    } else if ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_77 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_76 = 0U;
    } else if ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_76 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_75 = 0U;
    } else if ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_75 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_74 = 0U;
    } else if ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_74 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_73 = 0U;
    } else if ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_73 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_72 = 0U;
    } else if ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_72 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_71 = 0U;
    } else if ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_71 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_70 = 0U;
    } else if ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_70 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_69 = 0U;
    } else if ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_69 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_68 = 0U;
    } else if ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_68 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_67 = 0U;
    } else if ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_67 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_66 = 0U;
    } else if ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_66 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_65 = 0U;
    } else if ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_65 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_64 = 0U;
    } else if ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_64 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_63 = 0U;
    } else if ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_63 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_62 = 0U;
    } else if ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_62 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_61 = 0U;
    } else if ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_61 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_60 = 0U;
    } else if ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_60 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_59 = 0U;
    } else if ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_59 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_58 = 0U;
    } else if ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_58 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_57 = 0U;
    } else if ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_57 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_56 = 0U;
    } else if ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_56 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_55 = 0U;
    } else if ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_55 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_54 = 0U;
    } else if ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_54 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_53 = 0U;
    } else if ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_53 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_52 = 0U;
    } else if ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_52 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_51 = 0U;
    } else if ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_51 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_50 = 0U;
    } else if ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_50 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_49 = 0U;
    } else if ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_49 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_48 = 0U;
    } else if ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_48 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_47 = 0U;
    } else if ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_47 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_46 = 0U;
    } else if ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_46 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_45 = 0U;
    } else if ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_45 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_44 = 0U;
    } else if ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_44 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_43 = 0U;
    } else if ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_43 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_42 = 0U;
    } else if ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_42 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_41 = 0U;
    } else if ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_41 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_40 = 0U;
    } else if ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_40 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_39 = 0U;
    } else if ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_39 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_38 = 0U;
    } else if ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_38 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_37 = 0U;
    } else if ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_37 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_36 = 0U;
    } else if ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_36 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_35 = 0U;
    } else if ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_35 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_34 = 0U;
    } else if ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_34 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_33 = 0U;
    } else if ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_33 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_32 = 0U;
    } else if ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_32 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_31 = 0U;
    } else if ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_31 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_30 = 0U;
    } else if ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_30 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_29 = 0U;
    } else if ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_29 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_28 = 0U;
    } else if ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_28 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_27 = 0U;
    } else if ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_27 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_26 = 0U;
    } else if ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_26 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_25 = 0U;
    } else if ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_25 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_24 = 0U;
    } else if ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_24 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_23 = 0U;
    } else if ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_23 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_22 = 0U;
    } else if ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_22 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_21 = 0U;
    } else if ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_21 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_20 = 0U;
    } else if ((0x14U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_20 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_19 = 0U;
    } else if ((0x13U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_19 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_18 = 0U;
    } else if ((0x12U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_18 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_17 = 0U;
    } else if ((0x11U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_17 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_16 = 0U;
    } else if ((0x10U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_16 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_15 = 0U;
    } else if ((0xfU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_15 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_14 = 0U;
    } else if ((0xeU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_14 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_13 = 0U;
    } else if ((0xdU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_13 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_12 = 0U;
    } else if ((0xcU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_12 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_11 = 0U;
    } else if ((0xbU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_11 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_10 = 0U;
    } else if ((0xaU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_10 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                         | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_9 = 0U;
    } else if ((9U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_9 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                        | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_8 = 0U;
    } else if ((8U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_8 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                        | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way1_dirty_7 = 0U;
    } else if ((7U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way1_dirty_7 = ((((IData)(vlSelf->__PVT___way0_dirty_T_2) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_hit1_reg)) 
                                         & (IData)(vlSelf->__PVT__stage1_sram_valid1_reg)) 
                                        | (IData)(vlSelf->__PVT___way1_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_127 = 0U;
    } else if ((0x7fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_127 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_126 = 0U;
    } else if ((0x7eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_126 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_125 = 0U;
    } else if ((0x7dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_125 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_124 = 0U;
    } else if ((0x7cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_124 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_123 = 0U;
    } else if ((0x7bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_123 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_122 = 0U;
    } else if ((0x7aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_122 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_121 = 0U;
    } else if ((0x79U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_121 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_120 = 0U;
    } else if ((0x78U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_120 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_119 = 0U;
    } else if ((0x77U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_119 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_118 = 0U;
    } else if ((0x76U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_118 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_117 = 0U;
    } else if ((0x75U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_117 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_116 = 0U;
    } else if ((0x74U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_116 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_115 = 0U;
    } else if ((0x73U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_115 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_114 = 0U;
    } else if ((0x72U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_114 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_113 = 0U;
    } else if ((0x71U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_113 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_112 = 0U;
    } else if ((0x70U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_112 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_111 = 0U;
    } else if ((0x6fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_111 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_110 = 0U;
    } else if ((0x6eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_110 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_109 = 0U;
    } else if ((0x6dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_109 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_108 = 0U;
    } else if ((0x6cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_108 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_107 = 0U;
    } else if ((0x6bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_107 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_106 = 0U;
    } else if ((0x6aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_106 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_105 = 0U;
    } else if ((0x69U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_105 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_104 = 0U;
    } else if ((0x68U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_104 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_103 = 0U;
    } else if ((0x67U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_103 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_102 = 0U;
    } else if ((0x66U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_102 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_101 = 0U;
    } else if ((0x65U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_101 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_100 = 0U;
    } else if ((0x64U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_100 = (((((0x19U 
                                              == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                             & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                          | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_99 = 0U;
    } else if ((0x63U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_99 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_98 = 0U;
    } else if ((0x62U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_98 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_97 = 0U;
    } else if ((0x61U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_97 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_96 = 0U;
    } else if ((0x60U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_96 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_95 = 0U;
    } else if ((0x5fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_95 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_94 = 0U;
    } else if ((0x5eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_94 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_93 = 0U;
    } else if ((0x5dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_93 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_92 = 0U;
    } else if ((0x5cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_92 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_91 = 0U;
    } else if ((0x5bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_91 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_90 = 0U;
    } else if ((0x5aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_90 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_89 = 0U;
    } else if ((0x59U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_89 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_88 = 0U;
    } else if ((0x58U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_88 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_87 = 0U;
    } else if ((0x57U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_87 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_86 = 0U;
    } else if ((0x56U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_86 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_85 = 0U;
    } else if ((0x55U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_85 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_84 = 0U;
    } else if ((0x54U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_84 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_83 = 0U;
    } else if ((0x53U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_83 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_82 = 0U;
    } else if ((0x52U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_82 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_81 = 0U;
    } else if ((0x51U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_81 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_80 = 0U;
    } else if ((0x50U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_80 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_79 = 0U;
    } else if ((0x4fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_79 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_78 = 0U;
    } else if ((0x4eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_78 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_77 = 0U;
    } else if ((0x4dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_77 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_76 = 0U;
    } else if ((0x4cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_76 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_75 = 0U;
    } else if ((0x4bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_75 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_74 = 0U;
    } else if ((0x4aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_74 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_73 = 0U;
    } else if ((0x49U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_73 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_72 = 0U;
    } else if ((0x48U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_72 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_71 = 0U;
    } else if ((0x47U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_71 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_70 = 0U;
    } else if ((0x46U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_70 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_69 = 0U;
    } else if ((0x45U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_69 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_68 = 0U;
    } else if ((0x44U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_68 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_67 = 0U;
    } else if ((0x43U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_67 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_66 = 0U;
    } else if ((0x42U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_66 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_65 = 0U;
    } else if ((0x41U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_65 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_64 = 0U;
    } else if ((0x40U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_64 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_63 = 0U;
    } else if ((0x3fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_63 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_62 = 0U;
    } else if ((0x3eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_62 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_61 = 0U;
    } else if ((0x3dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_61 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_60 = 0U;
    } else if ((0x3cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_60 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_59 = 0U;
    } else if ((0x3bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_59 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_58 = 0U;
    } else if ((0x3aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_58 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_57 = 0U;
    } else if ((0x39U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_57 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_56 = 0U;
    } else if ((0x38U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_56 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_55 = 0U;
    } else if ((0x37U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_55 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_54 = 0U;
    } else if ((0x36U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_54 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_53 = 0U;
    } else if ((0x35U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_53 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_52 = 0U;
    } else if ((0x34U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_52 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_51 = 0U;
    } else if ((0x33U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_51 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_50 = 0U;
    } else if ((0x32U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_50 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_49 = 0U;
    } else if ((0x31U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_49 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_48 = 0U;
    } else if ((0x30U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_48 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_47 = 0U;
    } else if ((0x2fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_47 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_46 = 0U;
    } else if ((0x2eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_46 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_45 = 0U;
    } else if ((0x2dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_45 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_44 = 0U;
    } else if ((0x2cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_44 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_43 = 0U;
    } else if ((0x2bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_43 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_42 = 0U;
    } else if ((0x2aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_42 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_41 = 0U;
    } else if ((0x29U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_41 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_40 = 0U;
    } else if ((0x28U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_40 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_39 = 0U;
    } else if ((0x27U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_39 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_38 = 0U;
    } else if ((0x26U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_38 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_37 = 0U;
    } else if ((0x25U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_37 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_36 = 0U;
    } else if ((0x24U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_36 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_35 = 0U;
    } else if ((0x23U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_35 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_34 = 0U;
    } else if ((0x22U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_34 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_33 = 0U;
    } else if ((0x21U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_33 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_32 = 0U;
    } else if ((0x20U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_32 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_31 = 0U;
    } else if ((0x1fU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_31 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_30 = 0U;
    } else if ((0x1eU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_30 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_29 = 0U;
    } else if ((0x1dU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_29 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_28 = 0U;
    } else if ((0x1cU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_28 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_27 = 0U;
    } else if ((0x1bU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_27 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_26 = 0U;
    } else if ((0x1aU == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_26 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_25 = 0U;
    } else if ((0x19U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_25 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_24 = 0U;
    } else if ((0x18U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_24 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_23 = 0U;
    } else if ((0x17U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_23 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_22 = 0U;
    } else if ((0x16U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_22 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__way0_dirty_21 = 0U;
    } else if ((0x15U == (0x7fU & VL_SEL_IQII(64, vlSelf->__PVT__stage1_addr_line_mapping, 5U, 7U)))) {
        vlSelf->__Vdly__way0_dirty_21 = (((((0x19U 
                                             == (IData)(vlSelf->__PVT__state_lookup_for_less_delay)) 
                                            & (IData)(vlSelf->__PVT__stage1_sram_wr_reg)) 
                                           & (IData)(vlSelf->__PVT__stage1_sram_hit0_reg)) 
                                          & (IData)(vlSelf->__PVT__stage1_sram_valid0_reg)) 
                                         | (IData)(vlSelf->__PVT___way0_dirty_T_15));
    }
}

VL_INLINE_OPT void Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__4(Vmycpu_top_data_cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top_data_cache___combo__TOP__mycpu_top__data_cache__4\n"); );
    // Body
    vlSelf->__PVT___stage1_sram_size_reg_T_1 = ((IData)(vlSelf->__PVT__io_sram_req)
                                                 ? (IData)(vlSelf->__PVT__io_sram_size)
                                                 : 
                                                VL_EXTEND_II(3,2, (IData)(vlSelf->__PVT__stage1_sram_size_reg)));
}
