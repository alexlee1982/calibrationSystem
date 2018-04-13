syms B1C R1C R1B1 R1C r 
syms OC OR  th_COR1
syms x y z
syms l1 
syms OA1 OR1 A1R1 a
syms th_COA1 th_R1OA1 A1C 

syms A1B1 th_BR1C th_OR1C th_OR1A

% A1R1 = r
% A1C = sqrt((x+a)^2+y^2+z^2)
% OC = sqrt(x^2+y^2+z^2)
% OR1 = sqrt(a^2+r^2)
% OA1 = a
% th_COR1 = acos(OA1^2+OC^2-A1C^2/(2*OA1*OC)) - atan(A1R1/OA1)
% R1C = sqrt(OR1^2 + OC^2 -2*OR1*OC*cos(th_COR1))
% simplify(R1C)
% 
% th_BR1C = acos(r/R1C)
% th_OR1A = atan(a/r)
% th_OR1C = acos(R1C^2 + OR1^2 - OC^2/(2*OR1*R1C))
% A1B1 = r*(2*pi - th_BR1C - th_OR1C - th_OR1A)
syms A1 A2 A3
syms a 
syms A1x A1y A1z
syms A2x A2y A2z
syms A3x A3y A3z
syms X Y Z
syms l1 l2 l3

A1 = [-a;0;0];
A2 = [a/2;-1*(3^(1/2))*a/2;0]
A3 = [a/2;(3^(1/2))*a/2;0]

A1x = A1(1,1)
A1y = A1(2,1)
A1z = A1(3,1)

A2x = A2(1,1)
A2y = A2(2,1)
A2z = A2(3,1)

A3x = A3(1,1)
A3y = A3(2,1)
A3z = A3(3,1)


F1 = '(X - A1x)^2 + (Y - A1y)^2 + Z^2 = l1^2'
F2 = '(X - A2x)^2 + (Y - A2y)^2 + Z^2 = l2^2'
F3 = '(X - A3x)^2 + (Y - A3y)^2 + Z^2 = l3^2'

A = solve(F1,F2,F3,X,Y,Z)

x_ = A.X 
y_ = A.Y
z_ = A.Z