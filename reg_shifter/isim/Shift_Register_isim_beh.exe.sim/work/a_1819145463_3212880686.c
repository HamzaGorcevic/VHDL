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
static const char *ng0 = "/home/hamza/VHDL/reg_shifter/Shift_Register.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_1819145463_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5288);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 5416);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 5480);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2952U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t2 = (t0 + 3248U);
    t6 = *((char **)t2);
    t10 = *((int *)t6);
    t11 = (t10 - 1);
    t4 = (t9 == t11);
    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 + 1);
    t1 = (t0 + 5416);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t10;
    xsi_driver_first_trans_fast(t1);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2632U);
    t7 = *((char **)t2);
    t12 = *((unsigned char *)t7);
    t13 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t12);
    t2 = (t0 + 5480);
    t8 = (t2 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t13;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 5416);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

}

static void work_a_1819145463_3212880686_p_1(char *t0)
{
    char t25[16];
    char t26[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5304);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = (unsigned char)0;

LAB13:    if (t2 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = (unsigned char)0;

LAB25:    if (t2 != 0)
        goto LAB21;

LAB22:
LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 8256);
    t8 = (t0 + 5544);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t15 = *((unsigned char *)t7);
    t16 = (t15 == (unsigned char)3);
    if (t16 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t17 = (7 - 6);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t26 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 6;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t20 = (0 - 6);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t21;
    t4 = xsi_base_array_concat(t4, t25, t7, (char)97, t1, t26, (char)99, (unsigned char)2, (char)101);
    t21 = (7U + 1U);
    t2 = (8U != t21);
    if (t2 == 1)
        goto LAB19;

LAB20:    t9 = (t0 + 5544);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t27 = *((char **)t12);
    memcpy(t27, t4, 8U);
    xsi_driver_first_trans_fast(t9);

LAB15:    goto LAB9;

LAB11:    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t2 = t14;
    goto LAB13;

LAB14:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2472U);
    t8 = *((char **)t1);
    t17 = (7 - 6);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t8 + t19);
    t9 = (t0 + 2472U);
    t10 = *((char **)t9);
    t20 = (7 - 7);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t9 = (t10 + t23);
    t24 = *((unsigned char *)t9);
    t12 = ((IEEE_P_2592010699) + 4000);
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
    t11 = xsi_base_array_concat(t11, t25, t12, (char)97, t1, t26, (char)99, t24, (char)101);
    t30 = (7U + 1U);
    t31 = (8U != t30);
    if (t31 == 1)
        goto LAB17;

LAB18:    t28 = (t0 + 5544);
    t32 = (t28 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t11, 8U);
    xsi_driver_first_trans_fast(t28);
    goto LAB15;

LAB17:    xsi_size_not_matching(8U, t30, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(8U, t21, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t15 = *((unsigned char *)t7);
    t16 = (t15 == (unsigned char)3);
    if (t16 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t17 = (7 - 7);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t26 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t20 = (1 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t21;
    t4 = xsi_base_array_concat(t4, t25, t7, (char)99, (unsigned char)2, (char)97, t1, t26, (char)101);
    t21 = (1U + 7U);
    t2 = (8U != t21);
    if (t2 == 1)
        goto LAB31;

LAB32:    t9 = (t0 + 5544);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t27 = *((char **)t12);
    memcpy(t27, t4, 8U);
    xsi_driver_first_trans_fast(t9);

LAB27:    goto LAB9;

LAB23:    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t2 = t14;
    goto LAB25;

LAB26:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2472U);
    t8 = *((char **)t1);
    t20 = (0 - 7);
    t17 = (t20 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t1 = (t8 + t19);
    t24 = *((unsigned char *)t1);
    t9 = (t0 + 2472U);
    t10 = *((char **)t9);
    t21 = (7 - 7);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t9 = (t10 + t23);
    t12 = ((IEEE_P_2592010699) + 4000);
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
    t11 = xsi_base_array_concat(t11, t25, t12, (char)99, t24, (char)97, t9, t26, (char)101);
    t30 = (1U + 7U);
    t31 = (8U != t30);
    if (t31 == 1)
        goto LAB29;

LAB30:    t28 = (t0 + 5544);
    t32 = (t28 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t11, 8U);
    xsi_driver_first_trans_fast(t28);
    goto LAB27;

LAB29:    xsi_size_not_matching(8U, t30, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(8U, t21, 0);
    goto LAB32;

}

static void work_a_1819145463_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(64, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5608);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5320);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1819145463_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(65, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5672);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5336);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1819145463_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1819145463_3212880686_p_0,(void *)work_a_1819145463_3212880686_p_1,(void *)work_a_1819145463_3212880686_p_2,(void *)work_a_1819145463_3212880686_p_3};
	xsi_register_didat("work_a_1819145463_3212880686", "isim/Shift_Register_isim_beh.exe.sim/work/a_1819145463_3212880686.didat");
	xsi_register_executes(pe);
}
