// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_DCACHE_TAG_H_
#define VERILATED_VMYCPU_TOP_DCACHE_TAG_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;

class Vmycpu_top_dcache_tag final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__io_wen,0,0);
        VL_OUT8(__PVT__io_hit,0,0);
        VL_OUT8(__PVT__io_valid,0,0);
        VL_IN(__PVT__io_wdata,20,0);
        VL_IN(__PVT__io_raddr,31,0);
        VL_IN(__PVT__io_waddr,31,0);
        VL_OUT(__PVT__io_tag,19,0);
        IData/*20:0*/ __PVT__tag_regs0_0;
        IData/*20:0*/ __PVT__tag_regs0_1;
        IData/*20:0*/ __PVT__tag_regs0_2;
        IData/*20:0*/ __PVT__tag_regs0_3;
        IData/*20:0*/ __PVT__tag_regs0_4;
        IData/*20:0*/ __PVT__tag_regs0_5;
        IData/*20:0*/ __PVT__tag_regs0_6;
        IData/*20:0*/ __PVT__tag_regs0_7;
        IData/*20:0*/ __PVT__tag_regs0_8;
        IData/*20:0*/ __PVT__tag_regs0_9;
        IData/*20:0*/ __PVT__tag_regs0_10;
        IData/*20:0*/ __PVT__tag_regs0_11;
        IData/*20:0*/ __PVT__tag_regs0_12;
        IData/*20:0*/ __PVT__tag_regs0_13;
        IData/*20:0*/ __PVT__tag_regs0_14;
        IData/*20:0*/ __PVT__tag_regs0_15;
        IData/*20:0*/ __PVT__tag_regs0_16;
        IData/*20:0*/ __PVT__tag_regs0_17;
        IData/*20:0*/ __PVT__tag_regs0_18;
        IData/*20:0*/ __PVT__tag_regs0_19;
        IData/*20:0*/ __PVT__tag_regs0_20;
        IData/*20:0*/ __PVT__tag_regs0_21;
        IData/*20:0*/ __PVT__tag_regs0_22;
        IData/*20:0*/ __PVT__tag_regs0_23;
        IData/*20:0*/ __PVT__tag_regs0_24;
        IData/*20:0*/ __PVT__tag_regs0_25;
        IData/*20:0*/ __PVT__tag_regs0_26;
        IData/*20:0*/ __PVT__tag_regs0_27;
        IData/*20:0*/ __PVT__tag_regs0_28;
        IData/*20:0*/ __PVT__tag_regs0_29;
        IData/*20:0*/ __PVT__tag_regs0_30;
        IData/*20:0*/ __PVT__tag_regs0_31;
        IData/*20:0*/ __PVT__tag_regs0_32;
        IData/*20:0*/ __PVT__tag_regs0_33;
        IData/*20:0*/ __PVT__tag_regs0_34;
        IData/*20:0*/ __PVT__tag_regs0_35;
        IData/*20:0*/ __PVT__tag_regs0_36;
        IData/*20:0*/ __PVT__tag_regs0_37;
        IData/*20:0*/ __PVT__tag_regs0_38;
        IData/*20:0*/ __PVT__tag_regs0_39;
        IData/*20:0*/ __PVT__tag_regs0_40;
        IData/*20:0*/ __PVT__tag_regs0_41;
        IData/*20:0*/ __PVT__tag_regs0_42;
        IData/*20:0*/ __PVT__tag_regs0_43;
        IData/*20:0*/ __PVT__tag_regs0_44;
        IData/*20:0*/ __PVT__tag_regs0_45;
        IData/*20:0*/ __PVT__tag_regs0_46;
        IData/*20:0*/ __PVT__tag_regs0_47;
        IData/*20:0*/ __PVT__tag_regs0_48;
        IData/*20:0*/ __PVT__tag_regs0_49;
        IData/*20:0*/ __PVT__tag_regs0_50;
        IData/*20:0*/ __PVT__tag_regs0_51;
        IData/*20:0*/ __PVT__tag_regs0_52;
        IData/*20:0*/ __PVT__tag_regs0_53;
        IData/*20:0*/ __PVT__tag_regs0_54;
    };
    struct {
        IData/*20:0*/ __PVT__tag_regs0_55;
        IData/*20:0*/ __PVT__tag_regs0_56;
        IData/*20:0*/ __PVT__tag_regs0_57;
        IData/*20:0*/ __PVT__tag_regs0_58;
        IData/*20:0*/ __PVT__tag_regs0_59;
        IData/*20:0*/ __PVT__tag_regs0_60;
        IData/*20:0*/ __PVT__tag_regs0_61;
        IData/*20:0*/ __PVT__tag_regs0_62;
        IData/*20:0*/ __PVT__tag_regs0_63;
        IData/*20:0*/ __PVT__tag_regs1_0;
        IData/*20:0*/ __PVT__tag_regs1_1;
        IData/*20:0*/ __PVT__tag_regs1_2;
        IData/*20:0*/ __PVT__tag_regs1_3;
        IData/*20:0*/ __PVT__tag_regs1_4;
        IData/*20:0*/ __PVT__tag_regs1_5;
        IData/*20:0*/ __PVT__tag_regs1_6;
        IData/*20:0*/ __PVT__tag_regs1_7;
        IData/*20:0*/ __PVT__tag_regs1_8;
        IData/*20:0*/ __PVT__tag_regs1_9;
        IData/*20:0*/ __PVT__tag_regs1_10;
        IData/*20:0*/ __PVT__tag_regs1_11;
        IData/*20:0*/ __PVT__tag_regs1_12;
        IData/*20:0*/ __PVT__tag_regs1_13;
        IData/*20:0*/ __PVT__tag_regs1_14;
        IData/*20:0*/ __PVT__tag_regs1_15;
        IData/*20:0*/ __PVT__tag_regs1_16;
        IData/*20:0*/ __PVT__tag_regs1_17;
        IData/*20:0*/ __PVT__tag_regs1_18;
        IData/*20:0*/ __PVT__tag_regs1_19;
        IData/*20:0*/ __PVT__tag_regs1_20;
        IData/*20:0*/ __PVT__tag_regs1_21;
        IData/*20:0*/ __PVT__tag_regs1_22;
        IData/*20:0*/ __PVT__tag_regs1_23;
        IData/*20:0*/ __PVT__tag_regs1_24;
        IData/*20:0*/ __PVT__tag_regs1_25;
        IData/*20:0*/ __PVT__tag_regs1_26;
        IData/*20:0*/ __PVT__tag_regs1_27;
        IData/*20:0*/ __PVT__tag_regs1_28;
        IData/*20:0*/ __PVT__tag_regs1_29;
        IData/*20:0*/ __PVT__tag_regs1_30;
        IData/*20:0*/ __PVT__tag_regs1_31;
        IData/*20:0*/ __PVT__tag_regs1_32;
        IData/*20:0*/ __PVT__tag_regs1_33;
        IData/*20:0*/ __PVT__tag_regs1_34;
        IData/*20:0*/ __PVT__tag_regs1_35;
        IData/*20:0*/ __PVT__tag_regs1_36;
        IData/*20:0*/ __PVT__tag_regs1_37;
        IData/*20:0*/ __PVT__tag_regs1_38;
        IData/*20:0*/ __PVT__tag_regs1_39;
        IData/*20:0*/ __PVT__tag_regs1_40;
        IData/*20:0*/ __PVT__tag_regs1_41;
        IData/*20:0*/ __PVT__tag_regs1_42;
        IData/*20:0*/ __PVT__tag_regs1_43;
        IData/*20:0*/ __PVT__tag_regs1_44;
        IData/*20:0*/ __PVT__tag_regs1_45;
        IData/*20:0*/ __PVT__tag_regs1_46;
        IData/*20:0*/ __PVT__tag_regs1_47;
        IData/*20:0*/ __PVT__tag_regs1_48;
        IData/*20:0*/ __PVT__tag_regs1_49;
        IData/*20:0*/ __PVT__tag_regs1_50;
        IData/*20:0*/ __PVT__tag_regs1_51;
        IData/*20:0*/ __PVT__tag_regs1_52;
        IData/*20:0*/ __PVT__tag_regs1_53;
        IData/*20:0*/ __PVT__tag_regs1_54;
    };
    struct {
        IData/*20:0*/ __PVT__tag_regs1_55;
        IData/*20:0*/ __PVT__tag_regs1_56;
        IData/*20:0*/ __PVT__tag_regs1_57;
        IData/*20:0*/ __PVT__tag_regs1_58;
        IData/*20:0*/ __PVT__tag_regs1_59;
        IData/*20:0*/ __PVT__tag_regs1_60;
        IData/*20:0*/ __PVT__tag_regs1_61;
        IData/*20:0*/ __PVT__tag_regs1_62;
        IData/*20:0*/ __PVT__tag_regs1_63;
        IData/*20:0*/ __PVT___GEN_1;
        IData/*20:0*/ __PVT___GEN_2;
        IData/*20:0*/ __PVT___GEN_3;
        IData/*20:0*/ __PVT___GEN_4;
        IData/*20:0*/ __PVT___GEN_5;
        IData/*20:0*/ __PVT___GEN_6;
        IData/*20:0*/ __PVT___GEN_7;
        IData/*20:0*/ __PVT___GEN_8;
        IData/*20:0*/ __PVT___GEN_9;
        IData/*20:0*/ __PVT___GEN_10;
        IData/*20:0*/ __PVT___GEN_11;
        IData/*20:0*/ __PVT___GEN_12;
        IData/*20:0*/ __PVT___GEN_13;
        IData/*20:0*/ __PVT___GEN_14;
        IData/*20:0*/ __PVT___GEN_15;
        IData/*20:0*/ __PVT___GEN_16;
        IData/*20:0*/ __PVT___GEN_17;
        IData/*20:0*/ __PVT___GEN_18;
        IData/*20:0*/ __PVT___GEN_19;
        IData/*20:0*/ __PVT___GEN_20;
        IData/*20:0*/ __PVT___GEN_21;
        IData/*20:0*/ __PVT___GEN_22;
        IData/*20:0*/ __PVT___GEN_23;
        IData/*20:0*/ __PVT___GEN_24;
        IData/*20:0*/ __PVT___GEN_25;
        IData/*20:0*/ __PVT___GEN_26;
        IData/*20:0*/ __PVT___GEN_27;
        IData/*20:0*/ __PVT___GEN_28;
        IData/*20:0*/ __PVT___GEN_29;
        IData/*20:0*/ __PVT___GEN_30;
        IData/*20:0*/ __PVT___GEN_31;
        IData/*20:0*/ __PVT___GEN_32;
        IData/*20:0*/ __PVT___GEN_33;
        IData/*20:0*/ __PVT___GEN_34;
        IData/*20:0*/ __PVT___GEN_35;
        IData/*20:0*/ __PVT___GEN_36;
        IData/*20:0*/ __PVT___GEN_37;
        IData/*20:0*/ __PVT___GEN_38;
        IData/*20:0*/ __PVT___GEN_39;
        IData/*20:0*/ __PVT___GEN_40;
        IData/*20:0*/ __PVT___GEN_41;
        IData/*20:0*/ __PVT___GEN_42;
        IData/*20:0*/ __PVT___GEN_43;
        IData/*20:0*/ __PVT___GEN_44;
        IData/*20:0*/ __PVT___GEN_45;
        IData/*20:0*/ __PVT___GEN_46;
        IData/*20:0*/ __PVT___GEN_47;
        IData/*20:0*/ __PVT___GEN_48;
        IData/*20:0*/ __PVT___GEN_49;
        IData/*20:0*/ __PVT___GEN_50;
        IData/*20:0*/ __PVT___GEN_51;
        IData/*20:0*/ __PVT___GEN_52;
        IData/*20:0*/ __PVT___GEN_53;
        IData/*20:0*/ __PVT___GEN_54;
        IData/*20:0*/ __PVT___GEN_55;
    };
    struct {
        IData/*20:0*/ __PVT___GEN_56;
        IData/*20:0*/ __PVT___GEN_57;
        IData/*20:0*/ __PVT___GEN_58;
        IData/*20:0*/ __PVT___GEN_59;
        IData/*20:0*/ __PVT___GEN_60;
        IData/*20:0*/ __PVT___GEN_61;
        IData/*20:0*/ __PVT___GEN_62;
        IData/*20:0*/ __PVT___GEN_63;
        IData/*20:0*/ __PVT___GEN_129;
        IData/*20:0*/ __PVT___GEN_130;
        IData/*20:0*/ __PVT___GEN_131;
        IData/*20:0*/ __PVT___GEN_132;
        IData/*20:0*/ __PVT___GEN_133;
        IData/*20:0*/ __PVT___GEN_134;
        IData/*20:0*/ __PVT___GEN_135;
        IData/*20:0*/ __PVT___GEN_136;
        IData/*20:0*/ __PVT___GEN_137;
        IData/*20:0*/ __PVT___GEN_138;
        IData/*20:0*/ __PVT___GEN_139;
        IData/*20:0*/ __PVT___GEN_140;
        IData/*20:0*/ __PVT___GEN_141;
        IData/*20:0*/ __PVT___GEN_142;
        IData/*20:0*/ __PVT___GEN_143;
        IData/*20:0*/ __PVT___GEN_144;
        IData/*20:0*/ __PVT___GEN_145;
        IData/*20:0*/ __PVT___GEN_146;
        IData/*20:0*/ __PVT___GEN_147;
        IData/*20:0*/ __PVT___GEN_148;
        IData/*20:0*/ __PVT___GEN_149;
        IData/*20:0*/ __PVT___GEN_150;
        IData/*20:0*/ __PVT___GEN_151;
        IData/*20:0*/ __PVT___GEN_152;
        IData/*20:0*/ __PVT___GEN_153;
        IData/*20:0*/ __PVT___GEN_154;
        IData/*20:0*/ __PVT___GEN_155;
        IData/*20:0*/ __PVT___GEN_156;
        IData/*20:0*/ __PVT___GEN_157;
        IData/*20:0*/ __PVT___GEN_158;
        IData/*20:0*/ __PVT___GEN_159;
        IData/*20:0*/ __PVT___GEN_160;
        IData/*20:0*/ __PVT___GEN_161;
        IData/*20:0*/ __PVT___GEN_162;
        IData/*20:0*/ __PVT___GEN_163;
        IData/*20:0*/ __PVT___GEN_164;
        IData/*20:0*/ __PVT___GEN_165;
        IData/*20:0*/ __PVT___GEN_166;
        IData/*20:0*/ __PVT___GEN_167;
        IData/*20:0*/ __PVT___GEN_168;
        IData/*20:0*/ __PVT___GEN_169;
        IData/*20:0*/ __PVT___GEN_170;
        IData/*20:0*/ __PVT___GEN_171;
        IData/*20:0*/ __PVT___GEN_172;
        IData/*20:0*/ __PVT___GEN_173;
        IData/*20:0*/ __PVT___GEN_174;
        IData/*20:0*/ __PVT___GEN_175;
        IData/*20:0*/ __PVT___GEN_176;
        IData/*20:0*/ __PVT___GEN_177;
        IData/*20:0*/ __PVT___GEN_178;
        IData/*20:0*/ __PVT___GEN_179;
        IData/*20:0*/ __PVT___GEN_180;
        IData/*20:0*/ __PVT___GEN_181;
        IData/*20:0*/ __PVT___GEN_182;
        IData/*20:0*/ __PVT___GEN_183;
        IData/*20:0*/ __PVT___GEN_184;
    };
    struct {
        IData/*20:0*/ __PVT___GEN_185;
        IData/*20:0*/ __PVT___GEN_186;
        IData/*20:0*/ __PVT___GEN_187;
        IData/*20:0*/ __PVT___GEN_188;
        IData/*20:0*/ __PVT___GEN_189;
        IData/*20:0*/ __PVT___GEN_190;
        IData/*20:0*/ __PVT___GEN_191;
        IData/*20:0*/ __PVT___GEN_385;
        IData/*20:0*/ __PVT___GEN_386;
        IData/*20:0*/ __PVT___GEN_387;
        IData/*20:0*/ __PVT___GEN_388;
        IData/*20:0*/ __PVT___GEN_389;
        IData/*20:0*/ __PVT___GEN_390;
        IData/*20:0*/ __PVT___GEN_391;
        IData/*20:0*/ __PVT___GEN_392;
        IData/*20:0*/ __PVT___GEN_393;
        IData/*20:0*/ __PVT___GEN_394;
        IData/*20:0*/ __PVT___GEN_395;
        IData/*20:0*/ __PVT___GEN_396;
        IData/*20:0*/ __PVT___GEN_397;
        IData/*20:0*/ __PVT___GEN_398;
        IData/*20:0*/ __PVT___GEN_399;
        IData/*20:0*/ __PVT___GEN_400;
        IData/*20:0*/ __PVT___GEN_401;
        IData/*20:0*/ __PVT___GEN_402;
        IData/*20:0*/ __PVT___GEN_403;
        IData/*20:0*/ __PVT___GEN_404;
        IData/*20:0*/ __PVT___GEN_405;
        IData/*20:0*/ __PVT___GEN_406;
        IData/*20:0*/ __PVT___GEN_407;
        IData/*20:0*/ __PVT___GEN_408;
        IData/*20:0*/ __PVT___GEN_409;
        IData/*20:0*/ __PVT___GEN_410;
        IData/*20:0*/ __PVT___GEN_411;
        IData/*20:0*/ __PVT___GEN_412;
        IData/*20:0*/ __PVT___GEN_413;
        IData/*20:0*/ __PVT___GEN_414;
        IData/*20:0*/ __PVT___GEN_415;
        IData/*20:0*/ __PVT___GEN_416;
        IData/*20:0*/ __PVT___GEN_417;
        IData/*20:0*/ __PVT___GEN_418;
        IData/*20:0*/ __PVT___GEN_419;
        IData/*20:0*/ __PVT___GEN_420;
        IData/*20:0*/ __PVT___GEN_421;
        IData/*20:0*/ __PVT___GEN_422;
        IData/*20:0*/ __PVT___GEN_423;
        IData/*20:0*/ __PVT___GEN_424;
        IData/*20:0*/ __PVT___GEN_425;
        IData/*20:0*/ __PVT___GEN_426;
        IData/*20:0*/ __PVT___GEN_427;
        IData/*20:0*/ __PVT___GEN_428;
        IData/*20:0*/ __PVT___GEN_429;
        IData/*20:0*/ __PVT___GEN_430;
        IData/*20:0*/ __PVT___GEN_431;
        IData/*20:0*/ __PVT___GEN_432;
        IData/*20:0*/ __PVT___GEN_433;
        IData/*20:0*/ __PVT___GEN_434;
        IData/*20:0*/ __PVT___GEN_435;
        IData/*20:0*/ __PVT___GEN_436;
        IData/*20:0*/ __PVT___GEN_437;
        IData/*20:0*/ __PVT___GEN_438;
        IData/*20:0*/ __PVT___GEN_439;
        IData/*20:0*/ __PVT___GEN_440;
        IData/*20:0*/ __PVT___GEN_441;
    };
    struct {
        IData/*20:0*/ __PVT___GEN_442;
        IData/*20:0*/ __PVT___GEN_443;
        IData/*20:0*/ __PVT___GEN_444;
        IData/*20:0*/ __PVT___GEN_445;
        IData/*20:0*/ __PVT___GEN_446;
        IData/*20:0*/ __PVT___GEN_447;
        IData/*20:0*/ __PVT___GEN_449;
        IData/*20:0*/ __PVT___GEN_450;
        IData/*20:0*/ __PVT___GEN_451;
        IData/*20:0*/ __PVT___GEN_452;
        IData/*20:0*/ __PVT___GEN_453;
        IData/*20:0*/ __PVT___GEN_454;
        IData/*20:0*/ __PVT___GEN_455;
        IData/*20:0*/ __PVT___GEN_456;
        IData/*20:0*/ __PVT___GEN_457;
        IData/*20:0*/ __PVT___GEN_458;
        IData/*20:0*/ __PVT___GEN_459;
        IData/*20:0*/ __PVT___GEN_460;
        IData/*20:0*/ __PVT___GEN_461;
        IData/*20:0*/ __PVT___GEN_462;
        IData/*20:0*/ __PVT___GEN_463;
        IData/*20:0*/ __PVT___GEN_464;
        IData/*20:0*/ __PVT___GEN_465;
        IData/*20:0*/ __PVT___GEN_466;
        IData/*20:0*/ __PVT___GEN_467;
        IData/*20:0*/ __PVT___GEN_468;
        IData/*20:0*/ __PVT___GEN_469;
        IData/*20:0*/ __PVT___GEN_470;
        IData/*20:0*/ __PVT___GEN_471;
        IData/*20:0*/ __PVT___GEN_472;
        IData/*20:0*/ __PVT___GEN_473;
        IData/*20:0*/ __PVT___GEN_474;
        IData/*20:0*/ __PVT___GEN_475;
        IData/*20:0*/ __PVT___GEN_476;
        IData/*20:0*/ __PVT___GEN_477;
        IData/*20:0*/ __PVT___GEN_478;
        IData/*20:0*/ __PVT___GEN_479;
        IData/*20:0*/ __PVT___GEN_480;
        IData/*20:0*/ __PVT___GEN_481;
        IData/*20:0*/ __PVT___GEN_482;
        IData/*20:0*/ __PVT___GEN_483;
        IData/*20:0*/ __PVT___GEN_484;
        IData/*20:0*/ __PVT___GEN_485;
        IData/*20:0*/ __PVT___GEN_486;
        IData/*20:0*/ __PVT___GEN_487;
        IData/*20:0*/ __PVT___GEN_488;
        IData/*20:0*/ __PVT___GEN_489;
        IData/*20:0*/ __PVT___GEN_490;
        IData/*20:0*/ __PVT___GEN_491;
        IData/*20:0*/ __PVT___GEN_492;
        IData/*20:0*/ __PVT___GEN_493;
        IData/*20:0*/ __PVT___GEN_494;
        IData/*20:0*/ __PVT___GEN_495;
        IData/*20:0*/ __PVT___GEN_496;
        IData/*20:0*/ __PVT___GEN_497;
        IData/*20:0*/ __PVT___GEN_498;
        IData/*20:0*/ __PVT___GEN_499;
        IData/*20:0*/ __PVT___GEN_500;
        IData/*20:0*/ __PVT___GEN_501;
        IData/*20:0*/ __PVT___GEN_502;
        IData/*20:0*/ __PVT___GEN_503;
        IData/*20:0*/ __PVT___GEN_504;
        IData/*20:0*/ __PVT___GEN_505;
        IData/*20:0*/ __PVT___GEN_506;
    };
    struct {
        IData/*20:0*/ __PVT___GEN_507;
        IData/*20:0*/ __PVT___GEN_508;
        IData/*20:0*/ __PVT___GEN_509;
        IData/*20:0*/ __PVT___GEN_510;
        IData/*20:0*/ __PVT___GEN_511;
        IData/*20:0*/ __Vdly__tag_regs0_0;
        IData/*20:0*/ __Vdly__tag_regs0_1;
        IData/*20:0*/ __Vdly__tag_regs0_2;
        IData/*20:0*/ __Vdly__tag_regs0_3;
        IData/*20:0*/ __Vdly__tag_regs0_4;
        IData/*20:0*/ __Vdly__tag_regs0_5;
        IData/*20:0*/ __Vdly__tag_regs0_6;
        IData/*20:0*/ __Vdly__tag_regs0_7;
        IData/*20:0*/ __Vdly__tag_regs0_8;
        IData/*20:0*/ __Vdly__tag_regs0_9;
        IData/*20:0*/ __Vdly__tag_regs0_10;
        IData/*20:0*/ __Vdly__tag_regs0_11;
        IData/*20:0*/ __Vdly__tag_regs0_12;
        IData/*20:0*/ __Vdly__tag_regs0_13;
        IData/*20:0*/ __Vdly__tag_regs0_14;
        IData/*20:0*/ __Vdly__tag_regs0_15;
        IData/*20:0*/ __Vdly__tag_regs0_16;
        IData/*20:0*/ __Vdly__tag_regs0_17;
        IData/*20:0*/ __Vdly__tag_regs0_18;
        IData/*20:0*/ __Vdly__tag_regs0_19;
        IData/*20:0*/ __Vdly__tag_regs0_20;
        IData/*20:0*/ __Vdly__tag_regs0_21;
        IData/*20:0*/ __Vdly__tag_regs0_22;
        IData/*20:0*/ __Vdly__tag_regs0_23;
        IData/*20:0*/ __Vdly__tag_regs0_24;
        IData/*20:0*/ __Vdly__tag_regs0_25;
        IData/*20:0*/ __Vdly__tag_regs0_26;
        IData/*20:0*/ __Vdly__tag_regs0_27;
        IData/*20:0*/ __Vdly__tag_regs0_28;
        IData/*20:0*/ __Vdly__tag_regs0_29;
        IData/*20:0*/ __Vdly__tag_regs0_30;
        IData/*20:0*/ __Vdly__tag_regs0_31;
        IData/*20:0*/ __Vdly__tag_regs0_32;
        IData/*20:0*/ __Vdly__tag_regs0_33;
        IData/*20:0*/ __Vdly__tag_regs0_34;
        IData/*20:0*/ __Vdly__tag_regs0_35;
        IData/*20:0*/ __Vdly__tag_regs0_36;
        IData/*20:0*/ __Vdly__tag_regs0_37;
        IData/*20:0*/ __Vdly__tag_regs0_38;
        IData/*20:0*/ __Vdly__tag_regs0_39;
        IData/*20:0*/ __Vdly__tag_regs0_40;
        IData/*20:0*/ __Vdly__tag_regs0_41;
        IData/*20:0*/ __Vdly__tag_regs0_42;
        IData/*20:0*/ __Vdly__tag_regs0_43;
        IData/*20:0*/ __Vdly__tag_regs0_44;
        IData/*20:0*/ __Vdly__tag_regs0_45;
        IData/*20:0*/ __Vdly__tag_regs0_46;
        IData/*20:0*/ __Vdly__tag_regs0_47;
        IData/*20:0*/ __Vdly__tag_regs0_48;
        IData/*20:0*/ __Vdly__tag_regs0_49;
        IData/*20:0*/ __Vdly__tag_regs0_50;
        IData/*20:0*/ __Vdly__tag_regs0_51;
        IData/*20:0*/ __Vdly__tag_regs0_52;
        IData/*20:0*/ __Vdly__tag_regs0_53;
        IData/*20:0*/ __Vdly__tag_regs0_54;
        IData/*20:0*/ __Vdly__tag_regs0_55;
        IData/*20:0*/ __Vdly__tag_regs0_56;
        IData/*20:0*/ __Vdly__tag_regs0_57;
        IData/*20:0*/ __Vdly__tag_regs0_58;
    };
    struct {
        IData/*20:0*/ __Vdly__tag_regs0_59;
        IData/*20:0*/ __Vdly__tag_regs0_60;
        IData/*20:0*/ __Vdly__tag_regs0_61;
        IData/*20:0*/ __Vdly__tag_regs0_62;
        IData/*20:0*/ __Vdly__tag_regs0_63;
        IData/*20:0*/ __Vdly__tag_regs1_0;
        IData/*20:0*/ __Vdly__tag_regs1_1;
        IData/*20:0*/ __Vdly__tag_regs1_2;
        IData/*20:0*/ __Vdly__tag_regs1_3;
        IData/*20:0*/ __Vdly__tag_regs1_4;
        IData/*20:0*/ __Vdly__tag_regs1_5;
        IData/*20:0*/ __Vdly__tag_regs1_6;
        IData/*20:0*/ __Vdly__tag_regs1_7;
        IData/*20:0*/ __Vdly__tag_regs1_8;
        IData/*20:0*/ __Vdly__tag_regs1_9;
        IData/*20:0*/ __Vdly__tag_regs1_10;
        IData/*20:0*/ __Vdly__tag_regs1_11;
        IData/*20:0*/ __Vdly__tag_regs1_12;
        IData/*20:0*/ __Vdly__tag_regs1_13;
        IData/*20:0*/ __Vdly__tag_regs1_14;
        IData/*20:0*/ __Vdly__tag_regs1_15;
        IData/*20:0*/ __Vdly__tag_regs1_16;
        IData/*20:0*/ __Vdly__tag_regs1_17;
        IData/*20:0*/ __Vdly__tag_regs1_18;
        IData/*20:0*/ __Vdly__tag_regs1_19;
        IData/*20:0*/ __Vdly__tag_regs1_20;
        IData/*20:0*/ __Vdly__tag_regs1_21;
        IData/*20:0*/ __Vdly__tag_regs1_22;
        IData/*20:0*/ __Vdly__tag_regs1_23;
        IData/*20:0*/ __Vdly__tag_regs1_24;
        IData/*20:0*/ __Vdly__tag_regs1_25;
        IData/*20:0*/ __Vdly__tag_regs1_26;
        IData/*20:0*/ __Vdly__tag_regs1_27;
        IData/*20:0*/ __Vdly__tag_regs1_28;
        IData/*20:0*/ __Vdly__tag_regs1_29;
        IData/*20:0*/ __Vdly__tag_regs1_30;
        IData/*20:0*/ __Vdly__tag_regs1_31;
        IData/*20:0*/ __Vdly__tag_regs1_32;
        IData/*20:0*/ __Vdly__tag_regs1_33;
        IData/*20:0*/ __Vdly__tag_regs1_34;
        IData/*20:0*/ __Vdly__tag_regs1_35;
        IData/*20:0*/ __Vdly__tag_regs1_36;
        IData/*20:0*/ __Vdly__tag_regs1_37;
        IData/*20:0*/ __Vdly__tag_regs1_38;
        IData/*20:0*/ __Vdly__tag_regs1_39;
        IData/*20:0*/ __Vdly__tag_regs1_40;
        IData/*20:0*/ __Vdly__tag_regs1_41;
        IData/*20:0*/ __Vdly__tag_regs1_42;
        IData/*20:0*/ __Vdly__tag_regs1_43;
        IData/*20:0*/ __Vdly__tag_regs1_44;
        IData/*20:0*/ __Vdly__tag_regs1_45;
        IData/*20:0*/ __Vdly__tag_regs1_46;
        IData/*20:0*/ __Vdly__tag_regs1_47;
        IData/*20:0*/ __Vdly__tag_regs1_48;
        IData/*20:0*/ __Vdly__tag_regs1_49;
        IData/*20:0*/ __Vdly__tag_regs1_50;
        IData/*20:0*/ __Vdly__tag_regs1_51;
        IData/*20:0*/ __Vdly__tag_regs1_52;
        IData/*20:0*/ __Vdly__tag_regs1_53;
        IData/*20:0*/ __Vdly__tag_regs1_54;
        IData/*20:0*/ __Vdly__tag_regs1_55;
        IData/*20:0*/ __Vdly__tag_regs1_56;
        IData/*20:0*/ __Vdly__tag_regs1_57;
        IData/*20:0*/ __Vdly__tag_regs1_58;
    };
    struct {
        IData/*20:0*/ __Vdly__tag_regs1_59;
        IData/*20:0*/ __Vdly__tag_regs1_60;
        IData/*20:0*/ __Vdly__tag_regs1_61;
        IData/*20:0*/ __Vdly__tag_regs1_62;
        IData/*20:0*/ __Vdly__tag_regs1_63;
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_dcache_tag(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_dcache_tag();
    VL_UNCOPYABLE(Vmycpu_top_dcache_tag);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
