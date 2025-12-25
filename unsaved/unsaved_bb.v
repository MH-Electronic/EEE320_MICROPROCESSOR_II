
module unsaved (
	clk_clk,
	reset_reset_n,
	switches_export,
	leds_export,
	vga_external_CLK,
	vga_external_HS,
	vga_external_VS,
	vga_external_BLANK,
	vga_external_SYNC,
	vga_external_R,
	vga_external_G,
	vga_external_B);	

	input		clk_clk;
	input		reset_reset_n;
	input	[7:0]	switches_export;
	output	[7:0]	leds_export;
	output		vga_external_CLK;
	output		vga_external_HS;
	output		vga_external_VS;
	output		vga_external_BLANK;
	output		vga_external_SYNC;
	output	[7:0]	vga_external_R;
	output	[7:0]	vga_external_G;
	output	[7:0]	vga_external_B;
endmodule
