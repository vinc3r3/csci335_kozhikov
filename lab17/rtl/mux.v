module mux (
    input wire [15:0] reg0,
    input wire [15:0] reg1,
    input wire [15:0] reg2,
    input wire [15:0] reg3,  
    input wire [15:0] reg4,
    input wire [15:0] reg5,
    input wire [15:0] reg6,
    input wire [15:0] reg7,
    input wire [15:0] imd,
    input wire [3:0] mux_sel,         
    output reg [15:0] out_data       
);

    always @(*) begin
        case (mux_sel)
            4'b0000: out_data = reg0;
            4'b0001: out_data = reg1;
            4'b0010: out_data = reg2;
            4'b0011: out_data = reg3;
            4'b0100: out_data = reg4;
            4'b0101: out_data = reg5;
            4'b0110: out_data = reg6;
            4'b0111: out_data = reg7;
            4'b1000: out_data = imd;
            default: out_data = 16'b0;  // Default case (can handle reserved values)
        endcase
    end
endmodule
