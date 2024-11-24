#include <iostream>
#include <vector>

class BittyEmulator {
    public:
        BittyEmulator();
        uint16_t Evaluate(uint16_t instruction, uint16_t expected, uint16_t last);
        uint16_t GetRegisterValue(uint16_t reg_num);
        uint16_t GetInstructionFromMemory();
        int GetPC();
        
        // added function Reset(), which helps me in testing
        // it just resets the values in vector registers_
        void Reset();

    private:
        std::vector<uint16_t> registers_;
        int pc = 0;
        std::vector<uint16_t> memory;

        // std::cin >> std::hex >> hex_value;
};

class BittyInstructionGenerator {
    public:
        BittyInstructionGenerator() = default;
        uint16_t Generate();
};