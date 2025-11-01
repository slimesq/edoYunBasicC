// class10.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <array>

int main()
{
	int studentIdA[2]{ 10001,10002 };	 // sizeof()/sizeof(int)
	int studentIdB[2]{ 10001,10002 };

	std::array<int, 2> studentId{10001,10002};
	std::array<int, 2> studentIdD{10001,10002 };
	std::cout << (studentIdA == studentIdB) << std::endl;
	std::cout << (studentId == studentIdD) << std::endl;

	std::cout << studentId.size() << std::endl;
	studentId.fill(250);
	std::cout << studentId.at(1) << std::endl;
	//std::cout << studentId.at(100) << std::endl;
	//std::cout << studentIdA[100] << std::endl;

	for (int x : studentId) {
		std::cout << x << std::endl;
	}

	return 0;
}
