library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Mealy is
    Port (
        X,SET,CLK : in  std_logic;
        Z: out std_logic;
        Y:out std_logic_vector(1 downto 0)
    );
end Mealy;

architecture Behavioral of Mealy is
    
    type state_type is (ST0,ST1,ST2);
    signal PS,NS:state_type;
begin
    async:process(CLK,SET,NS)
    begin
        if(SET='1')then
           PS<=ST2;
        elsif(rising_edge(CLK))then
            PS<=NS;
        end if;
    end process async;
    
    comb_proc:process(X,PS)
        begin
        case PS is
            when ST0=>
                Z<='0';
                if(X='1')then
            
                    NS<=ST1;
                 else 
                    NS<=ST0;
                 end if;
           when ST1=>
                Z<='0';
                if(X='1')then
                    NS<=ST2;
                 else 
                    NS<=ST1;
                end if;
                
            -- Because of this state this is MEALY autotam, beacuse output is dependent of X ,in cases before outpust was dependent on state only
           when ST2=>
                if(X='1')then
                    NS<=ST2;
                    Z<='1';
                else 
                    NS<=ST0;
                    Z<='0';
                  end if;
           end case;
       end process comb_proc;
       
       with ps select
            Y<="00" when ST0,
               "10" when ST1,
               "11" when ST2,
               "00" when others;
end Behavioral;
