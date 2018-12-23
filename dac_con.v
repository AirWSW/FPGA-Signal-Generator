`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:48:35 12/05/2018 
// Design Name: 
// Module Name:    dac_con 
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
module dac_con(//D/A转换模块
	input clk, //输入系统时钟，50MHz
	input [7:0] data_in, //输入待转换的数字量
	output wire din, //输出串行数字量信号
	output reg sync, //输出帧同步信号
	output reg sclk //输出串行时钟信号
   );

reg [1:0] state; //状态寄存器
wire [15:0] data_out; //输出数据
reg [4:0] j=0; //移位计数

initial begin //初始化，初始状态
	sclk<=0; //sclk置0
	sync<=1; //sync置1
	state<=2'b00; //初始状态
end

always@(posedge clk) //50MHz二分频作为sclk
	sclk<=~sclk;
	
always@(negedge sclk) //状态转移always块	
	case(state) //状态切换
	2'b00:begin sync<=0;j<=0;state<=2'b01;end	
	2'b01:begin sync<=0;j<=j+1;state<=(j==14)?2'b11:2'b01;end	
	2'b10:begin sync<=1;j<=0;state<=2'b11;end
	2'b11:begin sync<=1;j<=0;state<=2'b00;end
endcase

assign din=data_out[15-j]; //将对应的数据位从din输出
assign data_out[7:0]=data_in; //准备输出数据的低八位
assign data_out[15:8]=8'b00010000; //输出数据的高八位为控制字
endmodule

