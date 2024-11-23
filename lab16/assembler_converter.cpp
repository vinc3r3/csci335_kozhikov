#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <bitset>

using namespace std;

class Instruction {
public:
    int rx, ry, alu_sel;

    uint16_t encode() const {
        return (rx << 13) | (ry << 10) | (alu_sel << 2);
    }

    void decode(uint16_t inst) {
        rx = inst >> 13;
        ry = (inst >> 10) % 8;
        alu_sel = (inst >> 2) % 8;
    }
};

class InstructionSet {
private:
    unordered_map<string, int> asm_to_bin;
    unordered_map<int, string> bin_to_asm;
public:
    InstructionSet() {
        asm_to_bin = {{"add", 0b000}, {"sub", 0b001}, {"and", 0b010}, {"or", 0b011}, {"xor", 0b100}, {"shl", 0b101}, {"shr", 0b110}, {"cmp", 0b111}};
        bin_to_asm = {{0b000, "add"}, {0b001, "sub"}, {0b010, "and"}, {0b011, "or"}, {0b100, "xor"}, {0b101, "shl"}, {0b110, "shr"}, {0b111, "cmp"}};
    }

    int get_bin(string asm_sel) {
        return asm_to_bin[asm_sel];
    }

    string get_asm(int bin_sel) {
        return bin_to_asm[bin_sel];
    }
};

class Assembler {
private:
    InstructionSet isa;
public:
    void assemble(string input_file, string output_file) {
        ifstream infile(input_file);
        if (!infile) {
            cout << "Cannot open input file: " << input_file << "\n";
            return;
        }

        stringstream output_stream;

        string line;
        while (getline(infile, line)) {
            istringstream iss(line);
            string asm_sel, rx_str, ry_str;

            iss >> asm_sel >> rx_str >> ry_str;
            
            if (rx_str.back() == ',') {
                rx_str.pop_back();
            }

            int rx = stoi(rx_str.substr(1));
            int ry = stoi(ry_str.substr(1));

            Instruction inst;
            inst.rx = rx;
            inst.ry = ry;
            inst.alu_sel = isa.get_bin(asm_sel);

            uint16_t machine_code = inst.encode();
            output_stream << bitset<16>(machine_code) << "\n";
        }

        infile.close();

        if (output_file.empty()) {
            cout << "Machine Code:\n" << output_stream.str();
        } else {
            ofstream outfile(output_file, ios::binary);
            string binary_line;
            while (getline(output_stream, binary_line)) {
                uint16_t machine_code = stoi(binary_line, nullptr, 2);
                outfile.write(reinterpret_cast<char*>(&machine_code), sizeof(machine_code));
            }
            outfile.close();
        }
    }
};


class Disassembler {
private:
    InstructionSet isa;
public:
    void disassemble(string input_file, string output_file) {
        ifstream infile(input_file, ios::binary);
        if (!infile) {
            cout << "Cannot open input file: " << input_file << "\n";
            return;
        }

        stringstream output_stream;

        uint16_t machine_code;
        while (infile.read(reinterpret_cast<char*>(&machine_code), sizeof(machine_code))) {
            Instruction inst;
            inst.decode(machine_code);

            string asm_sel = isa.get_asm(inst.alu_sel);
            output_stream << asm_sel << " r" << inst.rx << ", r" << inst.ry << "\n";
        }

        infile.close();
        
        if (output_file.empty()) {
            cout << "Assembly Code:\n" << output_stream.str();
        } else {
            ofstream outfile(output_file);
            outfile << output_stream.str();
            outfile.close();
        }
    }
};

int main(int argc, char* argv[]) {
    string input_file, output_file;
    bool assemble = false, disassemble = false;

    for (int i = 1; i < argc; ++i) {
        string arg = argv[i];
        if (arg == "-i") {
            input_file = argv[++i];
        } else if (arg == "-o") {
            output_file = argv[++i];
        } else if (arg == "-a") {
            assemble = true;
        } else if (arg == "-d") {
            disassemble = true;
        }
    }

    if (input_file.empty()) {
        cout << "Input file is required: assembler_tool -i <input file> [-o <output file>] -a|-d\n";
        return 1;
    } else if (!assemble && !disassemble) {
        cout << "One of the -a|-d flags is required: assembler_tool -i <input file> [-o <output file>] -a|-d\n";
        return 1;
    }

    if (assemble) {
        Assembler assembler;
        assembler.assemble(input_file, output_file);
    } else if (disassemble) {
        Disassembler disassembler;
        disassembler.disassemble(input_file, output_file);
    }

    return 0;
}