function [ l ] = cal_l2( x,y,z )
%计算2号位置的绳长
%   此处显示详细说明

r = 10;
a = 100;

AR = r;
AC = sqrt((x-a/2)^2+(y+(3^(1/2))*a/2)^2+z^2);
OC = sqrt(x^2+y^2+z^2);
OR = sqrt(a^2+r^2);
OA = a;


th_COR = acos((OA^2+OC^2-AC^2)/(2*OA*OC)) - atan(AR/OA);
RC = sqrt(OR^2 + OC^2 -2*OR*OC*cos(th_COR));


th_BRC = acos(r/RC);
th_ORA = atan(a/r);
th_ORC = acos((RC^2 + OR^2 - OC^2)/(2*OR*RC));
AB = r*(2*pi - th_BRC - th_ORC - th_ORA);

l = RC + AB;



end

