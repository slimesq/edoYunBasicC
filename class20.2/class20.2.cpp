// class20.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#define 整数 int
//#define a%d int
//#define 111 int
#define VERSION "2.0.1"

#define SCREEN_WIDTH 1980

#define X
#define _in_
#define __out__
#define functionPtr

#define SUM(X,Y) X + Y *3;
#define RELEASE(x) delete[] x;x=nullptr;
#define BIGGER(X,Y) ((X)>(Y)?(X):(Y));

int ave(_in_ int a, functionPtr int& b) {
	return a + b;
}

#define SHOW(X) std::cout << #X;
#define SHOW(X,Y) void X##Y(){std::cout << #X;}

SHOW(hai, hol);

int main()
{
	整数 a{ 25 };
	//a% d a{ 25 };
	std::cout << a << std::endl;

	std::cout << VERSION << std::endl;
	std::cout << SCREEN_WIDTH << std::endl; 

	int X b{ 2500 };
	std::cout << b << std::endl;

	std::cout << SUM(100,200);

	int* pa = new int[50];
	RELEASE(pa);
	std::cout << std::endl << pa << std::endl;

	std::cout << BIGGER(100,200);
	std::cout << std::endl;

	SHOW(2333);
	std::cout << std::endl;
	//SHOW(233333dgfagadaf);

	haihol();


	return 0;
}
