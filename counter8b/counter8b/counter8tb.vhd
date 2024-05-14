library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity counter8b_tb is
end counter8b_tb;

architecture Behavioral of counter8b_tb is
    -- Constants
    constant CLOCK_PERIOD : time := 1 ns; 
    
    -- Signals
    signal iEN_tb    : std_logic := '1'; -- Enable signal
    signal iCLK_tb   : std_logic := '0'; -- Clock signal
    signal iRST_tb   : std_logic := '0'; -- Reset signal
    signal oCNT_tb   : std_logic_vector(7 downto 0);
    
    -- Components
    component counter8b
        Port(
            iEN    : in  std_logic;
            iCLK   : in  std_logic;
            iRST   : in  std_logic;
            oCNT   : out std_logic_vector(7 downto 0)
        );
    end component;

    -- Clock process
    begin
        clk_process: process
        begin
            while now < 10000000 ms loop
                iCLK_tb <= '0';
                wait for CLOCK_PERIOD / 2;
                iCLK_tb <= '1';
                wait for CLOCK_PERIOD / 2;
            end loop;
            wait;
        end process clk_process;

    -- DUT instantiation
    DUT: counter8b port map (
        iEN    => iEN_tb,
        iCLK   => iCLK_tb,
        iRST   => iRST_tb,
        oCNT   => oCNT_tb
    );

end Behavioral;
