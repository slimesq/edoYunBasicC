// class21.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "hstring.h"

#include <iostream>

int main()
{
	hstring str("hello");
	std::cout << str << std::endl;

	hstring strA(str);
	std::cout << strA << std::endl;

	strA.SetStr("world");
	std::cout << strA << std::endl;

}