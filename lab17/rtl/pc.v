// The same as in the register.v, but loaded with 0  
module pc (
    input wire reset,
	input wire clk,
	input wire [7:0] d_in,
	input wire en,
	output reg [7:0] d_out 
);

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            d_out <= 8'd0;       // Reset register value to 0
        end 
        else if (en) begin
            d_out <= d_in + 1;        // Update register value when enable is high
        end
    end
endmodule