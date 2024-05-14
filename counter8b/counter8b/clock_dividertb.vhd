library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity clock_divider_tb is
end clock_divider_tb;


architecture Behavioral of clock_divider_tb is
    constant CLOCK_PERIOD : time := 200 ns;
    signal iCLK_tb : std_logic := '0';
    signal oCLK_tb : std_logic;

    component clock_divider is
        Port (
            CLOCK_IN  : in  std_logic;
            CLOCK_OUT : out std_logic
        );
    end component;

begin
    clk_process: process
    begin
        while now < 9000000 ms loop  
            iCLK_tb <= '0';
            wait for CLOCK_PERIOD / 2;
            iCLK_tb <= '1';
            wait for CLOCK_PERIOD / 2;
        end loop;
        wait;
    end process clk_process;

    DUT: clock_divider port map (
        CLOCK_IN  => iCLK_tb, 
        CLOCK_OUT => oCLK_tb 
    );
end Behavioral;
