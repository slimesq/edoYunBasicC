// class21.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class Role {
	int* ary;
public:
	Role() {
		ary = new int{ 1001 };
		std::cout << "\n类被创建！\n";
	}

	~Role() {
		delete[] ary;
		std::cout << "\n类被销毁！\n";
	}
};


int main()
{
	Role user;
	int a{ 1 };
	while (a) {
		Role p;
		std::cin >> a;
	}
	std::cout << "\nending!\n";

	return 0;
}