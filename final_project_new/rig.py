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
        # Parse the number of instructions (N) from command-line argument
        N = int(sys.argv[1])
        if N <= 0:
            print("Please provide a valid positive integer for N.")
            sys.exit(1)
    except ValueError:
        print("Please provide a valid integer for the number of instructions.")
        sys.exit(1)

    # Open a file to save the instructions
    with open("instructions.txt", "w") as output_file:
        # Generate N random instructions and write them to the file
        for _ in range(N):
            instruction = random.randint(0, 65535)
            # Write the instruction in hexadecimal format with a prefix '0x'
            output_file.write(f"0x{instruction:04X}\n")
    
    print(f"Generated {N} random instructions and saved to instructions.txt")

if __name__ == "__main__":
    main()
