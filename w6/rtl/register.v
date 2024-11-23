module register (
	input wire reset,
	input wire clk,
	input wire [15:0] d_in,
	input wire en,
	output reg [15:0] d_out 
);

always @(posedge clk or posedge reset) begin
	if (reset == 1) begin
		d_out <= 16'd1111;
	end 
	else if (en == 1) begin
		d_out <= d_in;
	end
end 

endmodule
