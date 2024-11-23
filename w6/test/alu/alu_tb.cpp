#include <verilated.h>
#include "Valu.h"  
#include <iostream>

int main(int argc, char** argv, char** env) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);

    // Instantiate ALU module
    Valu* alu = new Valu;

    // Test cases for ALU
    alu->in_a = 0x1234;
    alu->in_b = 0x5678;
    uint16_t in_a = alu->in_a;
    uint16_t in_b = alu->in_b;
    // Test different ALU operations
    for (int i = 0; i < 16; i++) {
        alu->select = i;  // Select ALU operation (0 to 15)
        alu->mode = 0;    // Arithmetic mode
        alu->eval();      // Evaluate the ALU
        std::cout << "ALU Select: " << i
                  << " | ALU Out: " << std::hex << alu->alu_out
                  << std::endl;

        // Compute expected outputs
        uint16_t expected_alu_out = 0;
    
                if (alu->mode == 0) { // Arithmetic operations
                    switch (i) {
                        case 0: expected_alu_out = in_a; break;
                        case 1: expected_alu_out = in_a | in_b; break;
                        case 2: expected_alu_out = in_a | in_b; break;
                        case 3: expected_alu_out = -1; break;
                        case 4: expected_alu_out = in_a | (in_a & ~in_b); break;
                        case 5: expected_alu_out = (in_a | in_b) + (in_a & ~in_b); break;
                        case 6: expected_alu_out = in_a - in_b - 1; break;
                        case 7: expected_alu_out = (in_a & ~in_b) - 1; break;
                        case 8: expected_alu_out = in_a + (in_a & in_b); break;
                        case 9: expected_alu_out = in_a + in_b; break;
                        case 10: expected_alu_out = (in_a | ~in_b) + (in_a & in_b); break;
                        case 11: expected_alu_out = (in_a & in_b) - 1; break;
                        case 12: expected_alu_out = in_a + in_a; break;
                        case 13: expected_alu_out = (in_a | in_b) + in_a; break;
                        case 14: expected_alu_out = (in_a | ~in_b) + in_a; break;
                        case 15: expected_alu_out = in_a - 1; break;
                    }
                    // expected_carry_out = (expected_alu_out > 0xFFFF) ? 1 : 0; // Simulate carry out
                } else { // Logic operations
                    switch (i) {
                        case 0: expected_alu_out = ~in_a; break;
                        case 1: expected_alu_out = ~(in_a | in_b); break;
                        case 2: expected_alu_out = (~in_a) & in_b; break;
                        case 3: expected_alu_out = 0; break;
                        case 4: expected_alu_out = ~(in_a & in_b); break;
                        case 5: expected_alu_out = ~in_b; break;
                        case 6: expected_alu_out = in_a ^ in_b; break;
                        case 7: expected_alu_out = in_a & ~in_b; break;
                        case 8: expected_alu_out = (~in_a) | in_b; break;
                        case 9: expected_alu_out = ~(in_a ^ in_b); break;
                        case 10: expected_alu_out = in_b; break;
                        case 11: expected_alu_out = in_a & in_b; break;
                        case 12: expected_alu_out = 1; break;
                        case 13: expected_alu_out = in_a | ~in_b; break;
                        case 14: expected_alu_out = in_a | in_b; break;
                        case 15: expected_alu_out = in_a; break;
                    }
                }

                // Verify outputs
                if ((alu->alu_out != expected_alu_out)) {
                    std::cerr << "ERROR: Mismatch on test " << i + 1
                              << " for operation " << i << " in mode " << 0 << "\n"
                              << "Inputs: in_a = " << std::hex << in_a
                              << ", in_b = " << std::hex << in_b
                              << "\n"
                              << "Expected: alu_out = " << std::hex << expected_alu_out
                              << "Got: alu_out = " << std::hex << alu->alu_out;
                }
		else {
			std::cout << "Pass: Correct on test " << i + 1 << "\n";
		}
    }

    // Cleanup
    alu->final();
    delete alu;

    return 0;
}
