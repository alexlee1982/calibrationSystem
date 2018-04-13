function [ x ] = cal_p_x( l1,l2,l3 )
% 通过输入绳子长度，计算x'
%   此处显示详细说明

a = 100;
A1 = [-a;0;0];
A2 = [a/2;-1*(3^(1/2))*a/2;0];
A3 = [a/2;(3^(1/2))*a/2;0];

A1x = A1(1,1);
A1y = A1(2,1);
A1z = A1(3,1);

A2x = A2(1,1);
A2y = A2(2,1);
A2z = A2(3,1);

A3x = A3(1,1);
A3y = A3(2,1);
A3z = A3(3,1);

x = (A1x^2*A2y - A1x^2*A3y - A2x^2*A1y + A2x^2*A3y + A3x^2*A1y - A3x^2*A2y + A1y^2*A2y - A1y^2*A3y - A1y*A2y^2 + A1y*A3y^2 + A1y*l2^2 - A1y*l3^2 + A2y^2*A3y - A2y*A3y^2 - A2y*l1^2 + A2y*l3^2 + A3y*l1^2 - A3y*l2^2)/(2*(A1x*A2y - A2x*A1y - A1x*A3y + A3x*A1y + A2x*A3y - A3x*A2y));
end

