// class20.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

//extern void testX();

inline int a = 350;	// C++17

static int sa = 250;

const int pt = 1000;	// 想要具有外部链接属性，可以加上extern

void Test();
int main()
{
	//testX();
	std::cout << a << std::endl;
	Test();

	std::cout << "&sa = " << &sa << std::endl;

	return 0;
}

