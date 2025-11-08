// class12.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	int* d = new int[15];

	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	std::cout << &c << std::endl;
	std::cout << &d << std::endl;
	std::cout << d << std::endl;

	free(d);

	return 0;
}
