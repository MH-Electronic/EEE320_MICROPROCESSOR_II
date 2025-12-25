	MicroP u0 (
		.bluetooth_uart_rxd    (<connected-to-bluetooth_uart_rxd>),    // bluetooth_uart.rxd
		.bluetooth_uart_txd    (<connected-to-bluetooth_uart_txd>),    //               .txd
		.button_int_export     (<connected-to-button_int_export>),     //     button_int.export
		.buzzer_export         (<connected-to-buzzer_export>),         //         buzzer.export
		.clk_clk               (<connected-to-clk_clk>),               //            clk.clk
		.clk_25_export         (<connected-to-clk_25_export>),         //         clk_25.export
		.clk_check_export      (<connected-to-clk_check_export>),      //      clk_check.export
		.keypad_column_export  (<connected-to-keypad_column_export>),  //  keypad_column.export
		.keypad_row_export     (<connected-to-keypad_row_export>),     //     keypad_row.export
		.reset_reset_n         (<connected-to-reset_reset_n>),         //          reset.reset_n
		.rfid_cs_export        (<connected-to-rfid_cs_export>),        //        rfid_cs.export
		.rfid_spi_MISO         (<connected-to-rfid_spi_MISO>),         //       rfid_spi.MISO
		.rfid_spi_MOSI         (<connected-to-rfid_spi_MOSI>),         //               .MOSI
		.rfid_spi_SCLK         (<connected-to-rfid_spi_SCLK>),         //               .SCLK
		.rfid_spi_SS_n         (<connected-to-rfid_spi_SS_n>),         //               .SS_n
		.switches_export       (<connected-to-switches_export>),       //       switches.export
		.ultrasonic_out_export (<connected-to-ultrasonic_out_export>), // ultrasonic_out.export
		.vga_external_CLK      (<connected-to-vga_external_CLK>),      //   vga_external.CLK
		.vga_external_HS       (<connected-to-vga_external_HS>),       //               .HS
		.vga_external_VS       (<connected-to-vga_external_VS>),       //               .VS
		.vga_external_BLANK    (<connected-to-vga_external_BLANK>),    //               .BLANK
		.vga_external_SYNC     (<connected-to-vga_external_SYNC>),     //               .SYNC
		.vga_external_R        (<connected-to-vga_external_R>),        //               .R
		.vga_external_G        (<connected-to-vga_external_G>),        //               .G
		.vga_external_B        (<connected-to-vga_external_B>),        //               .B
		.ultrasonic_in_export  (<connected-to-ultrasonic_in_export>)   //  ultrasonic_in.export
	);

