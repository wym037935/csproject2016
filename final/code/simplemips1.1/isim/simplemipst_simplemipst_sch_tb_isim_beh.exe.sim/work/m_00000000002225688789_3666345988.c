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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/study/simplemips1.1/EX.v";
static int ng1[] = {16, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {24U, 0U};
static unsigned int ng4[] = {25U, 0U};
static unsigned int ng5[] = {26U, 0U};
static unsigned int ng6[] = {27U, 0U};
static unsigned int ng7[] = {28U, 0U};
static unsigned int ng8[] = {29U, 0U};
static unsigned int ng9[] = {30U, 0U};
static unsigned int ng10[] = {31U, 0U};
static unsigned int ng11[] = {32U, 0U};
static unsigned int ng12[] = {33U, 0U};
static unsigned int ng13[] = {36U, 0U};
static unsigned int ng14[] = {37U, 0U};
static unsigned int ng15[] = {38U, 0U};
static int ng16[] = {32, 0};
static unsigned int ng17[] = {39U, 0U};
static unsigned int ng18[] = {40U, 0U};
static unsigned int ng19[] = {41U, 0U};
static unsigned int ng20[] = {0U, 0U, 0U, 0U};
static unsigned int ng21[] = {1U, 0U};
static unsigned int ng22[] = {3U, 0U};
static unsigned int ng23[] = {1U, 0U, 0U, 0U};
static unsigned int ng24[] = {4U, 0U};
static unsigned int ng25[] = {6U, 0U};
static unsigned int ng26[] = {5U, 0U};
static unsigned int ng27[] = {7U, 0U};
static unsigned int ng28[] = {2U, 0U};



static void Cont_31_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 3100U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 4556);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 7);
    t16 = (t0 + 4448);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_32_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3244U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 4592);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 4456);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_35_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t13[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 3388U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 692U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 692U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 15);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 15);
    t24 = (t23 & 1);
    *((unsigned int *)t15) = t24;
    xsi_vlog_mul_concat(t13, 16, 1, t14, 1U, t17, 1);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t13, 16, t4, 16);
    t25 = (t0 + 4628);
    t26 = (t25 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    memcpy(t29, t3, 8);
    xsi_driver_vfirst_trans(t25, 0, 31);
    t30 = (t0 + 4464);
    *((int *)t30) = 1;

LAB1:    return;
}

static void Always_37_3(char *t0)
{
    char t6[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 3532U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4472);
    *((int *)t2) = 1;
    t3 = (t0 + 3560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(40, ng0);

LAB14:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(66, ng0);

LAB66:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB34:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);

LAB13:    xsi_set_current_line(39, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(42, ng0);

LAB35:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t6) = t11;
    t4 = (t5 + 4);
    t8 = (t7 + 4);
    t21 = (t6 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 | t13);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t21);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB36;

LAB37:
LAB38:    t29 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t29, t6, 0, 0, 32, 0LL);
    goto LAB34;

LAB18:    xsi_set_current_line(45, ng0);

LAB39:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t6) = t11;
    t4 = (t5 + 4);
    t8 = (t7 + 4);
    t21 = (t6 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 | t13);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t21);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB40;

LAB41:
LAB42:    t29 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t29, t6, 0, 0, 32, 0LL);
    goto LAB34;

LAB20:    xsi_set_current_line(48, ng0);

LAB43:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 968U);
    t7 = *((char **)t5);
    memset(t40, 0, 8);
    t5 = (t40 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t40) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t13 & 65535U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 65535U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t40, 16, t4, 16);
    t21 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t21, t6, 0, 0, 32, 0LL);
    goto LAB34;

LAB22:    xsi_set_current_line(51, ng0);

LAB44:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t40) = t11;
    t4 = (t5 + 4);
    t8 = (t7 + 4);
    t21 = (t40 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 | t13);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t21);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB45;

LAB46:
LAB47:    memset(t6, 0, 8);
    t29 = (t6 + 4);
    t41 = (t40 + 4);
    t36 = *((unsigned int *)t40);
    t37 = (~(t36));
    *((unsigned int *)t6) = t37;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB49;

LAB48:    t44 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t45 & 4294967295U);
    t46 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t46, t6, 0, 0, 32, 0LL);
    goto LAB34;

LAB24:    xsi_set_current_line(54, ng0);

