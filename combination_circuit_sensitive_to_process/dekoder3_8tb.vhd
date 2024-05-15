--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   00:47:01 05/16/2024
-- Design Name:   
-- Module Name:   /home/hamza/VHDL/combination_circuit_sensitive_to_process/dekoder3_8tb.vhd
-- Project Name:  combination_circuit_sensitive_to_process
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: dekoder3_8
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY dekoder3_8tb IS
END dekoder3_8tb;
 
ARCHITECTURE behavior OF dekoder3_8tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT dekoder3_8
    PORT(
         X_IN : IN  std_logic_vector(1 downto 0);
         Y_OUT : OUT  std_logic_vector(7 downto 0);
         EN : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal X_IN : std_logic_vector(1 downto 0) := (others => '0');
   signal EN : std_logic := '1';

 	--Outputs
   signal Y_OUT : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: dekoder3_8 PORT MAP (
          X_IN => X_IN,
          Y_OUT => Y_OUT,
          EN => EN
        );



   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
				wait for clock_period;
		EN<='1';
		X_IN<="11";
		wait for clock_period;
		EN<='1';
		X_IN<="10";





      wait for clock_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
