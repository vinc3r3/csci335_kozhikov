// a bigger abstraction that contain 
// Instruction Fetch Unit ("ifu.v") and Bitty Core ("bitty_core.v")

module core (
    input clk,
    input reset,
    // input run,
    output [15:0] instruction,
    output core_done
);             
    wire bitty_core_done;
    wire [15:0] last_alu_result;
    wire runny;
    assign runny = instruction[1:0] != 2'b10;

    ifu ifu_inst (
        .clk(clk),
        .reset(reset),
        .en_pc(bitty_core_done),
        .done(bitty_core_done),
        .last_alu(last_alu_result),
        .instruction(instruction)    // Fetched instruction
    );

    bitty_core bitty_core_inst (
        .clk(clk),
        .rst(reset),
        .instr(instruction),
        .run(runny),
        .done(bitty_core_done),
        .out_C(last_alu_result)
    );

    // dpi dpi_branch(
    //     .done(bitty_core_done),
    //     .instruction(instruction),
    //     .expected(last_alu_result)
    // );
    // Core done when both bitty_core and run process are finished
    assign core_done = bitty_core_done && runny;
endmodule
