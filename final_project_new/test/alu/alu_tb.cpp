#include "verilated.h"
#include "Valu.h"  
#include <iostream>

int main(int argc, char** argv, char** env) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);

    // Instantiate ALU module
    Valu* alu = new Valu;

    for (int test = 0; test < 100; test++) {
        // Test cases for ALU
        alu->in_a = rand() % 65536;
        alu->in_b = rand() % 65536;
        uint16_t in_a = alu->in_a;
        uint16_t in_b = alu->in_b;
        std::cout << "\n------------------------------------" << std::endl;
        std::cout << "TEST: " << test << std::endl; 
        // Test different ALU operations
        for (int i = 0; i < 8; i++) {
            alu->select = i;  // Select ALU operation (0 to 15)
            alu->eval();      // Evaluate the ALU
            std::cout << "ALU Select: " << i
                    << " | ALU Out: " << std::hex << alu->alu_out
                    << std::endl;

            // Compute expected outputs
            uint16_t expected_alu_out = 0;
                    switch (i) {
                        case 0: expected_alu_out = in_a + in_b; break;
                        case 1: expected_alu_out = in_a - in_b; break;
                        case 2: expected_alu_out = in_a & in_b; break;
                        case 3: expected_alu_out = in_a | in_b; break;
                        case 4: expected_alu_out = in_a ^ in_b; break;
                        case 5: expected_alu_out = in_b < 16 ? in_a << in_b : 0; break;
                        case 6: expected_alu_out = in_b < 16 ? in_a >> in_b : 0; break;
                        case 7: expected_alu_out = (in_a == in_b) ? 0 : ((in_a > in_b) ? 1 : 2); break;
                    }

                    // Verify outputs
                    if ((alu->alu_out != expected_alu_out)) {
                        std::cerr << "ERROR: Mismatch on test " << i + 1
                                << " for operation " << i << "\n"
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
    }
    // Cleanup
    alu->final();
    delete alu;

    return 0;
}
