#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){
    float a = cos(45.0/180.0*acos(-1));
    float b = -sin(45.0/180.0*acos(-1));
    float c = sin(45.0/180.0*acos(-1));
    float d = cos(45.0/180.0*acos(-1));
    std::cout << a << std::endl;
    Eigen::Vector3f i(2.0f,1.0f,1.0f);
    Eigen::Matrix3f mat;
    mat <<a  ,b,  1.0f,
          c  ,d,  2.0f,
         0.0f  ,0.0f,  1.0f;
    // std::cout << "旋转45°,平移（2,1）:\n" << i*mat << std::endl;
    std::cout << "旋转45°,平移（2,1）:\n" << mat*i << std::endl;

    return 0;
}