LAB50:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t6) = t11;
    t4 = (t5 + 4);
    t8 = (t7 + 4);
    t21 = (t6 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 | t13);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t21);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB51;

LAB52:
LAB53:    t29 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t29, t6, 0, 0, 32, 0LL);
    goto LAB34;

LAB26:    xsi_set_current_line(57, ng0);

LAB54:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t6) = t11;
    t4 = (t5 + 4);
    t8 = (t7 + 4);
    t21 = (t6 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 | t13);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t21);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB55;

LAB56:
LAB57:    t29 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t29, t6, 0, 0, 32, 0LL);
    goto LAB34;

LAB28:    xsi_set_current_line(60, ng0);

LAB58:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    *((unsigned int *)t6) = t11;
    t4 = (t5 + 4);
    t8 = (t7 + 4);
    t21 = (t6 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 | t13);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t21);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB59;

LAB60:
LAB61:    t22 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t22, t6, 0, 0, 32, 0LL);
    goto LAB34;

LAB30:    xsi_set_current_line(63, ng0);

LAB62:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    *((unsigned int *)t6) = t11;
    t4 = (t5 + 4);
    t8 = (t7 + 4);
    t21 = (t6 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 | t13);
    *((unsigned int *)t21) = t14;
    t15 = *((unsigned int *)t21);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB63;

LAB64:
LAB65:    t22 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t22, t6, 0, 0, 32, 0LL);
    goto LAB34;

LAB36:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t17 | t18);
    t22 = (t5 + 4);
    t28 = (t7 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t28);
    t31 = (~(t27));
    t32 = (t20 & t24);
    t33 = (t26 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & t34);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & t35);
    t38 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t38 & t34);
    t39 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t39 & t35);
    goto LAB38;

LAB40:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t17 | t18);
    t22 = (t5 + 4);
    t28 = (t7 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t28);
    t31 = (~(t27));
    t32 = (t20 & t24);
    t33 = (t26 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & t34);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & t35);
    t38 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t38 & t34);
    t39 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t39 & t35);
    goto LAB42;

LAB45:    t17 = *((unsigned int *)t40);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t40) = (t17 | t18);
    t22 = (t5 + 4);
    t28 = (t7 + 4);
    t19 = *((unsigned int *)t22);
    t20 = (~(t19));
    t23 = *((unsigned int *)t5);
    t32 = (t23 & t20);
    t24 = *((unsigned int *)t28);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t33 = (t26 & t25);
    t27 = (~(t32));
    t31 = (~(t33));
    t34 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t34 & t27);
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t35 & t31);
    goto LAB47;

LAB49:    t38 = *((unsigned int *)t6);
    t39 = *((unsigned int *)t41);
    *((unsigned int *)t6) = (t38 | t39);
    t42 = *((unsigned int *)t29);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t29) = (t42 | t43);
    goto LAB48;

LAB51:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t17 | t18);
    t22 = (t5 + 4);
    t28 = (t7 + 4);
    t19 = *((unsigned int *)t22);
    t20 = (~(t19));
    t23 = *((unsigned int *)t5);
    t32 = (t23 & t20);
    t24 = *((unsigned int *)t28);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t33 = (t26 & t25);
    t27 = (~(t32));
    t31 = (~(t33));
    t34 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t34 & t27);
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t35 & t31);
    goto LAB53;

LAB55:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t17 | t18);
    t22 = (t5 + 4);
    t28 = (t7 + 4);
    t19 = *((unsigned int *)t22);
    t20 = (~(t19));
    t23 = *((unsigned int *)t5);
    t32 = (t23 & t20);
    t24 = *((unsigned int *)t28);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t33 = (t26 & t25);
    t27 = (~(t32));
    t31 = (~(t33));
    t34 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t34 & t27);
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t35 & t31);
    goto LAB57;

LAB59:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t17 | t18);
    goto LAB61;

LAB63:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t17 | t18);
    goto LAB65;

}

