#include "Vcontrol_unit.h"  // Verilator-generated header for the ControlUnit module
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <bitset>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);  // Initialize Verilator
    Vcontrol_unit* top = new Vcontrol_unit;  // Instantiate the module
    std::srand(std::time(0));

    for (int test = 0; test < 10; test++) {
        std::cout << "Test#" << test << std::endl;
        int random_number = rand() % 65536;
        std::cout << "Our test number: " << std::bitset<16>(random_number) << std::endl;

        top->rst = 0;
        top->run = 1;
        top->reg_inst = random_number;  
        bool en_c, en_s, en_i, en_0, en_1, en_2, en_3, en_4, en_5, en_6, en_7;
        
        for (int i = 0; i < 4; i++) {
            top->clk = 1;
            top->eval();  
            top->clk = 0;
            top->eval();  

            en_c = top->en_c;
            en_s = top->en_s;
            en_i = top->en_i;
            en_0 = top->en_0;
            en_1 = top->en_1;
            en_2 = top->en_2;
            en_3 = top->en_3;
            en_4 = top->en_4;
            en_5 = top->en_5;
            en_6 = top->en_6;
            en_7 = top->en_7;
            

            std::cout << "Cycle " << i << ": "
                    << "alu_select = " << (int)top->alu_select
                    << ", mux_select = " << (int)top->mux_select
                    << ", alu_mode = " << (int)top->alu_mode
                    << ", done = " << (int)top->done << std::endl;

            std::cout << "Current States: " << std::endl
                                            << "en_c: " << en_c << std::endl
                                            << "en_s: " << en_s << std::endl
                                            << "en_i: " << en_i << std::endl
                                            << "en_0: " << en_0 << std::endl
                                            << "en_1: " << en_1 << std::endl
                                            << "en_2: " << en_2 << std::endl
                                            << "en_3: " << en_3 << std::endl
                                            << "en_4: " << en_4 << std::endl
                                            << "en_5: " << en_5 << std::endl
                                            << "en_6: " << en_6 << std::endl
                                            << "en_7: " << en_7 << std::endl;
            
            std::cout << std::endl;
        }
    }

    top->final();
    delete top;
    return 0;
}
