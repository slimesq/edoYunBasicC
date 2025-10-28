// class4.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	auto a{ 200 };
	auto b{ 100LL };
	auto c{ 200L };

	auto d{ U'A' };
	auto e{ u'a' };

	std::cout << "变量 a 的类型为" << typeid(a).name() << (char)10;
	std::cout << "变量 b 的类型为" << typeid(b).name() << (char)10;
	std::cout << "变量 c 的类型为" << typeid(c).name() << (char)10;
	std::cout << "变量 d 的类型为" << typeid(d).name() << (char)10;
	std::cout << "变量 e 的类型为" << typeid(e).name() << (char)10;

	/*
			4.1 作业
			要求用户输入一个小写字母
			转换成大写后输出

		char userIn{};
		std::cout << "请输入一个小写字母:";
		std::cin >> userIn;
		// A a B b
		userIn -= 32;
		std::cout <<"字母转换为大写[" << userIn << "]" << std::endl;
	*/
	return 0;
}
