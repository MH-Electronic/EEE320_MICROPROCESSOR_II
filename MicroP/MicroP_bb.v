
module MicroP (
	bluetooth_uart_rxd,
	bluetooth_uart_txd,
	button_int_export,
	buzzer_export,
	clk_clk,
	clk_25_export,
	clk_check_export,
	keypad_column_export,
	keypad_row_export,
	reset_reset_n,
	rfid_cs_export,
	rfid_spi_MISO,
	rfid_spi_MOSI,
	rfid_spi_SCLK,
	rfid_spi_SS_n,
	switches_export,
	ultrasonic_out_export,
	vga_external_CLK,
	vga_external_HS,
	vga_external_VS,
	vga_external_BLANK,
	vga_external_SYNC,
	vga_external_R,
	vga_external_G,
	vga_external_B,
	ultrasonic_in_export);	

	input		bluetooth_uart_rxd;
	output		bluetooth_uart_txd;
	input		button_int_export;
	output		buzzer_export;
	input		clk_clk;
	output		clk_25_export;
	output		clk_check_export;
	input	[3:0]	keypad_column_export;
	output	[3:0]	keypad_row_export;
	input		reset_reset_n;
	output		rfid_cs_export;
	input		rfid_spi_MISO;
	output		rfid_spi_MOSI;
	output		rfid_spi_SCLK;
	output		rfid_spi_SS_n;
	input	[7:0]	switches_export;
	output		ultrasonic_out_export;
	output		vga_external_CLK;
	output		vga_external_HS;
	output		vga_external_VS;
	output		vga_external_BLANK;
	output		vga_external_SYNC;
	output	[7:0]	vga_external_R;
	output	[7:0]	vga_external_G;
	output	[7:0]	vga_external_B;
	input		ultrasonic_in_export;
endmodule
