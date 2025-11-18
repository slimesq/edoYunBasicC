// class19.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int ave(int a, int b) {
	static int count{ 200 };
	std::cout << count++ << std::endl;
	return (a + b) / 2;
}

inline int add(int a, int b) {
	return a + b;
}


int main()
{
	ave(1, 2);
	ave(1, 2);
	ave(1, 2);
	ave(1, 2);
	ave(1, 2);
   
	int c = add(1, 2);

	return 0;
}

