`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:22:37 12/05/2018 
// Design Name: 
// Module Name:    main_con 
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
module main_con(
	input wire clk,
	input wire aaa,
	input wire bbb,
	input wire ccc,
	input wire ddd,
	input wire [7:0] x,
	output wire [2:0] contro,
	output wire [3:0] num3_disp,
	output wire [3:0] num2_disp,
	output wire [3:0] num1_disp,
	output wire [3:0] num0_disp,
	output wire memclk,
	output wire [1:0] memmode
	);

reg [1:0] place;
reg [3:0] num3_reg;
reg [3:0] num2_reg;
reg [3:0] num1_reg;
reg [3:0] num0_reg;
reg is_bling;
reg [3:0] alex;
wire [3:0] alex_wire;

reg [24:0] bbb_delay_count;
reg [24:0] ccc_delay_count;

reg [15:0] frequency;
reg [31:0] yshang_temp;
reg [7:0] addr;
reg [31:0] temp = 0;
reg memclk_reg = 1'b0;
wire [31:0] yshang;
wire [15:0] yyushu;
// wire [31:0] yshang_memclk;
// wire [31:0] yyushu_memclk;

initial begin
	place = 'b00;
	num3_reg = 'b0000;
	num2_reg = 'b0000;
	num1_reg = 'b0000;
	num0_reg = 'b0000;
	alex = 'b0000;
	is_bling = 1;
	addr = 0;
end

always@(negedge aaa) begin
	if(is_bling) place <= place + 1;
end

always@(posedge ddd) begin
	is_bling <= ~is_bling;
end

// always@(posedge bbb) begin
// 	alex[0] <= bbb==1 ? 1 : 0;
// end

// always@(posedge ccc) begin
// 	alex[2] <= ccc==1 ? 1 : 0;
// end

always@(posedge clk) begin
	if(bbb) bbb_delay_count <= bbb_delay_count + 1; else bbb_delay_count <= 0; // 延时计数器
	if(ccc) ccc_delay_count <= ccc_delay_count + 1; else ccc_delay_count <= 0; // 延时计数器
	// if(~clk) begin
	if(bbb & bbb_delay_count=='b1111010000100100000) alex[0] <= 1; // 按键防抖动延时 10ms
	if(ccc & ccc_delay_count=='b1111010000100100000) alex[2] <= 1; // 按键防抖动延时 10ms
	if(bbb==0) alex[0] <= 0;
	if(ccc==0) alex[2] <= 0;
	// end
	alex[1] <= alex_wire[0]; // 加数标志字 0001
	alex[3] <= alex_wire[2]; // 减数标志字 0100
	case({alex_wire,contro})
		'b0001100:begin num0_reg <= num0_reg==9 ? 0 : (num0_reg + 1); end
		'b0001101:begin num1_reg <= num1_reg==9 ? 0 : (num1_reg + 1); end
		'b0001110:begin num2_reg <= num2_reg==9 ? 0 : (num2_reg + 1); end
		'b0001111:begin num3_reg <= num3_reg==9 ? 0 : (num3_reg + 1); end
		'b0100100:begin num0_reg <= num0_reg==0 ? 9 : (num0_reg - 1); end
		'b0100101:begin num1_reg <= num1_reg==0 ? 9 : (num1_reg - 1); end
		'b0100110:begin num2_reg <= num2_reg==0 ? 9 : (num2_reg - 1); end
		'b0100111:begin num3_reg <= num3_reg==0 ? 9 : (num3_reg - 1); end
		// 'b0001100:begin num0_reg <= num0_reg + 1;alex[1] <= alex_wire[0];alex[3] <= alex_wire[2]; end
		// 'b0001101:begin num1_reg <= num1_reg + 1;alex[1] <= alex_wire[0];alex[3] <= alex_wire[2]; end
		// 'b0001110:begin num2_reg <= num2_reg + 1;alex[1] <= alex_wire[0];alex[3] <= alex_wire[2]; end
		// 'b0001111:begin num3_reg <= num3_reg + 1;alex[1] <= alex_wire[0];alex[3] <= alex_wire[2]; end
		// 'b0100100:begin num0_reg <= num0_reg - 1;alex[1] <= alex_wire[0];alex[3] <= alex_wire[2]; end
		// 'b0100101:begin num1_reg <= num1_reg - 1;alex[1] <= alex_wire[0];alex[3] <= alex_wire[2]; end
		// 'b0100110:begin num2_reg <= num2_reg - 1;alex[1] <= alex_wire[0];alex[3] <= alex_wire[2]; end
		// 'b0100111:begin num3_reg <= num3_reg - 1;alex[1] <= alex_wire[0];alex[3] <= alex_wire[2]; end
	default:num0_reg <= num0_reg;
	endcase
	frequency <= num0_reg + num1_reg*10 + num2_reg*100 + num3_reg*1000;

	// if(x[0]==0) frequency <= frequency * 10;
	// if(yshang_temp < yshang) begin
	// 	yshang_temp <= yshang_temp + 1'b1;
	// 	temp = (addr + 1'b1) * (yshang >> 8) + (((addr + 1'b1) * yshang_memclk) >> 8);
	// 	if(yshang_temp == temp) begin
	// 		memclk_reg <= 1'b1;
	// 		addr <= addr + 1'b1;
	// 		end
	// 	memclk_reg <= 1'b0; //how shit!!
	// 	end
	// else begin
	// 	yshang_temp <= 1'b0;
	// 	end
	
	// if(yshang_temp < yshang) begin
	// 	yshang_temp <= yshang_temp + 1'b1;
	// 	temp = (addr + 1'b1) * (yshang >> 8) + (((addr + 1'b1) * (yshang && 8'b11111111)) >> 8);
	// 	if(yshang_temp == temp) begin
	// 		memclk_reg <= 1'b1;
	// 		addr <= addr + 1'b1;
	// 		end
	// 	else if(yshang_temp == temp + 1 || yshang_temp == 1) // how shit!!
	// 		memclk_reg <= 1'b0;
	// 	end
	// else begin
	// 	yshang_temp <= 1'b0;
	// 	end

	if(yshang_temp < yshang) begin
		yshang_temp <= yshang_temp + 1'b1;
		temp = (addr + 1'b1) * (yshang >> 8) + (((addr + 1'b1) * (yshang && 8'b11111111)) >> 8);
		if(yshang_temp == temp) begin
			memclk_reg <= 1'b1;
			addr <= addr + 1'b1;
			end
		else
			memclk_reg <= 1'b0;
		end
	else begin
		yshang_temp <= 1'b0;
		end
end

// assign alex_wire = {alex[3], alex[2]&ccc, alex[1], alex[0]&bbb};
// assign alex_wire = {alex[3], ccc, alex[1], bbb}; // 时序有点问题
assign alex_wire = alex;
assign contro = {is_bling,place};

assign num3_disp = num3_reg;
assign num2_disp = num2_reg;
assign num1_disp = num1_reg;
assign num0_disp = num0_reg;
assign memclk = memclk_reg;
assign memmode = x[2:1];

div_rill div(32'h02FAF080, frequency, yshang, yyushu); // as 50MHz
// div_rill div(32'h1DCD6500, frequency, yshang, yyushu); // as 500MHz

// div_rill div_memclk(yyushu, 3'h100, yshang_memclk, yyushu_memclk); // as 50MHz

endmodule

module div_rill(
	input[31:0] a, 
	input[15:0] b,
	
	output reg [31:0] yshang,
	output reg [15:0] yyushu
	);
 
reg[31:0] tempa;
reg[15:0] tempb;
reg[47:0] temp_a;
reg[47:0] temp_b;
 
integer i;
 
always @(a or b)
begin
    tempa <= a;
    tempb <= b;
end
 
always @(tempa or tempb)
begin
    temp_a = {16'h0000,tempa};
    temp_b = {tempb,32'h00000000}; 
    for(i = 0;i < 32;i = i + 1)
        begin
            temp_a = {temp_a[46:0],1'b0};
            if(temp_a[47:32] >= tempb)
                temp_a = temp_a - temp_b + 1'b1;
            else
				temp_a = temp_a;
        end
 
    yshang <= temp_a[31:0];
    yyushu <= temp_a[47:32];
end
 
endmodule