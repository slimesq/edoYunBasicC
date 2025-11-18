// class19.8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
int __stdcall ave(int a, int b){
	return (a + b) / 2;
}

int main()
{
	ave(1, 2);
	return 0;
}

