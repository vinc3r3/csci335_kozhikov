/*#include <Vpin.h>

#include <iostream>
#include <verilated.h>



int main(int argc, char **argv) {
	// Initialize Verilator
	Verilated::commandArgs(argc, argv);

	// Instantiate the Verilog module
	Vpin *tb = new Vpin;

	tb->clk = 0;
	tb->reset = 1;
	
	tb->digit = 3 & 0xF;
	tb->eval();
	std::cout << (int) tb->status << '\n';

	tb->digit = 3 & 0xF;
        tb->eval();
        std::cout << (int) tb->status << '\n';

	tb->digit = 5 & 0xF;
        tb->eval();
        std::cout << (int) tb->status << '\n';

	tb->digit = 2 & 0xF;
        tb->eval();
        std::cout << (int) tb->status << '\n';

	tb->digit = 5 & 0xF;
        tb->eval();
        std::cout << (int) tb->status << '\n';

	tb->digit = 6 & 0xF;
        tb->eval();
        std::cout << (int) tb->status << '\n';

	tb->final();
	delete tb;

	return 0;
}
*/



#include <verilated.h>
#include "Vpin.h"
#include <iostream>

#define CLOCK_CYCLES 30  // Number of clock cycles for the test

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vpin* fsm = new Vpin;

    fsm->clk = 0;  // Initial clock
    fsm->reset = 1;  // Assert reset

    for (int cycle = 0; cycle < CLOCK_CYCLES; ++cycle) {
        fsm->clk = !fsm->clk;

        if (cycle < 2) {
            fsm->reset = 1;  // Keep reset high for the first two cycles
        } else {
            fsm->reset = 0;  // Release reset after two cycles
        }

        if (cycle == 2) fsm->digit = 3;  // First digit
        if (cycle == 4) fsm->digit = 3;  // Second digit
        if (cycle == 6) fsm->digit = 5;  // Third digit
        if (cycle == 8) fsm->digit = 2;  // Fourth digit
        if (cycle == 10) fsm->digit = 5; // Fifth digit
        if (cycle == 12) fsm->digit = 6; // Sixth digit

	if (cycle == 14) fsm->digit = 3;  // First digit
        if (cycle == 16) fsm->digit = 3;  // Second digit
        if (cycle == 18) fsm->digit = 5;  // Third digit
        if (cycle == 20) fsm->digit = 2;  // Fourth digit
        if (cycle == 22) fsm->digit = 5; // Fifth digit
        if (cycle == 24) fsm->digit = 5; // Sixth digit

        fsm->eval();

        std::cout << "Cycle: " << cycle
                  << " | digit: " << int(fsm->digit)
                  << " | status: " << int(fsm->status)
                  << std::endl;
    }

    fsm->final();
    delete fsm;
    return 0;
}
