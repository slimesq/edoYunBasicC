// class5.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define 整数 int
#define eLong long

int main()
{
	/*方式一*/
	整数 a{ 100 };
	std::cout << typeid(a).name() << std::endl;

	/*方式二*/
	typedef	int eInt;
	eInt b{};
	std::cout << typeid(b).name() << std::endl;

	/*方式三*/
	using eInt32 = int;
	eInt32 c{};

	typedef eLong eLo;
	using eInt64 = long long;

	return 0;
}
