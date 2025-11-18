// class19.6.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "edoyun.h"

//#pragma comment(lib,"edoyun.lib")

int main()
{
	std::cout << edoyun::GetVersion() << std::endl;

	std::cout << ave(100, 300) << std::endl;
	return 0;
}


