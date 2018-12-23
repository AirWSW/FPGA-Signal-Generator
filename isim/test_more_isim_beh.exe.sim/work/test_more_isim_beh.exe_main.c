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
    work_m_00000000003459270306_1208434039_init();
    work_m_00000000003685903764_0542327438_init();
    work_m_00000000000785409983_4113472356_init();
    work_m_00000000000908013118_1976196353_init();
    work_m_00000000004049972704_0922015392_init();
    work_m_00000000002506138062_2100349821_init();
    work_m_00000000004095159294_2049887419_init();
    work_m_00000000000735187721_3296819782_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000735187721_3296819782");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
