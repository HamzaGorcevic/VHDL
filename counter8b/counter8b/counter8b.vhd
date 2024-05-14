----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:17:12 05/13/2024 
-- Design Name: 
-- Module Name:    counter8b - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity counter8b is
	Port(
		iEN:in std_logic;
		iCLK:in std_logic;
		inRST:in std_logic;
		oCNT:in std_logic_vector(7 downto 0)
	
	);
end counter8b;

architecture Behavioral of counter8b is
	signal t_cnt:std_logic_vector(7 downto 0);
	signal slow_clk:std_logic; -- signal za usporeni clock
	
	-- pozivamo komponentu iz drugog fajla
	component Clock_Divider is
		Port(
			CLK_IN:in std_logic;
			CLK_OUT:out std_logic
		);
	end component;
	
begin
	-- sad mapiramo komponenu
	clock_divider_inst : Clock_Divider
	port map(
		CLK_IN=>iCLK,
		CLK_OUT=>slow_clk
	);
	
	process(slow_clk,iRST,iEN)
		begin
			if(iRST ='1') then
				t_cnt<=(others=>'0');--clear
			elsif(rising_edge(slow_clk))then
				if(iEN='1')then
					t_cnt<=std_logic_vector(unsignetd(t_cnt)+1);
					
				end if;
			end if;
		end process;
		oCNT<=t_cnt;
end Behavioral;
