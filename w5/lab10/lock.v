module pin_fsm (
    input clk,
    input reset,            // Asynchronous reset
    input [3:0] digit,      // The input digit (0-9)
    output reg status       // Key Lock System: status = 0 (locked), status = 1 (unlocked)
);

    // State encoding
    parameter State0 = 4'b0000; // Locked
    parameter State1 = 4'b0001; // First digit correct (3)
    parameter State2 = 4'b0010; // Second digit correct (3)
    parameter State3 = 4'b0011; // Third digit correct (5)
    parameter State4 = 4'b0100; // Fourth digit correct (2)
    parameter State5 = 4'b0101; // Fifth digit correct (5)
    parameter State6 = 4'b0110; // Sixth digit correct (6) -> Unlocked

    reg [3:0] current_state, next_state;

    // Model state register (sequential logic)
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            current_state <= State0;
        end else begin
            current_state <= next_state;
        end
    end

    // Model next state decode logic (combinational logic)
    always @(*) begin
        case (current_state)
            State0: begin
                if (digit == 4'd3) 
                    next_state = State1;
                else
                    next_state = State0; 
            end
            State1: begin
                if (digit == 4'd3) 
                    next_state = State2;
                else
                    next_state = State0; 
            end
            State2: begin
                if (digit == 4'd5) 
                    next_state = State3;
                else
                    next_state = State0; 
            end
            State3: begin
                if (digit == 4'd2) 
                    next_state = State4;
                else
                    next_state = State0; 
            end
            State4: begin
                if (digit == 4'd5) 
                    next_state = State5;
                else
                    next_state = State0; 
            end
            State5: begin
                if (digit == 4'd6) 
                    next_state = State6;
                else
                    next_state = State0; 
            end
            State6: begin
                next_state = State0; 
            end
            default: next_state = State0; 
        endcase
    end

    // Model output logic (combinational logic)
    always @(*) begin
        case (current_state)
            State0: status = 0;  // Locked
            State1: status = 0;
            State2: status = 0;
            State3: status = 0;
            State4: status = 0;
            State5: status = 0;
            State6: status = 1;  // Unlocked
            default: status = 0;  // Default to locked
        endcase
    end
endmodule


