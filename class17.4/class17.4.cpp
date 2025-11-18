// class17.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <bitset>

int Add(int a, int b) {
	return a + b;
}

int main()
{
	int c = Add(0x1234, 2);

	std::cout << Add;

	char* str = (char*)Add;

	for (int i = 0; i < 30; ++i) {
		printf("%02X\n", (unsigned char)str[i]);
		//std::cout << std::bitset<8>(str[i]) << std::endl;
	}

	return 0;
}

