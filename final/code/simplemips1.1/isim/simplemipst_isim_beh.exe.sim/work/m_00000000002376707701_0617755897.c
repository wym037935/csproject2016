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
static const char *ng0 = "D:/study/simplemips1.1/MMU.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {8U, 0U};



static void NetDecl_42_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 3236U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1104U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t33 = (t0 + 4388);
    t40 = (t33 + 32U);
    t41 = *((char **)t40);
    t42 = (t41 + 40U);
    t43 = *((char **)t42);
    memcpy(t43, t3, 8);
    xsi_driver_vfirst_trans(t33, 0, 31U);
    t44 = (t0 + 4296);
    *((int *)t44) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 1656U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 1472U);
    t39 = *((char **)t33);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t34, 32, t39, 32);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

}

static void Cont_44_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3380U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1840U);
    t3 = *((char **)t2);
    t2 = (t0 + 4424);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 4304);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_45_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3524U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1840U);
    t3 = *((char **)t2);
    t2 = (t0 + 4460);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 4312);
    *((int *)t8) = 1;

LAB1:    return;
}

static void NetDecl_47_3(char *t0)
{
    char t6[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;

LAB0:    t1 = (t0 + 3668U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2712);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t60, t22, 8);

LAB14:    t92 = (t0 + 4496);
    t93 = (t92 + 32U);
    t94 = *((char **)t93);
    t95 = (t94 + 40U);
    t96 = *((char **)t95);
    memset(t96, 0, 8);
    t97 = 1U;
    t98 = t97;
    t99 = (t60 + 4);
    t100 = *((unsigned int *)t60);
    t97 = (t97 & t100);
    t101 = *((unsigned int *)t99);
    t98 = (t98 & t101);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t103 | t97);
    t104 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t104 | t98);
    xsi_driver_vfirst_trans(t92, 0, 0U);
    t105 = (t0 + 4320);
    *((int *)t105) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1104U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB16;

LAB15:    if (t48 != 0)
        goto LAB17;

LAB18:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t53) != 0)
        goto LAB21;

LAB22:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB16:    *((unsigned int *)t36) = 1;
    goto LAB18;

LAB17:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t52) = 1;
    goto LAB22;

LAB21:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB22;

LAB23:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB25;

}

static void NetDecl_49_4(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 3812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 1932U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 2);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 2);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 1073741823U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 1073741823U);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t4, 30, t2, 2);
    t14 = (t0 + 4532);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t3, 8);
    xsi_driver_vfirst_trans(t14, 0, 31U);
    t19 = (t0 + 4328);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_51_5(char *t0)
{
    char t3[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 3956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1932U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t12 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t14 = (t3 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB7;

LAB4:    if (t25 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t13) = 1;

LAB7:    t29 = (t0 + 4568);
    t30 = (t29 + 32U);
    t31 = *((char **)t30);
    t32 = (t31 + 40U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t13 + 4);
    t37 = *((unsigned int *)t13);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0U);
    t42 = (t0 + 4336);
    *((int *)t42) = 1;

LAB1:    return;
LAB6:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB7;

}

static void Always_56_6(char *t0)
{
    char t6[8];
    char t30[8];
    char t55[8];
    char t56[8];
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
    int t31;
    char *t32;
    char *t33;
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
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    int t54;

LAB0:    t1 = (t0 + 4100U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4344);
    *((int *)t2) = 1;
    t3 = (t0 + 4128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1012U);
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

LAB11:    xsi_set_current_line(61, ng0);

LAB14:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2116U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 536870911U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 536870911U);
    t5 = ((char*)((ng2)));
    xsi_vlogtype_concat(t6, 32, 32, 2U, t5, 3, t30, 29);
    t7 = (t0 + 2436);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2712);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB15:    t5 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t31 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t31 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(103, ng0);

LAB62:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2712);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2620);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB24:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(57, ng0);

LAB13:    xsi_set_current_line(58, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2712);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2620);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2436);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(67, ng0);
    t7 = (t0 + 1104U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t21 = (t8 + 4);
    t22 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB28;

LAB25:    if (t18 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t6) = 1;

LAB28:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2620);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB31:    goto LAB24;

LAB18:    xsi_set_current_line(83, ng0);

LAB50:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1288U);
    t5 = *((char **)t3);

LAB51:    t3 = ((char*)((ng1)));
    t54 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t54 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng7)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng8)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB58;

LAB59:
LAB60:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2712);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2620);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB24;

LAB20:    xsi_set_current_line(98, ng0);

LAB61:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 2712);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2620);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB24;

LAB27:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(67, ng0);

LAB32:    xsi_set_current_line(68, ng0);
    t32 = (t0 + 1380U);
    t33 = *((char **)t32);
    t32 = (t0 + 2528);
    xsi_vlogvar_wait_assign_value(t32, t33, 0, 0, 32, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1196U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB36;

LAB33:    if (t18 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t6) = 1;

LAB36:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB31;

LAB35:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(69, ng0);

LAB40:    xsi_set_current_line(70, ng0);
    t22 = (t0 + 1288U);
    t28 = *((char **)t22);
    t22 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t29 = (t28 + 4);
    t32 = (t22 + 4);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t22);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t29);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t32);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB42;

LAB41:    if (t43 != 0)
        goto LAB43;

LAB44:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(74, ng0);

LAB49:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2712);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2620);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB47:    goto LAB39;

LAB42:    *((unsigned int *)t30) = 1;
    goto LAB44;

LAB43:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(70, ng0);

