	component unsaved is
		port (
			clk_clk            : in  std_logic                    := 'X';             -- clk
			reset_reset_n      : in  std_logic                    := 'X';             -- reset_n
			switches_export    : in  std_logic_vector(7 downto 0) := (others => 'X'); -- export
			leds_export        : out std_logic_vector(7 downto 0);                    -- export
			vga_external_CLK   : out std_logic;                                       -- CLK
			vga_external_HS    : out std_logic;                                       -- HS
			vga_external_VS    : out std_logic;                                       -- VS
			vga_external_BLANK : out std_logic;                                       -- BLANK
			vga_external_SYNC  : out std_logic;                                       -- SYNC
			vga_external_R     : out std_logic_vector(7 downto 0);                    -- R
			vga_external_G     : out std_logic_vector(7 downto 0);                    -- G
			vga_external_B     : out std_logic_vector(7 downto 0)                     -- B
		);
	end component unsaved;

	u0 : component unsaved
		port map (
			clk_clk            => CONNECTED_TO_clk_clk,            --          clk.clk
			reset_reset_n      => CONNECTED_TO_reset_reset_n,      --        reset.reset_n
			switches_export    => CONNECTED_TO_switches_export,    --     switches.export
			leds_export        => CONNECTED_TO_leds_export,        --         leds.export
			vga_external_CLK   => CONNECTED_TO_vga_external_CLK,   -- vga_external.CLK
			vga_external_HS    => CONNECTED_TO_vga_external_HS,    --             .HS
			vga_external_VS    => CONNECTED_TO_vga_external_VS,    --             .VS
			vga_external_BLANK => CONNECTED_TO_vga_external_BLANK, --             .BLANK
			vga_external_SYNC  => CONNECTED_TO_vga_external_SYNC,  --             .SYNC
			vga_external_R     => CONNECTED_TO_vga_external_R,     --             .R
			vga_external_G     => CONNECTED_TO_vga_external_G,     --             .G
			vga_external_B     => CONNECTED_TO_vga_external_B      --             .B
		);

