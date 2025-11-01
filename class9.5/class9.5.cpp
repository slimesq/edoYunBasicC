// class9.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	// 水仙花数
	int g, s, b;
	for (int i = 100; i < 1000; ++i) {
		g = i % 10;
		s = (i / 10) % 10;
		b = i / 100;
		if (g * g * g + s * s * s + b * b * b == i) {
			std::cout << "找到水仙花数:" << i << std::endl;
		}
	}
	std::cout << std::endl;

	// 完数
	for (int i = 2; i < 1000; ++i) {
		int sum{0};
		for (int j = 1; j < i; ++j) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i) {
			std::cout << "找到完数:" << i << std::endl;
		}
	}
	std::cout << std::endl;

	return 0;
}
