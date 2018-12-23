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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Shiwei/Documents/proj5/main_con_new.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {29, 0};
static unsigned int ng4[] = {1U, 0U, 0U, 0U};
static int ng5[] = {1, 0};



static void Always_186_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 3984);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(187, ng0);

LAB5:    xsi_set_current_line(188, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 29, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 14, 0LL);
    goto LAB2;

}

static void Always_192_1(char *t0)
{
    char t4[16];
    char t10[8];
    char t16[16];
    char t27[8];
    char t45[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 4000);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(192, ng0);

LAB5:    xsi_set_current_line(193, ng0);
    t5 = (t0 + 1768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t4, 43, 43, 2U, t8, 14, t7, 29);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 43);
    xsi_set_current_line(195, ng0);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t5, 32, t6, 32);
    t7 = (t10 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(195, ng0);

LAB9:    xsi_set_current_line(196, ng0);
    t8 = ((char*)((ng1)));
    t9 = (t0 + 2088);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_get_part_select_value(t16, 42, t18, 41, 0);
    xsi_vlogtype_concat(t4, 43, 43, 2U, t16, 42, t8, 1);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t4, 0, 0, 43);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t10, 0, 8);
    t6 = (t10 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 29);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 29);
    *((unsigned int *)t6) = t14;
    t8 = (t5 + 8);
    t9 = (t5 + 12);
    t15 = *((unsigned int *)t8);
    t20 = (t15 << 3);
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t21 | t20);
    t22 = *((unsigned int *)t9);
    t23 = (t22 << 3);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 | t23);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t25 & 16383U);
    t26 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t26 & 16383U);
    t17 = (t0 + 1928);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t27, 0, 8);
    t28 = (t10 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB11;

LAB10:    t29 = (t19 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t10) < *((unsigned int *)t19))
        goto LAB13;

LAB12:    *((unsigned int *)t27) = 1;

LAB13:    t31 = (t27 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t27);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2088);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 43);

LAB17:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t5, 32, t6, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB6;

LAB11:    t30 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(198, ng0);
    t37 = (t0 + 2088);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng1)));
    t41 = (t0 + 1928);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlogtype_concat(t4, 43, 43, 2U, t43, 14, t40, 29);
    xsi_vlog_unsigned_minus(t16, 43, t39, 43, t4, 43);
    t44 = ((char*)((ng4)));
    xsi_vlog_unsigned_add(t45, 43, t16, 43, t44, 43);
    t46 = (t0 + 2088);
    xsi_vlogvar_assign_value(t46, t45, 0, 0, 43);
    goto LAB17;

}

static void Cont_206_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4096);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 43);
    xsi_driver_vfirst_trans(t5, 0, 42);
    t10 = (t0 + 4016);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000000785409983_4113472356_init()
{
	static char *pe[] = {(void *)Always_186_0,(void *)Always_192_1,(void *)Cont_206_2};
	xsi_register_didat("work_m_00000000000785409983_4113472356", "isim/test_more_isim_beh.exe.sim/work/m_00000000000785409983_4113472356.didat");
	xsi_register_executes(pe);
}
