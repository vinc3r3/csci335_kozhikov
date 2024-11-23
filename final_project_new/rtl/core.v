// a bigger abstraction that contain 
// Instruction Fetch Unit ("ifu.v") and Bitty Core ("bitty_core.v")

module core (
    input clk,
    input reset,
    input run,
    output [15:0] instruction,
    output core_done
);             
    wire bitty_core_done;

    ifu ifu_inst (
        .clk(clk),
        .reset(reset),
        .en_pc(bitty_core_done),
        .instruction(instruction)    // Fetched instruction
    );

    bitty_core bitty_core_inst (
        .clk(clk),
        .rst(reset),
        .instr(instruction),
        .run(run),
        .done(bitty_core_done)
    );

    // Core done when both bitty_core and run process are finished
    assign core_done = bitty_core_done && run;
endmodule
