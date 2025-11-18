// class15.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

using std::string;

int main()
{
	string str{ "12345" };

	std::cout << str[0] << std::endl;
	std::cout << std::hex << (int)&str << " " << (int)&str[0] << " " << (int)&str[1] << std::endl;
	str += "12345678912345678901234567890";
	std::cout << std::hex << (int)&str << " " << (int)&str[0] << " " << (int)&str[1] << std::endl;

	const char* baseStr = str.c_str();
	std::cout << (int)baseStr << std::endl;

	char* newStr = (char*)baseStr;
	newStr[0] = '9';
	std::cout << str << std::endl;
	std::cout << (int)str[str.length()] << std::endl;

	return 0;
}
