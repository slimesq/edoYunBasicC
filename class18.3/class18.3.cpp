// class18.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

template<typename type1>
type1 bigger(type1 a, type1 b) {
	return a > b ? a : b;
}

int bigger(int a, int b) {
	return a > b ? a : b;
}

float* bigger(float* a, float* b) {
	return *a > *b ? a : b;
}

template<>
int* bigger(int* a, int* b) {
	return *a > *b ? a : b;
}

template<typename T>
T ave(T a, T b, T c) {
	T x = a * b;
	return (a + b + c +  x) / 3;
}

int main()
{
	int a{ 100 }, b{ 200 };
	int c;
	c = bigger(a, b);
	c = *bigger(&a, &b);
	std::cout << c;
	
	return 0;
}

