// class6.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	char cIn; 
	std::cout << "请输入一个字符:";
	std::cin >> cIn;

	if (cIn > 47 && cIn < 58)
		std::cout << "\n您输入的是一个数字" << cIn << std::endl;
	if ((cIn >= 65 && cIn <= 90) || (cIn > 96 && cIn < 123))
		std::cout << "\n您输入的是字母" << cIn << std::endl;

	return 0;
}

