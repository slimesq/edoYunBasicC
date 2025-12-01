// class24.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "hint.h"

int main(){
	hint val{ 100 };
	std::cout << val++ << std::endl;
	std::cout << val-- << std::endl;

	std::cout << ++val + 200 << std::endl;

	//val++++; //ERROR

	return 0;
}