#include <iostream>
#include "emulator/BittyEmulator.h"
#include <cassert>

BittyEmulator emul;

extern "C" void sana(uint16_t instruction, uint16_t expected){
    std::cout << "EMULATOR: " << emul.GetInstructionFromMemory() << "    cpu: " << instruction << std::endl;
    
    if (instruction == emul.GetInstructionFromMemory()) {
        //  std::cout << "I am INNNNNNNNNN" << std::endl;
        int index = (instruction & 0xE000) >> 13;
        emul.Evaluate(instruction);
        uint16_t result = emul.GetRegisterValue(index);
        std::cout << "______________________________________________________" << std::endl;
        std::cout << "OUTPUTS FROM DPI:" << std::endl;
        std::cout << "Emulator: " << result << "    " << "My processor: " << expected << std::endl;
        std::cout << "______________________________________________________" << std::endl;
        assert(result == expected); 
        std::cout << "Outputs are EQUAL" << std::endl;
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