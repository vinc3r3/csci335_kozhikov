module memory (
    input clk,
    input [11:0] addr,
    output reg [15:0] out
);
    // to store the registers, we need some array of length 4096 with 16-bit each
    reg [15:0] my_memory [0:4095]; // since 2^addr = 2^12 = 4096

    initial begin
        $readmemh("./fibonacci.txt", my_memory);
    end

    always @(posedge clk) begin 
        out <= my_memory[addr];
    end
endmodule