static void Always_75_4(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;

LAB0:    t1 = (t0 + 3676U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4480);
    *((int *)t2) = 1;
    t3 = (t0 + 3704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(78, ng0);

LAB14:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB18;

LAB19:
LAB21:
LAB20:    xsi_set_current_line(90, ng0);

LAB41:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB22:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(76, ng0);

LAB13:    xsi_set_current_line(77, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(80, ng0);

LAB23:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB25;

LAB24:    if (t18 != 0)
        goto LAB26;

LAB27:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB22;

LAB18:    xsi_set_current_line(85, ng0);

LAB32:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB36;

LAB33:    if (t18 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t6) = 1;

LAB36:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB22;

LAB25:    *((unsigned int *)t6) = 1;
    goto LAB27;

LAB26:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(81, ng0);

LAB31:    xsi_set_current_line(82, ng0);
    t28 = (t0 + 968U);
    t29 = *((char **)t28);
    t28 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 32, 0LL);
    goto LAB30;

LAB35:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(86, ng0);

LAB40:    xsi_set_current_line(87, ng0);
    t28 = (t0 + 968U);
    t29 = *((char **)t28);
    t28 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 32, 0LL);
    goto LAB39;

}

static void Always_98_5(char *t0)
{
    char t6[8];
    char t31[8];
    char t32[8];
    char t33[8];
    char t35[8];
    char t36[8];
    char t39[8];
    char t43[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t34;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;

LAB0:    t1 = (t0 + 3820U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4488);
    *((int *)t2) = 1;
    t3 = (t0 + 3848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);

LAB5:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(101, ng0);

LAB14:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng17)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng18)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng19)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(125, ng0);

LAB43:    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB30:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(99, ng0);

LAB13:    xsi_set_current_line(100, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(103, ng0);

LAB31:    xsi_set_current_line(104, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 32, t5, 32, t7, 32);
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    goto LAB30;

LAB18:    xsi_set_current_line(106, ng0);

LAB32:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 32, t5, 32, t7, 32);
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    goto LAB30;

LAB20:    xsi_set_current_line(109, ng0);

LAB33:    xsi_set_current_line(111, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t0 + 968U);
    t7 = *((char **)t5);
    memset(t31, 0, 8);
    t5 = (t31 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t31) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    xsi_vlog_mul_concat(t6, 32, 1, t4, 1U, t31, 1);
    t21 = ((char*)((ng11)));
    t22 = (t0 + 1060U);
    t28 = *((char **)t22);
    memset(t33, 0, 8);
    t22 = (t33 + 4);
    t29 = (t28 + 4);
    t15 = *((unsigned int *)t28);
    t16 = (t15 >> 0);
    *((unsigned int *)t33) = t16;
    t17 = *((unsigned int *)t29);
    t18 = (t17 >> 0);
    *((unsigned int *)t22) = t18;
    t19 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t19 & 31U);
    t20 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t20 & 31U);
    t34 = ((char*)((ng2)));
    xsi_vlogtype_concat(t32, 6, 6, 2U, t34, 1, t33, 5);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 6, t21, 6, t32, 6);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_lshift(t36, 32, t6, 32, t35, 6);
    t37 = (t0 + 968U);
    t38 = *((char **)t37);
    t37 = (t0 + 1060U);
    t40 = *((char **)t37);
    memset(t39, 0, 8);
    t37 = (t39 + 4);
    t41 = (t40 + 4);
    t23 = *((unsigned int *)t40);
    t24 = (t23 >> 0);
    *((unsigned int *)t39) = t24;
    t25 = *((unsigned int *)t41);
    t26 = (t25 >> 0);
    *((unsigned int *)t37) = t26;
    t27 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t27 & 31U);
    t42 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t42 & 31U);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_rshift(t43, 32, t38, 32, t39, 5);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = (t36 + 4);
    t49 = (t43 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB34;

LAB35:
LAB36:    t72 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t72, t44, 0, 0, 32, 0LL);
    goto LAB30;

LAB22:    xsi_set_current_line(114, ng0);

