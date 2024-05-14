library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;

entity Shift_Register_TB is
end Shift_Register_TB;

architecture TB_ARCH of Shift_Register_TB is
    signal iCLK_TB, iLOAD_TB, iSHL_TB, iSHR_TB, iARITH_TB, iReset_TB : std_logic := '0';
    signal oREG_TB : std_logic_vector(7 downto 0);
    signal oClockOut_TB : std_logic;
	signal iDATA_TB :std_logic_vector(7 downto 0);
    
    component Shift_Register
        Port ( 
            iCLK          : in  std_logic;
            iLOAD         : in  std_logic;
            iDATA         : in  std_logic_vector(7 downto 0);
            iSHL          : in  std_logic;
            iSHR          : in  std_logic;
            iARITH        : in  std_logic;
            iReset        : in  std_logic;
            oREG          : out std_logic_vector(7 downto 0);
            oClockOut     : out std_logic
        );
    end component;

begin
    dut: Shift_Register port map (
        iCLK => iCLK_TB,
        iLOAD => iLOAD_TB,
        iDATA => iDATA_TB,
        iSHL => iSHL_TB,
        iSHR => iSHR_TB,
        iARITH => iARITH_TB,
        iReset => iReset_TB,
        oREG => oREG_TB,
        oClockOut => oClockOut_TB
    );

    -- Clock generation process
    clk_process: process
    begin
        iCLK_TB <= '0';
        wait for 5 ns;  -- Adjust this delay according to your clock frequency
        iCLK_TB <= '1';
        wait for 5 ns;  -- Adjust this delay according to your clock frequency
    end process;

    -- Stimulus process
    stimulus_process: process
    begin
        -- Test case 1: Load data into the shift register
        iLOAD_TB <= '1';
        iDATA_TB <= "10101010";  -- Sample data
        wait for 10 ns;
        iLOAD_TB <= '0';
        
        -- Test case 2: Shift left without arithmetic
        iSHL_TB <= '1';
        iARITH_TB <= '0';
        wait for 10 ns;
        iSHL_TB <= '0';

        -- Test case 3: Shift right without arithmetic
        iSHR_TB <= '1';
        iARITH_TB <= '0';
        wait for 10 ns;
        iSHR_TB <= '0';
        
        -- Add more test cases as needed
        
        wait;
    end process;
end TB_ARCH;
