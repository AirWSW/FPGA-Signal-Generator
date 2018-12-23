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
module main_con_new(
	input wire clk,
	input wire aaa,
	input wire bbb,
	input wire ccc,
	input wire ddd,
	input wire [3:0] x,
	output wire [4:0] contro,
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
reg [7:0] alex;
wire [7:0] alex_wire;

reg [20:0] bbb_delay_count;
reg [20:0] ccc_delay_count;
reg [20:0] aaa_delay_count;
reg [20:0] ddd_delay_count;

reg [13:0] frequency;
reg [28:0] yshang_temp;
reg [7:0] addr;
reg [29:0] temp = 0;
// reg [19:0] temp0 = 0;
// reg [28:0] temp3 = 0;
// reg [28:0] temp4 = 0;
reg memclk_reg = 1'b0;
wire [28:0] yshang;
// wire [13:0] yyushu;

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

// always@(negedge aaa) begin
// 	if(is_bling) place <= place + 1;
// end

// always@(posedge ddd) begin
// 	is_bling <= ~is_bling;
// end

always@(posedge clk) begin
	if(bbb) bbb_delay_count <= bbb_delay_count + 1; else bbb_delay_count <= 0; // 延时计数器
	if(ccc) ccc_delay_count <= ccc_delay_count + 1; else ccc_delay_count <= 0; // 延时计数器
	if(aaa) aaa_delay_count <= aaa_delay_count + 1; else aaa_delay_count <= 0; // 延时计数器
	if(ddd) ddd_delay_count <= ddd_delay_count + 1; else ddd_delay_count <= 0; // 延时计数器
	// if(~clk) begin
	if(bbb & bbb_delay_count=='b1111010000100100000) begin alex[0] <= 1; yshang_temp <= 'b0; end // 按键防抖动延时 10ms
	if(ccc & ccc_delay_count=='b1111010000100100000) begin alex[2] <= 1; yshang_temp <= 'b0; end // 按键防抖动延时 10ms
	if(aaa & aaa_delay_count=='b1111010000100100000) begin alex[4] <= 1; yshang_temp <= 'b0; end // 按键防抖动延时 10ms
	if(ddd & ddd_delay_count=='b1111010000100100000) begin alex[6] <= 1; yshang_temp <= 'b0; end // 按键防抖动延时 10ms
	if(bbb==0) alex[0] <= 0;
	if(ccc==0) alex[2] <= 0;
	if(aaa==0) alex[4] <= 0;
	if(ddd==0) alex[6] <= 0;
	// end
	alex[1] <= alex_wire[0]; // 加数标志字 0001
	alex[3] <= alex_wire[2]; // 减数标志字 0100
	alex[5] <= alex_wire[4]; // 加数标志字 0001
	alex[7] <= alex_wire[6]; // 减数标志字 0100
	case(alex_wire[7:4])
		'b0001:begin if(is_bling) place <= place + 1; end
		'b0100:begin is_bling <= ~is_bling; end
	endcase
	case({alex_wire[3:0],contro[2:0]})
		'b0001100:begin num0_reg <= num0_reg==9 ? 0 : (num0_reg + 1); end
		'b0001101:begin num1_reg <= num1_reg==9 ? 0 : (num1_reg + 1); end
		'b0001110:begin num2_reg <= num2_reg==9 ? 0 : (num2_reg + 1); end
		'b0001111:begin num3_reg <= num3_reg==9 ? 0 : (num3_reg + 1); end
		'b0100100:begin num0_reg <= num0_reg==0 ? 9 : (num0_reg - 1); end
		'b0100101:begin num1_reg <= num1_reg==0 ? 9 : (num1_reg - 1); end
		'b0100110:begin num2_reg <= num2_reg==0 ? 9 : (num2_reg - 1); end
		'b0100111:begin num3_reg <= num3_reg==0 ? 9 : (num3_reg - 1); end
	endcase
	// if(x[1:0]==2'b00) frequency <= num0_reg + num1_reg*10 + num2_reg*100 + num3_reg*1000; // 0.1Hz ~ 999.9Hz
	frequency <= num0_reg + num1_reg*10 + num2_reg*100 + num3_reg*1000; // 0.1Hz ~ 999.9Hz
	// else if(x[1:0]==2'b01) frequency <= frequency * 10; // 1Hz ~ 9999Hz
	// else if(x[1:0]==2'b10) frequency <= frequency * 100; // 10Hz ~ 99990Hz

	if(frequency != 0) begin
	// if(yshang_temp < yshang[28:0] && frequency != 0) begin
		yshang_temp <= yshang_temp + 1'b1;
		// temp <= (addr + 1'b1) * (yshang >> 8) + (((addr + 1'b1) * (yshang && 8'b11111111)) >> 8);
		temp <= ({1'b0,addr} + 1'b1) * (yshang[28:8]) + ((({1'b0,addr} + 1'b1) * (yshang[7:0])) >> 8);
		// temp0 <= (addr + 1'b1) * (yshang[28:18]);
		// temp4 <= {(addr + 1'b1) * (yshang[28:18]),10'b0000000000} + (addr + 1'b1) * (yshang[17:8]) + (((addr + 1'b1) * (yshang[7:0])) >> 8);
		// temp <= {temp0, 10'b0000000000} + (addr + 1'b1) * (yshang[17:8]) + (((addr + 1'b1) * (yshang[7:0])) >> 8);
		if(yshang_temp == temp) begin
			memclk_reg <= 1'b1;
			addr <= addr + 1'b1;
			end
		// else if(addr == 0) begin
		//  	yshang_temp <= 'b0;
		// 	// addr <= addr + 1'b1;
		// 	end
		else if(yshang_temp > yshang[28:0]) begin
		 	yshang_temp <= 'b0;
			addr <= 1'b0;
			end
		else
			memclk_reg <= 1'b0;
		end
	else begin
		yshang_temp <= 'b0;
		end
end

assign alex_wire = alex;
assign contro = {x[3:2],is_bling,place};

assign num3_disp = num3_reg;
assign num2_disp = num2_reg;
assign num1_disp = num1_reg;
assign num0_disp = num0_reg;
assign memclk = memclk_reg;
assign memmode = x[1:0];
// x[0]==1 ? 32'h1DCD6500 : 32'h02FAF080

wire [28:0] default_frq;
assign default_frq = x[2]==1 ? (x[3]==1 ? 32'h0007A120 : 32'h1DCD6500) : (x[3]==1 ? 32'h004C4B40 : 32'h02FAF080);
// x[3:2] = 2'b00,   0   Hz ~   9999   Hz
// x[3:2] = 2'b01,   0.1 Hz ~    999.9 Hz
// x[3:2] = 2'b10,  10   Hz ~  99990   Hz
// x[3:2] = 2'b11, 100   Hz ~ 999900   Hz
div_rill div(default_frq, frequency, yshang);

// div_rill div(32'h02FAF080, frequency, yshang); // as 50MHz
// div_rill div(32'h1DCD6500, frequency, yshang); // as 500MHz

endmodule

module div_rill(
	input[28:0] a, // max 29 bits
	input[13:0] b, // max 14 bits
	
	output wire [42:0] yshang
	// output reg [13:0] yyushu
	);
 
reg[28:0] tempa;
reg[13:0] tempb;
reg[42:0] temp_a;
// reg[42:0] temp_b;
 
integer i;
 
always @(a or b)
begin
    tempa <= a;
    tempb <= b;
end
 
always @(tempa or tempb) begin
    temp_a = {14'b00000000000000,tempa};
    // temp_b <= {tempb,29'h00000000}; 
    for(i = 0;i < 29;i = i + 1) begin
            temp_a = {temp_a[41:0],1'b0};
            if(temp_a[42:29] >= tempb)
                temp_a = temp_a - {tempb,29'b00000000000000000000000000000} + 1'b1;
            else
				temp_a = temp_a;
        end
    // yshang <= temp_a[28:0];
    // yyushu <= temp_a[42:29];
end

assign yshang = temp_a;
 
endmodule

// module div_rill(
// 	input[28:0] a, // max 29 bits
// 	input[19:0] b, // max 20 bits
	
// 	output reg [28:0] yshang,
// 	output reg [19:0] yyushu
// 	);
 
// reg[28:0] tempa;
// reg[19:0] tempb;
// reg[48:0] temp_a;
// reg[48:0] temp_b;
 
// integer i;
 
// always @(a or b)
// begin
//     tempa <= a;
//     tempb <= b;
// end
 
// always @(tempa or tempb)
// begin
//     temp_a = {20'h00000,tempa};
//     temp_b = {tempb,29'h00000000}; 
//     for(i = 0;i < 29;i = i + 1)
//         begin
//             temp_a = {temp_a[47:0],1'b0};
//             if(temp_a[48:29] >= tempb)
//                 temp_a = temp_a - temp_b + 1'b1;
//             else
// 				temp_a = temp_a;
//         end
//     yshang <= temp_a[28:0];
//     yyushu <= temp_a[48:29];
// end
 
// endmodule