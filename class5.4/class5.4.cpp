// class5.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int a{ 100 };	// 全局变量，从程序开始到结束一直存在。

int main()
{
	int a{ 160 };
	{
		int a{ 350 };
		{
			char b = 'A';
			std::cout << ::a << std::endl;
		}
		std::cout << a << std::endl;
	}

	return 0;
}
