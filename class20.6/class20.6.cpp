// class20.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

//#define _DBG_FOR_

int ave(int a, int b) {
	return (a + b) / 2;
}

int main()
{
	int sudentId[3][4]{
		{1001,1002,1002,1004},
		{2001,2002,2002,2004},
		{3001,3002,3002,3004},
	};

	int b{};
	for (int x = 0; x < 3; x++) {
		for (int y : sudentId[x]) {

			b++;
#ifdef _DBG_FOR_
			std::cout << b << std::endl;
#endif // _DBG_FOR_

			std::cout << x + 1 << "班 第" << b << "个学生 学号是" << y << std::endl;
		}
	}

	return 0;
}
