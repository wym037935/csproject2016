<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_4(31:0)" />
        <signal name="XLXN_12(4:0)" />
        <signal name="XLXN_13(4:0)" />
        <signal name="XLXN_14" />
        <signal name="XLXN_15" />
        <signal name="XLXN_17(31:0)" />
        <signal name="XLXN_21(31:0)" />
        <signal name="XLXN_23" />
        <signal name="XLXN_24" />
        <signal name="XLXN_22(31:0)" />
        <signal name="XLXN_11(31:0)" />
        <signal name="XLXN_10(31:0)" />
        <signal name="XLXN_34" />
        <signal name="XLXN_33" />
        <signal name="XLXN_44(31:0)" />
        <signal name="XLXN_46(2:0)" />
        <signal name="XLXN_92(31:0)" />
        <signal name="XLXN_95(31:0)" />
        <signal name="XLXN_96(31:0)" />
        <signal name="XLXN_47(31:0)" />
        <signal name="XLXN_50" />
        <signal name="XLXN_53" />
        <signal name="XLXN_170" />
        <signal name="XLXN_171(4:0)" />
        <signal name="clk_init" />
        <signal name="XLXN_263" />
        <signal name="XLXN_288(7:0)" />
        <signal name="XLXN_289(2:0)" />
        <signal name="XLXN_290(7:0)" />
        <signal name="XLXN_291(4:0)" />
        <signal name="XLXN_294" />
        <signal name="XLXN_295(4:0)" />
        <signal name="XLXN_296(31:0)" />
        <signal name="XLXN_320(7:0)" />
        <signal name="XLXN_321(31:0)" />
        <signal name="XLXN_322(31:0)" />
        <signal name="XLXN_349" />
        <signal name="XLXN_351(31:0)" />
        <signal name="XLXN_352(4:0)" />
        <signal name="XLXN_355(7:0)" />
        <signal name="XLXN_356(31:0)" />
        <signal name="XLXN_360(31:0)" />
        <signal name="XLXN_454" />
        <signal name="XLXN_456(31:0)" />
        <signal name="XLXN_457(31:0)" />
        <signal name="XLXN_466(31:0)" />
        <signal name="XLXN_467(31:0)" />
        <signal name="XLXN_468(31:0)" />
        <signal name="XLXN_469(31:0)" />
        <signal name="XLXN_478" />
        <signal name="XLXN_479(31:0)" />
        <signal name="XLXN_485(31:0)" />
        <signal name="XLXN_30(31:0)" />
        <signal name="XLXN_500" />
        <port polarity="Input" name="clk_init" />
        <port polarity="Input" name="XLXN_263" />
        <blockdef name="CPU">
            <timestamp>2016-7-17T14:6:46</timestamp>
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="256" x="64" y="-256" height="416" />
        </blockdef>
        <blockdef name="PC">
            <timestamp>2016-7-17T13:16:59</timestamp>
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="368" y="-44" height="24" />
            <line x2="432" y1="-32" y2="-32" x1="368" />
            <rect width="304" x="64" y="-320" height="704" />
        </blockdef>
        <blockdef name="IF">
            <timestamp>2016-7-17T13:19:3</timestamp>
            <rect width="64" x="0" y="-140" height="24" />
            <line x2="0" y1="-128" y2="-128" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="400" y="-172" height="24" />
            <line x2="464" y1="-160" y2="-160" x1="400" />
            <rect width="64" x="400" y="-108" height="24" />
            <line x2="464" y1="-96" y2="-96" x1="400" />
            <rect width="64" x="400" y="-44" height="24" />
            <line x2="464" y1="-32" y2="-32" x1="400" />
            <rect width="336" x="64" y="-256" height="512" />
        </blockdef>
        <blockdef name="IF_ID">
            <timestamp>2016-7-17T13:20:3</timestamp>
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-300" height="24" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <rect width="256" x="64" y="-320" height="576" />
        </blockdef>
        <blockdef name="Reg">
            <timestamp>2016-7-17T13:28:16</timestamp>
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="0" y="20" height="24" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <rect width="64" x="0" y="84" height="24" />
            <line x2="0" y1="96" y2="96" x1="64" />
            <rect width="64" x="0" y="148" height="24" />
            <line x2="0" y1="160" y2="160" x1="64" />
            <rect width="64" x="0" y="212" height="24" />
            <line x2="0" y1="224" y2="224" x1="64" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="256" x="64" y="-700" height="1020" />
        </blockdef>
        <blockdef name="ID_EX">
            <timestamp>2016-7-17T13:31:10</timestamp>
            <line x2="0" y1="-800" y2="-800" x1="64" />
            <line x2="0" y1="-736" y2="-736" x1="64" />
            <line x2="0" y1="-672" y2="-672" x1="64" />
            <line x2="0" y1="-608" y2="-608" x1="64" />
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <rect width="64" x="0" y="-428" height="24" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-364" height="24" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="496" y1="-800" y2="-800" x1="432" />
            <line x2="496" y1="-720" y2="-720" x1="432" />
            <line x2="496" y1="-640" y2="-640" x1="432" />
            <rect width="64" x="432" y="-572" height="24" />
            <line x2="496" y1="-560" y2="-560" x1="432" />
            <rect width="64" x="432" y="-492" height="24" />
            <line x2="496" y1="-480" y2="-480" x1="432" />
            <rect width="64" x="432" y="-412" height="24" />
            <line x2="496" y1="-400" y2="-400" x1="432" />
            <rect width="64" x="432" y="-332" height="24" />
            <line x2="496" y1="-320" y2="-320" x1="432" />
            <rect width="64" x="432" y="-252" height="24" />
            <line x2="496" y1="-240" y2="-240" x1="432" />
            <rect width="64" x="432" y="-172" height="24" />
            <line x2="496" y1="-160" y2="-160" x1="432" />
            <rect width="64" x="432" y="-92" height="24" />
            <line x2="496" y1="-80" y2="-80" x1="432" />
            <rect width="368" x="64" y="-832" height="832" />
        </blockdef>
        <blockdef name="ID">
            <timestamp>2016-7-17T13:23:38</timestamp>
            <line x2="0" y1="-1056" y2="-1056" x1="64" />
            <line x2="0" y1="-816" y2="-816" x1="64" />
            <rect width="64" x="0" y="-748" height="24" />
            <line x2="0" y1="-736" y2="-736" x1="64" />
            <rect width="64" x="0" y="-668" height="24" />
            <line x2="0" y1="-656" y2="-656" x1="64" />
            <rect width="64" x="0" y="-588" height="24" />
            <line x2="0" y1="-576" y2="-576" x1="64" />
            <rect width="64" x="0" y="-508" height="24" />
            <line x2="0" y1="-496" y2="-496" x1="64" />
            <line x2="528" y1="-992" y2="-992" x1="464" />
            <line x2="528" y1="-928" y2="-928" x1="464" />
            <line x2="528" y1="-864" y2="-864" x1="464" />
            <line x2="528" y1="-800" y2="-800" x1="464" />
            <line x2="528" y1="-736" y2="-736" x1="464" />
            <line x2="528" y1="-672" y2="-672" x1="464" />
            <rect width="64" x="464" y="-620" height="24" />
            <line x2="528" y1="-608" y2="-608" x1="464" />
            <rect width="64" x="464" y="-556" height="24" />
            <line x2="528" y1="-544" y2="-544" x1="464" />
            <rect width="64" x="464" y="-492" height="24" />
            <line x2="528" y1="-480" y2="-480" x1="464" />
            <rect width="64" x="464" y="-428" height="24" />
            <line x2="528" y1="-416" y2="-416" x1="464" />
            <rect width="64" x="464" y="-364" height="24" />
            <line x2="528" y1="-352" y2="-352" x1="464" />
            <rect width="64" x="464" y="-300" height="24" />
            <line x2="528" y1="-288" y2="-288" x1="464" />
            <rect width="64" x="464" y="-236" height="24" />
            <line x2="528" y1="-224" y2="-224" x1="464" />
            <rect width="64" x="464" y="-172" height="24" />
            <line x2="528" y1="-160" y2="-160" x1="464" />
            <rect width="64" x="464" y="-108" height="24" />
            <line x2="528" y1="-96" y2="-96" x1="464" />
            <rect width="64" x="464" y="-44" height="24" />
            <line x2="528" y1="-32" y2="-32" x1="464" />
            <rect width="400" x="64" y="-1084" height="1088" />
        </blockdef>
        <blockdef name="EX_MEM">
            <timestamp>2016-7-17T13:37:53</timestamp>
            <rect width="64" x="0" y="20" height="24" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <rect width="64" x="0" y="84" height="24" />
            <line x2="0" y1="96" y2="96" x1="64" />
            <rect width="64" x="0" y="148" height="24" />
            <line x2="0" y1="160" y2="160" x1="64" />
            <line x2="384" y1="32" y2="32" x1="320" />
            <rect width="64" x="320" y="148" height="24" />
            <line x2="384" y1="160" y2="160" x1="320" />
            <rect width="64" x="320" y="212" height="24" />
            <line x2="384" y1="224" y2="224" x1="320" />
            <rect width="64" x="320" y="404" height="24" />
            <line x2="384" y1="416" y2="416" x1="320" />
            <rect width="64" x="320" y="468" height="24" />
            <line x2="384" y1="480" y2="480" x1="320" />
            <rect width="64" x="320" y="532" height="24" />
            <line x2="384" y1="544" y2="544" x1="320" />
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="256" x="64" y="-576" height="1600" />
        </blockdef>
        <blockdef name="EX">
            <timestamp>2016-7-17T13:33:43</timestamp>
            <line x2="0" y1="-1120" y2="-1120" x1="64" />
            <line x2="0" y1="-1056" y2="-1056" x1="64" />
            <line x2="0" y1="-928" y2="-928" x1="64" />
            <rect width="64" x="0" y="-812" height="24" />
            <line x2="0" y1="-800" y2="-800" x1="64" />
            <rect width="64" x="0" y="-748" height="24" />
            <line x2="0" y1="-736" y2="-736" x1="64" />
            <rect width="64" x="0" y="-684" height="24" />
            <line x2="0" y1="-672" y2="-672" x1="64" />
            <rect width="64" x="0" y="-620" height="24" />
            <line x2="0" y1="-608" y2="-608" x1="64" />
            <rect width="64" x="0" y="-556" height="24" />
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <rect width="64" x="0" y="-492" height="24" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="512" y1="-1008" y2="-1008" x1="448" />
            <rect width="64" x="448" y="-796" height="24" />
            <line x2="512" y1="-784" y2="-784" x1="448" />
            <rect width="64" x="448" y="-684" height="24" />
            <line x2="512" y1="-672" y2="-672" x1="448" />
            <rect width="64" x="448" y="-572" height="24" />
            <line x2="512" y1="-560" y2="-560" x1="448" />
            <rect width="64" x="448" y="-236" height="24" />
            <line x2="512" y1="-224" y2="-224" x1="448" />
            <rect width="64" x="448" y="-124" height="24" />
            <line x2="512" y1="-112" y2="-112" x1="448" />
            <rect width="384" x="64" y="-1728" height="1728" />
        </blockdef>
        <blockdef name="MEM_WB">
            <timestamp>2016-7-17T13:45:19</timestamp>
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="496" y1="-544" y2="-544" x1="432" />
            <rect width="64" x="432" y="-316" height="24" />
            <line x2="496" y1="-304" y2="-304" x1="432" />
            <rect width="64" x="432" y="-236" height="24" />
            <line x2="496" y1="-224" y2="-224" x1="432" />
            <rect width="368" x="64" y="-576" height="832" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
        </blockdef>
        <blockdef name="MEM">
            <timestamp>2016-7-17T13:43:4</timestamp>
            <line x2="528" y1="608" y2="608" x1="464" />
            <line x2="528" y1="736" y2="736" x1="464" />
            <line x2="528" y1="800" y2="800" x1="464" />
            <rect width="64" x="464" y="1044" height="24" />
            <line x2="528" y1="1056" y2="1056" x1="464" />
            <rect width="64" x="464" y="1108" height="24" />
            <line x2="528" y1="1120" y2="1120" x1="464" />
            <rect width="64" x="464" y="1300" height="24" />
            <line x2="528" y1="1312" y2="1312" x1="464" />
            <rect width="64" x="464" y="1364" height="24" />
            <line x2="528" y1="1376" y2="1376" x1="464" />
            <rect width="64" x="464" y="1428" height="24" />
            <line x2="528" y1="1440" y2="1440" x1="464" />
            <line x2="0" y1="-672" y2="-672" x1="64" />
            <line x2="0" y1="-608" y2="-608" x1="64" />
            <rect width="64" x="0" y="-492" height="24" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <rect width="64" x="0" y="-428" height="24" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="400" x="64" y="-704" height="2560" />
        </blockdef>
        <block symbolname="IF_ID" name="XLXI_5">
            <blockpin signalname="XLXN_500" name="clk" />
            <blockpin name="rst" />
            <blockpin signalname="XLXN_4(31:0)" name="if_pc(31:0)" />
            <blockpin signalname="XLXN_485(31:0)" name="if_inst(31:0)" />
            <blockpin signalname="XLXN_468(31:0)" name="id_pc(31:0)" />
            <blockpin signalname="XLXN_469(31:0)" name="id_inst(31:0)" />
        </block>
        <block symbolname="ID_EX" name="XLXI_7">
            <blockpin signalname="XLXN_500" name="clk" />
            <blockpin name="rst" />
            <blockpin signalname="XLXN_24" name="id_wreg" />
            <blockpin signalname="XLXN_23" name="in_delay_i" />
            <blockpin signalname="XLXN_294" name="next_delay_i" />
            <blockpin signalname="XLXN_21(31:0)" name="id_inst(31:0)" />
            <blockpin signalname="XLXN_289(2:0)" name="id_alusel(2:0)" />
            <blockpin signalname="XLXN_290(7:0)" name="id_aluop(7:0)" />
            <blockpin signalname="XLXN_296(31:0)" name="id_reg1(31:0)" />
            <blockpin signalname="XLXN_17(31:0)" name="id_reg2(31:0)" />
            <blockpin signalname="XLXN_295(4:0)" name="id_wd(4:0)" />
            <blockpin signalname="XLXN_22(31:0)" name="link_addr_i(31:0)" />
            <blockpin signalname="XLXN_53" name="ex_wreg" />
            <blockpin signalname="XLXN_478" name="in_delay_o" />
            <blockpin signalname="XLXN_33" name="next_delay_o" />
            <blockpin signalname="XLXN_479(31:0)" name="ex_inst(31:0)" />
            <blockpin signalname="XLXN_46(2:0)" name="ex_alusel(2:0)" />
            <blockpin signalname="XLXN_320(7:0)" name="ex_aluop(7:0)" />
            <blockpin signalname="XLXN_321(31:0)" name="ex_reg1(31:0)" />
            <blockpin signalname="XLXN_322(31:0)" name="ex_reg2(31:0)" />
            <blockpin signalname="XLXN_291(4:0)" name="ex_wd(4:0)" />
            <blockpin signalname="XLXN_44(31:0)" name="link_addr_o(31:0)" />
        </block>
        <block symbolname="ID" name="XLXI_8">
            <blockpin name="rst" />
            <blockpin signalname="XLXN_33" name="in_delay_i" />
            <blockpin signalname="XLXN_468(31:0)" name="PC_i(31:0)" />
            <blockpin signalname="XLXN_469(31:0)" name="Inst_i(31:0)" />
            <blockpin signalname="XLXN_10(31:0)" name="Reg1_data_i(31:0)" />
            <blockpin signalname="XLXN_11(31:0)" name="Reg2_data_i(31:0)" />
            <blockpin signalname="XLXN_24" name="wreg_o" />
            <blockpin signalname="XLXN_15" name="Reg2_read_o" />
            <blockpin signalname="XLXN_14" name="Reg1_read_o" />
            <blockpin signalname="XLXN_23" name="in_delay_o" />
            <blockpin signalname="XLXN_294" name="next_delay" />
            <blockpin signalname="XLXN_34" name="branch_flag" />
            <blockpin signalname="XLXN_21(31:0)" name="inst_o(31:0)" />
            <blockpin signalname="XLXN_289(2:0)" name="ALUsel_o(2:0)" />
            <blockpin signalname="XLXN_290(7:0)" name="ALUop_o(7:0)" />
            <blockpin signalname="XLXN_296(31:0)" name="Reg1_o(31:0)" />
            <blockpin signalname="XLXN_17(31:0)" name="Reg2_o(31:0)" />
            <blockpin signalname="XLXN_295(4:0)" name="wd_o(4:0)" />
            <blockpin signalname="XLXN_13(4:0)" name="Reg2_addr_o(4:0)" />
            <blockpin signalname="XLXN_12(4:0)" name="Reg1_addr_o(4:0)" />
            <blockpin signalname="XLXN_22(31:0)" name="link_addr_o(31:0)" />
            <blockpin signalname="XLXN_30(31:0)" name="branch_addr(31:0)" />
        </block>
        <block symbolname="EX_MEM" name="XLXI_9">
            <blockpin name="clk" />
            <blockpin name="rst" />
            <blockpin signalname="XLXN_50" name="ex_wreg" />
            <blockpin signalname="XLXN_96(31:0)" name="ex_wdata(31:0)" />
            <blockpin signalname="XLXN_96(31:0)" name="ex_wd(4:0)" />
            <blockpin signalname="XLXN_288(7:0)" name="ex_aluop(7:0)" />
            <blockpin signalname="XLXN_92(31:0)" name="ex_mem_addr(31:0)" />
            <blockpin signalname="XLXN_47(31:0)" name="ex_reg2(31:0)" />
            <blockpin signalname="XLXN_349" name="mem_wreg" />
            <blockpin signalname="XLXN_351(31:0)" name="mem_wdata(31:0)" />
            <blockpin signalname="XLXN_352(4:0)" name="mem_wd(4:0)" />
            <blockpin signalname="XLXN_355(7:0)" name="mem_aluop(7:0)" />
            <blockpin signalname="XLXN_360(31:0)" name="mem_mem_addr(31:0)" />
            <blockpin signalname="XLXN_356(31:0)" name="mem_reg2(31:0)" />
        </block>
        <block symbolname="EX" name="XLXI_10">
            <blockpin name="rst" />
            <blockpin signalname="XLXN_53" name="wreg_i" />
            <blockpin signalname="XLXN_478" name="in_delay_i" />
            <blockpin signalname="XLXN_479(31:0)" name="inst_i(31:0)" />
            <blockpin signalname="XLXN_46(2:0)" name="alusel_i(2:0)" />
            <blockpin signalname="XLXN_320(7:0)" name="aluop_i(7:0)" />
            <blockpin signalname="XLXN_321(31:0)" name="reg1_i(31:0)" />
            <blockpin signalname="XLXN_322(31:0)" name="reg2_i(31:0)" />
            <blockpin signalname="XLXN_291(4:0)" name="wd_i(4:0)" />
            <blockpin signalname="XLXN_44(31:0)" name="link_addr_i(31:0)" />
            <blockpin signalname="XLXN_50" name="wreg_o" />
            <blockpin signalname="XLXN_92(31:0)" name="mem_addr_o(31:0)" />
            <blockpin signalname="XLXN_96(31:0)" name="wd_o(4:0)" />
            <blockpin signalname="XLXN_95(31:0)" name="wdata_o(31:0)" />
            <blockpin signalname="XLXN_288(7:0)" name="aluop_o(7:0)" />
            <blockpin signalname="XLXN_47(31:0)" name="reg2_o(31:0)" />
        </block>
        <block symbolname="MEM_WB" name="XLXI_11">
            <blockpin name="clk" />
            <blockpin name="rst" />
            <blockpin name="mem_wreg" />
            <blockpin name="mem_wdata(31:0)" />
            <blockpin signalname="XLXN_170" name="wb_wreg" />
            <blockpin signalname="XLXN_467(31:0)" name="wb_wdata(31:0)" />
            <blockpin signalname="XLXN_171(4:0)" name="wb_wd(4:0)" />
            <blockpin name="mem_wd(4:0)" />
        </block>
        <block symbolname="CPU" name="XLXI_20">
            <blockpin signalname="clk_init" name="clk_init" />
            <blockpin signalname="XLXN_263" name="rst_1" />
            <blockpin signalname="XLXN_500" name="clk" />
            <blockpin name="rst" />
        </block>
        <block symbolname="MEM" name="XLXI_21">
            <blockpin name="rst" />
            <blockpin signalname="XLXN_349" name="wreg_i" />
            <blockpin signalname="XLXN_352(4:0)" name="wd_i(4:0)" />
            <blockpin signalname="XLXN_351(31:0)" name="wdata_i(31:0)" />
            <blockpin signalname="XLXN_360(31:0)" name="mem_addr_i(31:0)" />
            <blockpin signalname="XLXN_355(7:0)" name="ALUOp_i(7:0)" />
            <blockpin signalname="XLXN_356(31:0)" name="reg2_i(31:0)" />
            <blockpin name="mem_data_i(31:0)" />
            <blockpin name="wreg_o" />
            <blockpin name="mem_we_o" />
            <blockpin name="mem_ce_o" />
            <blockpin name="wd_o(4:0)" />
            <blockpin name="wdata_o(31:0)" />
            <blockpin name="mem_addr_o(31:0)" />
            <blockpin name="mem_sel_o(3:0)" />
            <blockpin name="mem_data_o(31:0)" />
        </block>
        <block symbolname="PC" name="XLXI_3">
            <blockpin signalname="XLXN_500" name="clk" />
            <blockpin name="rst" />
            <blockpin signalname="XLXN_34" name="branch_flag" />
            <blockpin signalname="XLXN_30(31:0)" name="branch_addr(31:0)" />
            <blockpin signalname="XLXN_466(31:0)" name="pc(31:0)" />
        </block>
        <block symbolname="IF" name="XLXI_4">
            <blockpin signalname="XLXN_466(31:0)" name="addr_i(31:0)" />
            <blockpin name="inst_i(31:0)" />
            <blockpin name="mem_addr_o(31:0)" />
            <blockpin signalname="XLXN_4(31:0)" name="addr_o(31:0)" />
            <blockpin signalname="XLXN_485(31:0)" name="inst_o(31:0)" />
        </block>
        <block symbolname="Reg" name="XLXI_6">
            <blockpin signalname="XLXN_500" name="clk" />
            <blockpin name="rst" />
            <blockpin signalname="XLXN_14" name="re1" />
            <blockpin signalname="XLXN_15" name="re2" />
            <blockpin signalname="XLXN_170" name="we" />
            <blockpin signalname="XLXN_12(4:0)" name="raddr1(4:0)" />
            <blockpin signalname="XLXN_13(4:0)" name="raddr2(4:0)" />
            <blockpin signalname="XLXN_171(4:0)" name="waddr(4:0)" />
            <blockpin signalname="XLXN_467(31:0)" name="wdata(31:0)" />
            <blockpin signalname="XLXN_456(31:0)" name="epc_i(31:0)" />
            <blockpin signalname="XLXN_457(31:0)" name="exc_code_i(31:0)" />
            <blockpin signalname="XLXN_10(31:0)" name="rdata1(31:0)" />
            <blockpin signalname="XLXN_11(31:0)" name="rdata2(31:0)" />
            <blockpin signalname="XLXN_454" name="excodenable" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="12800" height="6400">
        <attr value="CM" name="LengthUnitName" />
        <attr value="4" name="GridsPerUnit" />
        <branch name="XLXN_15">
            <wire x2="2384" y1="3120" y2="3552" x1="2384" />
            <wire x2="2448" y1="3552" y2="3552" x1="2384" />
            <wire x2="2944" y1="3120" y2="3120" x1="2384" />
            <wire x2="2928" y1="1920" y2="1920" x1="2896" />
            <wire x2="2928" y1="1920" y2="2320" x1="2928" />
            <wire x2="2944" y1="2320" y2="2320" x1="2928" />
            <wire x2="2944" y1="2320" y2="3120" x1="2944" />
        </branch>
        <instance x="3136" y="2592" name="XLXI_7" orien="R0">
        </instance>
        <branch name="XLXN_17(31:0)">
            <wire x2="2992" y1="2496" y2="2496" x1="2896" />
            <wire x2="2992" y1="2432" y2="2496" x1="2992" />
            <wire x2="3136" y1="2432" y2="2432" x1="2992" />
        </branch>
        <branch name="XLXN_21(31:0)">
            <wire x2="2992" y1="2240" y2="2240" x1="2896" />
            <wire x2="2992" y1="2176" y2="2240" x1="2992" />
            <wire x2="3136" y1="2176" y2="2176" x1="2992" />
        </branch>
        <branch name="XLXN_23">
            <wire x2="2992" y1="2048" y2="2048" x1="2896" />
            <wire x2="2992" y1="1984" y2="2048" x1="2992" />
            <wire x2="3136" y1="1984" y2="1984" x1="2992" />
        </branch>
        <branch name="XLXN_24">
            <wire x2="3008" y1="1856" y2="1856" x1="2896" />
            <wire x2="3008" y1="1856" y2="1920" x1="3008" />
            <wire x2="3136" y1="1920" y2="1920" x1="3008" />
        </branch>
        <branch name="XLXN_22(31:0)">
            <wire x2="3024" y1="2752" y2="2752" x1="2896" />
            <wire x2="3024" y1="2560" y2="2752" x1="3024" />
            <wire x2="3136" y1="2560" y2="2560" x1="3024" />
        </branch>
        <branch name="XLXN_11(31:0)">
            <wire x2="2256" y1="1728" y2="2352" x1="2256" />
            <wire x2="2368" y1="2352" y2="2352" x1="2256" />
            <wire x2="3056" y1="1728" y2="1728" x1="2256" />
            <wire x2="3056" y1="1728" y2="3616" x1="3056" />
            <wire x2="3056" y1="3616" y2="3616" x1="2832" />
        </branch>
        <branch name="XLXN_10(31:0)">
            <wire x2="2288" y1="1680" y2="2272" x1="2288" />
            <wire x2="2368" y1="2272" y2="2272" x1="2288" />
            <wire x2="3040" y1="1680" y2="1680" x1="2288" />
            <wire x2="3040" y1="1680" y2="3552" x1="3040" />
            <wire x2="3040" y1="3552" y2="3552" x1="2832" />
        </branch>
        <instance x="2368" y="2848" name="XLXI_8" orien="R0">
        </instance>
        <branch name="XLXN_34">
            <wire x2="496" y1="1696" y2="2064" x1="496" />
            <wire x2="544" y1="2064" y2="2064" x1="496" />
            <wire x2="2960" y1="1696" y2="1696" x1="496" />
            <wire x2="2960" y1="1696" y2="2176" x1="2960" />
            <wire x2="2960" y1="2176" y2="2176" x1="2896" />
        </branch>
        <branch name="XLXN_33">
            <wire x2="2368" y1="2032" y2="2032" x1="2256" />
            <wire x2="2256" y1="2032" y2="5216" x1="2256" />
            <wire x2="3696" y1="5216" y2="5216" x1="2256" />
            <wire x2="3696" y1="1952" y2="1952" x1="3632" />
            <wire x2="3696" y1="1952" y2="5216" x1="3696" />
        </branch>
        <branch name="XLXN_44(31:0)">
            <wire x2="3792" y1="2512" y2="2512" x1="3632" />
            <wire x2="3792" y1="2512" y2="2752" x1="3792" />
            <wire x2="3952" y1="2752" y2="2752" x1="3792" />
        </branch>
        <branch name="XLXN_46(2:0)">
            <wire x2="3648" y1="2112" y2="2112" x1="3632" />
            <wire x2="3648" y1="2112" y2="2176" x1="3648" />
            <wire x2="3952" y1="2176" y2="2176" x1="3648" />
        </branch>
        <branch name="XLXN_92(31:0)">
            <wire x2="4640" y1="2128" y2="2128" x1="4464" />
            <wire x2="4640" y1="2128" y2="2736" x1="4640" />
            <wire x2="4880" y1="2736" y2="2736" x1="4640" />
        </branch>
        <branch name="XLXN_96(31:0)">
            <wire x2="4880" y1="2240" y2="2240" x1="4464" />
            <wire x2="4880" y1="2240" y2="2416" x1="4880" />
            <wire x2="4880" y1="2416" y2="2480" x1="4880" />
        </branch>
        <instance x="3952" y="2912" name="XLXI_10" orien="R0">
        </instance>
        <branch name="XLXN_53">
            <wire x2="3648" y1="1792" y2="1792" x1="3632" />
            <wire x2="3648" y1="1792" y2="1856" x1="3648" />
            <wire x2="3952" y1="1856" y2="1856" x1="3648" />
        </branch>
        <instance x="6304" y="3152" name="XLXI_11" orien="R0">
        </instance>
        <branch name="XLXN_171(4:0)">
            <wire x2="2448" y1="3808" y2="3808" x1="2320" />
            <wire x2="2320" y1="3808" y2="5504" x1="2320" />
            <wire x2="6816" y1="5504" y2="5504" x1="2320" />
            <wire x2="6816" y1="2928" y2="2928" x1="6800" />
            <wire x2="6816" y1="2928" y2="5504" x1="6816" />
        </branch>
        <branch name="XLXN_289(2:0)">
            <wire x2="3008" y1="2304" y2="2304" x1="2896" />
            <wire x2="3008" y1="2240" y2="2304" x1="3008" />
            <wire x2="3136" y1="2240" y2="2240" x1="3008" />
        </branch>
        <branch name="XLXN_290(7:0)">
            <wire x2="2960" y1="2368" y2="2368" x1="2896" />
            <wire x2="2960" y1="2368" y2="2416" x1="2960" />
            <wire x2="3088" y1="2416" y2="2416" x1="2960" />
            <wire x2="3088" y1="2304" y2="2416" x1="3088" />
            <wire x2="3136" y1="2304" y2="2304" x1="3088" />
        </branch>
        <branch name="XLXN_291(4:0)">
            <wire x2="3952" y1="2432" y2="2432" x1="3632" />
        </branch>
        <branch name="XLXN_294">
            <wire x2="3008" y1="2112" y2="2112" x1="2896" />
            <wire x2="3008" y1="2048" y2="2112" x1="3008" />
            <wire x2="3136" y1="2048" y2="2048" x1="3008" />
        </branch>
        <branch name="XLXN_295(4:0)">
            <wire x2="3008" y1="2560" y2="2560" x1="2896" />
            <wire x2="3008" y1="2496" y2="2560" x1="3008" />
            <wire x2="3136" y1="2496" y2="2496" x1="3008" />
        </branch>
        <branch name="XLXN_296(31:0)">
            <wire x2="2976" y1="2432" y2="2432" x1="2896" />
            <wire x2="2976" y1="2368" y2="2432" x1="2976" />
            <wire x2="3136" y1="2368" y2="2368" x1="2976" />
        </branch>
        <branch name="XLXN_320(7:0)">
            <wire x2="3792" y1="2192" y2="2192" x1="3632" />
            <wire x2="3792" y1="2192" y2="2240" x1="3792" />
            <wire x2="3952" y1="2240" y2="2240" x1="3792" />
        </branch>
        <branch name="XLXN_321(31:0)">
            <wire x2="3792" y1="2272" y2="2272" x1="3632" />
            <wire x2="3792" y1="2272" y2="2304" x1="3792" />
            <wire x2="3952" y1="2304" y2="2304" x1="3792" />
        </branch>
        <branch name="XLXN_322(31:0)">
            <wire x2="3792" y1="2352" y2="2352" x1="3632" />
            <wire x2="3792" y1="2352" y2="2368" x1="3792" />
            <wire x2="3952" y1="2368" y2="2368" x1="3792" />
        </branch>
        <iomarker fontsize="28" x="1008" y="1040" name="clk_init" orien="R180" />
        <branch name="clk_init">
            <wire x2="1200" y1="1040" y2="1040" x1="1008" />
        </branch>
        <instance x="1200" y="1264" name="XLXI_20" orien="R0">
        </instance>
        <iomarker fontsize="28" x="896" y="1232" name="XLXN_263" orien="R180" />
        <branch name="XLXN_263">
            <wire x2="1200" y1="1232" y2="1232" x1="896" />
        </branch>
        <instance x="1744" y="2160" name="XLXI_5" orien="R0">
        </instance>
        <branch name="XLXN_14">
            <wire x2="2448" y1="3424" y2="3424" x1="2368" />
            <wire x2="2368" y1="3424" y2="5328" x1="2368" />
            <wire x2="2992" y1="5328" y2="5328" x1="2368" />
            <wire x2="2912" y1="1984" y2="1984" x1="2896" />
            <wire x2="2912" y1="1984" y2="2576" x1="2912" />
            <wire x2="2992" y1="2576" y2="2576" x1="2912" />
            <wire x2="2992" y1="2576" y2="5328" x1="2992" />
        </branch>
        <branch name="XLXN_170">
            <wire x2="2448" y1="3616" y2="3616" x1="2384" />
            <wire x2="2384" y1="3616" y2="5296" x1="2384" />
            <wire x2="6832" y1="5296" y2="5296" x1="2384" />
            <wire x2="6832" y1="2608" y2="2608" x1="6800" />
            <wire x2="6832" y1="2608" y2="5296" x1="6832" />
        </branch>
        <branch name="XLXN_12(4:0)">
            <wire x2="2448" y1="3680" y2="3680" x1="2288" />
            <wire x2="2288" y1="3680" y2="5376" x1="2288" />
            <wire x2="3024" y1="5376" y2="5376" x1="2288" />
            <wire x2="3024" y1="2688" y2="2688" x1="2896" />
            <wire x2="3024" y1="2688" y2="5376" x1="3024" />
        </branch>
        <branch name="XLXN_13(4:0)">
            <wire x2="2448" y1="3744" y2="3744" x1="2400" />
            <wire x2="2400" y1="3744" y2="5344" x1="2400" />
            <wire x2="3008" y1="5344" y2="5344" x1="2400" />
            <wire x2="3008" y1="2624" y2="2624" x1="2896" />
            <wire x2="3008" y1="2624" y2="5344" x1="3008" />
        </branch>
        <instance x="5472" y="1872" name="XLXI_21" orien="R0">
        </instance>
        <branch name="XLXN_454">
            <wire x2="2432" y1="4576" y2="4576" x1="1920" />
            <wire x2="2448" y1="4576" y2="4576" x1="2432" />
        </branch>
        <branch name="XLXN_456(31:0)">
            <wire x2="2448" y1="4640" y2="4640" x1="2080" />
            <wire x2="2080" y1="4640" y2="5584" x1="2080" />
            <wire x2="7968" y1="5584" y2="5584" x1="2080" />
            <wire x2="7968" y1="2080" y2="2080" x1="7856" />
            <wire x2="7968" y1="2080" y2="5584" x1="7968" />
        </branch>
        <branch name="XLXN_457(31:0)">
            <wire x2="2448" y1="4704" y2="4704" x1="2208" />
            <wire x2="2208" y1="4704" y2="5680" x1="2208" />
            <wire x2="7952" y1="5680" y2="5680" x1="2208" />
            <wire x2="7952" y1="2016" y2="2016" x1="7856" />
            <wire x2="7952" y1="2016" y2="5680" x1="7952" />
        </branch>
        <branch name="XLXN_467(31:0)">
            <wire x2="2352" y1="848" y2="3872" x1="2352" />
            <wire x2="2448" y1="3872" y2="3872" x1="2352" />
            <wire x2="6848" y1="848" y2="848" x1="2352" />
            <wire x2="6848" y1="848" y2="2848" x1="6848" />
            <wire x2="6848" y1="2848" y2="2848" x1="6800" />
        </branch>
        <branch name="XLXN_468(31:0)">
            <wire x2="2240" y1="1872" y2="1872" x1="2128" />
            <wire x2="2240" y1="1872" y2="2112" x1="2240" />
            <wire x2="2368" y1="2112" y2="2112" x1="2240" />
        </branch>
        <branch name="XLXN_469(31:0)">
            <wire x2="2240" y1="2128" y2="2128" x1="2128" />
            <wire x2="2240" y1="2128" y2="2192" x1="2240" />
            <wire x2="2368" y1="2192" y2="2192" x1="2240" />
        </branch>
        <branch name="XLXN_478">
            <wire x2="3792" y1="1872" y2="1872" x1="3632" />
            <wire x2="3792" y1="1872" y2="1984" x1="3792" />
            <wire x2="3952" y1="1984" y2="1984" x1="3792" />
        </branch>
        <branch name="XLXN_479(31:0)">
            <wire x2="3792" y1="2032" y2="2032" x1="3632" />
            <wire x2="3792" y1="2032" y2="2112" x1="3792" />
            <wire x2="3952" y1="2112" y2="2112" x1="3792" />
        </branch>
        <branch name="XLXN_485(31:0)">
            <wire x2="1744" y1="2128" y2="2128" x1="1568" />
        </branch>
        <branch name="XLXN_30(31:0)">
            <wire x2="256" y1="2192" y2="5184" x1="256" />
            <wire x2="3024" y1="5184" y2="5184" x1="256" />
            <wire x2="544" y1="2192" y2="2192" x1="256" />
            <wire x2="3024" y1="2816" y2="2816" x1="2896" />
            <wire x2="3024" y1="2816" y2="5184" x1="3024" />
        </branch>
        <instance x="544" y="2224" name="XLXI_3" orien="R0">
        </instance>
        <branch name="XLXN_4(31:0)">
            <wire x2="1744" y1="2064" y2="2064" x1="1568" />
        </branch>
        <branch name="XLXN_466(31:0)">
            <wire x2="1008" y1="2192" y2="2192" x1="976" />
            <wire x2="1008" y1="2032" y2="2192" x1="1008" />
            <wire x2="1104" y1="2032" y2="2032" x1="1008" />
        </branch>
        <instance x="1104" y="2160" name="XLXI_4" orien="R0">
        </instance>
        <instance x="2448" y="3648" name="XLXI_6" orien="R0">
        </instance>
        <branch name="XLXN_356(31:0)">
            <wire x2="5360" y1="3184" y2="3184" x1="5264" />
            <wire x2="5360" y1="1776" y2="3184" x1="5360" />
            <wire x2="5472" y1="1776" y2="1776" x1="5360" />
        </branch>
        <branch name="XLXN_360(31:0)">
            <wire x2="5312" y1="3120" y2="3120" x1="5264" />
            <wire x2="5312" y1="1648" y2="3120" x1="5312" />
            <wire x2="5472" y1="1648" y2="1648" x1="5312" />
        </branch>
        <branch name="XLXN_355(7:0)">
            <wire x2="5376" y1="3056" y2="3056" x1="5264" />
            <wire x2="5376" y1="1712" y2="3056" x1="5376" />
            <wire x2="5472" y1="1712" y2="1712" x1="5376" />
        </branch>
        <branch name="XLXN_352(4:0)">
            <wire x2="5328" y1="2864" y2="2864" x1="5264" />
            <wire x2="5328" y1="1392" y2="2864" x1="5328" />
            <wire x2="5472" y1="1392" y2="1392" x1="5328" />
        </branch>
        <branch name="XLXN_351(31:0)">
            <wire x2="5328" y1="2800" y2="2800" x1="5264" />
            <wire x2="5328" y1="1456" y2="2800" x1="5328" />
            <wire x2="5472" y1="1456" y2="1456" x1="5328" />
        </branch>
        <branch name="XLXN_349">
            <wire x2="5344" y1="2672" y2="2672" x1="5264" />
            <wire x2="5344" y1="1264" y2="2672" x1="5344" />
            <wire x2="5472" y1="1264" y2="1264" x1="5344" />
        </branch>
        <branch name="XLXN_47(31:0)">
            <wire x2="4880" y1="2800" y2="2800" x1="4464" />
        </branch>
        <branch name="XLXN_288(7:0)">
            <wire x2="2368" y1="2704" y2="2704" x1="2256" />
            <wire x2="2256" y1="2704" y2="5248" x1="2256" />
            <wire x2="4512" y1="5248" y2="5248" x1="2256" />
            <wire x2="4512" y1="2688" y2="2688" x1="4464" />
            <wire x2="4512" y1="2688" y2="5248" x1="4512" />
            <wire x2="4512" y1="2672" y2="2688" x1="4512" />
            <wire x2="4880" y1="2672" y2="2672" x1="4512" />
        </branch>
        <branch name="XLXN_95(31:0)">
            <wire x2="4608" y1="2352" y2="2352" x1="4464" />
            <wire x2="4608" y1="2352" y2="2416" x1="4608" />
            <wire x2="4880" y1="2416" y2="2416" x1="4608" />
        </branch>
        <branch name="XLXN_50">
            <wire x2="4656" y1="1904" y2="1904" x1="4464" />
            <wire x2="4656" y1="1904" y2="2224" x1="4656" />
            <wire x2="4880" y1="2224" y2="2224" x1="4656" />
        </branch>
        <instance x="4880" y="2640" name="XLXI_9" orien="R0">
        </instance>
        <branch name="XLXN_500">
            <wire x2="464" y1="1552" y2="1936" x1="464" />
            <wire x2="544" y1="1936" y2="1936" x1="464" />
            <wire x2="1728" y1="1552" y2="1552" x1="464" />
            <wire x2="1728" y1="1552" y2="1600" x1="1728" />
            <wire x2="1728" y1="1600" y2="1872" x1="1728" />
            <wire x2="1744" y1="1872" y2="1872" x1="1728" />
            <wire x2="3136" y1="1552" y2="1552" x1="1728" />
            <wire x2="1712" y1="1040" y2="1040" x1="1584" />
            <wire x2="1728" y1="1040" y2="1040" x1="1712" />
            <wire x2="1728" y1="1040" y2="1056" x1="1728" />
            <wire x2="1728" y1="1056" y2="1552" x1="1728" />
            <wire x2="1744" y1="1040" y2="1040" x1="1728" />
            <wire x2="2144" y1="1040" y2="1040" x1="1744" />
            <wire x2="2144" y1="1040" y2="3232" x1="2144" />
            <wire x2="2448" y1="3232" y2="3232" x1="2144" />
            <wire x2="3136" y1="1536" y2="1536" x1="3072" />
            <wire x2="3136" y1="1536" y2="1552" x1="3136" />
            <wire x2="3072" y1="1536" y2="1792" x1="3072" />
            <wire x2="3136" y1="1792" y2="1792" x1="3072" />
        </branch>
    </sheet>
</drawing>