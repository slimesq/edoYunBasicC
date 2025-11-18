// class15.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

using std::string;

int main()
{
	/*
	char* str_1{ (char*)"123456" };
	char str_2[7];
	std::cin >> str_2;
	if (str_1 == str_2)
		std::cout << "相等" << std::endl;
	else
		std::cout << "不相等" << std::endl;
	*/

	/*
	string str_1{"123456" };
	string str_2;
	std::cin >> str_2;
	if (str_1 == str_2)
		std::cout << "相等" << std::endl;
	else
		std::cout << "不相等" << std::endl;
	*/

	/*
	string str_1{ "adxxxx" };
	string str_2{ "bcdefg" };
	if (str_1 > str_2)
		std::cout << "大于" << std::endl;
	else
		std::cout << "小于等于" << std::endl;
	*/

	/*
	string str_1{ "123" };
	string str_2{ "bcdefg" };
	std::cout << str_1.compare(str_1) << std::endl;
	std::cout << str_1.compare(str_2) << std::endl;
	std::cout << str_2.compare(str_1) << std::endl;
	
	string str_3{ "012345" };
	string str_4{ "001234" };
	std::cout << str_3.compare(0,4,str_4) << std::endl;
	std::cout << str_3.compare(0,3,str_4,1,3) << std::endl;
	*/
	
	/*
	string str_1{ "username:56203;studentId:560001;username:56202;studentId:560002" };
	string studentId;
	std::cout << str_1.find("studentId:", 17) << std::endl;
	studentId = str_1.substr(str_1.find("studentId:",17)+ strlen("studentId:"));
	std::cout << studentId << std::endl;
	*/

	string str("01234556768");
	int getLength = str.rfind("123",0);
	if (getLength == std::string::npos) {
		std::cout << "没找到" << std::endl;
	}

	/*
	// 0~15
	int cIn;
	std::cin >> cIn;
	string str{ "0123456789ABCDEF" };

	std::cout << str[cIn] << std::endl;
	*/

	return 0;
}
