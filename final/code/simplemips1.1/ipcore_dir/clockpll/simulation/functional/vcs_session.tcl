gui_open_window Wave
gui_sg_create clockpll_group
gui_list_add_group -id Wave.1 {clockpll_group}
gui_sg_addsignal -group clockpll_group {clockpll_tb.test_phase}
gui_set_radix -radix {ascii} -signals {clockpll_tb.test_phase}
gui_sg_addsignal -group clockpll_group {{Input_clocks}} -divider
gui_sg_addsignal -group clockpll_group {clockpll_tb.CLK_IN1}
gui_sg_addsignal -group clockpll_group {{Output_clocks}} -divider
gui_sg_addsignal -group clockpll_group {clockpll_tb.dut.clk}
gui_list_expand -id Wave.1 clockpll_tb.dut.clk
gui_sg_addsignal -group clockpll_group {{Counters}} -divider
gui_sg_addsignal -group clockpll_group {clockpll_tb.COUNT}
gui_sg_addsignal -group clockpll_group {clockpll_tb.dut.counter}
gui_list_expand -id Wave.1 clockpll_tb.dut.counter
gui_zoom -window Wave.1 -full
