// testHstring.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "hstring.h"

// operator+
void test1() {
	std::cout << "==============operator+==============\n";
	hstring str{};
	hstring str1{ "123456" };
	hstring str2{ "123hellowold" };
	hstring str3{ "qazwsx1234568" };
	str + str1 + str2 + str3;
	std::cout << str << std::endl;
}

// operator-
void test2() {
	std::cout << "==============operator-==============\n";
	hstring str{ "012345678910" };
	std::cout << "[origin]:" << str << std::endl;
	hstring result = str - "456";
	std::cout << "[result]:" << str << std::endl;
	std::cout << "[result]:" << result << std::endl;
}

// replace
void test3() {
	std::cout << "==============replace==============\n";
	{
		hstring str{ "[012]34567891[012]3" };
		std::cout << "[origin]:" << str << std::endl;
		str.replace(2, "012", "ab");
		std::cout << "[result]:" << str << std::endl;
		std::cout << "------------\n";
	}
	{
		hstring str{ "[012]34567891[012]3" };
		std::cout << "[origin]:" << str << std::endl;
		str.replace(2, "012", "abcde");
		std::cout << "[result]:" << str << std::endl;
		std::cout << "------------\n";
	}
	{
		hstring str{ "[012]34567891[012]3" };
		std::cout << "[origin]:" << str << std::endl;
		str.replace(2, "012", "abcdeeghkgmahljgfajladfagadadkdjalkj");
		std::cout << "[result]:" << str << std::endl;
		std::cout << "------------\n";
	}
	{
		hstring str{ "[012]34567891[012]3" };
		std::cout << "[origin]:" << str << std::endl;
		str.replace(2, "012", "");
		std::cout << "[result]:" << str << std::endl;
		std::cout << "------------\n";
	}
	{
		hstring str{ "[012]34567891[012]3" };
		std::cout << "[origin]:" << str << std::endl;
		str.replace(0, "012", "ab");
		std::cout << "[result]:" << str << std::endl;
		std::cout << "------------\n";
	}
	{
		hstring str{ "[012]34567891[012]3" };
		std::cout << "[origin]:" << str << std::endl;
		str.replace(0, "012", "abcde");
		std::cout << "[result]:" << str << std::endl;
		std::cout << "------------\n";
	}
	{
		hstring str{ "[012]34567891[012]3" };
		std::cout << "[origin]:" << str << std::endl;
		str.replace(0, "012", "");
		std::cout << "[result]:" << str << std::endl;
		std::cout << "------------\n";
	}
}

// find
void test4() {
	std::cout << "==============replace==============\n";
	{
		hstring str{ "[012]345678910123" };
		std::cout << str.find("") << std::endl;
		std::cout << "------------\n";
	}
	{
		hstring str{ "012345678910123" };
		std::cout << str.find("345") << std::endl;
		std::cout << "------------\n";
	}
	{
		hstring str{ "012345678910123" };
		std::cout << str.find("0123456789101231234") << std::endl;
		std::cout << "------------\n";
	}
	{
		hstring str{ "012345678910123" };
		std::cout << str.find("123") << std::endl;
		std::cout << "------------" << std::endl;
	}
}

// operator=
void test5() {
	std::cout << "==============operator===============\n";
	{
		hstring str;
		str = 1234;
		std::cout << str << std::endl;
	}
	{
		hstring str;
		str = -1234;
		std::cout << str << std::endl;
	}
	{
		hstring str;
		str = 0;
		std::cout << str << std::endl;
	}
}



int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	return 0;
}
