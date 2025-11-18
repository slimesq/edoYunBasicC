// class15.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

#define SoftName "EDY"
#define SoftVersion "2.0" 

using std::string;

int main()
{
	/*
	string str;
	str = "abc" + string{"123"} + "456";
	std::cout << str << std::endl;

	str += "nba!" + string{"123"};
	std::cout << str << std::endl;

	string strB;
	strB = "123""456";
	std::cout << strB << std::endl;

	string strC;
	strC = SoftName SoftVersion;
	std::cout << strC << std::endl;
	*/

	/*
	string str{ "123" };
	char a;
	std::cin >> a;
	str += a + 1;
	std::cout << str << std::endl;
	*/

	/*
	string str{ "123" };
	//str.append("123123", 0, 3);
	str.append(23,'a');
	str.append("123123", 2);
	str.append(" 456").append(" 567").append(" 89A");
	std::cout << str << std::endl;
	*/

	string str{ "123456789" };
	string subStr = str.substr(6);
	std::cout << subStr << std::endl;
	string subStrA = str.substr(4,3);
	std::cout << subStrA << std::endl;

	string strB{"你好123"};
	std::cout << strB.length() << std::endl;




	return 0;
}

