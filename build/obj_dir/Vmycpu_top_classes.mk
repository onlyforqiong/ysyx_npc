# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vmycpu_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vmycpu_top \
	Vmycpu_top___024root__DepSet_hcf0db31f__0 \
	Vmycpu_top___024root__DepSet_hcf0db31f__1 \
	Vmycpu_top___024root__DepSet_hcf0db31f__2 \
	Vmycpu_top___024root__DepSet_hcf0db31f__3 \
	Vmycpu_top___024root__DepSet_hcf0db31f__4 \
	Vmycpu_top___024root__DepSet_hcf0db31f__5 \
	Vmycpu_top___024root__DepSet_hcf0db31f__6 \
	Vmycpu_top___024root__DepSet_hcf0db31f__7 \
	Vmycpu_top___024root__DepSet_hcf0db31f__8 \
	Vmycpu_top___024root__DepSet_hcf0db31f__9 \
	Vmycpu_top___024root__DepSet_hcf0db31f__10 \
	Vmycpu_top___024root__DepSet_hcf0db31f__11 \
	Vmycpu_top___024root__DepSet_hcf0db31f__12 \
	Vmycpu_top___024root__DepSet_hcf0db31f__13 \
	Vmycpu_top___024root__DepSet_hcf0db31f__14 \
	Vmycpu_top___024root__DepSet_hcf0db31f__15 \
	Vmycpu_top___024root__DepSet_hcf0db31f__16 \
	Vmycpu_top___024root__DepSet_hcf0db31f__17 \
	Vmycpu_top___024root__DepSet_hcf0db31f__18 \
	Vmycpu_top___024root__DepSet_hcf0db31f__19 \
	Vmycpu_top___024root__DepSet_hcf0db31f__20 \
	Vmycpu_top___024root__DepSet_hcf0db31f__21 \
	Vmycpu_top___024root__DepSet_hcf0db31f__22 \
	Vmycpu_top___024root__DepSet_hcf0db31f__23 \
	Vmycpu_top___024root__DepSet_hcf0db31f__24 \
	Vmycpu_top___024root__DepSet_hcf0db31f__25 \
	Vmycpu_top___024root__DepSet_hcf0db31f__26 \
	Vmycpu_top___024root__DepSet_hcf0db31f__27 \
	Vmycpu_top___024root__DepSet_hcf0db31f__28 \
	Vmycpu_top___024root__DepSet_hcf0db31f__29 \
	Vmycpu_top___024root__DepSet_hcf0db31f__30 \
	Vmycpu_top___024root__DepSet_hcf0db31f__31 \
	Vmycpu_top___024root__DepSet_hcf0db31f__32 \
	Vmycpu_top___024root__DepSet_hcf0db31f__33 \
	Vmycpu_top___024root__DepSet_hcf0db31f__34 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vmycpu_top__ConstPool_0 \
	Vmycpu_top___024root__Slow \
	Vmycpu_top___024root__DepSet_hcf0db31f__0__Slow \
	Vmycpu_top___024root__DepSet_hcf0db31f__1__Slow \
	Vmycpu_top___024root__DepSet_hcf0db31f__2__Slow \
	Vmycpu_top___024root__DepSet_hcf0db31f__3__Slow \
	Vmycpu_top___024root__DepSet_hcf0db31f__4__Slow \
	Vmycpu_top___024root__DepSet_hcf0db31f__5__Slow \
	Vmycpu_top___024root__DepSet_hcf0db31f__6__Slow \
	Vmycpu_top___024root__DepSet_hcf0db31f__7__Slow \
	Vmycpu_top___024root__DepSet_hcf0db31f__8__Slow \
	Vmycpu_top___024root__DepSet_hcf0db31f__9__Slow \
	Vmycpu_top___024root__DepSet_hcf0db31f__10__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vmycpu_top__Trace__0 \
	Vmycpu_top__Trace__1 \
	Vmycpu_top__Trace__2 \
	Vmycpu_top__Trace__3 \
	Vmycpu_top__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vmycpu_top__Syms \
	Vmycpu_top__Trace__0__Slow \
	Vmycpu_top__Trace__1__Slow \
	Vmycpu_top__Trace__2__Slow \
	Vmycpu_top__Trace__3__Slow \
	Vmycpu_top__Trace__4__Slow \
	Vmycpu_top__Trace__5__Slow \
	Vmycpu_top__Trace__6__Slow \
	Vmycpu_top__Trace__7__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
