// class15.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <sstream>

using std::string;

int main()
{
	std::stringstream strS;
	strS << "你好" << "123 [" << std::hex << 123450 << "]";
	string strX = strS.str();
	std::cout << strX << std::endl;

	/*
	string cIn = "15963";
	int x = std::stoi(cIn);
	std::cout << x + 1 << std::endl;
	*/

	/*
	const char* str = "Hello!易道云,Tiger你真的很英俊！";

	int length{ 0 };
	for (int i{ 0 }; str[i]; ++i) {
		if (str[i] < 0) ++i;
		length++;
	}
	std::cout << "str length = " << length << std::endl;
	*/

	return 0;
}