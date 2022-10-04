// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_ICACHE_TAG_H_
#define VERILATED_VMYCPU_TOP_ICACHE_TAG_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;

class Vmycpu_top_icache_tag final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__io_wen,0,0);
        VL_OUT8(__PVT__io_hit,0,0);
        VL_OUT8(__PVT__io_valid,0,0);
        CData/*7:0*/ __PVT__tag_asid_regs_0;
        CData/*7:0*/ __PVT__tag_asid_regs_1;
        CData/*7:0*/ __PVT__tag_asid_regs_2;
        CData/*7:0*/ __PVT__tag_asid_regs_3;
        CData/*7:0*/ __PVT__tag_asid_regs_4;
        CData/*7:0*/ __PVT__tag_asid_regs_5;
        CData/*7:0*/ __PVT__tag_asid_regs_6;
        CData/*7:0*/ __PVT__tag_asid_regs_7;
        CData/*7:0*/ __PVT__tag_asid_regs_8;
        CData/*7:0*/ __PVT__tag_asid_regs_9;
        CData/*7:0*/ __PVT__tag_asid_regs_10;
        CData/*7:0*/ __PVT__tag_asid_regs_11;
        CData/*7:0*/ __PVT__tag_asid_regs_12;
        CData/*7:0*/ __PVT__tag_asid_regs_13;
        CData/*7:0*/ __PVT__tag_asid_regs_14;
        CData/*7:0*/ __PVT__tag_asid_regs_15;
        CData/*7:0*/ __PVT__tag_asid_regs_16;
        CData/*7:0*/ __PVT__tag_asid_regs_17;
        CData/*7:0*/ __PVT__tag_asid_regs_18;
        CData/*7:0*/ __PVT__tag_asid_regs_19;
        CData/*7:0*/ __PVT__tag_asid_regs_20;
        CData/*7:0*/ __PVT__tag_asid_regs_21;
        CData/*7:0*/ __PVT__tag_asid_regs_22;
        CData/*7:0*/ __PVT__tag_asid_regs_23;
        CData/*7:0*/ __PVT__tag_asid_regs_24;
        CData/*7:0*/ __PVT__tag_asid_regs_25;
        CData/*7:0*/ __PVT__tag_asid_regs_26;
        CData/*7:0*/ __PVT__tag_asid_regs_27;
        CData/*7:0*/ __PVT__tag_asid_regs_28;
        CData/*7:0*/ __PVT__tag_asid_regs_29;
        CData/*7:0*/ __PVT__tag_asid_regs_30;
        CData/*7:0*/ __PVT__tag_asid_regs_31;
        CData/*7:0*/ __PVT__tag_asid_regs_32;
        CData/*7:0*/ __PVT__tag_asid_regs_33;
        CData/*7:0*/ __PVT__tag_asid_regs_34;
        CData/*7:0*/ __PVT__tag_asid_regs_35;
        CData/*7:0*/ __PVT__tag_asid_regs_36;
        CData/*7:0*/ __PVT__tag_asid_regs_37;
        CData/*7:0*/ __PVT__tag_asid_regs_38;
        CData/*7:0*/ __PVT__tag_asid_regs_39;
        CData/*7:0*/ __PVT__tag_asid_regs_40;
        CData/*7:0*/ __PVT__tag_asid_regs_41;
        CData/*7:0*/ __PVT__tag_asid_regs_42;
        CData/*7:0*/ __PVT__tag_asid_regs_43;
        CData/*7:0*/ __PVT__tag_asid_regs_44;
        CData/*7:0*/ __PVT__tag_asid_regs_45;
        CData/*7:0*/ __PVT__tag_asid_regs_46;
        CData/*7:0*/ __PVT__tag_asid_regs_47;
        CData/*7:0*/ __PVT__tag_asid_regs_48;
        CData/*7:0*/ __PVT__tag_asid_regs_49;
        CData/*7:0*/ __PVT__tag_asid_regs_50;
        CData/*7:0*/ __PVT__tag_asid_regs_51;
        CData/*7:0*/ __PVT__tag_asid_regs_52;
        CData/*7:0*/ __PVT__tag_asid_regs_53;
        CData/*7:0*/ __PVT__tag_asid_regs_54;
        CData/*7:0*/ __PVT__tag_asid_regs_55;
        CData/*7:0*/ __PVT__tag_asid_regs_56;
        CData/*7:0*/ __PVT__tag_asid_regs_57;
        CData/*7:0*/ __PVT__tag_asid_regs_58;
    };
    struct {
        CData/*7:0*/ __PVT__tag_asid_regs_59;
        CData/*7:0*/ __PVT__tag_asid_regs_60;
        CData/*7:0*/ __PVT__tag_asid_regs_61;
        CData/*7:0*/ __PVT__tag_asid_regs_62;
        CData/*7:0*/ __PVT__tag_asid_regs_63;
        CData/*7:0*/ __PVT__tag_asid_regs_64;
        CData/*7:0*/ __PVT__tag_asid_regs_65;
        CData/*7:0*/ __PVT__tag_asid_regs_66;
        CData/*7:0*/ __PVT__tag_asid_regs_67;
        CData/*7:0*/ __PVT__tag_asid_regs_68;
        CData/*7:0*/ __PVT__tag_asid_regs_69;
        CData/*7:0*/ __PVT__tag_asid_regs_70;
        CData/*7:0*/ __PVT__tag_asid_regs_71;
        CData/*7:0*/ __PVT__tag_asid_regs_72;
        CData/*7:0*/ __PVT__tag_asid_regs_73;
        CData/*7:0*/ __PVT__tag_asid_regs_74;
        CData/*7:0*/ __PVT__tag_asid_regs_75;
        CData/*7:0*/ __PVT__tag_asid_regs_76;
        CData/*7:0*/ __PVT__tag_asid_regs_77;
        CData/*7:0*/ __PVT__tag_asid_regs_78;
        CData/*7:0*/ __PVT__tag_asid_regs_79;
        CData/*7:0*/ __PVT__tag_asid_regs_80;
        CData/*7:0*/ __PVT__tag_asid_regs_81;
        CData/*7:0*/ __PVT__tag_asid_regs_82;
        CData/*7:0*/ __PVT__tag_asid_regs_83;
        CData/*7:0*/ __PVT__tag_asid_regs_84;
        CData/*7:0*/ __PVT__tag_asid_regs_85;
        CData/*7:0*/ __PVT__tag_asid_regs_86;
        CData/*7:0*/ __PVT__tag_asid_regs_87;
        CData/*7:0*/ __PVT__tag_asid_regs_88;
        CData/*7:0*/ __PVT__tag_asid_regs_89;
        CData/*7:0*/ __PVT__tag_asid_regs_90;
        CData/*7:0*/ __PVT__tag_asid_regs_91;
        CData/*7:0*/ __PVT__tag_asid_regs_92;
        CData/*7:0*/ __PVT__tag_asid_regs_93;
        CData/*7:0*/ __PVT__tag_asid_regs_94;
        CData/*7:0*/ __PVT__tag_asid_regs_95;
        CData/*7:0*/ __PVT__tag_asid_regs_96;
        CData/*7:0*/ __PVT__tag_asid_regs_97;
        CData/*7:0*/ __PVT__tag_asid_regs_98;
        CData/*7:0*/ __PVT__tag_asid_regs_99;
        CData/*7:0*/ __PVT__tag_asid_regs_100;
        CData/*7:0*/ __PVT__tag_asid_regs_101;
        CData/*7:0*/ __PVT__tag_asid_regs_102;
        CData/*7:0*/ __PVT__tag_asid_regs_103;
        CData/*7:0*/ __PVT__tag_asid_regs_104;
        CData/*7:0*/ __PVT__tag_asid_regs_105;
        CData/*7:0*/ __PVT__tag_asid_regs_106;
        CData/*7:0*/ __PVT__tag_asid_regs_107;
        CData/*7:0*/ __PVT__tag_asid_regs_108;
        CData/*7:0*/ __PVT__tag_asid_regs_109;
        CData/*7:0*/ __PVT__tag_asid_regs_110;
        CData/*7:0*/ __PVT__tag_asid_regs_111;
        CData/*7:0*/ __PVT__tag_asid_regs_112;
        CData/*7:0*/ __PVT__tag_asid_regs_113;
        CData/*7:0*/ __PVT__tag_asid_regs_114;
        CData/*7:0*/ __PVT__tag_asid_regs_115;
        CData/*7:0*/ __PVT__tag_asid_regs_116;
        CData/*7:0*/ __PVT__tag_asid_regs_117;
        CData/*7:0*/ __PVT__tag_asid_regs_118;
        CData/*7:0*/ __PVT__tag_asid_regs_119;
        CData/*7:0*/ __PVT__tag_asid_regs_120;
        CData/*7:0*/ __PVT__tag_asid_regs_121;
        CData/*7:0*/ __PVT__tag_asid_regs_122;
    };
    struct {
        CData/*7:0*/ __PVT__tag_asid_regs_123;
        CData/*7:0*/ __PVT__tag_asid_regs_124;
        CData/*7:0*/ __PVT__tag_asid_regs_125;
        CData/*7:0*/ __PVT__tag_asid_regs_126;
        CData/*7:0*/ __PVT__tag_asid_regs_127;
        CData/*7:0*/ __PVT___GEN_257;
        CData/*7:0*/ __PVT___GEN_258;
        CData/*7:0*/ __PVT___GEN_259;
        CData/*7:0*/ __PVT___GEN_260;
        CData/*7:0*/ __PVT___GEN_261;
        CData/*7:0*/ __PVT___GEN_262;
        CData/*7:0*/ __PVT___GEN_263;
        CData/*7:0*/ __PVT___GEN_264;
        CData/*7:0*/ __PVT___GEN_265;
        CData/*7:0*/ __PVT___GEN_266;
        CData/*7:0*/ __PVT___GEN_267;
        CData/*7:0*/ __PVT___GEN_268;
        CData/*7:0*/ __PVT___GEN_269;
        CData/*7:0*/ __PVT___GEN_270;
        CData/*7:0*/ __PVT___GEN_271;
        CData/*7:0*/ __PVT___GEN_272;
        CData/*7:0*/ __PVT___GEN_273;
        CData/*7:0*/ __PVT___GEN_274;
        CData/*7:0*/ __PVT___GEN_275;
        CData/*7:0*/ __PVT___GEN_276;
        CData/*7:0*/ __PVT___GEN_277;
        CData/*7:0*/ __PVT___GEN_278;
        CData/*7:0*/ __PVT___GEN_279;
        CData/*7:0*/ __PVT___GEN_280;
        CData/*7:0*/ __PVT___GEN_281;
        CData/*7:0*/ __PVT___GEN_282;
        CData/*7:0*/ __PVT___GEN_283;
        CData/*7:0*/ __PVT___GEN_284;
        CData/*7:0*/ __PVT___GEN_285;
        CData/*7:0*/ __PVT___GEN_286;
        CData/*7:0*/ __PVT___GEN_287;
        CData/*7:0*/ __PVT___GEN_288;
        CData/*7:0*/ __PVT___GEN_289;
        CData/*7:0*/ __PVT___GEN_290;
        CData/*7:0*/ __PVT___GEN_291;
        CData/*7:0*/ __PVT___GEN_292;
        CData/*7:0*/ __PVT___GEN_293;
        CData/*7:0*/ __PVT___GEN_294;
        CData/*7:0*/ __PVT___GEN_295;
        CData/*7:0*/ __PVT___GEN_296;
        CData/*7:0*/ __PVT___GEN_297;
        CData/*7:0*/ __PVT___GEN_298;
        CData/*7:0*/ __PVT___GEN_299;
        CData/*7:0*/ __PVT___GEN_300;
        CData/*7:0*/ __PVT___GEN_301;
        CData/*7:0*/ __PVT___GEN_302;
        CData/*7:0*/ __PVT___GEN_303;
        CData/*7:0*/ __PVT___GEN_304;
        CData/*7:0*/ __PVT___GEN_305;
        CData/*7:0*/ __PVT___GEN_306;
        CData/*7:0*/ __PVT___GEN_307;
        CData/*7:0*/ __PVT___GEN_308;
        CData/*7:0*/ __PVT___GEN_309;
        CData/*7:0*/ __PVT___GEN_310;
        CData/*7:0*/ __PVT___GEN_311;
        CData/*7:0*/ __PVT___GEN_312;
        CData/*7:0*/ __PVT___GEN_313;
        CData/*7:0*/ __PVT___GEN_314;
        CData/*7:0*/ __PVT___GEN_315;
    };
    struct {
        CData/*7:0*/ __PVT___GEN_316;
        CData/*7:0*/ __PVT___GEN_317;
        CData/*7:0*/ __PVT___GEN_318;
        CData/*7:0*/ __PVT___GEN_319;
        CData/*7:0*/ __PVT___GEN_320;
        CData/*7:0*/ __PVT___GEN_321;
        CData/*7:0*/ __PVT___GEN_322;
        CData/*7:0*/ __PVT___GEN_323;
        CData/*7:0*/ __PVT___GEN_324;
        CData/*7:0*/ __PVT___GEN_325;
        CData/*7:0*/ __PVT___GEN_326;
        CData/*7:0*/ __PVT___GEN_327;
        CData/*7:0*/ __PVT___GEN_328;
        CData/*7:0*/ __PVT___GEN_329;
        CData/*7:0*/ __PVT___GEN_330;
        CData/*7:0*/ __PVT___GEN_331;
        CData/*7:0*/ __PVT___GEN_332;
        CData/*7:0*/ __PVT___GEN_333;
        CData/*7:0*/ __PVT___GEN_334;
        CData/*7:0*/ __PVT___GEN_335;
        CData/*7:0*/ __PVT___GEN_336;
        CData/*7:0*/ __PVT___GEN_337;
        CData/*7:0*/ __PVT___GEN_338;
        CData/*7:0*/ __PVT___GEN_339;
        CData/*7:0*/ __PVT___GEN_340;
        CData/*7:0*/ __PVT___GEN_341;
        CData/*7:0*/ __PVT___GEN_342;
        CData/*7:0*/ __PVT___GEN_343;
        CData/*7:0*/ __PVT___GEN_344;
        CData/*7:0*/ __PVT___GEN_345;
        CData/*7:0*/ __PVT___GEN_346;
        CData/*7:0*/ __PVT___GEN_347;
        CData/*7:0*/ __PVT___GEN_348;
        CData/*7:0*/ __PVT___GEN_349;
        CData/*7:0*/ __PVT___GEN_350;
        CData/*7:0*/ __PVT___GEN_351;
        CData/*7:0*/ __PVT___GEN_352;
        CData/*7:0*/ __PVT___GEN_353;
        CData/*7:0*/ __PVT___GEN_354;
        CData/*7:0*/ __PVT___GEN_355;
        CData/*7:0*/ __PVT___GEN_356;
        CData/*7:0*/ __PVT___GEN_357;
        CData/*7:0*/ __PVT___GEN_358;
        CData/*7:0*/ __PVT___GEN_359;
        CData/*7:0*/ __PVT___GEN_360;
        CData/*7:0*/ __PVT___GEN_361;
        CData/*7:0*/ __PVT___GEN_362;
        CData/*7:0*/ __PVT___GEN_363;
        CData/*7:0*/ __PVT___GEN_364;
        CData/*7:0*/ __PVT___GEN_365;
        CData/*7:0*/ __PVT___GEN_366;
        CData/*7:0*/ __PVT___GEN_367;
        CData/*7:0*/ __PVT___GEN_368;
        CData/*7:0*/ __PVT___GEN_369;
        CData/*7:0*/ __PVT___GEN_370;
        CData/*7:0*/ __PVT___GEN_371;
        CData/*7:0*/ __PVT___GEN_372;
        CData/*7:0*/ __PVT___GEN_373;
        CData/*7:0*/ __PVT___GEN_374;
        CData/*7:0*/ __PVT___GEN_375;
        CData/*7:0*/ __PVT___GEN_376;
        CData/*7:0*/ __PVT___GEN_377;
        CData/*7:0*/ __PVT___GEN_378;
        CData/*7:0*/ __PVT___GEN_379;
    };
    struct {
        CData/*7:0*/ __PVT___GEN_380;
        CData/*7:0*/ __PVT___GEN_381;
        CData/*7:0*/ __PVT___GEN_382;
        CData/*7:0*/ __PVT___GEN_383;
        CData/*7:0*/ __Vdly__tag_asid_regs_0;
        CData/*7:0*/ __Vdly__tag_asid_regs_1;
        CData/*7:0*/ __Vdly__tag_asid_regs_2;
        CData/*7:0*/ __Vdly__tag_asid_regs_3;
        CData/*7:0*/ __Vdly__tag_asid_regs_4;
        CData/*7:0*/ __Vdly__tag_asid_regs_5;
        CData/*7:0*/ __Vdly__tag_asid_regs_6;
        CData/*7:0*/ __Vdly__tag_asid_regs_7;
        CData/*7:0*/ __Vdly__tag_asid_regs_8;
        CData/*7:0*/ __Vdly__tag_asid_regs_9;
        CData/*7:0*/ __Vdly__tag_asid_regs_10;
        CData/*7:0*/ __Vdly__tag_asid_regs_11;
        CData/*7:0*/ __Vdly__tag_asid_regs_12;
        CData/*7:0*/ __Vdly__tag_asid_regs_13;
        CData/*7:0*/ __Vdly__tag_asid_regs_14;
        CData/*7:0*/ __Vdly__tag_asid_regs_15;
        CData/*7:0*/ __Vdly__tag_asid_regs_16;
        CData/*7:0*/ __Vdly__tag_asid_regs_17;
        CData/*7:0*/ __Vdly__tag_asid_regs_18;
        CData/*7:0*/ __Vdly__tag_asid_regs_19;
        CData/*7:0*/ __Vdly__tag_asid_regs_20;
        CData/*7:0*/ __Vdly__tag_asid_regs_21;
        CData/*7:0*/ __Vdly__tag_asid_regs_22;
        CData/*7:0*/ __Vdly__tag_asid_regs_23;
        CData/*7:0*/ __Vdly__tag_asid_regs_24;
        CData/*7:0*/ __Vdly__tag_asid_regs_25;
        CData/*7:0*/ __Vdly__tag_asid_regs_26;
        CData/*7:0*/ __Vdly__tag_asid_regs_27;
        CData/*7:0*/ __Vdly__tag_asid_regs_28;
        CData/*7:0*/ __Vdly__tag_asid_regs_29;
        CData/*7:0*/ __Vdly__tag_asid_regs_30;
        CData/*7:0*/ __Vdly__tag_asid_regs_31;
        CData/*7:0*/ __Vdly__tag_asid_regs_32;
        CData/*7:0*/ __Vdly__tag_asid_regs_33;
        CData/*7:0*/ __Vdly__tag_asid_regs_34;
        CData/*7:0*/ __Vdly__tag_asid_regs_35;
        CData/*7:0*/ __Vdly__tag_asid_regs_36;
        CData/*7:0*/ __Vdly__tag_asid_regs_37;
        CData/*7:0*/ __Vdly__tag_asid_regs_38;
        CData/*7:0*/ __Vdly__tag_asid_regs_39;
        CData/*7:0*/ __Vdly__tag_asid_regs_40;
        CData/*7:0*/ __Vdly__tag_asid_regs_41;
        CData/*7:0*/ __Vdly__tag_asid_regs_42;
        CData/*7:0*/ __Vdly__tag_asid_regs_43;
        CData/*7:0*/ __Vdly__tag_asid_regs_44;
        CData/*7:0*/ __Vdly__tag_asid_regs_45;
        CData/*7:0*/ __Vdly__tag_asid_regs_46;
        CData/*7:0*/ __Vdly__tag_asid_regs_47;
        CData/*7:0*/ __Vdly__tag_asid_regs_48;
        CData/*7:0*/ __Vdly__tag_asid_regs_49;
        CData/*7:0*/ __Vdly__tag_asid_regs_50;
        CData/*7:0*/ __Vdly__tag_asid_regs_51;
        CData/*7:0*/ __Vdly__tag_asid_regs_52;
        CData/*7:0*/ __Vdly__tag_asid_regs_53;
        CData/*7:0*/ __Vdly__tag_asid_regs_54;
        CData/*7:0*/ __Vdly__tag_asid_regs_55;
        CData/*7:0*/ __Vdly__tag_asid_regs_56;
        CData/*7:0*/ __Vdly__tag_asid_regs_57;
        CData/*7:0*/ __Vdly__tag_asid_regs_58;
        CData/*7:0*/ __Vdly__tag_asid_regs_59;
    };
    struct {
        CData/*7:0*/ __Vdly__tag_asid_regs_60;
        CData/*7:0*/ __Vdly__tag_asid_regs_61;
        CData/*7:0*/ __Vdly__tag_asid_regs_62;
        CData/*7:0*/ __Vdly__tag_asid_regs_63;
        CData/*7:0*/ __Vdly__tag_asid_regs_64;
        CData/*7:0*/ __Vdly__tag_asid_regs_65;
        CData/*7:0*/ __Vdly__tag_asid_regs_66;
        CData/*7:0*/ __Vdly__tag_asid_regs_67;
        CData/*7:0*/ __Vdly__tag_asid_regs_68;
        CData/*7:0*/ __Vdly__tag_asid_regs_69;
        CData/*7:0*/ __Vdly__tag_asid_regs_70;
        CData/*7:0*/ __Vdly__tag_asid_regs_71;
        CData/*7:0*/ __Vdly__tag_asid_regs_72;
        CData/*7:0*/ __Vdly__tag_asid_regs_73;
        CData/*7:0*/ __Vdly__tag_asid_regs_74;
        CData/*7:0*/ __Vdly__tag_asid_regs_75;
        CData/*7:0*/ __Vdly__tag_asid_regs_76;
        CData/*7:0*/ __Vdly__tag_asid_regs_77;
        CData/*7:0*/ __Vdly__tag_asid_regs_78;
        CData/*7:0*/ __Vdly__tag_asid_regs_79;
        CData/*7:0*/ __Vdly__tag_asid_regs_80;
        CData/*7:0*/ __Vdly__tag_asid_regs_81;
        CData/*7:0*/ __Vdly__tag_asid_regs_82;
        CData/*7:0*/ __Vdly__tag_asid_regs_83;
        CData/*7:0*/ __Vdly__tag_asid_regs_84;
        CData/*7:0*/ __Vdly__tag_asid_regs_85;
        CData/*7:0*/ __Vdly__tag_asid_regs_86;
        CData/*7:0*/ __Vdly__tag_asid_regs_87;
        CData/*7:0*/ __Vdly__tag_asid_regs_88;
        CData/*7:0*/ __Vdly__tag_asid_regs_89;
        CData/*7:0*/ __Vdly__tag_asid_regs_90;
        CData/*7:0*/ __Vdly__tag_asid_regs_91;
        CData/*7:0*/ __Vdly__tag_asid_regs_92;
        CData/*7:0*/ __Vdly__tag_asid_regs_93;
        CData/*7:0*/ __Vdly__tag_asid_regs_94;
        CData/*7:0*/ __Vdly__tag_asid_regs_95;
        CData/*7:0*/ __Vdly__tag_asid_regs_96;
        CData/*7:0*/ __Vdly__tag_asid_regs_97;
        CData/*7:0*/ __Vdly__tag_asid_regs_98;
        CData/*7:0*/ __Vdly__tag_asid_regs_99;
        CData/*7:0*/ __Vdly__tag_asid_regs_100;
        CData/*7:0*/ __Vdly__tag_asid_regs_101;
        CData/*7:0*/ __Vdly__tag_asid_regs_102;
        CData/*7:0*/ __Vdly__tag_asid_regs_103;
        CData/*7:0*/ __Vdly__tag_asid_regs_104;
        CData/*7:0*/ __Vdly__tag_asid_regs_105;
        CData/*7:0*/ __Vdly__tag_asid_regs_106;
        CData/*7:0*/ __Vdly__tag_asid_regs_107;
        CData/*7:0*/ __Vdly__tag_asid_regs_108;
        CData/*7:0*/ __Vdly__tag_asid_regs_109;
        CData/*7:0*/ __Vdly__tag_asid_regs_110;
        CData/*7:0*/ __Vdly__tag_asid_regs_111;
        CData/*7:0*/ __Vdly__tag_asid_regs_112;
        CData/*7:0*/ __Vdly__tag_asid_regs_113;
        CData/*7:0*/ __Vdly__tag_asid_regs_114;
        CData/*7:0*/ __Vdly__tag_asid_regs_115;
        CData/*7:0*/ __Vdly__tag_asid_regs_116;
        CData/*7:0*/ __Vdly__tag_asid_regs_117;
        CData/*7:0*/ __Vdly__tag_asid_regs_118;
        CData/*7:0*/ __Vdly__tag_asid_regs_119;
        CData/*7:0*/ __Vdly__tag_asid_regs_120;
        CData/*7:0*/ __Vdly__tag_asid_regs_121;
        CData/*7:0*/ __Vdly__tag_asid_regs_122;
        CData/*7:0*/ __Vdly__tag_asid_regs_123;
    };
    struct {
        CData/*7:0*/ __Vdly__tag_asid_regs_124;
        CData/*7:0*/ __Vdly__tag_asid_regs_125;
        CData/*7:0*/ __Vdly__tag_asid_regs_126;
        CData/*7:0*/ __Vdly__tag_asid_regs_127;
        VL_IN(__PVT__io_wdata,20,0);
        VL_IN(__PVT__io_addr,31,0);
        IData/*20:0*/ __PVT__tag_regs_0;
        IData/*20:0*/ __PVT__tag_regs_1;
        IData/*20:0*/ __PVT__tag_regs_2;
        IData/*20:0*/ __PVT__tag_regs_3;
        IData/*20:0*/ __PVT__tag_regs_4;
        IData/*20:0*/ __PVT__tag_regs_5;
        IData/*20:0*/ __PVT__tag_regs_6;
        IData/*20:0*/ __PVT__tag_regs_7;
        IData/*20:0*/ __PVT__tag_regs_8;
        IData/*20:0*/ __PVT__tag_regs_9;
        IData/*20:0*/ __PVT__tag_regs_10;
        IData/*20:0*/ __PVT__tag_regs_11;
        IData/*20:0*/ __PVT__tag_regs_12;
        IData/*20:0*/ __PVT__tag_regs_13;
        IData/*20:0*/ __PVT__tag_regs_14;
        IData/*20:0*/ __PVT__tag_regs_15;
        IData/*20:0*/ __PVT__tag_regs_16;
        IData/*20:0*/ __PVT__tag_regs_17;
        IData/*20:0*/ __PVT__tag_regs_18;
        IData/*20:0*/ __PVT__tag_regs_19;
        IData/*20:0*/ __PVT__tag_regs_20;
        IData/*20:0*/ __PVT__tag_regs_21;
        IData/*20:0*/ __PVT__tag_regs_22;
        IData/*20:0*/ __PVT__tag_regs_23;
        IData/*20:0*/ __PVT__tag_regs_24;
        IData/*20:0*/ __PVT__tag_regs_25;
        IData/*20:0*/ __PVT__tag_regs_26;
        IData/*20:0*/ __PVT__tag_regs_27;
        IData/*20:0*/ __PVT__tag_regs_28;
        IData/*20:0*/ __PVT__tag_regs_29;
        IData/*20:0*/ __PVT__tag_regs_30;
        IData/*20:0*/ __PVT__tag_regs_31;
        IData/*20:0*/ __PVT__tag_regs_32;
        IData/*20:0*/ __PVT__tag_regs_33;
        IData/*20:0*/ __PVT__tag_regs_34;
        IData/*20:0*/ __PVT__tag_regs_35;
        IData/*20:0*/ __PVT__tag_regs_36;
        IData/*20:0*/ __PVT__tag_regs_37;
        IData/*20:0*/ __PVT__tag_regs_38;
        IData/*20:0*/ __PVT__tag_regs_39;
        IData/*20:0*/ __PVT__tag_regs_40;
        IData/*20:0*/ __PVT__tag_regs_41;
        IData/*20:0*/ __PVT__tag_regs_42;
        IData/*20:0*/ __PVT__tag_regs_43;
        IData/*20:0*/ __PVT__tag_regs_44;
        IData/*20:0*/ __PVT__tag_regs_45;
        IData/*20:0*/ __PVT__tag_regs_46;
        IData/*20:0*/ __PVT__tag_regs_47;
        IData/*20:0*/ __PVT__tag_regs_48;
        IData/*20:0*/ __PVT__tag_regs_49;
        IData/*20:0*/ __PVT__tag_regs_50;
        IData/*20:0*/ __PVT__tag_regs_51;
        IData/*20:0*/ __PVT__tag_regs_52;
        IData/*20:0*/ __PVT__tag_regs_53;
        IData/*20:0*/ __PVT__tag_regs_54;
        IData/*20:0*/ __PVT__tag_regs_55;
        IData/*20:0*/ __PVT__tag_regs_56;
        IData/*20:0*/ __PVT__tag_regs_57;
    };
    struct {
        IData/*20:0*/ __PVT__tag_regs_58;
        IData/*20:0*/ __PVT__tag_regs_59;
        IData/*20:0*/ __PVT__tag_regs_60;
        IData/*20:0*/ __PVT__tag_regs_61;
        IData/*20:0*/ __PVT__tag_regs_62;
        IData/*20:0*/ __PVT__tag_regs_63;
        IData/*20:0*/ __PVT__tag_regs_64;
        IData/*20:0*/ __PVT__tag_regs_65;
        IData/*20:0*/ __PVT__tag_regs_66;
        IData/*20:0*/ __PVT__tag_regs_67;
        IData/*20:0*/ __PVT__tag_regs_68;
        IData/*20:0*/ __PVT__tag_regs_69;
        IData/*20:0*/ __PVT__tag_regs_70;
        IData/*20:0*/ __PVT__tag_regs_71;
        IData/*20:0*/ __PVT__tag_regs_72;
        IData/*20:0*/ __PVT__tag_regs_73;
        IData/*20:0*/ __PVT__tag_regs_74;
        IData/*20:0*/ __PVT__tag_regs_75;
        IData/*20:0*/ __PVT__tag_regs_76;
        IData/*20:0*/ __PVT__tag_regs_77;
        IData/*20:0*/ __PVT__tag_regs_78;
        IData/*20:0*/ __PVT__tag_regs_79;
        IData/*20:0*/ __PVT__tag_regs_80;
        IData/*20:0*/ __PVT__tag_regs_81;
        IData/*20:0*/ __PVT__tag_regs_82;
        IData/*20:0*/ __PVT__tag_regs_83;
        IData/*20:0*/ __PVT__tag_regs_84;
        IData/*20:0*/ __PVT__tag_regs_85;
        IData/*20:0*/ __PVT__tag_regs_86;
        IData/*20:0*/ __PVT__tag_regs_87;
        IData/*20:0*/ __PVT__tag_regs_88;
        IData/*20:0*/ __PVT__tag_regs_89;
        IData/*20:0*/ __PVT__tag_regs_90;
        IData/*20:0*/ __PVT__tag_regs_91;
        IData/*20:0*/ __PVT__tag_regs_92;
        IData/*20:0*/ __PVT__tag_regs_93;
        IData/*20:0*/ __PVT__tag_regs_94;
        IData/*20:0*/ __PVT__tag_regs_95;
        IData/*20:0*/ __PVT__tag_regs_96;
        IData/*20:0*/ __PVT__tag_regs_97;
        IData/*20:0*/ __PVT__tag_regs_98;
        IData/*20:0*/ __PVT__tag_regs_99;
        IData/*20:0*/ __PVT__tag_regs_100;
        IData/*20:0*/ __PVT__tag_regs_101;
        IData/*20:0*/ __PVT__tag_regs_102;
        IData/*20:0*/ __PVT__tag_regs_103;
        IData/*20:0*/ __PVT__tag_regs_104;
        IData/*20:0*/ __PVT__tag_regs_105;
        IData/*20:0*/ __PVT__tag_regs_106;
        IData/*20:0*/ __PVT__tag_regs_107;
        IData/*20:0*/ __PVT__tag_regs_108;
        IData/*20:0*/ __PVT__tag_regs_109;
        IData/*20:0*/ __PVT__tag_regs_110;
        IData/*20:0*/ __PVT__tag_regs_111;
        IData/*20:0*/ __PVT__tag_regs_112;
        IData/*20:0*/ __PVT__tag_regs_113;
        IData/*20:0*/ __PVT__tag_regs_114;
        IData/*20:0*/ __PVT__tag_regs_115;
        IData/*20:0*/ __PVT__tag_regs_116;
        IData/*20:0*/ __PVT__tag_regs_117;
        IData/*20:0*/ __PVT__tag_regs_118;
        IData/*20:0*/ __PVT__tag_regs_119;
        IData/*20:0*/ __PVT__tag_regs_120;
        IData/*20:0*/ __PVT__tag_regs_121;
    };
    struct {
        IData/*20:0*/ __PVT__tag_regs_122;
        IData/*20:0*/ __PVT__tag_regs_123;
        IData/*20:0*/ __PVT__tag_regs_124;
        IData/*20:0*/ __PVT__tag_regs_125;
        IData/*20:0*/ __PVT__tag_regs_126;
        IData/*20:0*/ __PVT__tag_regs_127;
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
        IData/*20:0*/ __PVT___GEN_56;
        IData/*20:0*/ __PVT___GEN_57;
        IData/*20:0*/ __PVT___GEN_58;
    };
    struct {
        IData/*20:0*/ __PVT___GEN_59;
        IData/*20:0*/ __PVT___GEN_60;
        IData/*20:0*/ __PVT___GEN_61;
        IData/*20:0*/ __PVT___GEN_62;
        IData/*20:0*/ __PVT___GEN_63;
        IData/*20:0*/ __PVT___GEN_64;
        IData/*20:0*/ __PVT___GEN_65;
        IData/*20:0*/ __PVT___GEN_66;
        IData/*20:0*/ __PVT___GEN_67;
        IData/*20:0*/ __PVT___GEN_68;
        IData/*20:0*/ __PVT___GEN_69;
        IData/*20:0*/ __PVT___GEN_70;
        IData/*20:0*/ __PVT___GEN_71;
        IData/*20:0*/ __PVT___GEN_72;
        IData/*20:0*/ __PVT___GEN_73;
        IData/*20:0*/ __PVT___GEN_74;
        IData/*20:0*/ __PVT___GEN_75;
        IData/*20:0*/ __PVT___GEN_76;
        IData/*20:0*/ __PVT___GEN_77;
        IData/*20:0*/ __PVT___GEN_78;
        IData/*20:0*/ __PVT___GEN_79;
        IData/*20:0*/ __PVT___GEN_80;
        IData/*20:0*/ __PVT___GEN_81;
        IData/*20:0*/ __PVT___GEN_82;
        IData/*20:0*/ __PVT___GEN_83;
        IData/*20:0*/ __PVT___GEN_84;
        IData/*20:0*/ __PVT___GEN_85;
        IData/*20:0*/ __PVT___GEN_86;
        IData/*20:0*/ __PVT___GEN_87;
        IData/*20:0*/ __PVT___GEN_88;
        IData/*20:0*/ __PVT___GEN_89;
        IData/*20:0*/ __PVT___GEN_90;
        IData/*20:0*/ __PVT___GEN_91;
        IData/*20:0*/ __PVT___GEN_92;
        IData/*20:0*/ __PVT___GEN_93;
        IData/*20:0*/ __PVT___GEN_94;
        IData/*20:0*/ __PVT___GEN_95;
        IData/*20:0*/ __PVT___GEN_96;
        IData/*20:0*/ __PVT___GEN_97;
        IData/*20:0*/ __PVT___GEN_98;
        IData/*20:0*/ __PVT___GEN_99;
        IData/*20:0*/ __PVT___GEN_100;
        IData/*20:0*/ __PVT___GEN_101;
        IData/*20:0*/ __PVT___GEN_102;
        IData/*20:0*/ __PVT___GEN_103;
        IData/*20:0*/ __PVT___GEN_104;
        IData/*20:0*/ __PVT___GEN_105;
        IData/*20:0*/ __PVT___GEN_106;
        IData/*20:0*/ __PVT___GEN_107;
        IData/*20:0*/ __PVT___GEN_108;
        IData/*20:0*/ __PVT___GEN_109;
        IData/*20:0*/ __PVT___GEN_110;
        IData/*20:0*/ __PVT___GEN_111;
        IData/*20:0*/ __PVT___GEN_112;
        IData/*20:0*/ __PVT___GEN_113;
        IData/*20:0*/ __PVT___GEN_114;
        IData/*20:0*/ __PVT___GEN_115;
        IData/*20:0*/ __PVT___GEN_116;
        IData/*20:0*/ __PVT___GEN_117;
        IData/*20:0*/ __PVT___GEN_118;
        IData/*20:0*/ __PVT___GEN_119;
        IData/*20:0*/ __PVT___GEN_120;
        IData/*20:0*/ __PVT___GEN_121;
        IData/*20:0*/ __PVT___GEN_122;
    };
    struct {
        IData/*20:0*/ __PVT___GEN_123;
        IData/*20:0*/ __PVT___GEN_124;
        IData/*20:0*/ __PVT___GEN_125;
        IData/*20:0*/ __PVT___GEN_126;
        IData/*20:0*/ __PVT___GEN_127;
        IData/*20:0*/ __Vdly__tag_regs_0;
        IData/*20:0*/ __Vdly__tag_regs_1;
        IData/*20:0*/ __Vdly__tag_regs_2;
        IData/*20:0*/ __Vdly__tag_regs_3;
        IData/*20:0*/ __Vdly__tag_regs_4;
        IData/*20:0*/ __Vdly__tag_regs_5;
        IData/*20:0*/ __Vdly__tag_regs_6;
        IData/*20:0*/ __Vdly__tag_regs_7;
        IData/*20:0*/ __Vdly__tag_regs_8;
        IData/*20:0*/ __Vdly__tag_regs_9;
        IData/*20:0*/ __Vdly__tag_regs_10;
        IData/*20:0*/ __Vdly__tag_regs_11;
        IData/*20:0*/ __Vdly__tag_regs_12;
        IData/*20:0*/ __Vdly__tag_regs_13;
        IData/*20:0*/ __Vdly__tag_regs_14;
        IData/*20:0*/ __Vdly__tag_regs_15;
        IData/*20:0*/ __Vdly__tag_regs_16;
        IData/*20:0*/ __Vdly__tag_regs_17;
        IData/*20:0*/ __Vdly__tag_regs_18;
        IData/*20:0*/ __Vdly__tag_regs_19;
        IData/*20:0*/ __Vdly__tag_regs_20;
        IData/*20:0*/ __Vdly__tag_regs_21;
        IData/*20:0*/ __Vdly__tag_regs_22;
        IData/*20:0*/ __Vdly__tag_regs_23;
        IData/*20:0*/ __Vdly__tag_regs_24;
        IData/*20:0*/ __Vdly__tag_regs_25;
        IData/*20:0*/ __Vdly__tag_regs_26;
        IData/*20:0*/ __Vdly__tag_regs_27;
        IData/*20:0*/ __Vdly__tag_regs_28;
        IData/*20:0*/ __Vdly__tag_regs_29;
        IData/*20:0*/ __Vdly__tag_regs_30;
        IData/*20:0*/ __Vdly__tag_regs_31;
        IData/*20:0*/ __Vdly__tag_regs_32;
        IData/*20:0*/ __Vdly__tag_regs_33;
        IData/*20:0*/ __Vdly__tag_regs_34;
        IData/*20:0*/ __Vdly__tag_regs_35;
        IData/*20:0*/ __Vdly__tag_regs_36;
        IData/*20:0*/ __Vdly__tag_regs_37;
        IData/*20:0*/ __Vdly__tag_regs_38;
        IData/*20:0*/ __Vdly__tag_regs_39;
        IData/*20:0*/ __Vdly__tag_regs_40;
        IData/*20:0*/ __Vdly__tag_regs_41;
        IData/*20:0*/ __Vdly__tag_regs_42;
        IData/*20:0*/ __Vdly__tag_regs_43;
        IData/*20:0*/ __Vdly__tag_regs_44;
        IData/*20:0*/ __Vdly__tag_regs_45;
        IData/*20:0*/ __Vdly__tag_regs_46;
        IData/*20:0*/ __Vdly__tag_regs_47;
        IData/*20:0*/ __Vdly__tag_regs_48;
        IData/*20:0*/ __Vdly__tag_regs_49;
        IData/*20:0*/ __Vdly__tag_regs_50;
        IData/*20:0*/ __Vdly__tag_regs_51;
        IData/*20:0*/ __Vdly__tag_regs_52;
        IData/*20:0*/ __Vdly__tag_regs_53;
        IData/*20:0*/ __Vdly__tag_regs_54;
        IData/*20:0*/ __Vdly__tag_regs_55;
        IData/*20:0*/ __Vdly__tag_regs_56;
        IData/*20:0*/ __Vdly__tag_regs_57;
        IData/*20:0*/ __Vdly__tag_regs_58;
    };
    struct {
        IData/*20:0*/ __Vdly__tag_regs_59;
        IData/*20:0*/ __Vdly__tag_regs_60;
        IData/*20:0*/ __Vdly__tag_regs_61;
        IData/*20:0*/ __Vdly__tag_regs_62;
        IData/*20:0*/ __Vdly__tag_regs_63;
        IData/*20:0*/ __Vdly__tag_regs_64;
        IData/*20:0*/ __Vdly__tag_regs_65;
        IData/*20:0*/ __Vdly__tag_regs_66;
        IData/*20:0*/ __Vdly__tag_regs_67;
        IData/*20:0*/ __Vdly__tag_regs_68;
        IData/*20:0*/ __Vdly__tag_regs_69;
        IData/*20:0*/ __Vdly__tag_regs_70;
        IData/*20:0*/ __Vdly__tag_regs_71;
        IData/*20:0*/ __Vdly__tag_regs_72;
        IData/*20:0*/ __Vdly__tag_regs_73;
        IData/*20:0*/ __Vdly__tag_regs_74;
        IData/*20:0*/ __Vdly__tag_regs_75;
        IData/*20:0*/ __Vdly__tag_regs_76;
        IData/*20:0*/ __Vdly__tag_regs_77;
        IData/*20:0*/ __Vdly__tag_regs_78;
        IData/*20:0*/ __Vdly__tag_regs_79;
        IData/*20:0*/ __Vdly__tag_regs_80;
        IData/*20:0*/ __Vdly__tag_regs_81;
        IData/*20:0*/ __Vdly__tag_regs_82;
        IData/*20:0*/ __Vdly__tag_regs_83;
        IData/*20:0*/ __Vdly__tag_regs_84;
        IData/*20:0*/ __Vdly__tag_regs_85;
        IData/*20:0*/ __Vdly__tag_regs_86;
        IData/*20:0*/ __Vdly__tag_regs_87;
        IData/*20:0*/ __Vdly__tag_regs_88;
        IData/*20:0*/ __Vdly__tag_regs_89;
        IData/*20:0*/ __Vdly__tag_regs_90;
        IData/*20:0*/ __Vdly__tag_regs_91;
        IData/*20:0*/ __Vdly__tag_regs_92;
        IData/*20:0*/ __Vdly__tag_regs_93;
        IData/*20:0*/ __Vdly__tag_regs_94;
        IData/*20:0*/ __Vdly__tag_regs_95;
        IData/*20:0*/ __Vdly__tag_regs_96;
        IData/*20:0*/ __Vdly__tag_regs_97;
        IData/*20:0*/ __Vdly__tag_regs_98;
        IData/*20:0*/ __Vdly__tag_regs_99;
        IData/*20:0*/ __Vdly__tag_regs_100;
        IData/*20:0*/ __Vdly__tag_regs_101;
        IData/*20:0*/ __Vdly__tag_regs_102;
        IData/*20:0*/ __Vdly__tag_regs_103;
        IData/*20:0*/ __Vdly__tag_regs_104;
        IData/*20:0*/ __Vdly__tag_regs_105;
        IData/*20:0*/ __Vdly__tag_regs_106;
        IData/*20:0*/ __Vdly__tag_regs_107;
        IData/*20:0*/ __Vdly__tag_regs_108;
        IData/*20:0*/ __Vdly__tag_regs_109;
        IData/*20:0*/ __Vdly__tag_regs_110;
        IData/*20:0*/ __Vdly__tag_regs_111;
        IData/*20:0*/ __Vdly__tag_regs_112;
        IData/*20:0*/ __Vdly__tag_regs_113;
        IData/*20:0*/ __Vdly__tag_regs_114;
        IData/*20:0*/ __Vdly__tag_regs_115;
        IData/*20:0*/ __Vdly__tag_regs_116;
        IData/*20:0*/ __Vdly__tag_regs_117;
        IData/*20:0*/ __Vdly__tag_regs_118;
        IData/*20:0*/ __Vdly__tag_regs_119;
        IData/*20:0*/ __Vdly__tag_regs_120;
        IData/*20:0*/ __Vdly__tag_regs_121;
        IData/*20:0*/ __Vdly__tag_regs_122;
    };
    struct {
        IData/*20:0*/ __Vdly__tag_regs_123;
        IData/*20:0*/ __Vdly__tag_regs_124;
        IData/*20:0*/ __Vdly__tag_regs_125;
        IData/*20:0*/ __Vdly__tag_regs_126;
        IData/*20:0*/ __Vdly__tag_regs_127;
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_icache_tag(Vmycpu_top__Syms* symsp, const char* name);
    ~Vmycpu_top_icache_tag();
    VL_UNCOPYABLE(Vmycpu_top_icache_tag);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
