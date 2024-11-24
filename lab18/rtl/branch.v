module branch(
    // inputs:
    input [15:0] last_alu,
    input done,
    input [15:0] mem_out,
    input [11:0] pc_out,
    // output:
    output reg [11:0] new_pc
);

    always @(*) begin
        if (done == 1) begin 
            
            if (mem_out[1:0] == 2'b00) begin
                new_pc = pc_out + 1;
            end 
            else if (mem_out[1:0] == 2'b01) begin
                new_pc = pc_out + 1;
            end 
            else if (mem_out[1:0] == 2'b10) begin
                case(mem_out[3:2])
                    2'b00: begin 
                        if (last_alu == 16'd0) begin 
                            new_pc = mem_out[15:4];
                        end 
                    end
                    2'b01: begin 
                        if (last_alu == 16'd1) begin 
                            new_pc = mem_out[15:4];
                        end 
                    end
                    2'b10: begin 
                        if (last_alu == 16'd2) begin 
                            new_pc = mem_out[15:4];
                        end 
                    end
                endcase
            end
        end 
    end 

endmodule