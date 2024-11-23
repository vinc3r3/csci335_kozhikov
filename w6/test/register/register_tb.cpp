#include <verilated.h>
#include "Vregister.h"
#include <iostream>
#include <cassert>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);

    Vregister* reg = new Vregister;

    // Initialize inputs
    reg->clk = 0;
    reg->reset = 0;  // De-assert reset
    reg->en = 1;     // Enable the register

    // Array of different input values to test
    uint16_t test_values[] = {0x1234, 0xABCD, 0xFFFF, 0x0000, 0x5555, 0xAAAA};
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);

    for (int test = 0; test < num_tests; ++test) {
        reg->d_in = test_values[test];  // Apply new test value

        // Simulate 10 clock cycles for each `d_in` value
        for (int i = 0; i < 4; ++i) {
            reg->clk = !reg->clk;  // Toggle clock
            reg->eval();           // Evaluate the design

            // Display register behavior
            std::cout << "Test: " << test + 1 
                      << " | Cycle: " << i 
                      << " | Data In: " << std::hex << reg->d_in
                      << " | Data Out: " << std::hex << reg->d_out << std::endl;

        }

        reg->reset = 1;
        reg->eval();
        reg->reset = 0;
        reg->eval();
    }

    reg->final();
    delete reg;

    return 0;
}
