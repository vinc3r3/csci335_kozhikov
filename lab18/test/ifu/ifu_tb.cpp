#include "Vifu.h"          // Generated from Verilog by Verilator
#include "verilated.h"     // Verilator helper functions
#include <iostream>

int main(int argc, char** argv) {
    // Initialize Verilator variables
    Verilated::commandArgs(argc, argv);

    // Instantiate the IFU module
    Vifu* ifu = new Vifu;

    // Simulation variables
    vluint64_t sim_time = 0;      // Simulation time in ticks
    const vluint64_t max_sim_time = 200; // Maximum simulation time
    int clk = 0; // Clock signal

    // Inputs for the IFU
    ifu->clk = 0;        // Clock starts at 0
    ifu->reset = 1;      // Begin with a reset
    ifu->en_pc = 0;      // Disable PC initially

    // Simulation loop
    while (sim_time < max_sim_time) {
        // Toggle clock
        clk = !clk;
        ifu->clk = clk;
        ifu->reset = 0;

        // Enable PC after reset is de-asserted
        if (sim_time == 2) {
            ifu->en_pc = 1;
        }

        // Evaluate the module
        ifu->eval();

        // Print the results to the terminal
        if (clk == 1) { // Print results on the rising edge of the clock
            std::cout << "Time: " << sim_time
                      << ", Reset: " << (int)ifu->reset
                    //   << ", PC: " << std::hex << (int)ifu->current_address
                      << ", Instruction: " << std::hex << (int)ifu->instruction
                      << "\n";
        }

        // Increment simulation time
        sim_time++;
    }

    // Cleanup
    delete ifu;
    std::cout << "Simulation complete.\n";

    return 0;
}
