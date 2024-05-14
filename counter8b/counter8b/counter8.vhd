library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity counter8b is
    Port (
        iEN   : in  std_logic;
        iCLK  : in  std_logic;
        iRST  : in  std_logic;
        oCNT  : out std_logic_vector(7 downto 0)
    );
end counter8b;

architecture Behavioral of counter8b is
    signal t_cnt   : unsigned(7 downto 0) := (others => '0');-- da mogu da povecam
    signal slow_clk: std_logic; 
    
    -- Component declaration
    component Clock_Divider is
        Port (
            CLOCK_IN  : in  std_logic;
            CLOCK_OUT : out std_logic
        );
    end component;

begin
    
    clock_divider_inst : Clock_Divider
     port map (
          CLOCK_IN  => iCLK,
          CLOCK_OUT => slow_clk
     );
    
    process(slow_clk, iRST, iEN)
    begin
        if iRST = '1' then
            t_cnt <= (others => '0'); 
        elsif rising_edge(slow_clk) then
            if iEN = '1' then
                t_cnt <= t_cnt + 1;
            end if;
        end if;
    end process;
    
    oCNT <= std_logic_vector(t_cnt);
end Behavioral;
