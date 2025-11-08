// class12.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int a{ 5250 };
	int b{ 3000 };
	int& la{ a };
	int& la1{ a };
	int& la2{ a };

	la1++;

	la = b; // a = b;

	std::cout << a << std::endl;
	std::cout << &la << std::endl;
	std::cout << &la1 << std::endl;
	std::cout << &la2<< std::endl;

	//int a[]{ 1001,1002,1003,1004 };

	//for (int& x : a) {
	//	x = x + 1;
	//}

	//for (int x : a) {
	//	std::cout << x << " ";
	//}
	//std::cout << std::endl;
	
	return 0;
}