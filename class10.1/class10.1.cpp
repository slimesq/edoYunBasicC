// class10.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int studentId[10]{};

	std::cout << sizeof(studentId) << std::endl;

	//输出studentId有几个元素
	std::cout << sizeof(studentId) / sizeof(studentId[0]) << std::endl;

	studentId[0];
	for (int i = 0; i < 10; ++i) {
		std::cin >> studentId[i];
	}
	
	for (int i = 0; i < 10; ++i) {
		std::cout << studentId[i] << " ";
	}
	


	return 0;
}
