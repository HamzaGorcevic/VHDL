library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;

entity Shift_Register is
    Port ( iCLK          : in  std_logic;
           iLOAD         : in  std_logic;
           iDATA         : in  std_logic_vector(7 downto 0);
           iSHL          : in  std_logic;
           iSHR          : in  std_logic;
           iARITH        : in  std_logic;
           iReset        : in  std_logic;
           oREG          : out std_logic_vector(7 downto 0);
           oClockOut     : out std_logic);
end Shift_Register;

architecture Behavioral of Shift_Register is
    signal shift_reg : std_logic_vector(7 downto 0);
    signal clock_out : std_logic;
    signal tmp       : std_logic := '1';
    constant CLK_DIVIDER_VALUE : integer := 10_000_000; -- Prilagodii
    signal clk_counter : integer range 0 to CLK_DIVIDER_VALUE - 1 := 0;
begin

    
    process(iCLK, iReset)
    begin
        if iReset = '0' then
            clk_counter <= 0;
            clock_out <= '0';
        elsif rising_edge(iCLK) then
            if clk_counter = CLK_DIVIDER_VALUE - 1 then
                tmp <= NOT tmp;
                clk_counter <= 0;
            else
                clk_counter <= clk_counter + 1;
            end if;
            clock_out <= tmp;
        end if;
    end process;

    
    process(iCLK)
    begin
        if rising_edge(iCLK) then
            if iLOAD = '1' then
				shift_reg <= iDATA;
            else
                if iSHL = '1' and iSHR = '0' then 
                    if iARITH = '1' then 
                        shift_reg <= shift_reg(6 downto 0) & shift_reg(7);
                    else 
                        shift_reg <= shift_reg(6 downto 0) & '0';
                    end if;
                elsif iSHR = '1' and iSHL = '0' then 
                    if iARITH = '1' then 
                        shift_reg <= shift_reg(0) & shift_reg(7 downto 1);
                    else
                        shift_reg <= '0' & shift_reg(7 downto 1);
                    end if;
                end if;
            end if;
        end if;
    end process;

    oREG <= shift_reg;
    oClockOut <= clock_out;
end Behavioral;