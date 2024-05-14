LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY shifting_register_tb IS
END shifting_register_tb;

ARCHITECTURE behavior OF shifting_register_tb IS 

    -- Signal declarations
    SIGNAL iCLK   : STD_LOGIC := '0';
    SIGNAL inRST  : STD_LOGIC := '0';
    SIGNAL iLOAD  : STD_LOGIC := '0';
    SIGNAL iDATA  : STD_LOGIC_VECTOR(7 DOWNTO 0) := (others => '0');
    SIGNAL iSHL   : STD_LOGIC := '0';
    SIGNAL iSHR   : STD_LOGIC := '0';
    SIGNAL iARITH : STD_LOGIC := '0';
    SIGNAL oSHREG : STD_LOGIC_VECTOR(7 DOWNTO 0);

    BEGIN
    -- Instantiate the Unit Under Test (UUT)
    uut: ENTITY work.shifting_register
        PORT MAP (
            iCLK   => iCLK,
            inRST  => inRST,
            iLOAD  => iLOAD,
            iDATA  => iDATA,
            iSHL   => iSHL,
            iSHR   => iSHR,
            iARITH => iARITH,
            oSHREG => oSHREG
        );

    -- Clock process (50MHz)
    clk_process :PROCESS
    BEGIN
        iCLK <= '0';
        WAIT FOR 10 ns;
        iCLK <= '1';
        WAIT FOR 10 ns;
    END PROCESS;
    
    -- Stimulus process
    stim_proc: PROCESS
    BEGIN		
        inRST <= '1';
        WAIT FOR 50 ns; 
        inRST <= '0';

       
        iLOAD <= '1';
        iDATA <= "10101010"; -- Example data pattern
        WAIT FOR 30 ns;
        iLOAD <= '0';
        iSHL <= '1';
		  
        WAIT FOR 40 ns;
		  iLOAD <= '0';
		          iSHL <= '0';


        
       
        iSHR <= '1';
        WAIT FOR 40 ns;
        iSHR <= '0';

		  
		  WAIT for 40 ns;

		  iSHL<='1';
		  iSHR<='0';
		  WAIT for 40 ns;
		  iSHL<='1';
		  iSHR<='0';
		  
		  WAIT for 40 ns;
		  iSHL<='0';
		  iSHR<='1';
		  iARITH<='1';
		   WAIT for 40 ns;
			iSHL<='0';
		  iSHR<='1';
		  iARITH<='1';
		   WAIT for 40 ns;
			iSHR<='0';
			
		  iSHL<='1';
		  iARITH<='1';

		  

        WAIT;
    END PROCESS;

END;
