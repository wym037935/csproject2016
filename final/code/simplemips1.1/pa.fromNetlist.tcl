
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name simplemips1.1 -dir "D:/study/simplemips1.1/planAhead_run_3" -part xc6slx100fgg676-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "D:/study/simplemips1.1/simplemipst.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {D:/study/simplemips1.1} {ipcore_dir} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "simplemipst.ucf" [current_fileset -constrset]
add_files [list {simplemipst.ucf}] -fileset [get_property constrset [current_run]]
link_design
