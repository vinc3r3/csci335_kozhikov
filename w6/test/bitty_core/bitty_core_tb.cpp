#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Vbitty_core.h"
#include "verilated.h"

void reset_everything(Vbitty_core *core) {
    core->rst = 0;
    core->clk = 0;
    core->eval();
    core->rst = 1;
    core->clk = 1;
    core->eval();
}

void printBinary(int num, int bits) {
    for (int i = bits - 1; i >= 0; --i) {
        std::cout << ((num >> i) & 1);
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vbitty_core *core = new Vbitty_core;
    std::srand(std::time(0));

    for (int i = 0; i < 3; i++) {
        int inst = rand() % 65536;
        bool run = 1;

        core->instruction = inst;
        core->run = run;

        for (int j = 0; j < 4; j++) {
            reset_everything(core);
        }

        std::cout << "Test " << i+1 << ":\n";
        std::cout << "inst   = "; printBinary(inst, 16); std::cout << " (" << inst << ")\n";
        std::cout << "run    = " << run << "\n";

        core->rst = 0;

        for (int j = 0; j < 4; j++) {
            std::cout << "Cycle " << j+1 << ":\n";
            std::cout << "done    = " << (int)(core->done) << "\n";
            
            core->clk = 0;
            core->eval();
            core->clk = 1;
            core->eval();

            std::cout << "reg_i   = "; printBinary(core->inst_to_control, 16); std::cout << " (" << core->inst_to_control << ")\n";
            std::cout << "reg_s   = "; printBinary(core->regS_to_inA, 16); std::cout << " (" << core->regS_to_inA << ")\n";
            std::cout << "reg_c   = "; printBinary(core->outs, 16); std::cout << " (" << core->outs << ")\n";
            std::cout << "reg_0   = "; printBinary(core->reg0, 16); std::cout << " (" << core->reg0 << ")\n";
            std::cout << "reg_1   = "; printBinary(core->reg1, 16); std::cout << " (" << core->reg1 << ")\n";
            std::cout << "reg_2   = "; printBinary(core->reg2, 16); std::cout << " (" << core->reg2 << ")\n";
            std::cout << "reg_3   = "; printBinary(core->reg3, 16); std::cout << " (" << core->reg3 << ")\n";
            std::cout << "reg_4   = "; printBinary(core->reg4, 16); std::cout << " (" << core->reg4 << ")\n";
            std::cout << "reg_5   = "; printBinary(core->reg5, 16); std::cout << " (" << core->reg5 << ")\n";
            std::cout << "reg_6   = "; printBinary(core->reg6, 16); std::cout << " (" << core->reg6 << ")\n";
            std::cout << "reg_7   = "; printBinary(core->reg7, 16); std::cout << " (" << core->reg7 << ")\n";
            std::cout << "----------------------------------------\n";
        }
    }

    delete core;
    return 0;
}
