// calPosition.cpp: 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"

#include "rt_nonfinite.h"
#include "cal_x_y_z.h"

#include "cal_x_y_z_terminate.h"
#include "cal_x_y_z_initialize.h"
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "cal_x_y_z_types.h"

__declspec(dllexport) void calPosition(double l1_org, double l2_org, double l3_org, double p[3])
{
	cal_x_y_z(l1_org, l2_org, l3_org, p);
	return;
}