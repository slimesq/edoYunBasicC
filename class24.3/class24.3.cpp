// class24.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "hint.h"

hint dimonds = 2500;

int main()
{
	while (1) {
		std::cout << "当前钻石的余额为:" << dimonds;
		system("pause");
		dimonds = (int)dimonds - 10;
	}

	return 0;
}