// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top_inst_cache.h"

void Vmycpu_top_inst_cache___ctor_var_reset(Vmycpu_top_inst_cache* vlSelf);

Vmycpu_top_inst_cache::Vmycpu_top_inst_cache(Vmycpu_top__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmycpu_top_inst_cache___ctor_var_reset(this);
}

void Vmycpu_top_inst_cache::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmycpu_top_inst_cache::~Vmycpu_top_inst_cache() {
}