LAB37:    xsi_set_current_line(116, ng0);
    t4 = ((char*)((ng16)));
    t5 = (t0 + 968U);
    t7 = *((char **)t5);
    memset(t31, 0, 8);
    t5 = (t31 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t31) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    xsi_vlog_mul_concat(t6, 32, 1, t4, 1U, t31, 1);
    t21 = ((char*)((ng11)));
    t22 = (t0 + 1060U);
    t28 = *((char **)t22);
    memset(t33, 0, 8);
    t22 = (t33 + 4);
    t29 = (t28 + 4);
    t15 = *((unsigned int *)t28);
    t16 = (t15 >> 0);
    *((unsigned int *)t33) = t16;
    t17 = *((unsigned int *)t29);
    t18 = (t17 >> 0);
    *((unsigned int *)t22) = t18;
    t19 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t19 & 31U);
    t20 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t20 & 31U);
    t34 = ((char*)((ng2)));
    xsi_vlogtype_concat(t32, 6, 6, 2U, t34, 1, t33, 5);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 6, t21, 6, t32, 6);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_lshift(t36, 32, t6, 32, t35, 6);
    t37 = (t0 + 968U);
    t38 = *((char **)t37);
    t37 = (t0 + 1060U);
    t40 = *((char **)t37);
    memset(t39, 0, 8);
    t37 = (t39 + 4);
    t41 = (t40 + 4);
    t23 = *((unsigned int *)t40);
    t24 = (t23 >> 0);
    *((unsigned int *)t39) = t24;
    t25 = *((unsigned int *)t41);
    t26 = (t25 >> 0);
    *((unsigned int *)t37) = t26;
    t27 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t27 & 31U);
    t42 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t42 & 31U);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_rshift(t43, 32, t38, 32, t39, 5);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = (t36 + 4);
    t49 = (t43 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB38;

LAB39:
LAB40:    t72 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t72, t44, 0, 0, 32, 0LL);
    goto LAB30;

LAB24:    xsi_set_current_line(119, ng0);

LAB41:    xsi_set_current_line(120, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t5, 32, t7, 32);
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    goto LAB30;

LAB26:    xsi_set_current_line(122, ng0);

LAB42:    xsi_set_current_line(123, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t5, 32, t7, 32);
    t4 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    goto LAB30;

LAB34:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t36 + 4);
    t59 = (t43 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t36);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t59);
    t65 = (~(t64));
    t66 = *((unsigned int *)t43);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    goto LAB36;

LAB38:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t36 + 4);
    t59 = (t43 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t36);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t59);
    t65 = (~(t64));
    t66 = *((unsigned int *)t43);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    goto LAB40;

}

static void Always_135_6(char *t0)
{
    char t6[8];
    char t31[16];
    char t32[8];
    char t34[8];
    char t38[16];
    char t39[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 3964U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4496);
    *((int *)t2) = 1;
    t3 = (t0 + 3992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(135, ng0);

LAB5:    xsi_set_current_line(136, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(138, ng0);

LAB14:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng21)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng22)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng24)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng25)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng26)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng27)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng28)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t30 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(164, ng0);

LAB105:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng20)));
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 64, 0LL);

LAB34:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(136, ng0);

LAB13:    xsi_set_current_line(137, ng0);
    t28 = ((char*)((ng20)));
    t29 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 64, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(140, ng0);

LAB35:    xsi_set_current_line(141, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    xsi_vlog_unsigned_add(t31, 64, t5, 32, t7, 32);
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t31, 0, 0, 64, 0LL);
    goto LAB34;

LAB18:    xsi_set_current_line(143, ng0);

LAB36:    xsi_set_current_line(144, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    xsi_vlog_unsigned_add(t31, 64, t5, 32, t7, 32);
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t31, 0, 0, 64, 0LL);
    goto LAB34;

LAB20:    xsi_set_current_line(146, ng0);

LAB37:    xsi_set_current_line(147, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    memset(t34, 0, 8);
    xsi_vlog_signed_less(t34, 32, t5, 32, t7, 32);
    memset(t6, 0, 8);
    t4 = (t34 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t34);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t4) != 0)
        goto LAB40;

LAB41:    t21 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB42;

LAB43:    t17 = *((unsigned int *)t6);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t21) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t6) > 0)
        goto LAB48;

LAB49:    memcpy(t31, t28, 16);

LAB50:    t29 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t29, t31, 0, 0, 64, 0LL);
    goto LAB34;

LAB22:    xsi_set_current_line(149, ng0);

LAB51:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    memset(t34, 0, 8);
    xsi_vlog_signed_less(t34, 32, t5, 32, t7, 32);
    memset(t6, 0, 8);
    t4 = (t34 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t34);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t4) != 0)
        goto LAB54;

LAB55:    t21 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB56;

