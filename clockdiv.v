`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:47:59 12/05/2018 
// Design Name: 
// Module Name:    clockdiv 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module clockdiv(
	input wire clk, // master clock: 50MHz
	output wire segclk, // 7-segment clock: 381.47Hz
	output wire sltclk // 7-segment clock: 2.98Hz
	);

	reg [23:0] q = 0;

	// Clock divider
	always @(posedge clk) begin
		q <= q + 1;
	end

	// 50Mhz / 2^15 = 381.47Hz
	assign segclk = q[14];
	
	// 50Mhz / 2^22 = 2.98Hz
	assign sltclk = q[23];

endmodule
