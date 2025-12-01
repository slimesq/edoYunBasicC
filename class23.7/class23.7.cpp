// class23.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "hstring.h"

int main()
{

	hstring str{ "hello" };
	std::cout << str() << std::endl;

	std::cout << str(3, 4) << std::endl;

	float x = -123.345;
	long long y = -123455;
	//long long x = 123;
	//str + x + y;
	str + y + x;
	//str + y;
	std::cout << str << std::endl;

	return 0;
}
