library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity circuit is 
    Port(
        D1, D2: in std_logic_vector(7 downto 0);
        F: out std_logic_vector(7 downto 0);
        SEL_C: in std_logic;
        REG_A, REG_B: out std_logic_vector(7 downto 0);
        CLK_A, CLK_B: in std_logic;
        LD_A, LD_B: in std_logic
    );
end circuit;

entity multiplexer is
    Port(
        D1_IN, D2_IN: in std_logic_vector(7 downto 0);
        D_OUT: out std_logic_vector(7 downto 0);
        SEL: in std_logic
    );
end multiplexer;
   
entity REG is 
    Port(
        REG_IN: in std_logic_vector(7 downto 0);
        CLK: in std_logic;
        REG_OUT: out std_logic_vector(7 downto 0);
        LD: in std_logic
    );
end REG;

architecture ARC_REG of REG is
begin
    proc1: process(CLK, REG_IN)
    begin
        if rising_edge(CLK) then
            if LD = '1' then
                REG_OUT <= REG_IN;
            end if;
        end if;
    end process proc1;
end ARC_REG;

architecture ARC_MUL of multiplexer is
begin
    case SEL is
        when '1' =>
            D_OUT <= D2_IN;
        when '0' =>
            D_OUT <= D1_IN;
    end case;
end ARC_MUL;

architecture ARC_CIRCUIT of circuit is 
    
    signal mux_out: std_logic_vector(7 downto 0);
    
    component REG is
        Port(
            REG_IN: in std_logic_vector(7 downto 0);
            LD: in std_logic;
            CLK: in std_logic;
            REG_OUT: out std_logic_vector(7 downto 0)
        );
    end component REG;
    
    component multiplexer is 
        Port(
            D1_IN, D2_IN: in std_logic_vector(7 downto 0);
            D_OUT: out std_logic_vector(7 downto 0);
            SEL: in std_logic
        );
    end component multiplexer;
    
begin 
    mux: multiplexer
        port map(
            D1_IN => D1,
            D2_IN => D2,
            SEL => SEL_C,
            D_OUT => mux_out
        );
    
    ra: REG 
        port map (
            REG_IN => mux_out,
            LD => LD_A,
            CLK => CLK_A,
            REG_OUT => REG_A
        );
    
    rb: REG 
        port map (
            REG_IN => mux_out,
            LD => LD_B,
            CLK => CLK_B,
            REG_OUT => REG_B
        );
            
end ARC_CIRCUIT;
