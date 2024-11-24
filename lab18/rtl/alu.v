// Combinational Logic 
module alu (
    input [15:0] in_a,
    input [15:0] in_b,
    input [2:0] select,
    output reg [15:0] alu_out
);

  always @(*) begin
        case(select)
                3'b000: alu_out = in_a + in_b;
                3'b001: alu_out = in_a - in_b;
                3'b010: alu_out = in_a & in_b;
                3'b011: alu_out = in_a | in_b;
                3'b100: alu_out = in_a ^ in_b;
                3'b101: alu_out = (in_b < 16) ? in_a << in_b : 0;
                3'b110: alu_out = (in_b < 16) ? in_a >> in_b : 0;
                3'b111: alu_out = (in_a == in_b) ? 0 : ((in_a > in_b) ? 1 : 2);
        endcase
  end

endmodule
