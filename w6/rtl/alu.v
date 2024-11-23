// Combinational Logic 
module alu (
    input wire [15:0] in_a,
    input wire [15:0] in_b,
    input wire [3:0] select,
    input wire mode,
    output wire [15:0] alu_out
);

  wire [15:0] logic_out;
  wire [15:0] arithmetic_out;

  Logic log_instance (.in_a(in_a), .in_b(in_b), .select(select), .log_out(logic_out));
  Arithmetic ar_instance (.in_a(in_a), .in_b(in_b), .select(select), .ar_out(arithmetic_out));

  assign alu_out = mode ? logic_out : arithmetic_out;

endmodule

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
        input wire [15:0] in_a,
        input wire [15:0] in_b,
        input wire [3:0] select,
        output reg [15:0] ar_out
);
    always @(*) begin
      case (select)
          4'b0000: begin
              ar_out = in_a;
          end
          4'b0001: begin
              ar_out = in_a | in_b;
          end
          4'b0010: begin
              ar_out = in_a | (~in_b);
          end
          4'b0011: begin
              ar_out = -1;
          end
          4'b0100: begin
              ar_out = in_a | (in_a & (~in_b));
          end
          4'b0101: begin
              ar_out = (in_a | in_b) + (in_a & (~in_b));
          end
          4'b0110: begin
              ar_out = in_a - in_b - 1;
          end
          4'b0111: begin
              ar_out = (in_a & (~in_b)) - 1;
          end
          4'b1000: begin
              ar_out = in_a + (in_a & in_b);
          end
          4'b1001: begin
              ar_out = in_a + in_b;
          end
          4'b1010: begin
              ar_out = (in_a | (~in_b)) + (in_a & in_b);
          end
          4'b1011: begin
            ar_out = (in_a & in_b) - 1;
          end
          4'b1100: begin
            ar_out = in_a + in_a;
          end
          4'b1101: begin
            ar_out = (in_a | in_b) + in_a;
          end
          4'b1110: begin
            ar_out = (in_a | (~in_b)) + in_a;
          end
          4'b1111: begin
            ar_out = in_a - 1;
          end
      endcase
    end 

endmodule
