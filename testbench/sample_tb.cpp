#include<iostream>
#include<stdlib.h>
#include<verilated.h>
#include<Vmodulename.h>
#include<verilated_vcd_c.h>

#define MAX_SIM_TIME  20
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env){

    Vblinker *dut = new Vblinker;
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    // Reset functionality
    dut->rst_ni = 0;  // Assert reset
    dut->ctrl = 0;    // Set control signal low
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;

    dut->rst_ni = 1;  // De-assert reset

    // Keep control signal low for a few cycles
    for (int i = 0; i < 5; ++i) {
        dut->ctrl = 0;
        dut->clk_i ^= 1;
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    // Set control signal high for the remaining cycles
    while (sim_time < MAX_SIM_TIME) {
        dut->ctrl = 1;
        dut->clk_i ^= 1;
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
