// class3.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define PI 3.14159F

int main()
{
	float a{ 65923600 }, b{ 0.000001 }, c{ a + b };
	std::cout << "c=" << c << std::endl;;

	float d{};
	std::cout << "\n请输入直径(单位:cm):" ;
	std::cin >> d;
	double radius = d / 2;
	double area{ PI * radius * radius };
	std::cout << "\n直径为：" << d << "圆的面积是:" << area << "平方厘米" << std::endl;

	return 0;
}