LAB57:    t17 = *((unsigned int *)t6);
    t18 = (~(t17));
    t19 = *((unsigned int *)t21);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t21) > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t6) > 0)
        goto LAB62;

LAB63:    memcpy(t31, t28, 16);

LAB64:    t29 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t29, t31, 0, 0, 64, 0LL);
    goto LAB34;

LAB24:    xsi_set_current_line(152, ng0);

LAB65:    xsi_set_current_line(153, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    memset(t32, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB67;

LAB66:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB67;

LAB70:    if (*((unsigned int *)t5) < *((unsigned int *)t7))
        goto LAB68;

LAB69:    memset(t6, 0, 8);
    t22 = (t32 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t32);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t22) != 0)
        goto LAB73;

LAB74:    t29 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t29);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB75;

LAB76:    t17 = *((unsigned int *)t6);
    t18 = (~(t17));
    t19 = *((unsigned int *)t29);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t29) > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t6) > 0)
        goto LAB81;

LAB82:    memcpy(t31, t36, 16);

LAB83:    t37 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t37, t31, 0, 0, 64, 0LL);
    goto LAB34;

LAB26:    xsi_set_current_line(155, ng0);

LAB84:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    memset(t32, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB86;

LAB85:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB86;

LAB89:    if (*((unsigned int *)t5) < *((unsigned int *)t7))
        goto LAB87;

LAB88:    memset(t6, 0, 8);
    t22 = (t32 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t32);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t22) != 0)
        goto LAB92;

LAB93:    t29 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t29);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB94;

LAB95:    t17 = *((unsigned int *)t6);
    t18 = (~(t17));
    t19 = *((unsigned int *)t29);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t29) > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t6) > 0)
        goto LAB100;

LAB101:    memcpy(t31, t36, 16);

LAB102:    t37 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t37, t31, 0, 0, 64, 0LL);
    goto LAB34;

LAB28:    xsi_set_current_line(158, ng0);

LAB103:    xsi_set_current_line(159, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    xsi_vlog_unsigned_minus(t31, 64, t5, 32, t7, 32);
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t31, 0, 0, 64, 0LL);
    goto LAB34;

LAB30:    xsi_set_current_line(161, ng0);

LAB104:    xsi_set_current_line(162, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    xsi_vlogtype_sign_extend(t31, 64, t5, 32);
    t4 = (t0 + 1060U);
    t7 = *((char **)t4);
    xsi_vlogtype_sign_extend(t38, 64, t7, 32);
    xsi_vlog_signed_multiply(t39, 64, t31, 64, t38, 64);
    t4 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t4, t39, 0, 0, 64, 0LL);
    goto LAB34;

LAB38:    *((unsigned int *)t6) = 1;
    goto LAB41;

LAB40:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB41;

LAB42:    t22 = ((char*)((ng23)));
    goto LAB43;

LAB44:    t28 = ((char*)((ng20)));
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t31, 64, t22, 64, t28, 64);
    goto LAB50;

LAB48:    memcpy(t31, t22, 16);
    goto LAB50;

LAB52:    *((unsigned int *)t6) = 1;
    goto LAB55;

LAB54:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB55;

LAB56:    t22 = ((char*)((ng23)));
    goto LAB57;

LAB58:    t28 = ((char*)((ng20)));
    goto LAB59;

LAB60:    xsi_vlog_unsigned_bit_combine(t31, 64, t22, 64, t28, 64);
    goto LAB64;

LAB62:    memcpy(t31, t22, 16);
    goto LAB64;

LAB67:    t21 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB69;

LAB68:    *((unsigned int *)t32) = 1;
    goto LAB69;

LAB71:    *((unsigned int *)t6) = 1;
    goto LAB74;

LAB73:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB74;

LAB75:    t35 = ((char*)((ng23)));
    goto LAB76;

LAB77:    t36 = ((char*)((ng20)));
    goto LAB78;

LAB79:    xsi_vlog_unsigned_bit_combine(t31, 64, t35, 64, t36, 64);
    goto LAB83;

LAB81:    memcpy(t31, t35, 16);
    goto LAB83;

LAB86:    t21 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB88;

LAB87:    *((unsigned int *)t32) = 1;
    goto LAB88;

LAB90:    *((unsigned int *)t6) = 1;
    goto LAB93;

LAB92:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB93;

LAB94:    t35 = ((char*)((ng23)));
    goto LAB95;

