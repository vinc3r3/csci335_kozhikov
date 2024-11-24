// Instruction Fetch Unit
// It contains the memory unit and program counter (as register with adder) unit as specified in the Lab 18

module ifu(
    input clk,
    input reset,
    input en_pc,
    input done,
    input [15:0] last_alu,
    output reg [15:0] instruction
);
    wire [11:0] current_address; // since in the Branch Logic, we get 12 bits of immediate 
    wire [11:0] next_address;

    // CHECK AGAIN THE BRANCH <========================
    branch BranchLogic(
        // inputs:
        .last_alu(last_alu),
        .done(done),
        .mem_out(instruction),
        .pc_out(next_address),
        // output:
        .new_pc(current_address)
    );

    pc ProgramCounter(
        // input:
        .clk(clk), 
        .reset(reset), 
        .en(en_pc), 
        .d_in(current_address), 
        // output:
        .d_out(next_address)
    );
    
    memory Memory(
        // input:
        .clk(clk), 
        .addr(current_address),
        // output: 
        .out(instruction)
    );
endmodule
