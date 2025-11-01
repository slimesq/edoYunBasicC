// class8.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	for (int a = 0; a <= 100; a++) {
		for (int b = 0; b <= 100; b++) {
			for (int c = 0; c <= 100; c++) {
				if ((a + b + c == 100) && (a * 500 + b * 300 + c * 100 / 3) == 10000) {
					std::cout << "高级桌子采购:" << a << "张,桌子采购" << b << "张,椅子采购" << c << "把\n";
				}
			}
		}
	}
	std::cout << std::endl;
	// 循环次数100*100*100 = 100W

	int acount = 10000 / 500;	// 20
	int bcount = 10000 / 300;	// 33
	for (int a = 0; a <= acount; a++) {
		for (int b = 0; b <= bcount; b++) {
			int c = 100 - a - b;
			if (c % 3 != 0) continue;
			if ((a * 500 + b * 300 + c * 100 / 3) == 10000) {
				std::cout << "高级桌子采购:" << a << "张,桌子采购" << b << "张,椅子采购" << c << "把\n";
			}
		}
	}
	std::cout << std::endl;
	//循环次数20*33 = 660

	// 转化为参数方程 b = 25 - (7/4)*a; c = 75 + (3/4)*a;
	// 利用a必须为整数的特性，令 a = 4*num;b = 25 - 7*num; c = 75 + 3*num;
	// 利用b >= 0; 即num <= 3
	for(int num{}; num <= 3; num++){
		std::cout << "高级桌子采购:" << num*4 << "张,桌子采购" << 25-num*7 << "张,椅子采购" << 75+3*num << "把\n";
	}
	// 循环3次

	return 0;
}

