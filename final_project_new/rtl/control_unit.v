module control_unit (
    input clk,
    input rst,
    input run,
    input [15:0] reg_inst,
	output reg [2:0] alu_select,
    output reg [2:0] mux_select,
	output reg en_s,
	output reg en_c,
	output reg en_0,
	output reg en_1,
	output reg en_2,
	output reg en_3,
	output reg en_4,
    output reg en_5,
    output reg en_6,
    output reg en_7,
	output reg en_i,
	output reg done   
);

parameter s1 = 3'b000, s2 = 3'b001, s3 = 3'b010, s4 = 3'b011, s5 = 3'b100, s6 = 3'b101, s7 = 3'b110; 

reg [2:0] current_state, next_state;

// Model state register (sequential logic)
always @(posedge clk or posedge rst) begin
    if (rst) begin
        current_state <= s2;
    end else begin
        current_state <= next_state;
    end
    // $display("%d", current_state);
end

// Model next state decode logic (combinational logic)
    always @(*) begin
        next_state = current_state;
        if (run == 1) begin
            case (current_state)
                s2: begin
                    next_state = s3;
                end
                s3: begin
                    next_state = s4;
                end
                s4: begin
                    next_state = s5;
                end
                s5: begin 
                    next_state = s6;
                end
                s6: begin
                    next_state = s7;
                end
                s7: begin
                    next_state = s2;
                end
                default: begin
                    next_state = s2;
                end
            endcase
        end
    end


    // Model output logic (combinational logic)
    always @(*) begin
        en_c = 0; 
        en_s = 0; 
        en_i = 0; 
        en_0 = 0; en_1 = 0; en_2 = 0; en_3 = 0; en_4 = 0; en_5 = 0; en_6 = 0; en_7 = 0;
        mux_select = 0; alu_select = 0;
        done = 0;

        case (current_state)
            s2: begin
            end
            s3: begin
            end
            s4: begin
                en_i = 1;
            end
            s5: begin
                en_s = 1;
                mux_select = reg_inst[15:13];
            end
            s6: begin
                en_c = 1;
                mux_select = reg_inst[12:10];
                alu_select = reg_inst[4:2];
            end
            s7: begin
                case (reg_inst[15:13])
                    3'b000: en_0 = 1;
                    3'b001: en_1 = 1;
                    3'b010: en_2 = 1;
                    3'b011: en_3 = 1;
                    3'b100: en_4 = 1;
                    3'b101: en_5 = 1;
                    3'b110: en_6 = 1;
                    3'b111: en_7 = 1;
                endcase
                done = 1;
                // $display("I am HERE");
            end
        endcase
    end
endmodule
