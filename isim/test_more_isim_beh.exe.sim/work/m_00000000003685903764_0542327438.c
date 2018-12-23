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
static const char *ng0 = "C:/Users/Shiwei/Documents/proj5/seg_disp.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {15U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {79U, 0U};
static unsigned int ng9[] = {18U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {76U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {36U, 0U};
static unsigned int ng15[] = {32U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {9U, 0U};
static unsigned int ng19[] = {10U, 0U};
static unsigned int ng20[] = {11U, 0U};
static unsigned int ng21[] = {96U, 0U};
static unsigned int ng22[] = {12U, 0U};
static unsigned int ng23[] = {49U, 0U};
static unsigned int ng24[] = {13U, 0U};
static unsigned int ng25[] = {66U, 0U};
static unsigned int ng26[] = {14U, 0U};
static unsigned int ng27[] = {48U, 0U};
static unsigned int ng28[] = {56U, 0U};



static void Initial_44_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(44, ng0);

LAB2:    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_48_1(char *t0)
{
    char t6[8];
    char t19[8];
    char t28[8];
    char t34[8];
    char t73[8];
    char t77[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5760);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    t4 = (t0 + 3368);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 2888);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t10, 2, 2);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t14 = (t12 >> 2);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 2);
    t18 = (t17 & 1);
    *((unsigned int *)t2) = t18;
    memset(t19, 0, 8);
    t5 = (t6 + 4);
    t20 = *((unsigned int *)t5);
    t21 = (~(t20));
    t22 = *((unsigned int *)t6);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t5) != 0)
        goto LAB10;

LAB11:    t8 = (t19 + 4);
    t25 = *((unsigned int *)t19);
    t26 = *((unsigned int *)t8);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB12;

LAB13:    memcpy(t34, t19, 8);

LAB14:    t65 = (t34 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t34);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t12 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t12 ^ t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    t20 = (t15 | t18);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB31;

LAB28:    if (t23 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t6) = 1;

LAB31:    t10 = (t0 + 1368U);
    t11 = *((char **)t10);
    memset(t19, 0, 8);
    t10 = (t19 + 4);
    t38 = (t11 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (t26 >> 3);
    *((unsigned int *)t19) = t27;
    t29 = *((unsigned int *)t38);
    t30 = (t29 >> 3);
    *((unsigned int *)t10) = t30;
    t31 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t31 & 3U);
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & 3U);
    t39 = ((char*)((ng5)));
    memset(t28, 0, 8);
    t40 = (t19 + 4);
    t48 = (t39 + 4);
    t33 = *((unsigned int *)t19);
    t35 = *((unsigned int *)t39);
    t36 = (t33 ^ t35);
    t37 = *((unsigned int *)t40);
    t41 = *((unsigned int *)t48);
    t42 = (t37 ^ t41);
    t43 = (t36 | t42);
    t44 = *((unsigned int *)t40);
    t45 = *((unsigned int *)t48);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t50 = (t43 & t47);
    if (t50 != 0)
        goto LAB35;

LAB32:    if (t46 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t28) = 1;

LAB35:    t51 = *((unsigned int *)t6);
    t52 = *((unsigned int *)t28);
    t53 = (t51 & t52);
    *((unsigned int *)t34) = t53;
    t65 = (t6 + 4);
    t71 = (t28 + 4);
    t72 = (t34 + 4);
    t54 = *((unsigned int *)t65);
    t55 = *((unsigned int *)t71);
    t56 = (t54 | t55);
    *((unsigned int *)t72) = t56;
    t57 = *((unsigned int *)t72);
    t59 = (t57 != 0);
    if (t59 == 1)
        goto LAB36;

