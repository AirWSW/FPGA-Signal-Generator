`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:02:44 12/05/2018
// Design Name:   proj5
// Module Name:   C:/Users/Shiwei/Documents/XILINX/proj5/test_more.v
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

module test_more;

	// Inputs
	reg clk;
	reg aaa;
	reg bbb;
	reg ccc;
	reg ddd;
	reg [7:0] x;

	// Outputs
	wire [6:0] seg;
	wire [3:0] an;
	wire dp;
	wire din;
	wire sync;
	wire sclk;

	// Instantiate the Unit Under Test (UUT)
	proj5 uut (
		.clk(clk), 
		.aaa(aaa), 
		.bbb(bbb), 
		.ccc(ccc), 
		.ddd(ddd), 
		.x(x), 
		.seg(seg), 
		.an(an), 
		.dp(dp), 
		.din(din), 
		.sync(sync), 
		.sclk(sclk)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		aaa = 0;
		bbb = 0;
		ccc = 0;
		ddd = 0;
		x = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		// // 900.0Hz
		// aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 90ms
		// aaa = 0;bbb = 0;ccc = 0;ddd = 0;#100; // 90ms
		// aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 90ms
		// aaa = 0;bbb = 0;ccc = 0;ddd = 0;#100; // 90ms
		// aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 90ms
		// aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms
		// aaa = 0;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// 001.0Hz
		aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 90ms
		aaa = 0;bbb = 1;ccc = 0;ddd = 0;#20000000; // 90ms
		// aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 90ms
		// aaa = 0;bbb = 0;ccc = 0;ddd = 0;#100; // 90ms
		// aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 90ms
		// aaa = 0;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		aaa = 0;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms



		// // aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// // aaa = 0;bbb = 1;ccc = 0;ddd = 0;#20000000; // 20ms
		// // aaa = 0;bbb = 0;ccc = 0;ddd = 0;#100000000; // 90ms
		// // aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// // aaa = 0;bbb = 1;ccc = 0;ddd = 0;#20000000; // 20ms
		// // aaa = 0;bbb = 0;ccc = 0;ddd = 0;#100000000; // 90ms
		// aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms

		// aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// aaa = 0;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// aaa = 0;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms
		// aaa = 0;bbb = 0;ccc = 0;ddd = 0;#100000000; // 90ms
		// aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms
		// // aaa = 0;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// // aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms
		// aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms
		// // aaa = 0;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// // aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms

		// aaa = 1;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		// aaa = 0;bbb = 0;ccc = 1;ddd = 0;#20000000; // 20ms

		// aaa = 0;bbb = 0;ccc = 0;ddd = 0;#20000000; // 20ms
		
	end
	
always#10 clk=~clk;
      
endmodule

