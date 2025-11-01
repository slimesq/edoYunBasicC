// class9.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cmath>
#include <conio.h>

int main()
{
	int num{};
	
	while (true) {

		std::cout << "请输入一个数:";
		std::cin >> num;

		bool isPrime = true;
		for (int i = 2; i <= sqrt(num); ++i) {
			if (num % 2 == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			std::cout << num << "是质数!\n";
		}
		else {
			std::cout << num << "不是质数!\n";
		}
		char con;
		std::cout << "是否计算下一个数(Y表示继续):\n";
		std::cin >> con;
		if (con == 'Y' || con == 'y') {
			continue;
		}
		else {
			break;
		}

	}
	

	return 0;
}
