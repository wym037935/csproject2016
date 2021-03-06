/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003259909255_1733832700_init();
    work_m_00000000001199367583_2352116331_init();
    work_m_00000000000852959587_0345418465_init();
    work_m_00000000002209019411_1648104263_init();
    work_m_00000000003227926040_2787258270_init();
    work_m_00000000003964391853_0103510313_init();
    work_m_00000000003731560437_4024466370_init();
    work_m_00000000003763198179_4284950183_init();
    work_m_00000000000838506109_2520395732_init();
    work_m_00000000002225688789_3666345988_init();
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000004091665089_1645440072_init();
    unisims_ver_m_00000000003084551676_2693019893_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    work_m_00000000001050728562_3544005604_init();
    work_m_00000000000720736468_3508565487_init();
    work_m_00000000002479020201_3242337452_init();
    work_m_00000000002376707701_0617755897_init();
    work_m_00000000003798952462_0571925098_init();
    work_m_00000000004244751496_3438569883_init();
    work_m_00000000003798952462_4084061819_init();
    work_m_00000000002897265921_4042050711_init();
    work_m_00000000000746437939_3904863995_init();
    work_m_00000000002804518902_3229468941_init();
    work_m_00000000003359481322_1548168994_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003359481322_1548168994");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
