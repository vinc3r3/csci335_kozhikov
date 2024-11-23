// Instruction Fetch Unit
// It contains the memory unit and program counter (as register with adder) unit as specified in the Lab 15

module ifu(
    input clk,
    input reset,
    input en_pc,
    output reg [15:0] instruction
);
    wire [7:0] current_address;
    pc ProgramCounter(
        // input:
        .clk(clk), 
        .reset(reset), 
        .en(en_pc), 
        .d_in(current_address), 
        // output:
        .d_out(current_address)
    );
    memory Memory(
        // input:
        .clk(clk), 
        .addr(current_address),
        // output: 
        .out(instruction)
    );
endmodule
