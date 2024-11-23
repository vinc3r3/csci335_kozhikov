module bitty_core(
	input clk,
        input rst,
	input [15:0] instruction,
	input run,
	output reg done,
        output reg [15:0] inst_to_control,
        output reg [15:0] regS_to_inA,
        output reg [15:0] outs,
        output reg [15:0] reg0,
        output reg [15:0] reg1,
        output reg [15:0] reg2,
        output reg [15:0] reg3,
        output reg [15:0] reg4,
        output reg [15:0] reg5,
        output reg [15:0] reg6,
        output reg [15:0] reg7        
);
        wire [3:0] sel_to_alu;
        wire [2:0] sel_to_mux;
        wire mode_to_alu;
        wire en_s, en_c, en_0, en_1, en_2, en_3, en_4, en_5, en_6, en_7, en_i;  
        wire [15:0] out_to_regC, mux_out;

        register reg_inst(/*inputs*/ .d_in(instruction), .reset(rst), .clk(clk), .en(en_i), 
                        /*outputs*/ .d_out(inst_to_control));


        control_unit ControlUnit(/*inputs*/  .clk(clk), .rst(rst), .run(run), .reg_inst(inst_to_control), 
                                /*outputs*/  .alu_select(sel_to_alu), .mux_select(sel_to_mux), .alu_mode(mode_to_alu),
                                /*outputs*/  .en_i(en_i), .en_s(en_s), .en_c(en_c), .en_0(en_0), .en_1(en_1), .en_2(en_2), .en_3(en_3), .en_4(en_4), .en_5(en_5), .en_6(en_6), .en_7(en_7), .done(done));

  
        register reg_s(/*inputs*/ .d_in(mux_out), .reset(rst), .clk(clk), .en(en_s), 
                       /*outputs*/ .d_out(regS_to_inA));
  
        alu alu_inst(/*inputs*/ .in_a(regS_to_inA), .in_b(mux_out), .select(sel_to_alu), .mode(mode_to_alu), 
                     /*outputs*/.alu_out(out_to_regC));

        register reg_c(/*inputs*/ .d_in(out_to_regC), .reset(rst), .clk(clk), .en(en_c), 
                       /*outputs*/ .d_out(outs));
        
        register reg_0(/*inputs*/ .d_in(outs), .reset(rst), .clk(clk), .en(en_0), 
                        /*outputs*/ .d_out(reg0));

        register reg_1(/*inputs*/ .d_in(outs), .reset(rst), .clk(clk), .en(en_1), 
                        /*outputs*/ .d_out(reg1));
        
        register reg_2(/*inputs*/ .d_in(outs), .reset(rst), .clk(clk), .en(en_2), 
                        /*outputs*/ .d_out(reg2));

        register reg_3(/*inputs*/ .d_in(outs), .reset(rst), .clk(clk), .en(en_3), 
                        /*outputs*/ .d_out(reg3));
        
        register reg_4(/*inputs*/ .d_in(outs), .reset(rst), .clk(clk), .en(en_4), 
                        /*outputs*/ .d_out(reg4));

        register reg_5(/*inputs*/ .d_in(outs), .reset(rst), .clk(clk), .en(en_5), 
                        /*outputs*/ .d_out(reg5));
        
        register reg_6(/*inputs*/ .d_in(outs), .reset(rst), .clk(clk), .en(en_6), 
                        /*outputs*/ .d_out(reg6));

        register reg_7(/*inputs*/ .d_in(outs), .reset(rst), .clk(clk), .en(en_7), 
                        /*outputs*/ .d_out(reg7));

        mux mux_inst(/*inputs*/ .reg0(reg0), .reg1(reg1), .reg2(reg2), .reg3(reg3), 
                     /*inputs*/ .reg4(reg4), .reg5(reg5), .reg6(reg6), .reg7(reg7), .mux_sel(sel_to_mux),
                /*outputs*/ .out_data(mux_out));
endmodule
