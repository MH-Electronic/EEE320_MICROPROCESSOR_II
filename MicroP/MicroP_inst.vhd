	component MicroP is
		port (
			bluetooth_uart_rxd    : in  std_logic                    := 'X';             -- rxd
			bluetooth_uart_txd    : out std_logic;                                       -- txd
			button_int_export     : in  std_logic                    := 'X';             -- export
			buzzer_export         : out std_logic;                                       -- export
			clk_clk               : in  std_logic                    := 'X';             -- clk
			clk_25_export         : out std_logic;                                       -- export
			clk_check_export      : out std_logic;                                       -- export
			keypad_column_export  : in  std_logic_vector(3 downto 0) := (others => 'X'); -- export
			keypad_row_export     : out std_logic_vector(3 downto 0);                    -- export
			reset_reset_n         : in  std_logic                    := 'X';             -- reset_n
			rfid_cs_export        : out std_logic;                                       -- export
			rfid_spi_MISO         : in  std_logic                    := 'X';             -- MISO
			rfid_spi_MOSI         : out std_logic;                                       -- MOSI
			rfid_spi_SCLK         : out std_logic;                                       -- SCLK
			rfid_spi_SS_n         : out std_logic;                                       -- SS_n
			switches_export       : in  std_logic_vector(7 downto 0) := (others => 'X'); -- export
			ultrasonic_out_export : out std_logic;                                       -- export
			vga_external_CLK      : out std_logic;                                       -- CLK
			vga_external_HS       : out std_logic;                                       -- HS
			vga_external_VS       : out std_logic;                                       -- VS
			vga_external_BLANK    : out std_logic;                                       -- BLANK
			vga_external_SYNC     : out std_logic;                                       -- SYNC
			vga_external_R        : out std_logic_vector(7 downto 0);                    -- R
			vga_external_G        : out std_logic_vector(7 downto 0);                    -- G
			vga_external_B        : out std_logic_vector(7 downto 0);                    -- B
			ultrasonic_in_export  : in  std_logic                    := 'X'              -- export
		);
	end component MicroP;

	u0 : component MicroP
		port map (
			bluetooth_uart_rxd    => CONNECTED_TO_bluetooth_uart_rxd,    -- bluetooth_uart.rxd
			bluetooth_uart_txd    => CONNECTED_TO_bluetooth_uart_txd,    --               .txd
			button_int_export     => CONNECTED_TO_button_int_export,     --     button_int.export
			buzzer_export         => CONNECTED_TO_buzzer_export,         --         buzzer.export
			clk_clk               => CONNECTED_TO_clk_clk,               --            clk.clk
			clk_25_export         => CONNECTED_TO_clk_25_export,         --         clk_25.export
			clk_check_export      => CONNECTED_TO_clk_check_export,      --      clk_check.export
			keypad_column_export  => CONNECTED_TO_keypad_column_export,  --  keypad_column.export
			keypad_row_export     => CONNECTED_TO_keypad_row_export,     --     keypad_row.export
			reset_reset_n         => CONNECTED_TO_reset_reset_n,         --          reset.reset_n
			rfid_cs_export        => CONNECTED_TO_rfid_cs_export,        --        rfid_cs.export
			rfid_spi_MISO         => CONNECTED_TO_rfid_spi_MISO,         --       rfid_spi.MISO
			rfid_spi_MOSI         => CONNECTED_TO_rfid_spi_MOSI,         --               .MOSI
			rfid_spi_SCLK         => CONNECTED_TO_rfid_spi_SCLK,         --               .SCLK
			rfid_spi_SS_n         => CONNECTED_TO_rfid_spi_SS_n,         --               .SS_n
			switches_export       => CONNECTED_TO_switches_export,       --       switches.export
			ultrasonic_out_export => CONNECTED_TO_ultrasonic_out_export, -- ultrasonic_out.export
			vga_external_CLK      => CONNECTED_TO_vga_external_CLK,      --   vga_external.CLK
			vga_external_HS       => CONNECTED_TO_vga_external_HS,       --               .HS
			vga_external_VS       => CONNECTED_TO_vga_external_VS,       --               .VS
			vga_external_BLANK    => CONNECTED_TO_vga_external_BLANK,    --               .BLANK
			vga_external_SYNC     => CONNECTED_TO_vga_external_SYNC,     --               .SYNC
			vga_external_R        => CONNECTED_TO_vga_external_R,        --               .R
			vga_external_G        => CONNECTED_TO_vga_external_G,        --               .G
			vga_external_B        => CONNECTED_TO_vga_external_B,        --               .B
			ultrasonic_in_export  => CONNECTED_TO_ultrasonic_in_export   --  ultrasonic_in.export
		);

