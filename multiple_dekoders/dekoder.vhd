library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity top_level is
    Port (
        A1 : in STD_LOGIC_VECTOR(1 downto 0);
        A2 : in STD_LOGIC_VECTOR(1 downto 0);
        Y1 : out STD_LOGIC_VECTOR(3 downto 0);
        Y2 : out STD_LOGIC_VECTOR(3 downto 0)
    );
end entity top_level;

architecture Behavioral of decoder2to4 is
begin
    Y(0) <= not A(1) and not A(0);
    Y(1) <= not A(1) and A(0);
    Y(2) <= A(1) and not A(0);
    Y(3) <= A(1) and A(0);
end Behavioral;


architecture Structural of top_level is

    component decoder2to4
        Port (
            A : in STD_LOGIC_VECTOR(1 downto 0);
            Y : out STD_LOGIC_VECTOR(3 downto 0)
        );
    end component;

    signal Y_comp1 : STD_LOGIC_VECTOR(3 downto 0);
    signal Y_comp2 : STD_LOGIC_VECTOR(3 downto 0);

begin

    decoder1: decoder2to4 port map (
        A => A1,
        Y => Y_comp1
    );

    decoder2: decoder2to4 port map (
        A => A2,
        Y => Y_comp2
    );

    Y1 <= Y_comp1;
    Y2 <= Y_comp2;
end Structural;