LAB48:    xsi_set_current_line(71, ng0);
    t52 = ((char*)((ng1)));
    t53 = (t0 + 2712);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 2, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2620);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB52:    xsi_set_current_line(86, ng0);
    t7 = (t0 + 2528);
    t8 = (t7 + 36U);
    t21 = *((char **)t8);
    memset(t30, 0, 8);
    t22 = (t30 + 4);
    t28 = (t21 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (t9 >> 0);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t28);
    t12 = (t11 >> 0);
    *((unsigned int *)t22) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 255U);
    t14 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t14 & 255U);
    t29 = (t0 + 1840U);
    t32 = *((char **)t29);
    memset(t55, 0, 8);
    t29 = (t55 + 4);
    t33 = (t32 + 4);
    t15 = *((unsigned int *)t32);
    t16 = (t15 >> 8);
    *((unsigned int *)t55) = t16;
    t17 = *((unsigned int *)t33);
    t18 = (t17 >> 8);
    *((unsigned int *)t29) = t18;
    t19 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t19 & 16777215U);
    t20 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t20 & 16777215U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t55, 24, t30, 8);
    t46 = (t0 + 2528);
    xsi_vlogvar_wait_assign_value(t46, t6, 0, 0, 32, 0LL);
    goto LAB60;

LAB54:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 1840U);
    t7 = *((char **)t3);
    memset(t30, 0, 8);
    t3 = (t30 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t21 = (t0 + 2528);
    t22 = (t21 + 36U);
    t28 = *((char **)t22);
    memset(t55, 0, 8);
    t29 = (t55 + 4);
    t32 = (t28 + 4);
    t15 = *((unsigned int *)t28);
    t16 = (t15 >> 0);
    *((unsigned int *)t55) = t16;
    t17 = *((unsigned int *)t32);
    t18 = (t17 >> 0);
    *((unsigned int *)t29) = t18;
    t19 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t19 & 255U);
    t20 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t20 & 255U);
    t33 = (t0 + 1840U);
    t46 = *((char **)t33);
    memset(t56, 0, 8);
    t33 = (t56 + 4);
    t52 = (t46 + 4);
    t23 = *((unsigned int *)t46);
    t24 = (t23 >> 16);
    *((unsigned int *)t56) = t24;
    t25 = *((unsigned int *)t52);
    t26 = (t25 >> 16);
    *((unsigned int *)t33) = t26;
    t27 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t27 & 65535U);
    t34 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t34 & 65535U);
    xsi_vlogtype_concat(t6, 32, 32, 3U, t56, 16, t55, 8, t30, 8);
    t53 = (t0 + 2528);
    xsi_vlogvar_wait_assign_value(t53, t6, 0, 0, 32, 0LL);
    goto LAB60;

LAB56:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 1840U);
    t7 = *((char **)t3);
    memset(t30, 0, 8);
    t3 = (t30 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 65535U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 65535U);
    t21 = (t0 + 2528);
    t22 = (t21 + 36U);
    t28 = *((char **)t22);
    memset(t55, 0, 8);
    t29 = (t55 + 4);
    t32 = (t28 + 4);
    t15 = *((unsigned int *)t28);
    t16 = (t15 >> 0);
    *((unsigned int *)t55) = t16;
    t17 = *((unsigned int *)t32);
    t18 = (t17 >> 0);
    *((unsigned int *)t29) = t18;
    t19 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t19 & 255U);
    t20 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t20 & 255U);
    t33 = (t0 + 1840U);
    t46 = *((char **)t33);
    memset(t56, 0, 8);
    t33 = (t56 + 4);
    t52 = (t46 + 4);
    t23 = *((unsigned int *)t46);
    t24 = (t23 >> 24);
    *((unsigned int *)t56) = t24;
    t25 = *((unsigned int *)t52);
    t26 = (t25 >> 24);
    *((unsigned int *)t33) = t26;
    t27 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t27 & 255U);
    t34 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t34 & 255U);
    xsi_vlogtype_concat(t6, 32, 32, 3U, t56, 8, t55, 8, t30, 16);
    t53 = (t0 + 2528);
    xsi_vlogvar_wait_assign_value(t53, t6, 0, 0, 32, 0LL);
    goto LAB60;

LAB58:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1840U);
    t7 = *((char **)t3);
    memset(t30, 0, 8);
    t3 = (t30 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 16777215U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 16777215U);
    t21 = (t0 + 2528);
    t22 = (t21 + 36U);
    t28 = *((char **)t22);
    memset(t55, 0, 8);
    t29 = (t55 + 4);
    t32 = (t28 + 4);
    t15 = *((unsigned int *)t28);
    t16 = (t15 >> 0);
    *((unsigned int *)t55) = t16;
    t17 = *((unsigned int *)t32);
    t18 = (t17 >> 0);
    *((unsigned int *)t29) = t18;
    t19 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t19 & 255U);
    t20 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t20 & 255U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t55, 8, t30, 24);
    t33 = (t0 + 2528);
    xsi_vlogvar_wait_assign_value(t33, t6, 0, 0, 32, 0LL);
    goto LAB60;

}


extern void work_m_00000000002376707701_0617755897_init()
{
	static char *pe[] = {(void *)NetDecl_42_0,(void *)Cont_44_1,(void *)Cont_45_2,(void *)NetDecl_47_3,(void *)NetDecl_49_4,(void *)NetDecl_51_5,(void *)Always_56_6};
	xsi_register_didat("work_m_00000000002376707701_0617755897", "isim/simplemipst_isim_beh.exe.sim/work/m_00000000002376707701_0617755897.didat");
	xsi_register_executes(pe);
}
