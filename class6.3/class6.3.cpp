// class6.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	char cIn;
	std::cout << "请输入一个字符：";
	std::cin >> cIn;
	if (cIn > 47) {
		if (cIn < 58) 
			std::cout << "你输入的是一个数字" << std::endl;
		else if(cIn < 65)
			std::cout << "你输入的是一个字符！" << std::endl;
		if (cIn >= 65) 
			if (cIn <= 90) 
				std::cout << "你输出的是一个大写字母,对应的小写字母是:" << (char)(cIn + 32) << std::endl;
			else if(cIn <97)
				std::cout << "你输入的是一个字符！" << std::endl;
		if (cIn >= 97)
			if (cIn <= 122)
				std::cout << "你输出的是一个小写字母,对应的大写字母是:" << (char)(cIn - 32) << std::endl;
			else
				std::cout << "你输入的是一个字符！" << std::endl;
	}
	else 
		std::cout << "你输入的是一个字符！" << std::endl;
	


	int a{ 5000 };
	int b{ 1 };
	std::cout << "请输入您的取款金额:";
	std::cin >> b;
	if (b)
	{
		if (b > 0) std::cout << "取款！" << std::endl; else std::cout << "存款!" << std::endl;
		std::cout << "办理取款业务!" << std::endl;
		std::cout << "办理取款业务!" << std::endl;
	}
	else {
		std::cout << "捣乱!" << std::endl;
		std::cout << "警察快来啊！\n";

	}


    return 0;
}
