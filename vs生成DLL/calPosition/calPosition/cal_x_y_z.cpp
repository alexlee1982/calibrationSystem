/*
 * File: cal_x_y_z.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 13-Apr-2018 17:06:56
 */

/* Include Files */
#include "stdafx.h"
#include "rt_nonfinite.h"
#include "cal_x_y_z.h"
#include "cal_p_z2.h"
#include "cal_p_z1.h"

/* Function Definitions */

/*
 * UNTITLED 此处显示有关此函数的摘要
 *    此处显示详细说明
 * Arguments    : double l1_org
 *                double l2_org
 *                double l3_org
 *                double p[3]
 * Return Type  : void
 */
void cal_x_y_z(double l1_org, double l2_org, double l3_org, double p[3])
{
  double l1;
  double l2;
  double l3;
  int i;
  double x_;
  double y_;
  double z_;
  double z1_;
  double AC;
  double OC;
  double RC;
  double b_OC;
  double b_RC;
  double c_OC;
  double c_RC;
  l1 = l1_org;
  l2 = l2_org;
  l3 = l3_org;
  for (i = 0; i < 10; i++) {
    /*  通过输入绳子长度，计算x' */
    /*    此处显示详细说明 */
    x_ = ((((((((-1.2990381056766578E+6 + 0.0 * (l2 * l2)) - 0.0 * (l3 * l3)) +
               649519.052838329) - -649519.052838329) - -86.602540378443862 *
             (l1 * l1)) + -86.602540378443862 * (l3 * l3)) + 86.602540378443862 *
           (l1 * l1)) - 86.602540378443862 * (l2 * l2)) / 51961.524227066322;

    /*  通过输入绳子长度，计算y' */
    /*    此处显示详细说明 */
    y_ = ((((((((((0.0 - -100.0 * (l2 * l2)) + -100.0 * (l3 * l3)) - 125000.0) +
                125000.0) + 375000.0) + 50.0 * (l1 * l1)) - 50.0 * (l3 * l3)) -
            375000.0) - 50.0 * (l1 * l1)) + 50.0 * (l2 * l2)) /
      51961.524227066322;
    z1_ = cal_p_z1(l1, l2, l3);
    if (z1_ > 0.0) {
      z_ = z1_;
    } else {
      z_ = cal_p_z2(l1, l2, l3);
    }

    /* UNTITLED2 根据输入x,y,z的值计算绳长l */
    /*    此处显示详细说明 */
    /*  r 与 a应该等于定值  */
    AC = sqrt(((x_ + 100.0) * (x_ + 100.0) + y_ * y_) + z_ * z_);
    OC = sqrt((x_ * x_ + y_ * y_) + z_ * z_);
    RC = sqrt((10100.0 + OC * OC) - 200.9975124224178 * OC * cos(acos(((10000.0
      + OC * OC) - AC * AC) / (200.0 * OC)) - 0.099668652491162038));

    /* 计算2号位置的绳长 */
    /*    此处显示详细说明 */
    AC = sqrt(((x_ - 50.0) * (x_ - 50.0) + (y_ + 86.602540378443862) * (y_ +
                86.602540378443862)) + z_ * z_);
    b_OC = sqrt((x_ * x_ + y_ * y_) + z_ * z_);
    b_RC = sqrt((10100.0 + b_OC * b_OC) - 200.9975124224178 * b_OC * cos(acos
      (((10000.0 + b_OC * b_OC) - AC * AC) / (200.0 * b_OC)) -
      0.099668652491162038));

    /* UNTITLED3 此处显示有关此函数的摘要 */
    /*    此处显示详细说明 */
    AC = sqrt(((x_ - 50.0) * (x_ - 50.0) + (y_ - 86.602540378443862) * (y_ -
                86.602540378443862)) + z_ * z_);
    c_OC = sqrt((x_ * x_ + y_ * y_) + z_ * z_);
    c_RC = sqrt((10100.0 + c_OC * c_OC) - 200.9975124224178 * c_OC * cos(acos
      (((10000.0 + c_OC * c_OC) - AC * AC) / (200.0 * c_OC)) -
      0.099668652491162038));

    /* 计算AC1 */
    /*    此处显示详细说明 */
    /* UNTITLED6 此处显示有关此函数的摘要 */
    /*    此处显示详细说明 */
    /* UNTITLED6 此处显示有关此函数的摘要 */
    /*    此处显示详细说明 */
    l1 = (sqrt(((x_ + 100.0) * (x_ + 100.0) + y_ * y_) + z_ * z_) - (RC + 10.0 *
           (((6.2831853071795862 - acos(10.0 / RC)) - acos(((RC * RC + 10100.0)
               - OC * OC) / (200.9975124224178 * RC))) - 1.4711276743037347))) +
      l1_org;
    l2 = (sqrt(((x_ - 50.0) * (x_ - 50.0) + (y_ + 86.602540378443862) * (y_ +
             86.602540378443862)) + z_ * z_) - (b_RC + 10.0 *
           (((6.2831853071795862 - acos(10.0 / b_RC)) - acos(((b_RC * b_RC +
                10100.0) - b_OC * b_OC) / (200.9975124224178 * b_RC))) -
            1.4711276743037347))) + l2_org;
    l3 = (sqrt(((x_ - 50.0) * (x_ - 50.0) + (y_ - 86.602540378443862) * (y_ -
             86.602540378443862)) + z_ * z_) - (c_RC + 10.0 *
           (((6.2831853071795862 - acos(10.0 / c_RC)) - acos(((c_RC * c_RC +
                10100.0) - c_OC * c_OC) / (200.9975124224178 * c_RC))) -
            1.4711276743037347))) + l3_org;
  }

  p[0] = x_;
  p[1] = y_;
  p[2] = z_;
}

/*
 * File trailer for cal_x_y_z.c
 *
 * [EOF]
 */
