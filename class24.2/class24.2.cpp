// class24.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class T {
public:
	T(int val) {

	}
	explicit operator int() {
		return 1;
	}
	int operator+(T x) {
		return 2;
	}
};

int main()
{
	T t1{ 100 }, t2{ 200 };
	int x = t1 + 100;
	std::cout << x << std::endl;
	return 0;
}

