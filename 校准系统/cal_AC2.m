function [ AC ] = cal_AC2( x,y,z )
%UNTITLED6 �˴���ʾ�йش˺�����ժҪ
%   �˴���ʾ��ϸ˵��
a = 100;
AC = sqrt((x-a/2)^2+(y+(3^(1/2))*a/2)^2+z^2);
end

