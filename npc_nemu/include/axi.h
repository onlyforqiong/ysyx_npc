#ifndef _AXI_H__
#define _AXI_H__

#include <memory/vaddr.h>
#include <verilator_use.h>

typedef struct {
    uint64_t axi_mem_port_arid;
    uint64_t axi_mem_port_arlen;
    uint64_t axi_mem_port_arsize;
    uint64_t axi_mem_port_arburt;
    uint64_t axi_mem_port_arlock;
    uint64_t axi_mem_port_arcache;
    uint64_t axi_mem_port_arprot;
    uint64_t axi_mem_port_arvalid;
    uint64_t axi_mem_port_arready;
    uint64_t axi_mem_port_rid ;
    uint64_t axi_mem_port_rresp;
    uint64_t axi_mem_port_rlast;
    uint64_t axi_mem_port_rvalid;
    uint64_t axi_mem_port_rready;
    uint64_t axi_mem_port_awid;
    uint64_t axi_mem_port_awlen;
    uint64_t axi_mem_port_awsize;
    uint64_t axi_mem_port_awburst;
    uint64_t axi_mem_port_awlock;
    uint64_t axi_mem_port_awcache;
    uint64_t axi_mem_port_awprot;
    uint64_t axi_mem_port_awvalid;
    uint64_t axi_mem_port_awready;
    uint64_t axi_mem_port_wid ;
    uint64_t axi_mem_port_wstrb;
    uint64_t axi_mem_port_wlast;
    uint64_t axi_mem_port_wvalid;
    uint64_t axi_mem_port_wready;
    uint64_t axi_mem_port_bid ;
    uint64_t axi_mem_port_bresp;
    uint64_t axi_mem_port_bvalid;
    uint64_t axi_mem_port_bready;
}AXI_ResponseSignal;


//0 is inst
//1 is data
void AXI_ResponseHandler();


#endif
