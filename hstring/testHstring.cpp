// testHstring.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "hstring.h"

hstring toHstring(const char* cstr) {
	return hstring{ cstr };
}

int main()
{
	hstring str1{ "123456" };
	std::cout << str1 << std::endl;

	hstring str2{ str1 };
	std::cout << str2 << std::endl;

	hstring str3{ "12345" };
	std::cout << str3 << std::endl;

	str3 + str2 + str1;
	std::cout << str3 << std::endl;

	std::cout << str3 + "ashi;a" << std::endl;

	std::cout << str3.find("456") << std::endl;

	hstring s("123456789");
	hstring subStr{ "46" };
	hstring result = s - subStr;
	std::cout << result << std::endl;

	std::cout << result - "12" << std::endl;

	hstring str{ "123456123456759" };
	str.replace(0,"123456123456759","123456123456759");
	std::cout << str << std::endl;

	hstring istr;
	istr = -1234567891;
	std::cout << istr << std::endl;

	return 0;
}
