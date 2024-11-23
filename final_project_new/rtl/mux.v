module mux (
    input wire [15:0] reg0,
    input wire [15:0] reg1,
    input wire [15:0] reg2,
    input wire [15:0] reg3,  
    input wire [15:0] reg4,
    input wire [15:0] reg5,
    input wire [15:0] reg6,
    input wire [15:0] reg7,
    input wire [2:0] mux_sel,         
    output reg [15:0] out_data       
);

    always @(*) begin
        case (mux_sel)
            3'b000: out_data = reg0;
            3'b001: out_data = reg1;
            3'b010: out_data = reg2;
            3'b011: out_data = reg3;
            3'b100: out_data = reg4;
            3'b101: out_data = reg5;
            3'b110: out_data = reg6;
            3'b111: out_data = reg7;
            default: out_data = 16'b0;  // Default case (can handle reserved values)
        endcase
    end
endmodule
