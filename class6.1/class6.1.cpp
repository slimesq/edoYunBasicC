// class6.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int a{ 500 };
	int b{ 1000 };
	bool c = (a >= b);	// false true
	std::cout << "c = " << c << std::endl;
	std::cout << std::boolalpha << "c = " << c << std::endl;

	bool bA(int(500));
	int nA{ bA };
	std::cout << std::boolalpha;
	std::cout << "bA = " << bA << std::endl;
	std::cout << "nA = " << nA << std::endl;

	return 0;
}

