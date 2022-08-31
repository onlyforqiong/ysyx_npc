#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include <elf_read.h>
#include <verilator_use.h>
#include <axi.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write
#define cpu_commit 1 
//cpu刚才完成了提交,后面采用dpi-c来写

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_RR,TYPE_SB,TYPE_UJ,TYPE_N, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)



static word_t immu_jal(uint32_t i) {return SEXT(BITS(i,31-12,31-12),1)<<20 | BITS(i,30-12,21-12)<<1 | BITS(i,20-12,20-12)<<11 | BITS(i,19-12,12-12) <<12;}
static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) {return SEXT(BITS(i, 31, 12), 20) << 12; } // u 和 i加起来正好就是32位，可以随便跳转了
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immSB(uint32_t i) { return (SEXT(BITS(i,31,31),1)<<12) | BITS(i,7,7)<<11 | BITS(i,11,8)<<1 | BITS(i,30,25)<<5 ;}

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);
  switch (type) {
    case TYPE_I:  src1R(rs1);    src2I(immI(i)); break;
    case TYPE_U:  src1I(immU(i)); break;
    case TYPE_S:  destI(immS(i)); src1R(rs1); src2R(rs2); break;
    case TYPE_SB: destI(immSB(i));src1R(rs1); src2R(rs2); break;
    case TYPE_RR:  src1R(rs1); src2R(rs2); break;
  }
}


static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;
  while(cpu_commit) {
    
    single_cycle();

    
  }

  
  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
