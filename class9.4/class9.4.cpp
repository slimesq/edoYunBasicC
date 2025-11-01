// class9.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int password{ 98620154 };
	int crackPass{};
	//goto 版本
lcrack:
	if (crackPass != password) {
		crackPass++;
		goto lcrack;
	}
	std::cout << "路由PIN = " << crackPass << std::endl;

	// for
	for (crackPass = 0; crackPass != password; crackPass++);
	std::cout << "路由PIN = " << crackPass << std::endl;

	//while
	crackPass = 0;
	while (crackPass != password) crackPass++;
	std::cout << "路由PIN = " << crackPass << std::endl;

	crackPass = -1;
	do {
		crackPass++;
	} while (crackPass != password);
	std::cout << "路由PIN = " << crackPass << std::endl;


	return 0;
}

