// class18.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int ave(int* pa, int count) {
	return 0;
}

//int ave(int pa[], int count) {
//	return 0;
//}

int ave(int& a, int& b) {
	std::cout << "ave 两个 int 参数";
	return (a + b) / 2;
}
int ave(const int& a,const int& b) {
	std::cout << "ave 两个 int 参数";
	return (a + b) / 2;
}
//float ave(float a, float b) {
//	std::cout << "ave 两个 float 参数";
//	return (a + b) / 2;
//}
//int ave(int& a, int& b) {
//	std::cout << "ave 两个 int 参数";
//	return (a + b) / 2;
//}

int ave(int a, int b, int c) {
	std::cout << "ave 三个 int 参数";
	return (a + b + c) / 3;
}

float ave(float a, float b, float c) {
	std::cout << "ave 三个 float 参数";
	return (a + b + c) / 3;
}

int main()
{
	//int pa[1]{ 100 };
	//ave(pa,1);
	//int a = 2, b = 2;
	//std::cout << ave(a, b) << std::endl;

	const int a = 100;
	const int b = 100;
	std::cout << ave(a,b) << std::endl;

	std::cout << ave(2, 3) << std::endl;
	std::cout << ave(2, 3,4) << std::endl;
	std::cout << ave(1.0f, 3.0f, 5.0f) << std::endl;
	return 0;
}
