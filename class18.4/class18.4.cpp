// class18.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

decltype(auto) bigger(int& a, int& b)/*->decltype(a > b ? a : b)*/ {
	return a > b ? a : b;
}

auto ave(int a, int b)
{
	return (a + b) / 2;
}

int main()
{
	//char b;
	//auto a{ &b };

	//const int a{ 1500 };
	//int b{ 2500 };
	//const int& la{ a };
	//auto c = la;

	/*
	int a{ 200 };
	int b{ 300 };

	std::cout << a << " " << b << " " << typeid(bigger(a, b)).name() << std::endl;
	*/

//	int a{ 1500 };
//	unsigned b{ 2500 };
//
//	char ac;
//	decltype(a + b) x;
//	std::cout << a << " " << b << " " << typeid(x).name() << std::endl;
//
//	int& la{ a };
//	auto xauto = la;
//
//	int* pa{ &a };
//	decltype(*pa) x = a;
//
//
//	decltype(a + b) x = a;
//}

	int a{ 1500 };
	int b{ 2500 };
	decltype(ave(a, b)) x;

	decltype(a++) x;
	decltype(++a) y;



	return 0;
}

