----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:29:52 05/15/2024 
-- Design Name: 
-- Module Name:    dekoder3_8 - Behavioral 
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

entity dekoder3_8 is
Port(
	X_IN:in std_logic_vector(1 downto 0);
	Y_OUT:out std_logic_vector(7 downto 0);
	EN:in std_logic
);
end dekoder3_8;



architecture Behavioral of dekoder3_8 is
	signal y_lower:std_logic_vector(3 downto 0);
	signal y_upper:std_logic_vector(3 downto 0);
	
	component dekoder2_4 is
	port(
		x:in std_logic_vector(1 downto 0);
		y:out std_logic_vector(3 downto 0);
		en:in std_logic
	);
	end component;

begin

	
	dekoder2_4_instance_lower:dekoder2_4
	port map(
		x(0)=>X_IN(0),
		x(1)=>X_IN(1),
		y=>y_lower,
		en=>not(EN)
		
	);
	dekoder2_4_instance_upper:dekoder2_4
	port map(
		x(0)=>X_IN(0),
		x(1)=>X_IN(1),
		y=>y_upper,
		en=>EN
	);
	
	process(EN,X_IN,y_lower,y_upper)
		begin
			Y_OUT<=y_upper & y_lower;
	end process;
	
end Behavioral;

