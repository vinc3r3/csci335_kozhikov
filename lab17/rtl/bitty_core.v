module bitty_core (
    input clk,
    input rst,
    input [15:0] instr,
    input run,
    output reg done
);
    wire en_s, en_c, en_0, en_1, en_2, en_3, en_4, en_5, en_6, en_7, en_i; 
    wire [15:0] to_control, mux_out, to_ina, out_to_regC, outs, immediate;
    wire [2:0] sel_to_alu; 
    wire [3:0] sel_to_mux;
    wire [15:0] reg0, reg1, reg2, reg3, reg4, reg5, reg6, reg7; 

    register reg_i(
        // inputs:
        .d_in(instr),
        .reset(rst),
        .clk(clk),
        .en(en_i),
        
        // outputs:
        .d_out(to_control)
    );

    control_unit Control(
        // inputs
        .clk(clk), 
        .rst(rst), 
        .run(run), 
        .reg_inst(to_control),
        
        // outputs
        .alu_select(sel_to_alu), 
        .mux_select(sel_to_mux), 
        .en_i(en_i), 
        .en_s(en_s), 
        .en_c(en_c), 
        .en_0(en_0), 
        .en_1(en_1), 
        .en_2(en_2), 
        .en_3(en_3), 
        .en_4(en_4), 
        .en_5(en_5), 
        .en_6(en_6), 
        .en_7(en_7), 
        .done(done),
        .immediate(immediate)
    );

    register reg_s(
        // inputs: 
        .d_in(mux_out), 
        .reset(rst), 
        .clk(clk), 
        .en(en_s),
        // outputs: 
        .d_out(to_ina)
    );
  
    alu alu_inst(
        // inputs:
        .in_a(to_ina), 
        .in_b(mux_out), 
        .select(sel_to_alu), 
                
        /*outputs*/
        .alu_out(out_to_regC)
    );

    register reg_c(
        /*inputs*/ 
        .d_in(out_to_regC), 
        .reset(rst), 
        .clk(clk), 
        .en(en_c), 
        /*outputs*/ 
        .d_out(outs));
        
    register reg_0(
        /*inputs*/ 
        .d_in(outs), 
        .reset(rst), 
        .clk(clk), 
        .en(en_0), 
        /*outputs*/ 
        .d_out(reg0));

    register reg_1(
        /*inputs*/ 
        .d_in(outs), 
        .reset(rst), 
        .clk(clk), 
        .en(en_1), 
        /*outputs*/ 
        .d_out(reg1)
    );
    
    register reg_2(
        /*inputs*/ 
        .d_in(outs), 
        .reset(rst), 
        .clk(clk), 
        .en(en_2), 
        /*outputs*/ 
        .d_out(reg2));

    register reg_3(
        /*inputs*/ .d_in(outs), .reset(rst), .clk(clk), .en(en_3), 
        /*outputs*/ .d_out(reg3));
    
    register reg_4(
        /*inputs*/ .d_in(outs), .reset(rst), .clk(clk), .en(en_4), 
        /*outputs*/ .d_out(reg4));

    register reg_5(
        /*inputs*/ .d_in(outs), .reset(rst), .clk(clk), .en(en_5), 
        /*outputs*/ .d_out(reg5));
    
    register reg_6(
        /*inputs*/ .d_in(outs), .reset(rst), .clk(clk), .en(en_6), 
        /*outputs*/ .d_out(reg6));

    register reg_7(
        /*inputs*/ .d_in(outs), .reset(rst), .clk(clk), .en(en_7), 
        /*outputs*/ .d_out(reg7));

    mux mux_inst(
        /*inputs*/ .reg0(reg0), .reg1(reg1), .reg2(reg2), .reg3(reg3), .reg4(reg4), .reg5(reg5), .reg6(reg6), .reg7(reg7),
        /*inputs*/ .mux_sel(sel_to_mux), .imd(immediate),
        /*outputs*/ .out_data(mux_out));

    dpi DPI_CHECK(
        // inputs:
        .done(done),
        .instruction(to_control),
        .expected(out_to_regC)
    );

    // $monitor("Time: %0t | ALU_Out: %h | Expected_Result: %h\n", $time, out_to_regC, outs);
    
    // always @(posedge clk) begin
    //     $display("\nen_s: %d | en_c: %d | en_0: %d | en_1: %d | en_2: %d | en_3: %d | en_4: %d | en_5: %d | en_6: %d | en_7: %d | en_i: %d", en_s, en_c, en_0, en_1, en_2, en_3, en_4, en_5, en_6, en_7, en_i);
    //     $display("Instruction: %h | inA: %h | inB %h | ALU_SEL: %h | MUX_SEL: %h", to_control, to_ina, mux_out, sel_to_alu, sel_to_mux);
    //     $display("ALU_Out: %h | Expected_Result: %h ", out_to_regC, outs);
    //     $display("reg0: %h | reg1: %h | reg2: %h | reg3: %h | reg4: %h | reg5: %h | reg6: %h | reg7: %h\n", reg0, reg1, reg2, reg3, reg4, reg5, reg6, reg7);
    // end
endmodule