LAB96:    t36 = ((char*)((ng20)));
    goto LAB97;

LAB98:    xsi_vlog_unsigned_bit_combine(t31, 64, t35, 64, t36, 64);
    goto LAB102;

LAB100:    memcpy(t31, t35, 16);
    goto LAB102;

}

static void Always_178_7(char *t0)
{
    char t9[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;

LAB0:    t1 = (t0 + 4108U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 4504);
    *((int *)t2) = 1;
    t3 = (t0 + 4136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(178, ng0);

LAB5:    xsi_set_current_line(179, ng0);
    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t4 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 5, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(207, ng0);

LAB57:    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(182, ng0);

LAB20:    xsi_set_current_line(183, ng0);
    t4 = (t0 + 2300);
    t5 = (t4 + 36U);
    t7 = *((char **)t5);
    t8 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB19;

LAB9:    xsi_set_current_line(185, ng0);

LAB21:    xsi_set_current_line(186, ng0);
    t4 = (t0 + 2392);
    t5 = (t4 + 36U);
    t7 = *((char **)t5);
    t8 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB19;

LAB11:    xsi_set_current_line(188, ng0);

LAB22:    xsi_set_current_line(189, ng0);
    t4 = (t0 + 2484);
    t5 = (t4 + 36U);
    t7 = *((char **)t5);
    t8 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB26;

LAB23:    if (t19 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t9) = 1;

LAB26:    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB42;

LAB39:    if (t19 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t9) = 1;

LAB42:    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB43;

LAB44:
LAB45:    goto LAB19;

LAB13:    xsi_set_current_line(201, ng0);

LAB55:    xsi_set_current_line(202, ng0);
    t4 = (t0 + 2576);
    t5 = (t4 + 36U);
    t7 = *((char **)t5);
    memset(t9, 0, 8);
    t8 = (t9 + 4);
    t22 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t22);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 4294967295U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 4294967295U);
    t28 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t28, t9, 0, 0, 32, 0LL);
    goto LAB19;

LAB15:    xsi_set_current_line(204, ng0);

LAB56:    xsi_set_current_line(205, ng0);
    t4 = (t0 + 1428U);
    t5 = *((char **)t4);
    t4 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB19;

LAB25:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(190, ng0);

LAB30:    xsi_set_current_line(191, ng0);
    t28 = (t0 + 1060U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB34;

LAB31:    if (t42 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t30) = 1;

LAB34:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB29;

LAB33:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(191, ng0);

LAB38:    xsi_set_current_line(192, ng0);
    t52 = ((char*)((ng2)));
    t53 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 1, 0LL);
    goto LAB37;

LAB41:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(195, ng0);

LAB46:    xsi_set_current_line(196, ng0);
    t28 = (t0 + 1060U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB48;

LAB47:    if (t42 != 0)
        goto LAB49;

LAB50:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB51;

LAB52:
LAB53:    goto LAB45;

LAB48:    *((unsigned int *)t30) = 1;
    goto LAB50;

LAB49:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(196, ng0);

LAB54:    xsi_set_current_line(197, ng0);
    t52 = ((char*)((ng2)));
    t53 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 1, 0LL);
    goto LAB53;

}

static void Always_216_8(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;

LAB0:    t1 = (t0 + 4252U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 4512);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(216, ng0);

LAB5:    xsi_set_current_line(217, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(219, ng0);

LAB14:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng28)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t30 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(224, ng0);

LAB22:    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(217, ng0);

LAB13:    xsi_set_current_line(218, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(221, ng0);

LAB21:    xsi_set_current_line(222, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1704U);
    t7 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 32, t7, 32);
    t4 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);
    goto LAB20;

}


extern void work_m_00000000002225688789_3666345988_init()
{
	static char *pe[] = {(void *)Cont_31_0,(void *)Cont_32_1,(void *)Cont_35_2,(void *)Always_37_3,(void *)Always_75_4,(void *)Always_98_5,(void *)Always_135_6,(void *)Always_178_7,(void *)Always_216_8};
	xsi_register_didat("work_m_00000000002225688789_3666345988", "isim/simplemipst_simplemipst_sch_tb_isim_beh.exe.sim/work/m_00000000002225688789_3666345988.didat");
	xsi_register_executes(pe);
}
