function [ p ] = cal_x_y_z( l1_org,l2_org,l3_org )
%UNTITLED 此处显示有关此函数的摘要
%   此处显示详细说明


l1 = l1_org;
l2 = l2_org;
l3 = l3_org;

for i = 1:1:5
    
    x_ = cal_p_x(l1,l2,l3);
    y_ = cal_p_y(l1,l2,l3);
    z1_ = cal_p_z1(l1,l2,l3);
    z2_ = cal_p_z2(l1,l2,l3);
    
    if z1_ > 0
        z_ = z1_;
    else
        z_ = z2_;
    end

    l1_ = cal_l1(x_,y_,z_);
    l2_ = cal_l2(x_,y_,z_);
    l3_ = cal_l3(x_,y_,z_);
    A1C_ = cal_AC1(x_,y_,z_);
    A2C_ = cal_AC2(x_,y_,z_);
    A3C_ = cal_AC3(x_,y_,z_);
    
    l1 = A1C_ - l1_ + l1_org;
    l2 = A2C_ - l2_ + l2_org;
    l3 = A3C_ - l3_ + l3_org;
end
p(1,1) = x_ 
p(2,1) = y_
p(3,1) = z_
end

