#include <iostream>
#include "emulator/BittyEmulator.h"
#include <cassert>

BittyEmulator emul;

extern "C" void sana(uint16_t instruction, uint16_t expected, uint16_t last){
    std::cout << "INSTRUCTION:   EMULATOR: " << emul.GetInstructionFromMemory() << "    My processor: " << instruction << " and Expected ALU: " << expected <<std::endl;
    
    if (instruction == emul.GetInstructionFromMemory()) {
        if ((instruction % 4) < 2) {
            std::cout << "=========== USUAL INSTRUCTION ==========" << std::endl;
            int index = (instruction & 0xE000) >> 13;
            emul.Evaluate(instruction, expected, last); // modified for lab18 only 
            uint16_t result = emul.GetRegisterValue(index);
            std::cout << "______________________________________________________" << std::endl;
            std::cout << "OUTPUTS FROM DPI:" << std::endl;
            std::cout << "Emulator: " << result << "    " << "My processor: " << expected << std::endl;
            std::cout << "______________________________________________________" << std::endl;
            assert(result == expected); 
            std::cout << "Outputs are EQUAL" << std::endl;
        }
        else if ((instruction % 4) == 2) {
            std::cout << "=========== BRANCH INSTRUCTION ==========" << std::endl;
            // how do i checking
            // i'm comparing the pc values of emulator and that of the processor
            std::cout << "______________________________________________________" << std::endl;
            std::cout << "EMULATOR's PC: " << emul.GetPC() << std::endl;
            emul.Evaluate(instruction, expected, last);
            int emul_pc = emul.GetPC();
            int proc_pc = (instruction >> 4) % 4096;
            std::cout << "EMULATOR's PC after branch: " << emul_pc <<std::endl;
            std::cout << "Processor's PC after branch: " << proc_pc << std::endl;
            std::cout << "______________________________________________________" << std::endl;
            assert(emul_pc == proc_pc);
            std::cout << "Outputs are EQUAL" << std::endl;
        }
    }
    else {
        std::cout << "Instruction is not in the queue" << std::endl;
    }

    // int index = (instruction & 0xE000) >> 13;
    // emul.Evaluate(instruction);
    // uint16_t result = emul.GetRegisterValue(index);
    // std::cout << "______________________________________________________" << std::endl;
    // std::cout << "OUTPUTS FROM DPI:" << std::endl;
    // std::cout << "Emulator: " << result << "    " << "My processor: " << expected << std::endl;
    // std::cout << "______________________________________________________" << std::endl;
    // assert(result == expected); 
    // std::cout << "Outputs are EQUAL" << std::endl;

}