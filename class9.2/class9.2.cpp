// class9.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int num{};
	int inKey{};
	do {

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
		std::cin >> inKey;
	} while (inKey == 'Y' || inKey == 'y');
	return 0;
}

