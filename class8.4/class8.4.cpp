// class8.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cmath>

int main()
{
	for (int i = 2; i < 1000; ++i) {
		bool isPrime = true;
		for (int j = 2; j <= sqrt(i); ++j) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			std::cout << i << " ";
		}
	}
	return 0;
}

