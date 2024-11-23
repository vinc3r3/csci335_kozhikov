module control_unit (
    input clk,
    input rst,
    input run,
    input [15:0] reg_inst,
	output reg [3:0] alu_select,
    output reg [2:0] mux_select,
	output reg alu_mode,
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

parameter s0 = 2'b00, s1 = 2'b01, s2 = 2'b10, s3 = 2'b11; 

reg [1:0] current_state, next_state;

// Model state register (sequential logic)
always @(posedge clk or posedge rst) begin
    if (rst) begin
        current_state <= s0;
    end else begin
        current_state <= next_state;
    end
end

// Model next state decode logic (combinational logic)
    always @(*) begin
        case (current_state)
            s0: begin
                next_state = s1;
            end
            s1: begin
                next_state = s2;
            end
            s2: begin
                next_state = s3;
            end
			s3: begin
                next_state = s0;
            end
            default: begin
                next_state = s0;
            end
        endcase
    end


    // Model output logic (combinational logic)
    always @(*) begin
        // initialize all signals to 0
        en_c = 0; en_s = 0; en_i = 0; 
        en_0 = 0; en_1 = 0; en_2 = 0; en_3 = 0; en_4 = 0; en_5 = 0; en_6 = 0; en_7 = 0;
        mux_select = 0; alu_select = 0; alu_mode = 0;
        done = 0;

        case (current_state)
            s0: begin
                en_i = 1;
            end
            s1: begin
                en_s = 1;
                mux_select = reg_inst[15:13];
            end
            s2: begin
                en_c = 1;
                mux_select = reg_inst[12:10];
                alu_select = reg_inst[6:3];
                alu_mode = reg_inst[2];  
            end
            s3: begin
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
            end
        endcase
    end

	
	
endmodule
