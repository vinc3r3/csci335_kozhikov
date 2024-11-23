module memory (
    input clk,
    input [7:0] addr,
    output reg [15:0] out
);
    // to store the registers, we need some array of length 256 with 16-bit each
    reg [15:0] my_memory [0:255]; // since 2^addr = 2^8 = 256

    initial begin
        $readmemh("./instructions.txt", my_memory);
    end

    always @(posedge clk) begin 
        out <= my_memory[addr];
    end
endmodule