LAB37:
LAB38:    t76 = (t34 + 4);
    t88 = *((unsigned int *)t76);
    t90 = (~(t88));
    t91 = *((unsigned int *)t34);
    t92 = (t91 & t90);
    t93 = (t92 != 0);
    if (t93 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t12 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t12 ^ t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    t20 = (t15 | t18);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB46;

LAB43:    if (t23 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t6) = 1;

LAB46:    t10 = (t0 + 1368U);
    t11 = *((char **)t10);
    memset(t19, 0, 8);
    t10 = (t19 + 4);
    t38 = (t11 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (t26 >> 3);
    *((unsigned int *)t19) = t27;
    t29 = *((unsigned int *)t38);
    t30 = (t29 >> 3);
    *((unsigned int *)t10) = t30;
    t31 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t31 & 3U);
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & 3U);
    t39 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t40 = (t19 + 4);
    t48 = (t39 + 4);
    t33 = *((unsigned int *)t19);
    t35 = *((unsigned int *)t39);
    t36 = (t33 ^ t35);
    t37 = *((unsigned int *)t40);
    t41 = *((unsigned int *)t48);
    t42 = (t37 ^ t41);
    t43 = (t36 | t42);
    t44 = *((unsigned int *)t40);
    t45 = *((unsigned int *)t48);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t50 = (t43 & t47);
    if (t50 != 0)
        goto LAB50;

LAB47:    if (t46 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t28) = 1;

LAB50:    t51 = *((unsigned int *)t6);
    t52 = *((unsigned int *)t28);
    t53 = (t51 & t52);
    *((unsigned int *)t34) = t53;
    t65 = (t6 + 4);
    t71 = (t28 + 4);
    t72 = (t34 + 4);
    t54 = *((unsigned int *)t65);
    t55 = *((unsigned int *)t71);
    t56 = (t54 | t55);
    *((unsigned int *)t72) = t56;
    t57 = *((unsigned int *)t72);
    t59 = (t57 != 0);
    if (t59 == 1)
        goto LAB51;

LAB52:
LAB53:    t76 = (t34 + 4);
    t88 = *((unsigned int *)t76);
    t90 = (~(t88));
    t91 = *((unsigned int *)t34);
    t92 = (t91 & t90);
    t93 = (t92 != 0);
    if (t93 > 0)
        goto LAB54;

LAB55:
LAB56:
LAB41:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB58:    t5 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t13 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB65;

LAB66:
LAB67:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB68:    t7 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t7, 32);
    if (t13 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng18)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng20)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng22)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng24)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng26)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB99;

LAB100:
LAB101:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t7, 2, t8, 32);
    t9 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t9, t6, 0, 0, 2, 0LL);
    goto LAB2;

LAB6:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB7;

LAB8:    *((unsigned int *)t19) = 1;
    goto LAB11;

LAB10:    t7 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB11;

LAB12:    t9 = (t0 + 1208U);
    t10 = *((char **)t9);
    memset(t28, 0, 8);
    t9 = (t10 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t10);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t9) != 0)
        goto LAB17;

LAB18:    t35 = *((unsigned int *)t19);
    t36 = *((unsigned int *)t28);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t19 + 4);
    t39 = (t28 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t28) = 1;
    goto LAB18;

LAB17:    t11 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t19 + 4);
    t49 = (t28 + 4);
    t50 = *((unsigned int *)t19);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t28);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t13 = (t51 & t53);
    t58 = (t55 & t57);
    t59 = (~(t13));
    t60 = (~(t58));
    t61 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t61 & t59);
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t63 & t59);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    goto LAB21;

LAB22:    xsi_set_current_line(51, ng0);

LAB25:    xsi_set_current_line(52, ng0);
    t71 = ((char*)((ng4)));
    t72 = (t0 + 3368);
    t74 = (t0 + 3368);
    t75 = (t74 + 72U);
    t76 = *((char **)t75);
    t78 = (t0 + 1368U);
    t79 = *((char **)t78);
    memset(t77, 0, 8);
    t78 = (t77 + 4);
    t80 = (t79 + 4);
    t81 = *((unsigned int *)t79);
    t82 = (t81 >> 0);
    *((unsigned int *)t77) = t82;
    t83 = *((unsigned int *)t80);
    t84 = (t83 >> 0);
    *((unsigned int *)t78) = t84;
    t85 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t85 & 3U);
    t86 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t86 & 3U);
    xsi_vlog_generic_convert_bit_index(t73, t76, 2, t77, 2, 2);
    t87 = (t73 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (!(t88));
    if (t89 == 1)
        goto LAB26;

LAB27:    goto LAB24;

LAB26:    xsi_vlogvar_assign_value(t72, t71, 0, *((unsigned int *)t73), 1);
    goto LAB27;

LAB30:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB31;

LAB34:    t49 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB35;

LAB36:    t60 = *((unsigned int *)t34);
    t61 = *((unsigned int *)t72);
    *((unsigned int *)t34) = (t60 | t61);
    t74 = (t6 + 4);
    t75 = (t28 + 4);
    t62 = *((unsigned int *)t6);
    t63 = (~(t62));
    t64 = *((unsigned int *)t74);
    t66 = (~(t64));
    t67 = *((unsigned int *)t28);
    t68 = (~(t67));
    t69 = *((unsigned int *)t75);
    t70 = (~(t69));
    t13 = (t63 & t66);
    t58 = (t68 & t70);
    t81 = (~(t13));
    t82 = (~(t58));
    t83 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t83 & t81);
    t84 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t84 & t82);
    t85 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t85 & t81);
    t86 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t86 & t82);
    goto LAB38;

