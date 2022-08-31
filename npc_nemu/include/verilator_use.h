#ifndef __VERILATOR_USE_H__
#define __VERILATOR_USE_H__

#include <common.h>

extern Vtop * top ;


void sim_init() ;
void reset(int n) ;
void step_and_dump_wave();
void single_cycle();

#endif
