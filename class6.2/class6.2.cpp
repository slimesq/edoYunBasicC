// class6.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

void charJudge() {
	char ch{};
	std::cout << "请输入一个字符：";
	std::cin >> ch;
	if (ch >= 48) {
		if (ch <= 57) {
			std::cout << "你输入的是一个数字" << std::endl;
		}
		if (ch >= 65) {
			if (ch <= 90) {
				std::cout << "你输出的是一个大写字母,对应的小写字母是:" << (char)(ch + 32) << std::endl;
			}
			if (ch >= 97) {
				if (ch <= 122) {
					std::cout << "你输出的是一个小写字母,对应的大写字母是:" << (char)(ch - 32) << std::endl;
				}
			}
		}
	}

	return;
}

int main()
{
	charJudge();

	int a{ 500 };
	int b{ 0 };
	if (a = b) // if(a=b) ==> if(b) 
		std::cout << "我们一样有钱！" << std::endl;

	if (a > b) 
	{
		std::cout << "你真有钱！" << std::endl;
		std::cout << "你实在是真有钱!" << std::endl;
	}

	if (a <= b) std::cout << "你是个无耻的骗子!" << std::endl;

	std::cout << "请输入您的取款金额:";
	std::cin >> b;
	if (b == 0) 
	{
		std::cout << "捣乱!" << std::endl;
	}
	if (b) // b!=0
	{
		std::cout << "办理业务!" << std::endl;
	}
	return 0;
}

