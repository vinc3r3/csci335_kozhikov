#include <iostream>
#include "BittyEmulator.h"
#include <vector>
#include <fstream>
BittyEmulator::BittyEmulator() {
    // std::cout << "Bitty Emulator Constructor" << std::endl;

    registers_ = {0x1234, 0x1234, 0x1234, 0x1234, 0x1234, 0x1234, 0x1234, 0x1234};
    

    std::ifstream istrm("./instructions.txt");

    for (uint16_t instruction; istrm >> std::hex >> instruction;) {
        memory.push_back(instruction);
        // std::cout << instruction << std::endl;
    }
}

uint16_t BittyEmulator::Evaluate(uint16_t instruction) {
    // instruction reading

    // std::cout << "I am in Emulator" << std::endl;
    int rx = (instruction & 0xE000) >> 13; // 
    int format = instruction % 2;
    // 000111
    int alu_sel = ((instruction & 0x001C) >> 2);

    if (format == 0) {
        int ry = ((instruction & 0x1C00) >> 10) % 8;
        // final answer in register rx
        switch (alu_sel){
            case 0:
                registers_[rx] = registers_[rx] + registers_[ry];
                break;
            case 1:
                registers_[rx] = registers_[rx] - registers_[ry];
                break;
            case 2:
                registers_[rx] = registers_[rx] & registers_[ry];
                break;
            case 3:
                registers_[rx] = registers_[rx] | registers_[ry];
                break;
            case 4:
                registers_[rx] = registers_[rx] ^ registers_[ry];
                break;
            case 5:
                registers_[rx] = registers_[ry] < 16 ? registers_[rx] << registers_[ry] : 0;
                break;
            case 6: 
                registers_[rx] = registers_[ry] < 16 ? registers_[rx] >> registers_[ry] : 0;
                break;
            case 7:
                if (registers_[rx] == registers_[ry]) {
                    registers_[rx] = 0;
                }
                else if (registers_[rx] > registers_[ry]) {
                    registers_[rx] = 1;
                }
                else {
                    registers_[rx] = 2;
                }
                break;
        }
    }
    else if (format == 1) {
        uint16_t imd = ((instruction & 0x1FE0) >> 5) % 256;
        switch (alu_sel){
            case 0:
                registers_[rx] = registers_[rx] + imd;
                break;
            case 1:
                registers_[rx] = registers_[rx] - imd;
                break;
            case 2:
                registers_[rx] = registers_[rx] & imd;
                break;
            case 3:
                registers_[rx] = registers_[rx] | imd;
                break;
            case 4:
                registers_[rx] = registers_[rx] ^ imd;
                break;
            case 5:
                registers_[rx] = (imd < 16) ? registers_[rx] << imd : 0;
                break;
            case 6: 
                registers_[rx] = (imd < 16) ? registers_[rx] >> imd : 0;
                break;
            case 7:
                if (registers_[rx] == imd) {
                    registers_[rx] = 0;
                }
                else if (registers_[rx] > imd) {
                    registers_[rx] = 1;
                }
                else {
                    registers_[rx] = 2;
                }
                break;
        }
    }
               
    pc++;
    return registers_[rx];
}

uint16_t BittyEmulator::GetRegisterValue(uint16_t reg_num) {
    return (reg_num < registers_.size() && reg_num >= 0) ? registers_[reg_num] : 0;
}

void BittyEmulator::Reset() {
    registers_ = {0x1234, 0x1234, 0x1234, 0x1234, 0x1234, 0x1234, 0x1234, 0x1234};
}


// functions for BittyInstructionGenerator class
uint16_t BittyInstructionGenerator::Generate() {
    uint16_t random_instruction;
    uint16_t format = rand() % 2;
    if (format == 0) {
        random_instruction = (rand() % 16384) << 2;
        random_instruction = random_instruction | format;
    }
    else if (format == 1) {
        random_instruction = (rand() % 16384) << 2;
        random_instruction = random_instruction | format;
    }

    return random_instruction;
}


uint16_t BittyEmulator::GetInstructionFromMemory() {
    return memory[pc];
}