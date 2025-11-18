// class18.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
template<typename type1>
type1 bigger(type1 a, type1 b) {
	return a > b ? a : b;
}

template<typename T>
T ave(T a, T b, T c) {
	return (a + b + c) / 3;
}

int main()
{
	int a{ 200 }, b{ 100 }, c{ 100 };
	c = *bigger(&a, &b);	// 和预期不符合
	std::cout << c << std::endl;

	const int& la{ a };
	const int& lb{ b };
	c = bigger(la, lb);
	std::cout << la << lb  << std::endl;

	std::cout << ave<int>(12.0f, 250, 35.395f) << std::endl;
	std::cout << ave(12.0f, 250.f, 35.395f) << std::endl;
	std::cout << ave(13,12, 13) << std::endl;
	std::cout << ave((char)33,(char)33, (char)33) << std::endl;
	//std::cout << ave(13,12, 13.0f) << std::endl;	// ERROR
	
	return 0;
}
