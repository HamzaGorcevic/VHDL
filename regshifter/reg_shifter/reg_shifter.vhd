library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.NUMERIC_STD.ALL; 

entity shifting_register is
    port (
        iCLK   : in STD_LOGIC;
        inRST  : in STD_LOGIC;
        iLOAD  : in STD_LOGIC;
        iDATA  : in STD_LOGIC_VECTOR(7 downto 0);
        iSHL   : in STD_LOGIC;
        iSHR   : in STD_LOGIC;
        iARITH : in STD_LOGIC;
        oSHREG : out STD_LOGIC_VECTOR(7 downto 0)
    );
end shifting_register;

architecture Behavioral of shifting_register is

    signal rSHREG: STD_LOGIC_VECTOR(7 downto 0) := (others=>'0');
	 signal slow_clock:std_logic;
	 component Clock_Divider is
		Port(
			CLOCK_IN:in std_logic;
			CLOCK_OUT:out std_logic
		);
		end component;
begin

	 
	 clcok_divider_int:Clock_Divider
		Port map(
			CLOCK_IN=>iCLK,
			CLOCK_OUT=>slow_clock
		
		);
	 
	 process(slow_clock, inRST)
    begin
        if inRST = '1' then
            rSHREG <= (others => '0');
        elsif rising_edge(slow_clock) then
            if iLOAD = '1' then
                rSHREG <= iDATA;
            else 
                if iSHL = '1' and iSHR = '0' then
                    if iARITH = '1' then
                        -- Aritmeticko pomeranje ulevo 11010101=>10101011
								rSHREG <= rSHREG(6 downto 0) & rSHREG(7);
                        --rSHREG <= std_logic_vector(shift_right(signed(rSHREG), 1));
                    else
                        -- Logicko pomeranje ulevo
                        --rSHREG <= std_logic_vector(shift_right(unsigned(rSHREG), 1));
								rSHREG<=rSHREG(6 downto 0) & '0';
                    end if;
                elsif iSHR = '1' and iSHL = '0' then
                    if iARITH = '1' then
                        -- Aritmeticko pomeranje udesno
                        --rSHREG <= std_logic_vector(shift_left(signed(rSHREG), 1));
								rSHREG<=rSHREG(0) &  rSHREG(7 downto 1);
                    else
                        -- Logicko pomeranje udesno
								rSHREG<='0' &  rSHREG(7 downto 1);

								--rSHREG <= std_logic_vector(shift_left(unsigned(rSHREG), 1));
                    end if;
                end if;
            end if;
           
            end if;        
    end process;
     
    oSHREG <= rSHREG;
end Behavioral;
