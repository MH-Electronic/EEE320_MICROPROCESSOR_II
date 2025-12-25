module MicroP_Mini_Project(
input CLOCK_50,
input reset,
input [7:0]SW,
input [3:0]keypad_column,
input call_button,
output clk_25_check,
output [3:0]keypad_row,
output vga_CLK,
output vga_HS,
output vga_VS,
output vga_BLANK,
output vga_SYNC,
output [7:0]vga_R,		
output [7:0]vga_G,
output [7:0]vga_B,
output pll_locked,
input fpga_rx,
output fpga_tx,
output buzzer,
input  ultrasonic_in,
output ultrasonic_out,
input  spi_master_MISO,
output spi_master_MOSI,
output spi_master_SCLK,
output spi_master_SS_n,
output spi_master_SS_n_1
);


MicroP u0 (
	.clk_clk                  (CLOCK_50),        //     clk.clk
	.reset_reset_n            (reset),           //     reset.reset_n
	.switches_export   		  (SW),    			 	//     switches.export
   .clk_check_export         (clk_25_check),    //      
	.vga_external_CLK         (vga_CLK),         //        vga_external.CLK
   .vga_external_HS          (vga_HS),          //                    .HS
   .vga_external_VS          (vga_VS),          //                    .VS
   .vga_external_BLANK       (vga_BLANK),       //                    .BLANK
   .vga_external_SYNC        (vga_SYNC),        //                    .SYNC
   .vga_external_R           (vga_R),           //                    .R
   .vga_external_G           (vga_G),           //                    .G
   .vga_external_B           (vga_B),           //                    .B   
	.clk_25_export            (pll_locked),      //
	.bluetooth_uart_rxd       (fpga_rx),         //    bluetooth_uart.rxd
   .bluetooth_uart_txd       (fpga_tx),         //               .txd	
	.keypad_column_export     (keypad_column),   //  keypad_column.export
   .keypad_row_export        (keypad_row),      //     keypad_row.export
	.button_int_export        (call_button),     //     button_int.export
	.buzzer_export            (buzzer),          //         buzzer.export
	.ultrasonic_in_export     (ultrasonic_in),   //  ultrasonic_in.export
   .ultrasonic_out_export    (ultrasonic_out),  // ultrasonic_out.export
	.rfid_spi_MISO            (spi_master_MISO),        //       rfid_spi.MISO
   .rfid_spi_MOSI            (spi_master_MOSI),        //               .MOSI
   .rfid_spi_SCLK            (spi_master_SCLK),        //               .SCLK
   .rfid_spi_SS_n            (spi_master_SS_n),        //               .SS_n
   .rfid_cs_export           (spi_master_SS_n_1)        //        rfid_cs.export
);


endmodule
