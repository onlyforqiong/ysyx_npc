// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_CU_H_
#define VERILATED_VMYCPU_TOP_CU_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;

class Vmycpu_top_cu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT8(__PVT__io1_BadInstrD,0,0);
        VL_OUT8(__PVT__io1_dmem_addr_cal,0,0);
        VL_OUT8(__PVT__io_RegWriteD,0,0);
        VL_OUT8(__PVT__io_MemToRegD,0,0);
        VL_OUT8(__PVT__io_MemWriteD,0,0);
        VL_OUT8(__PVT__io_ALUSrcD_0,1,0);
        VL_OUT8(__PVT__io_ALUSrcD_1,1,0);
        VL_OUT8(__PVT__io_RegDstD,4,0);
        VL_OUT8(__PVT__io_LinkD,0,0);
        VL_OUT8(__PVT__io_LoadUnsignedD,0,0);
        VL_OUT8(__PVT__io_MemWidthD,1,0);
        VL_OUT8(__PVT__io_ebreakD,0,0);
        VL_OUT8(__PVT__io_data_wD,0,0);
        CData/*6:0*/ __PVT__OpD;
        CData/*2:0*/ __PVT__Funct3D;
        CData/*6:0*/ __PVT__Funct7D;
        CData/*5:0*/ __PVT__Funct6D;
        CData/*5:0*/ __PVT__immI_lo_lo_lo;
        CData/*5:0*/ __PVT__immS_lo_lo_lo;
        CData/*5:0*/ __PVT__immSB_lo_lo_lo;
        CData/*3:0*/ __PVT___inst_code_type_T_2;
        CData/*4:0*/ __PVT___inst_code_type_T_4;
        CData/*4:0*/ __PVT___inst_code_type_T_6;
        CData/*2:0*/ __PVT___inst_code_type_T_8;
        CData/*3:0*/ __PVT___inst_code_type_T_10;
        CData/*3:0*/ __PVT___inst_code_type_T_12;
        CData/*4:0*/ __PVT___inst_code_type_T_14;
        CData/*4:0*/ __PVT___inst_code_type_T_16;
        CData/*4:0*/ __PVT___inst_code_type_T_18;
        CData/*4:0*/ __PVT___inst_code_type_T_20;
        CData/*4:0*/ __PVT___inst_code_type_T_22;
        CData/*7:0*/ __PVT___inst_code_type_T_23;
        CData/*5:0*/ __PVT___inst_code_type_T_25;
        CData/*5:0*/ __PVT___inst_code_type_T_27;
        CData/*5:0*/ __PVT___inst_code_type_T_29;
        CData/*5:0*/ __PVT___inst_code_type_T_31;
        CData/*5:0*/ __PVT___inst_code_type_T_33;
        CData/*5:0*/ __PVT___inst_code_type_T_35;
        CData/*5:0*/ __PVT___inst_code_type_T_37;
        CData/*5:0*/ __PVT___inst_code_type_T_39;
        CData/*5:0*/ __PVT___inst_code_type_T_41;
        CData/*6:0*/ __PVT___inst_code_type_T_43;
        CData/*6:0*/ __PVT___inst_code_type_T_45;
        CData/*5:0*/ __PVT___inst_code_type_T_47;
        CData/*5:0*/ __PVT___inst_code_type_T_49;
        CData/*5:0*/ __PVT___inst_code_type_T_51;
        CData/*5:0*/ __PVT___inst_code_type_T_53;
        CData/*5:0*/ __PVT___inst_code_type_T_55;
        CData/*5:0*/ __PVT___inst_code_type_T_57;
        CData/*5:0*/ __PVT___inst_code_type_T_59;
        CData/*5:0*/ __PVT___inst_code_type_T_61;
        CData/*5:0*/ __PVT___inst_code_type_T_63;
        CData/*5:0*/ __PVT___inst_code_type_T_65;
        CData/*6:0*/ __PVT___inst_code_type_T_67;
        CData/*6:0*/ __PVT___inst_code_type_T_69;
        CData/*6:0*/ __PVT___inst_code_type_T_71;
        CData/*6:0*/ __PVT___inst_code_type_T_73;
        CData/*4:0*/ __PVT___inst_code_type_T_76;
        CData/*4:0*/ __PVT___inst_code_type_T_78;
        CData/*5:0*/ __PVT___inst_code_type_T_80;
        CData/*5:0*/ __PVT___inst_code_type_T_82;
        CData/*5:0*/ __PVT___inst_code_type_T_84;
        CData/*5:0*/ __PVT___inst_code_type_T_86;
        CData/*3:0*/ __PVT___inst_code_type_T_93;
    };
    struct {
        CData/*3:0*/ __PVT___inst_code_type_T_95;
        CData/*3:0*/ __PVT___inst_code_type_T_97;
        CData/*3:0*/ __PVT___inst_code_type_T_99;
        CData/*3:0*/ __PVT___inst_code_type_T_101;
        CData/*3:0*/ __PVT___inst_code_type_T_103;
        CData/*3:0*/ __PVT___inst_code_type_T_105;
        CData/*6:0*/ __PVT___inst_code_type_T_106;
        CData/*4:0*/ __PVT___inst_code_type_T_108;
        CData/*4:0*/ __PVT___inst_code_type_T_110;
        CData/*4:0*/ __PVT___inst_code_type_T_112;
        CData/*4:0*/ __PVT___inst_code_type_T_114;
        CData/*7:0*/ __PVT___inst_code_type_T_115;
        CData/*4:0*/ __PVT___inst_code_type_T_117;
        CData/*4:0*/ __PVT___inst_code_type_T_119;
        CData/*2:0*/ __PVT___inst_code_type_T_121;
        CData/*4:0*/ __PVT___inst_code_type_T_123;
        CData/*4:0*/ __PVT___inst_code_type_T_125;
        CData/*7:0*/ __PVT___inst_code_type_T_126;
        CData/*5:0*/ __PVT___inst_code_type_T_128;
        CData/*5:0*/ __PVT___inst_code_type_T_130;
        CData/*5:0*/ __PVT___inst_code_type_T_132;
        CData/*5:0*/ __PVT___inst_code_type_T_134;
        CData/*5:0*/ __PVT___inst_code_type_T_136;
        CData/*5:0*/ __PVT___inst_code_type_T_138;
        CData/*5:0*/ __PVT___inst_code_type_T_140;
        CData/*5:0*/ __PVT___inst_code_type_T_142;
        CData/*5:0*/ __PVT___inst_code_type_T_144;
        CData/*5:0*/ __PVT___inst_code_type_T_146;
        CData/*5:0*/ __PVT___inst_code_type_T_148;
        CData/*5:0*/ __PVT___inst_code_type_T_150;
        CData/*5:0*/ __PVT___inst_code_type_T_152;
        CData/*7:0*/ __PVT___inst_code_type_T_156;
        CData/*6:0*/ __PVT__ins_code;
        CData/*2:0*/ __PVT__inst_type;
        CData/*0:0*/ __PVT___io_ImmD_T;
        CData/*0:0*/ __PVT___io_ImmD_T_1;
        CData/*0:0*/ __PVT___io_ImmD_T_2;
        CData/*0:0*/ __PVT___io_ImmD_T_3;
        CData/*0:0*/ __PVT___io_ImmD_T_4;
        CData/*0:0*/ __PVT___io_RegWriteD_T_29;
        CData/*0:0*/ __PVT___io_RegWriteD_T_59;
        CData/*0:0*/ __PVT___io_RegWriteD_T_89;
        CData/*0:0*/ __PVT___io_ALUSrcD_1_T_4;
        CData/*1:0*/ __PVT___io_ALUCtrlD_T_32;
        CData/*1:0*/ __PVT___io_ALUCtrlD_T_34;
        CData/*1:0*/ __PVT___io_ALUCtrlD_T_36;
        CData/*1:0*/ __PVT___io_ALUCtrlD_T_38;
        CData/*1:0*/ __PVT___io_ALUCtrlD_T_40;
        CData/*1:0*/ __PVT___io_MemWidthD_T_5;
        CData/*1:0*/ __PVT___io_MemWidthD_T_7;
        CData/*1:0*/ __PVT___io_MemWidthD_T_9;
        CData/*1:0*/ __PVT___io_MemWidthD_T_11;
        CData/*1:0*/ __PVT___io_MemWidthD_T_13;
        CData/*4:0*/ __PVT___io_MemWriteD_T_9;
        SData/*12:0*/ __PVT__immI_lo_lo;
        SData/*11:0*/ __PVT___immS_T_2;
        SData/*12:0*/ __PVT__immS_lo_lo;
        SData/*12:0*/ __PVT___immSB_T_4;
        SData/*11:0*/ __PVT__immSB_lo_lo;
        SData/*12:0*/ __PVT__immSB_lo_hi;
        SData/*9:0*/ __PVT___inst_code_type_T_74;
        SData/*8:0*/ __PVT___inst_code_type_T_87;
        SData/*8:0*/ __PVT___inst_code_type_T_153;
        SData/*9:0*/ __PVT___inst_code_type_T_158;
    };
    struct {
        SData/*9:0*/ __PVT___inst_code_type_T_160;
        SData/*9:0*/ __PVT___inst_code_type_T_162;
        SData/*9:0*/ __PVT___inst_code_type_T_164;
        SData/*9:0*/ __PVT___inst_code_type_T_166;
        SData/*9:0*/ __PVT___inst_code_type_T_168;
        SData/*9:0*/ __PVT___inst_code_type_T_170;
        SData/*9:0*/ __PVT___inst_code_type_T_172;
        SData/*9:0*/ __PVT___inst_code_type_T_174;
        SData/*9:0*/ __PVT___inst_code_type_T_176;
        SData/*9:0*/ __PVT__inst_code_type;
        SData/*15:0*/ __PVT___io_ALUCtrlD_T_42;
        SData/*15:0*/ __PVT___io_ALUCtrlD_T_44;
        SData/*15:0*/ __PVT___io_ALUCtrlD_T_46;
        SData/*15:0*/ __PVT___io_ALUCtrlD_T_48;
        VL_IN(__PVT__io1_InstrD,31,0);
        VL_OUT(__PVT__io_ALUCtrlD,23,0);
        IData/*25:0*/ __PVT__immI_lo;
        IData/*25:0*/ __PVT__immS_lo;
        IData/*31:0*/ __PVT__immU;
        IData/*24:0*/ __PVT__immSB_lo_1;
        IData/*19:0*/ __PVT__immUJ;
        IData/*31:0*/ __PVT___io_ImmD_T_5;
        IData/*19:0*/ __PVT___io_ImmD_T_9;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_50;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_52;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_54;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_56;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_58;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_60;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_62;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_64;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_66;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_68;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_70;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_72;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_74;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_76;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_78;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_80;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_82;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_84;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_86;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_88;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_90;
        IData/*31:0*/ __PVT___io_ALUCtrlD_T_92;
        VL_OUT64(__PVT__io_ImmD,63,0);
        QData/*51:0*/ __PVT___immI_T_53;
        QData/*63:0*/ __PVT__immI;
        QData/*51:0*/ __PVT___immS_T_55;
        QData/*63:0*/ __PVT__immS;
        QData/*50:0*/ __PVT___immSB_T_56;
        QData/*63:0*/ __PVT__immSB;
        QData/*63:0*/ __PVT___io_ImmD_T_6;
        QData/*63:0*/ __PVT___io_ImmD_T_7;
        QData/*63:0*/ __PVT___io_ImmD_T_8;
        QData/*63:0*/ __PVT___GEN_0;
        QData/*63:0*/ __PVT___io_ImmD_T_10;
        QData/*63:0*/ __PVT___io_ImmD_T_11;
        QData/*63:0*/ __PVT___io_ImmD_T_12;
        QData/*63:0*/ __PVT___GEN_1;
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_cu(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_cu();
    VL_UNCOPYABLE(Vmycpu_top_cu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
