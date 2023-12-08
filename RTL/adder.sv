// A Simple alu.sv to test verilator
typedef enum logic	[2:0]{
	add	=	3'b000,
	sub	=	3'b001,
	mul	=	3'b010,
	div	=	3'b011
	} alu_operation;


module # (
	parameter	DATA_WIDTH	=	8
) alu (
	input	wire 	[DATA_WIDTH-1:0]		clk_i,
	input	wire 	[DATA_WIDTH-1:0]		rst_ni,
	input	wire 	[DATA_WIDTH-1:0]		src_a,
	input	wire 	[DATA_WIDTH-1:0]		src_b,
	output	logic 	[DATA_WIDTH-1:0]		result
);
	alu_operation	alu_op;

	always_ff @( posedge clk_i or negedge rst_ni) begin : alu_main_sync
		if(!rst_ni)begin
			result	<=	DATA_WIDTH'd0;
		end
		else begin
			case(alu_op)
				add : result	<=	src_a	+	src_b;
				sub : result	<=	src_a	-	src_b;
				mul : result	<=	src_a	*	src_b;
				div : result	<=	src_a	/	src_b;
			endcase
		end
	end
endmodule
	
