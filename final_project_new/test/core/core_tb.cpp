#include "Vcore.h"          // Verilator-generated header for `core` module
#include "verilated.h"      // Verilator helper functions
#include <iostream>         // For console output
#include <bitset>
int main(int argc, char** argv) {
    // Initialize Verilator variables
    Verilated::commandArgs(argc, argv);

    // Instantiate the core module
    Vcore* core = new Vcore;

    // Simulation variables
    vluint64_t sim_time = 0;  // Simulation time in ticks
    const vluint64_t max_sim_time = 1000; // Maximum simulation time
    int clk = 0;             // Clock signal

    // Inputs to the core module
    for (int i = 0; i < 4; i++) {
        core->clk = 0;           // Clock starts at 0
        core->reset = 1;         // Begin with a reset
        core->run = 0;           // Execution is initially off
        core->eval();
    }

    // Print header for simulation log
    std::cout << "Time | Reset | Run | Core Done | Instruction" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    // Simulation loop
    while (sim_time < max_sim_time) {
        // Toggle clock
        clk = !clk;
        core->clk = clk;
        core->reset = 0;

        if (sim_time == 2) {
            core->reset = 1;
        }

        // Start execution after reset is de-asserted
        if (sim_time == 4) {
            core->run = 1;
        }

        // Evaluate the module
        core->eval();

        // Log results on the rising edge of the clock
        if (clk == 1) {
            std::cout << sim_time << "    | " 
                      << (int)core->reset << "     | " 
                      << (int)core->run << "   | " 
                      << (int)core->core_done << "        | "
                      << std::bitset<16>(core->instruction) 
                      << std::dec << std::endl;
        }

        // Stop execution once the core is done
        if (core->core_done) {
            std::cout << "Core finished execution at time: " << sim_time << std::endl;
            std::cout << std::endl;
        }

        // Increment simulation time
        sim_time++;
    }

    // Cleanup
    delete core;
    std::cout << "Simulation complete." << std::endl;

    return 0;
}
