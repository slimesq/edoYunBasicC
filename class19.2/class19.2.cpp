// class19.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int ave(int xxx, int asas);
int ave(int aaaa, int bbbb);
int ave(int cccc, int dd);
int ave(int xxxd, int asdas);
int ave(int xxx, int asas);
int ave(int xxx, int asas);
extern int ave(int xxx, int asas);
int pve();

int pve() {
	return ave(1, 2);
}

extern int all;
extern int all;
extern int all;
extern int all;
extern int all;
extern int all;

int main()
{
	//extern int x1;
	//x1 = 250;
	int all = 200;
	int x = 1;
	int c = ave(1, 2);
	std::cout << c << std::endl;
	return 0;
}

int ave(int a, int b) {
	return (a + b) / 2;
}