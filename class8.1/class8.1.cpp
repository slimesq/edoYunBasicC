// class8.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	for (int i = 10; i >= 0; --i) {
		std::cout << i << std::endl;
	}

	char charIn;
	std::cin >> charIn;

	for (char a = charIn+1; a < 91; a++) {
		if (!((a-charIn-1)%5)) {
			std::cout << std::endl;
		}
		std::cout << a;
	}



	return 0;
}

