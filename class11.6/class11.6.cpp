// class11.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	/*
	const int a{ 1000 };
	const int b{ 2500 };
	int c{ 3500 };

	const int* ptr{ &a };

	ptr = &c;

	std::cout << *ptr << std::endl;
	*/

	/*
	int a{ 1000 };
	int b{ 1000 };

	int* const ptr{ &a };
	*ptr = 9999;
	std::cout << *ptr << std::endl;
	*/

	/*
	const int a{ 1000 };
	const int b{ 1400 };
	const int* const ptr{ &a };

	ptr = &a;
	*ptr = 9999;
	*/

	const int a{ 1000 };
	const int b{ 1400 };
	const int* const ptr{ &a };

	int* ptrA{ (int*)&a };
	*ptrA = 9999;
	std::cout << a << std::endl;
	std::cout << *ptrA << std::endl;

	return 0;
}