"""
    This is code for Random Instruction Generator (RIG). 
    It basically generates N (the number you provided while running this script)
        random 16-bit instructions and saves them into the "instructions.txt" file.

    how to use: 
        In the terminal, run the following command:
            python rig.py <yournumber> 
"""

import random
import sys

def main():
    if len(sys.argv) != 2:
        print("Usage: python random_instr_gen.py <number of instructions>")
        sys.exit(1)

    try:
        N = int(sys.argv[1])
        if N <= 0:
            print("Please provide a valid positive integer for N.")
            sys.exit(1)
    except ValueError:
        print("Please provide a valid integer for the number of instructions.")
        sys.exit(1)

    with open("instructions.txt", "w") as output_file:
        for _ in range(N):
            format = random.randint(0, 2)
            if format == 0:
                instruction = random.randint(0, 16383) * 4    
            elif format == 1:
                instruction = (random.randint(0, 16383) * 4 + 1)
            
            output_file.write(f"0x{instruction:04X}\n")
    
    print(f"Generated {N} random instructions and saved to instructions.txt")

if __name__ == "__main__":
    main()
