/*
 * File: cal_x_y_z_rtwutil.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 13-Apr-2018 17:06:56
 */

/* Include Files */
#include "stdafx.h"
#include "rt_nonfinite.h"
#include "cal_x_y_z.h"
#include "cal_x_y_z_rtwutil.h"

/* Function Definitions */

/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
double rt_powd_snf(double u0, double u1)
{
  double y;
  double d6;
  double d7;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d6 = fabs(u0);
    d7 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d6 == 1.0) {
        y = rtNaN;
      } else if (d6 > 1.0) {
        if (u1 > 0.0) {
          y = rtInf;
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtInf;
      }
    } else if (d7 == 0.0) {
      y = 1.0;
    } else if (d7 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = rtNaN;
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/*
 * File trailer for cal_x_y_z_rtwutil.c
 *
 * [EOF]
 */
