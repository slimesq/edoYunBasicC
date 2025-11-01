// class10.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int studentId[3][5]{
		{1,2,3,4,5},
		{1,2,3,4,5},
		{1,2,3,4,5}
	};

	


	for (int x = 0; x < 3; x++) {
		int count{};
		for (int y : studentId[x]) {
			std::cout << x + 1 << "班，第" << ++count << "个同学的学号是:" << y << std::endl;
		}
	}

	return 0;
}

