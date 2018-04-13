function [ l ] = cal_l1( x,y,z )
%UNTITLED2 根据输入x,y,z的值计算绳长l
%   此处显示详细说明
% r 与 a应该等于定值 

r = 10;
a = 100;

AR = r;
AC = sqrt((x+a)^2+y^2+z^2);
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

