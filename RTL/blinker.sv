//  blinker.sv  

/* 
    just a simple up-down counter 
*/

module blinker (
    input                       clk_i,
    input                       rst_ni,
    input                       ctrl,
    output  logic [3:0]         counter 
);
    
    always_ff @( posedge clk_i or negedge rst_ni ) begin : counter_main
        if (!rst_ni) begin
            counter     <=      4'd0;
        end else begin
            if (ctrl) begin
                counter     <=  counter + 1;
            end else begin
                counter     <=  counter - 1;
            end
        end
    end

endmodule
