module register (
	input reset,
	input clk,
	input [15:0] d_in,
	input en,
	output reg [15:0] d_out 
);

	always @(posedge clk or posedge reset) begin
        if (reset) begin
            d_out <= 16'h1234;       // Reset register value to 0
        end 
        else if (en) begin
            d_out <= d_in;        // Update register value when enable is high
        end
    end

endmodule
