// class20.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

//#define NDEBUG	// 取消assert
//#include <cassert>


int main()
{
	std::cout << "请输入一个整数\n";
	int c;
	std::cin >> c;
	//assert(c);
	//static_assert(0, "its 0");	// 编译时确定的,检测错误
	static_assert(1, "its 0");	// 编译时确定的，没有检测道错误
	//static_assert(c, "its 0");	// 编译时确定的,语法错误

	static_assert(sizeof(int*) == 4, "it's not x86");	// 只有在32位系统上有效
	std::cout << 1000 / c << std::endl;


	return 0;
}
