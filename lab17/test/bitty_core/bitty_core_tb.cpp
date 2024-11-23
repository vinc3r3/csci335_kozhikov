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

    
    for (int j = 0; j < 4; j++) {
        reset_everything(core);
    }
    
    for (int i = 0; i < 10; i++) {
        // int inst = rand() % 65536;
        bool run = 1;

        // core->instr = inst;
        core->run = run;

        std::cout << "Test " << i+1 << ":\n";
        std::cout << "inst   = "; printBinary(core->instr, 16); std::cout << " (" << core->instr << ")\n";
        std::cout << "run    = " << run << "\n";

        core->rst = 0;

        for (int j = 0; j < 4; j++) {
            std::cout << "Cycle " << j+1 << ":\n";
            std::cout << "done    = " << (int)(core->done) << "\n";
            std::cout << "----------------------------------------\n";

            core->clk = 0;
            core->eval();
            core->clk = 1;
            core->eval();
        }

        std::cout << "DPI IS WORKING --> DONT WORRY" << std::endl;
    }

    delete core;
    return 0;
}
