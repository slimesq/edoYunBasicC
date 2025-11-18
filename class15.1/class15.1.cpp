// class15.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

using std::string;

int main()
{
	string str, ls;
	ls = "123";
	str = ls + " " + "456";
	std::cout << str << std::endl;

	int age{ 56 };
	ls = "用户的年龄是:" + std::to_string(age);
	std::cout << ls << std::endl;

	/*
	string str(6, 'a');
	std::cout << str;
	*/

	/*
	//string str("吃葡萄不吐葡萄皮!",3);
	string str("0123456",2,3);
	string Id{ str,0,6 };
	std::cout << Id << std::endl;;
	std::cout << str << std::endl;
	*/

	/*
	char str[0x10] = "123" ;
	char strB[0x10] = "456";

	char strC[0x20];
	memcpy(strC, str, strlen(str));
	memcpy(strC + strlen(str), strB, strlen(strB)+1);
	std::cout << strC << std::endl;

	*/




	return 0;
}
