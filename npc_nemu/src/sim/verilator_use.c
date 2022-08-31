#include <verilator_use.h>

void sim_init() {
	tfp = new VerilatedVcdC;
	contextp->debug(0);
	contextp->randReset(2);
	contextp->traceEverOn(true);
	top->trace(tfp, 0);
	tfp->open("dump.vcd");	
}

void reset(int n) {
	top->aresetn = 1;
	while(n -- > 0) single_cycle(top);
	top->aresetn = 0;
}

void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

void single_cycle() {
	top->aclk = 1; step_and_dump_wave(top);
	top->aclk = 0; step_and_dump_wave(top);
}
