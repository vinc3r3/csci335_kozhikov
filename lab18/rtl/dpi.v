import "DPI-C" function void sana(input shortint unsigned instruction, input shortint unsigned expected, input shortint unsigned last);

module dpi (
    input done,
    input [15:0] instruction,
    input [15:0] expected,
    input [15:0] last
);

    always @(posedge done) begin  
        // $display("%d", expected);
        // $display("%d", instruction);
        sana(instruction, expected, last); 
    end
endmodule