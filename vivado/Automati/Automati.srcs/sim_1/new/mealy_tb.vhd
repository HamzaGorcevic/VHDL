library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity my_fsm1_tb is
end my_fsm1_tb;

architecture Behavioral of my_fsm1_tb is
    constant CLK_PERIOD : time := 10 ns; -- Clock period

    -- Signals for connecting to mealy module
    
    signal X_tb, CLK_tb, SET_tb : std_logic := '0';
    signal Z_tb : std_logic;
    signal Y_tb:std_logic_vector(1 downto 0);
    -- Instantiate the my_fsm1 module
    component Mealy
         Port (
        X,SET,CLK : in  std_logic;
        Z: out std_logic;
        Y:out std_logic_vector(1 downto 0)
    );
    end component;

begin
    -- Instantiate the my_fsm1 module
    UUT : Mealy
    port map (
        X=>X_tb,
        CLK => CLK_tb,
        SET => SET_tb,
        Z => Z_tb,
        Y=>Y_tb
    );

    -- Clock process
    clk_process: process
    begin
        CLK_tb <= '0';
        wait for CLK_PERIOD / 2;
        CLK_tb <= '1';
        wait for CLK_PERIOD / 2;
          CLK_tb <= '0';
        wait for CLK_PERIOD / 2;
        CLK_tb <= '1';
        wait for CLK_PERIOD / 2;
    end process clk_process;

    -- Stimulus process
    stimulus_process: process
    begin
        -- Apply stimulus
        X_tb<='1';
        wait for 10 ns;
        X_tb<='1';
        wait for 10 ns;
        X_tb<='0';
        wait for 10 ns;
        X_tb<='1';
        wait for 10 ns;
        X_tb<='0';

      

        wait for 10 ns;

        -- Continue applying stimulus...

        wait; -- Wait indefinitely
    end process stimulus_process;

end Behavioral;
