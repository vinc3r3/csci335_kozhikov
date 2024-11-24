#include <iostream>
#include "BittyEmulator.h"
#include <cassert>
#include <vector>
#include <bitset>

void TestInstruction(uint16_t instruction, uint16_t expected, BittyEmulator emul, int index) {
    // emul.Reset();

    std::bitset<16> binary(instruction);

    std::cout << "Generated Instruction: " << binary << std::endl;

    int rx = (instruction & 0xE000) >> 13; 
    int ry = ((instruction & 0x1C00) >> 10) % 8;
    
    uint16_t reg_x = emul.GetRegisterValue(rx);
    uint16_t reg_y = emul.GetRegisterValue(ry);
    std::cout << "BEFORE: reg_x == " << reg_x << "  reg_y == " << reg_y << std::endl;

    emul.Evaluate(instruction);
    uint16_t regValue = emul.GetRegisterValue(0);
    std::cout << "OUTPUT: " << "Register " << index << " value: " << regValue << std::endl;
    assert(regValue == expected);
}

int main()
{
    BittyEmulator emulator;

    // // lab13 testcases for each 8 operations
    // std::vector<std::vector<uint16_t>> TestCases = {
    //     {0b0000011000100000, 0x2226}, 
    //     {0b0000011000100100, 0x4},    
    //     {0b0000011000101000, 0x1111}, 
    //     {0b0000011000101100, 0x1115}, 
    //     {0b0000011000110000, 0x4}, 
    //     {0b0000011000110100, 0},      
    //     {0b0000011000111000, 0},     
    //     {0b0000011000111100, 0x1}
    // };    

    int index = 0;
    
    BittyInstructionGenerator generate;

    for (int i = 0; i < 1000; i++) {
        uint16_t temp = generate.Generate();
        TestInstruction(temp, 0, emulator, index);
        std::cout << std::endl;
    }

    return 0;
}
