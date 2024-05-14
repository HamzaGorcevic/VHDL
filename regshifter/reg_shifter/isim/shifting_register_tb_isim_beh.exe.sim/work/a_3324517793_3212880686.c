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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/hamza/VHDL/regshifter/reg_shifter/reg_shifter.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3324517793_3212880686_p_0(char *t0)
{
    char t24[16];
    char t26[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2432U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4192);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(42, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 4288);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB13;

LAB14:    t3 = (unsigned char)0;

LAB15:    if (t3 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB25;

LAB26:    t3 = (unsigned char)0;

LAB27:    if (t3 != 0)
        goto LAB23;

LAB24:
LAB11:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t2 = (t0 + 4288);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB10:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1992U);
    t6 = *((char **)t1);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    if (t15 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t16 = (7 - 6);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t26 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 6;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t19 = (0 - 6);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t20;
    t5 = xsi_base_array_concat(t5, t24, t6, (char)97, t1, t26, (char)99, (unsigned char)2, (char)101);
    t20 = (7U + 1U);
    t3 = (8U != t20);
    if (t3 == 1)
        goto LAB21;

LAB22:    t8 = (t0 + 4288);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t25 = (t10 + 56U);
    t27 = *((char **)t25);
    memcpy(t27, t5, 8U);
    xsi_driver_first_trans_fast(t8);

LAB17:    goto LAB11;

LAB13:    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t3 = t13;
    goto LAB15;

LAB16:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2312U);
    t7 = *((char **)t1);
    t16 = (7 - 6);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t7 + t18);
    t8 = (t0 + 2312U);
    t9 = *((char **)t8);
    t19 = (7 - 7);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t8 = (t9 + t22);
    t23 = *((unsigned char *)t8);
    t25 = ((IEEE_P_2592010699) + 4000);
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 6;
    t28 = (t27 + 4U);
    *((int *)t28) = 0;
    t28 = (t27 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - 6);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;
    t10 = xsi_base_array_concat(t10, t24, t25, (char)97, t1, t26, (char)99, t23, (char)101);
    t30 = (7U + 1U);
    t31 = (8U != t30);
    if (t31 == 1)
        goto LAB19;

LAB20:    t28 = (t0 + 4288);
    t32 = (t28 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t10, 8U);
    xsi_driver_first_trans_fast(t28);
    goto LAB17;

LAB19:    xsi_size_not_matching(8U, t30, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(8U, t20, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1992U);
    t6 = *((char **)t1);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    if (t15 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t16 = (7 - 7);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t26 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t19 = (1 - 7);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t20;
    t5 = xsi_base_array_concat(t5, t24, t6, (char)99, (unsigned char)2, (char)97, t1, t26, (char)101);
    t20 = (1U + 7U);
    t3 = (8U != t20);
    if (t3 == 1)
        goto LAB33;

LAB34:    t8 = (t0 + 4288);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t25 = (t10 + 56U);
    t27 = *((char **)t25);
    memcpy(t27, t5, 8U);
    xsi_driver_first_trans_fast(t8);

LAB29:    goto LAB11;

LAB25:    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t3 = t13;
    goto LAB27;

LAB28:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2312U);
    t7 = *((char **)t1);
    t19 = (0 - 7);
    t16 = (t19 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t7 + t18);
    t23 = *((unsigned char *)t1);
    t8 = (t0 + 2312U);
    t9 = *((char **)t8);
    t20 = (7 - 7);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t8 = (t9 + t22);
    t25 = ((IEEE_P_2592010699) + 4000);
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 7;
    t28 = (t27 + 4U);
    *((int *)t28) = 1;
    t28 = (t27 + 8U);
    *((int *)t28) = -1;
    t29 = (1 - 7);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;
    t10 = xsi_base_array_concat(t10, t24, t25, (char)99, t23, (char)97, t8, t26, (char)101);
    t30 = (1U + 7U);
    t31 = (8U != t30);
    if (t31 == 1)
        goto LAB31;

LAB32:    t28 = (t0 + 4288);
    t32 = (t28 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t10, 8U);
    xsi_driver_first_trans_fast(t28);
    goto LAB29;

LAB31:    xsi_size_not_matching(8U, t30, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(8U, t20, 0);
    goto LAB34;

}

static void work_a_3324517793_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(74, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4352);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4208);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3324517793_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3324517793_3212880686_p_0,(void *)work_a_3324517793_3212880686_p_1};
	xsi_register_didat("work_a_3324517793_3212880686", "isim/shifting_register_tb_isim_beh.exe.sim/work/a_3324517793_3212880686.didat");
	xsi_register_executes(pe);
}
