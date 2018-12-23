`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:34:30 11/25/2018 
// Design Name: 
// Module Name:    proj5 
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
module proj5(
	// set master clock
	input wire clk, // master clock = 50MHz
	
	// set input keys
	input wire aaa, // clear and reset all
	input wire bbb, // restart game
	input wire ccc, // DEBUG ONLY or KEY
	input wire ddd, // jump control button
	input wire [3:0] x,
	
	// set 7-segment display
	output wire [6:0] seg, // 7-segment display LEDs
	output wire [3:0] an, // 7-segment display anode
	output wire dp, // 7-segment display colon
	
	output wire [7:0] y,
	
    output wire din,
    output wire sync,
    output wire sclk
    );

wire [3:0] num3_wire;
wire [3:0] num2_wire;
wire [3:0] num1_wire;
wire [3:0] num0_wire;

// 7-segment clock interconnect
wire segclk;
wire sltclk;
wire memclk;
wire [4:0] contro;
wire [1:0] memmode;

// 
wire [7:0] data;

// clock or frequency divider
clockdiv CoF_Divider(clk, segclk, sltclk);

// 7-segment display controller
seg_disp SSD_Controller(segclk, sltclk, contro,
	num3_wire, num2_wire, num1_wire, num0_wire,
	seg, an, dp);

// 7-segment display controller
main_con_new main(clk, aaa, bbb, ccc, ddd, x, contro,
	num3_wire, num2_wire, num1_wire, num0_wire,
	memclk, memmode);

// DAC controller
dac_con dac(clk, data, din, sync, sclk);

// sin
mem_sin_new sin(clk, memclk, memmode, data);
assign y = data;

endmodule

