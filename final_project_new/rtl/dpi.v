import "DPI-C" function void sana(input shortint unsigned instruction, input shortint unsigned expected);

module dpi (
    input done,
    input [15:0] instruction,
    input [15:0] expected
);

    always @(posedge done) begin  
        // $display("%d", expected);
        // $display("%d", instruction);
        sana(instruction, expected); 
    end
endmodule