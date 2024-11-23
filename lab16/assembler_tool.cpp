#include <bits/stdc++.h> 

using namespace std;

class MachineInstruction {
public:
    int rx, ry, alu_sel;

    uint16_t toBinary() const {
        return (rx << 13) | (ry << 10) | (alu_sel << 2);
    }

    void fromBinary(uint16_t binary) {
        rx = binary >> 13;
        ry = (binary >> 10) & 0x7; 
        alu_sel = (binary >> 2) & 0x7; 
    }
};

class OpcodeTranslator {
private:
    unordered_map<string, int> mnemonicToBinary;
    unordered_map<int, string> binaryToMnemonic;

public:
    OpcodeTranslator() {
        mnemonicToBinary = {{"add", 0b000}, {"sub", 0b001}, {"and", 0b010}, {"or", 0b011}, {"xor", 0b100},
                            {"shl", 0b101}, {"shr", 0b110}, {"cmp", 0b111}};
        binaryToMnemonic = {{0b000, "add"}, {0b001, "sub"}, {0b010, "and"}, {0b011, "or"}, {0b100, "xor"},
                            {0b101, "shl"}, {0b110, "shr"}, {0b111, "cmp"}};
    }

    int getBinaryCode(const string& mnemonic) {
        return mnemonicToBinary[mnemonic];
    }

    string getMnemonic(int binaryCode) {
        return binaryToMnemonic[binaryCode];
    }
};

class Assembler {
private:
    OpcodeTranslator translator;

public:
    void assembleCode(const string& inputFile, const string& outputFile) {
        ifstream input(inputFile);
        if (!input) {
            cout << "Error: Unable to open input file: " << inputFile << endl;
            return;
        }

        stringstream output;

        string line;
        while (getline(input, line)) {
            istringstream lineStream(line);
            string operation, regX, regY;

            lineStream >> operation >> regX >> regY;

            int operandX = stoi(regX.substr(1));
            int operandY = stoi(regY.substr(1));

            MachineInstruction instruction;
            instruction.rx = operandX;
            instruction.ry = operandY;
            instruction.alu_sel = translator.getBinaryCode(operation);

            uint16_t machineCode = instruction.toBinary();
            output << bitset<16>(machineCode) << endl;
        }

        input.close();

        if (outputFile.empty()) {
            cout << "Generated Machine Code:\n" << output.str();
        } 
        else {
            ofstream outputBinary(outputFile, ios::binary);
            string binaryLine;
            while (getline(output, binaryLine)) {
                uint16_t machineCode = stoi(binaryLine, nullptr, 2);
                outputBinary.write(reinterpret_cast<char*>(&machineCode), sizeof(machineCode));
            }
            outputBinary.close();
        }
    }
};

class Disassembler {
private:
    OpcodeTranslator translator;

public:
    void disassembleCode(const string& inputFile, const string& outputFile) {
        ifstream input(inputFile, ios::binary);
        if (!input) {
            cout << "Error: Unable to open input file: " << inputFile << endl;
            return;
        }

        stringstream output;

        uint16_t machineCode;
        while (input.read(reinterpret_cast<char*>(&machineCode), sizeof(machineCode))) {
            MachineInstruction instruction;
            instruction.fromBinary(machineCode);

            string operation = translator.getMnemonic(instruction.alu_sel);
            output << operation << " r" << instruction.rx << ", r" << instruction.ry << endl;
        }

        input.close();

        if (outputFile.empty()) {
            cout << "Disassembled Code:\n" << output.str();
        } 
        else {
            ofstream outputFileStream(outputFile);
            outputFileStream << output.str();
            outputFileStream.close();
        }
    }
};

class Parser {
public:
    static bool parseArguments(int argc, char* argv[], string& inputFile, string& outputFile, bool& isAssemble, bool& isDisassemble) {
        for (int i = 1; i < argc; ++i) {
            string argument = argv[i];
            
            if (argument == "-i") {
                inputFile = argv[++i];
            } 
            else if (argument == "-o") {
                outputFile = argv[++i];
            } 
            else if (argument == "-a") {
                isAssemble = true;
            } 
            else if (argument == "-d") {
                isDisassemble = true;
            }
        }

        if (inputFile.empty()) {
            cout << "Input file is required: tool -i <input file> [-o <output file>] -a|-d" << endl;
            return false;
        } 
        else if (!isAssemble && !isDisassemble) {
            cout << "You must specify either -a (assemble) or -d (disassemble)" << endl;
            return false;
        }

        return true;
    }
};


int main(int argc, char* argv[]) {
    string inputFile, outputFile;
    bool isAssemble = false, isDisassemble = false;

    if (!Parser::parseArguments(argc, argv, inputFile, outputFile, isAssemble, isDisassemble)) {
        return 1;
    }

    if (isAssemble) {
        Assembler assembler;
        assembler.assembleCode(inputFile, outputFile);
    } 
    else if (isDisassemble) {
        Disassembler disassembler;
        disassembler.disassembleCode(inputFile, outputFile);
    }

    return 0;
}
