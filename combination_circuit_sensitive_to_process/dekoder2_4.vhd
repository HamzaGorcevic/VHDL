library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity dekoder2_4 is
    Port (
        x : in std_logic_vector(1 downto 0);
        y : out std_logic_vector(3 downto 0);
		  en:in std_logic
    );
end dekoder2_4;

architecture Behavioral of dekoder2_4 is
begin
    process(x,en)
    begin
		if en='1' then
		        case x is
            when "00" =>
                y <= "0001";
            when "01" =>
                y <= "0010";
            when "10" =>
                y <= "0100";
            when "11" =>
                y <= "1000";
            when others =>
                y <= "0000";
				end case;
			else Y<= "0000";
		end if;
    end process;
end Behavioral;
