// class16.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int Add(int a, int b) {
	return 100 * a + 10 * b;
}

void PtintEnding(const char* str, int x) {
	std::cout << str << x << std::endl;
}

int main()
{
	int x{ Add(1,2) };
	PtintEnding("生命值:",x);
	x = Add(3, 4);
	PtintEnding("魔法值:",x);

	return 0;
}
