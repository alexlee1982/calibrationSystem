/*
 * File: cal_p_z2.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 13-Apr-2018 17:06:56
 */

/* Include Files */
#include "stdafx.h"
#include "rt_nonfinite.h"
#include "cal_x_y_z.h"
#include "cal_p_z2.h"
#include "cal_x_y_z_rtwutil.h"

/* Function Definitions */

/*
 * 通过输入绳子长度，计算y'
 *    此处显示详细说明
 * Arguments    : double l1
 *                double l2
 *                double l3
 * Return Type  : double
 */
double cal_p_z2(double l1, double l2, double l3)
{
  double d3;
  double d4;
  double d5;
  d3 = l3 * l3;
  d4 = 3.75E+7 * (l2 * l2);
  d5 = ((((((((((((((((((((((((((((((((((5.75E+12 + -1.0E+8 * (l2 * l2)) -
    -1.0E+8 * (l3 * l3)) - -2.5E+11) - -7.5E+11) + 1.5E+12) - -7.5E+11) -
    -1.0E+8 * (l2 * l2)) + -1.0E+8 * (l3 * l3)) + 6.25E+10) + 1.25E+11) -
    3.75E+11) + 3.75E+11) - -3.75E+11) + 3.75E+11) - 5.0E+7 * (l1 * l1)) -
    5.0E+7 * (l2 * l2)) + 1.0E+8 * (l3 * l3)) + 1.25E+11) + 3.75E+11) - -1.5E+12)
                     + 3.75E+11) + 1.0E+8 * (l1 * l1)) - 5.0E+7 * (l2 * l2)) -
                  5.0E+7 * (l3 * l3)) + 6.25E+10) + 3.75E+11) - -3.75E+11) +
              3.75E+11) - 5.0E+7 * (l1 * l1)) + 1.0E+8 * (l2 * l2)) - 5.0E+7 *
           (l3 * l3)) + -0.0 * (l2 * l2)) - -0.0 * (l3 * l3)) - 0.0 * (l2 * l2))
    + 0.0 * (l3 * l3);
  d5 =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((d5 + 5.6249999999999988E+11) - -1.125E+12) + 1.125E+12)
    - 1.5E+8 * (l1 * l1)) - 1.5E+8 * (l2 * l2)) - -1.125E+12) + -3.0E+8 * (l1 *
    l1)) + -1.5E+8 * (l2 * l2)) + -1.5E+8 * (l3 * l3)) + 5.6249999999999988E+11)
    - 1.5E+8 * (l1 * l1)) - 1.5E+8 * (l3 * l3)) + 10000.0 * rt_powd_snf(l2, 4.0))
    - 20000.0 * (l2 * l2) * (l3 * l3)) + 10000.0 * rt_powd_snf(l3, 4.0)) -
    -6.25E+10) + -6.25E+10) - -1.875E+11) + -2.5E+7 * (l1 * l1)) - -2.5E+7 * (l3
    * l3)) + -6.25E+10) - -3.75E+11) + 3.75E+11) + -1.875E+11) - -2.5E+7 * (l1 *
    l1)) + -5.0E+7 * (l2 * l2)) - -2.5E+7 * (l3 * l3)) - -6.25E+10) + -1.875E+11)
    + 3.75E+11) - -3.75E+11) - -2.5E+7 * (l1 * l1)) - -2.5E+7 * (l2 * l2)) +
    -5.0E+7 * (l3 * l3)) + -0.0 * (l2 * l2)) - -0.0 * (l3 * l3)) + 0.0 * (l3 *
    l3)) - -0.0 * (l2 * l2)) - -0.0 * (l3 * l3)) - -5.625E+11) + -7.5E+7 * (l1 *
    l1)) - -7.5E+7 * (l3 * l3)) + 1.125E+12) - 1.5E+8 * (l1 * l1)) - 1.5E+8 *
    (l3 * l3)) - -5.6249999999999988E+11) + -7.5E+7 * (l1 * l1)) + -7.5E+7 * (l2
    * l2)) + -1.5E+8 * (l3 * l3)) - -10000.0 * (l1 * l1) * (l2 * l2)) + -10000.0
    * (l1 * l1) * (l3 * l3)) + -10000.0 * (l2 * l2) * (l3 * l3)) - -10000.0 *
    rt_powd_snf(l3, 4.0)) - -1.875E+11) + -2.5E+7 * (l1 * l1)) - -2.5E+7 * (l2 *
    l2)) - -0.0 * (l2 * l2)) + -0.0 * (l3 * l3)) - 0.0 * (l2 * l2)) - 0.0 * (l3 *
    l3)) + -0.0 * (l2 * l2)) - -5.6249999999999988E+11) + 1.125E+12) -
    -5.625E+11) + -7.5E+7 * (l1 * l1)) + -1.5E+8 * (l2 * l2)) + -7.5E+7 * (l3 *
    l3)) - 1.5E+8 * (l1 * l1)) - 1.5E+8 * (l2 * l2)) + -7.5E+7 * (l1 * l1)) -
    -7.5E+7 * (l2 * l2)) + -10000.0 * (l1 * l1) * (l2 * l2)) - -10000.0 * (l1 *
    l1) * (l3 * l3)) - -10000.0 * rt_powd_snf(l2, 4.0)) + -10000.0 * (l2 * l2) *
    (l3 * l3)) + 1.5625E+10) + 4.6875E+10) - 3.125E+10) - 9.375E+10) - 1.25E+7 *
    (l1 * l1)) + 1.25E+7 * (l3 * l3)) + 1.5625E+10) + 9.375E+10) - -9.375E+10) +
                   9.375E+10) + 2.5E+7 * (l1 * l1)) - 1.25E+7 * (l2 * l2)) -
                1.25E+7 * (l3 * l3)) - 0.0 * (l1 * l1)) - 0.0 * (l2 * l2)) +
             -0.0 * (l1 * l1)) - -0.0 * (l3 * l3)) + 0.0 * (l1 * l1)) + 0.0 *
          (l2 * l2)) + 0.0 * (l3 * l3)) + 2.8125E+11) - -2.8125E+11) - -3.75E+7 *
      (l1 * l1)) + -3.75E+7 * (l3 * l3)) + 1.4062499999999997E+11;
  return sqrt(-6.75E+8 *
              (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    ((((((((((((((((((((((((((((((d5 - d4) - 3.75E+7 * d3) + 2500.0 *
    rt_powd_snf(l1, 4.0)) - 5000.0 * (l1 * l1) * (l3 * l3)) + 2500.0 *
    rt_powd_snf(l3, 4.0)) - 9.375E+10) - 1.25E+7 * (l1 * l1)) + 1.25E+7 * (l2 *
    l2)) + 0.0 * (l1 * l1)) + 0.0 * (l2 * l2)) + 0.0 * (l3 * l3)) - -0.0 * (l1 *
    l1)) - -0.0 * (l3 * l3)) - 0.0 * (l1 * l1)) - 0.0 * (l2 * l2)) - 2.8125E+11)
    - 3.75E+7 * (l1 * l1)) + 3.75E+7 * (l3 * l3)) + -1.5E+8 * (l1 * l1)) -
    3.75E+7 * (l1 * l1)) + 3.75E+7 * (l2 * l2)) - 5000.0 * rt_powd_snf(l1, 4.0))
    + 5000.0 * (l1 * l1) * (l2 * l2)) + 5000.0 * (l1 * l1) * (l3 * l3)) - 5000.0
    * (l2 * l2) * (l3 * l3)) + 4.6875E+10) - 0.0 * (l1 * l1)) - 0.0 * (l3 * l3))
    + -0.0 * (l1 * l1)) + -0.0 * (l2 * l2)) + -0.0 * (l3 * l3)) + 0.0 * (l1 * l1))
    - 0.0 * (l2 * l2)) + 1.4062499999999997E+11) - -2.8125E+11) + 2.8125E+11) -
    3.75E+7 * (l2 * l2)) - 3.75E+7 * (l3 * l3)) - -3.75E+7 * (l1 * l1)) +
    -3.75E+7 * (l2 * l2)) + 2500.0 * rt_powd_snf(l1, 4.0)) - 5000.0 * (l1 * l1) *
    (l2 * l2)) + 2500.0 * rt_powd_snf(l2, 4.0)) + -0.0 * (l2 * l2)) - -0.0 * (l3
    * l3)) - 0.0 * (l2 * l2)) + 0.0 * (l3 * l3)) - 0.0 * (l1 * l1)) - 0.0 * (l2 *
    l2)) + 0.0 * (l3 * l3)) + -0.0 * (l1 * l1)) - -0.0 * (l2 * l2)) - -0.0 * (l3
    * l3)) - 0.0 * (l1 * l1)) + 0.0 * (l2 * l2)) - 0.0 * (l3 * l3)) + 0.0 *
    rt_powd_snf(l2, 4.0)) - 0.0 * (l2 * l2) * (l3 * l3)) + 0.0 * rt_powd_snf(l3,
    4.0)) + -0.0 * (l1 * l1)) - -0.0 * (l3 * l3)) - 0.0 * (l1 * l1)) + 0.0 * (l2
    * l2)) - 0.0 * (l3 * l3)) - -0.0 * (l1 * l1)) - -0.0 * (l2 * l2)) + -0.0 *
    (l3 * l3)) - -0.0 * (l1 * l1) * (l2 * l2)) + -0.0 * (l1 * l1) * (l3 * l3)) +
    -0.0 * (l2 * l2) * (l3 * l3)) - -0.0 * rt_powd_snf(l3, 4.0)) + 0.0 * (l1 *
    l1)) - 0.0 * (l2 * l2)) + 0.0 * (l1 * l1) * (l2 * l2)) - 0.0 * (l1 * l1) *
    (l3 * l3)) - 0.0 * rt_powd_snf(l2, 4.0)) + 0.0 * (l2 * l2) * (l3 * l3)) +
    4.2187499999999994E+11) - -8.4375E+11) - -1.125E+8 * (l1 * l1)) + -1.125E+8 *
    (l3 * l3)) + 4.2187499999999994E+11) + 2.25E+8 * (l1 * l1)) - 1.125E+8 * (l2
    * l2)) - 1.125E+8 * (l3 * l3)) + 7500.0 * rt_powd_snf(l1, 4.0)) - 15000.0 *
    (l1 * l1) * (l3 * l3)) + 7500.0 * rt_powd_snf(l3, 4.0)) - -1.125E+8 * (l1 *
    l1)) + -1.125E+8 * (l2 * l2)) - -15000.0 * rt_powd_snf(l1, 4.0)) + -15000.0 *
                    (l1 * l1) * (l2 * l2)) + -15000.0 * (l1 * l1) * (l3 * l3)) -
                  -15000.0 * (l2 * l2) * (l3 * l3)) + 7500.0 * rt_powd_snf(l1,
    4.0)) - 15000.0 * (l1 * l1) * (l2 * l2)) + 7500.0 * rt_powd_snf(l2, 4.0))) /
    1.35E+9;
}

/*
 * File trailer for cal_p_z2.c
 *
 * [EOF]
 */
