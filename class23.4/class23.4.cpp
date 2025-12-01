// class23.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "hstring.h"

int main()
{
	hstring str{ "abc" };
	hstring strA{ "def12345678945636526925548622qwrqtrgaaagfdagteaee1" };
	str + strA;
	std::cout << str.c_str() << std::endl;

	std::cout << str.ResetMemory(30) << std::endl;
	std::cout << str.ResetMemory(100) << std::endl;
	std::cout << str.GetMemory() << std::endl;
	std::cout << str.GetLength() << std::endl;

	str = str;
	std::cout << str << std::endl;

	/*
	std::cout << str << "\n111" << "\n222" << std::endl;

	std::cin >> strA;
	std::cout << strA << std::endl;
	*/

	return 0;
}
