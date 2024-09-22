module Logic (
	input wire [15:0] in_a,
	input wire [15:0] in_b,
	input wire [3:0] select,
	output reg [15:0] log_out
);

  always @(*) begin
	case(select)
		4'b0000: log_out = ~ in_a;
          	4'b0001: log_out = ~ (in_a | in_b);
          	4'b0010: log_out = (~ in_a) & in_b;
          	4'b0011: log_out = 0;
          	4'b0100: log_out = ~ (in_a & in_b);
          	4'b0101: log_out = ~ in_b;
          	4'b0110: log_out = in_a ^ in_b;
          	4'b0111: log_out = in_a & (~in_b);
          	4'b1000: log_out = (~ in_a) | in_b;
          	4'b1001: log_out = ~ (in_a ^ in_b);
          	4'b1010: log_out = in_b;
          	4'b1011: log_out = in_a & in_b;
		4'b1100: log_out = 1;
          	4'b1101: log_out = in_a | (~in_b);
          	4'b1110: log_out = in_a | in_b;
          	4'b1111: log_out = in_a;
        endcase          
  end 
endmodule



module Arithmetic (
	input wire carry_in,
	input wire [15:0] in_a,    
	input wire [15:0] in_b,
	input wire [3:0] select,
	output reg carry_out,
	output wire compare,
	output reg [15:0] ar_out
);	
  	reg [16:0] ext_ar_out;
	assign compare = (in_a == in_b) ? 1 : 0;
  	assign ext_ar_out = {1'b0, in_a} + {1'b0, in_b} + {{15{1'b0}}, carry_in};

	// bug is found 
	// do carry_out for each case
  
  always @(*) begin 
    case (select)
    	4'b0000: ar_out = in_a;
        4'b0001: ar_out = in_a | in_b;
      	4'b0010: ar_out = in_a | (~in_b);
      	4'b0011: ar_out = -1;
     	4'b0100: ar_out = in_a | (in_a & (~in_b));
      	4'b0101: ar_out = (in_a | in_b) + (in_a & (~in_b));
        4'b0110: ar_out = in_a - in_b - 1;
      	4'b0111: ar_out = (in_a & (~in_b)) - 1;
     	4'b1000: ar_out = in_a + (in_a & in_b);  
      	4'b1001: ar_out = in_a + in_b;
      	4'b1010: ar_out = (in_a | (~in_b)) + (in_a & in_b);
      	4'b1011: ar_out = (in_a & in_b) - 1;
	4'b1100: ar_out = in_a + in_a; 
    	4'b1101: ar_out = (in_a | in_b) + in_a;
     	4'b1110: ar_out = (in_a | (~in_b)) + in_a;
       	4'b1111: ar_out = in_a - 1;
      endcase 
  end 
endmodule



module ALU (
    input wire carry_in,
    input wire [15:0] in_a,
    input wire [15:0] in_b,
    input wire [3:0] select,
    input wire mode,
    output wire carry_out,
    output wire compare,
    output wire [15:0] alu_out
);

  wire [15:0] logic_out;
  wire [15:0] arithmetic_out;

  Logic log_instance (.in_a(in_a), .in_b(in_b), .select(select), .log_out(logic_out));
  Arithmetic ar_instance (.carry_in(carry_in), .in_a(in_a), .in_b(in_b), .select(select), .carry_out(carry_out), .compare(compare), .ar_out(arithmetic_out));

  assign alu_out = mode ? logic_out : arithmetic_out;

endmodule