LAB39:    xsi_set_current_line(55, ng0);

LAB42:    xsi_set_current_line(56, ng0);
    t78 = ((char*)((ng5)));
    t79 = (t0 + 3528);
    xsi_vlogvar_assign_value(t79, t78, 0, 0, 1);
    goto LAB41;

LAB45:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB46;

LAB49:    t49 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB50;

LAB51:    t60 = *((unsigned int *)t34);
    t61 = *((unsigned int *)t72);
    *((unsigned int *)t34) = (t60 | t61);
    t74 = (t6 + 4);
    t75 = (t28 + 4);
    t62 = *((unsigned int *)t6);
    t63 = (~(t62));
    t64 = *((unsigned int *)t74);
    t66 = (~(t64));
    t67 = *((unsigned int *)t28);
    t68 = (~(t67));
    t69 = *((unsigned int *)t75);
    t70 = (~(t69));
    t13 = (t63 & t66);
    t58 = (t68 & t70);
    t81 = (~(t13));
    t82 = (~(t58));
    t83 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t83 & t81);
    t84 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t84 & t82);
    t85 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t85 & t81);
    t86 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t86 & t82);
    goto LAB53;

LAB54:    xsi_set_current_line(58, ng0);

LAB57:    xsi_set_current_line(59, ng0);
    t78 = ((char*)((ng5)));
    t79 = (t0 + 3528);
    xsi_vlogvar_assign_value(t79, t78, 0, 0, 1);
    goto LAB56;

LAB59:    xsi_set_current_line(62, ng0);
    t7 = (t0 + 2008U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t9 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t14 = (t12 >> 0);
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 0);
    *((unsigned int *)t7) = t16;
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 15U);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t18 & 15U);
    t10 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t10, t6, 0, 0, 4, 0LL);
    goto LAB67;

LAB61:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1848U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t14 = (t12 >> 0);
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 15U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 15U);
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    goto LAB67;

LAB63:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1688U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t14 = (t12 >> 0);
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 15U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 15U);
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    goto LAB67;

LAB65:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t7 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t14 = (t12 >> 0);
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 15U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 15U);
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    goto LAB67;

LAB69:    xsi_set_current_line(68, ng0);
    t8 = ((char*)((ng1)));
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 7);
    goto LAB101;

LAB71:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng8)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB73:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng9)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB75:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng10)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB77:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng12)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB79:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng14)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB81:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng15)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB83:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB85:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng5)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB87:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng11)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB89:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng17)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB91:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng21)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB93:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng23)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB95:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng25)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB97:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng27)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

LAB99:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng28)));
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 7);
    goto LAB101;

}

static void Cont_88_2(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 127U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 6);
    t18 = (t0 + 5776);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_89_3(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 5792);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_90_4(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 5808);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003685903764_0542327438_init()
{
	static char *pe[] = {(void *)Initial_44_0,(void *)Always_48_1,(void *)Cont_88_2,(void *)Cont_89_3,(void *)Cont_90_4};
	xsi_register_didat("work_m_00000000003685903764_0542327438", "isim/test_more_isim_beh.exe.sim/work/m_00000000003685903764_0542327438.didat");
	xsi_register_executes(pe);
}
