
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name reg_shifter -dir "/home/hamza/VHDL/reg_shifter/planAhead_run_3" -part xc3s1500fg676-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/home/hamza/VHDL/reg_shifter/Shift_Register.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/hamza/VHDL/reg_shifter} }
set_property target_constrs_file "Shift_Register.ucf" [current_fileset -constrset]
add_files [list {Shift_Register.ucf}] -fileset [get_property constrset [current_run]]
link_design
