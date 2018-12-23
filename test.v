`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:05:08 11/25/2018
// Design Name:   proj5
// Module Name:   C:/Users/Shiwei/Documents/XILINX/proj5/test.v
// Project Name:  proj5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: proj5
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg aaa;
	reg bbb;
	reg ccc;
	reg ddd;

	// Outputs
	wire [7:0] seg;
	wire [3:0] an;
	wire dp;

	// Instantiate the Unit Under Test (UUT)
	proj5 uut (
		.clk(clk), 
		.aaa(aaa), 
		.bbb(bbb), 
		.ccc(ccc), 
		.ddd(ddd), 
		.seg(seg), 
		.an(an), 
		.dp(dp)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		aaa = 0;
		bbb = 0;
		ccc = 0;
		ddd = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		// 999Hz
		aaa = 0;bbb = 1;ccc = 0;ddd = 0;#20000000; // 20ms
		aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		aaa = 0;bbb = 1;ccc = 0;ddd = 0;#20000000; // 20ms
		aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		aaa = 0;bbb = 1;ccc = 0;ddd = 0;#20000000; // 20ms
		aaa = 0;bbb = 0;ccc = 0;ddd = 0;#90000000; // 90ms

		aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		aaa = 0;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms
		aaa = 0;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms
		aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms
		// aaa = 0;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms
		aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms
		// aaa = 0;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms

		aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms

		aaa = 0;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		
	end
	
always#10 clk=~clk;
      
endmodule

