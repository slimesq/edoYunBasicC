// class10.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int studentId[]{ 10001,10002,10003,10004,10005 };

	for (int item : studentId) {
		std::cout << item << " ";
	}
	std::cout << std::endl;

	for (auto item : studentId) {
		std::cout << item << " ";
	}
	std::cout << std::endl;

	return 0;
}

