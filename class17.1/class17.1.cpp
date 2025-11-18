// class17.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdarg>

struct SArg {
	int count;  //参数的个数
	char* cMem;
};


int Average(int count, ...) {
	// va_list arg;
	char* arg;
	va_start(arg, count);

	int sum{ 0 };

	for (int i{ 0 }; i < count; i++) {
		//std::cout << "\narg" << (int)arg;
		int x = va_arg(arg, int);
		//std::cout << x << std::endl;
		sum += x;
	}

	va_end(arg);

	sum = sum / count;
	return sum;
}

int Ave(SArg y) {

	int sum{ 0 };

	int* ary = (int*)y.cMem;

	for (int i{ 0 }; i < y.count; i++) {
		sum += ary[i];
	}

	sum = sum / y.count;
	return sum;
}


int main()
{
	int x = Average(5,562,321,256,541,120);
	std::cout << "平均数:" << x;


	SArg y;
	y.count = 5;
	y.cMem = (char*)new int[5] { 562, 321, 256, 541, 120};
	x = Ave(y);
	std::cout << "\n平均数:" << x;

	return 0;
}

