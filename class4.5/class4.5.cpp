// class4.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <bitset>

void homework() {
	unsigned int lights{ 0x00 };
	std::cout << "俱乐部的灯光使用32个数字表:0表示关闭，1表示打开" << std::endl;
	std::cout << "台球部、桌游区、酒吧区、休息区从做到右分别用8个数字表示";
	std::cout << "1.输入数字的位置控制对应的灯:可以输入（1-32）:";
	unsigned int open{};
	std::cin >> open;
	open = 0x80000000 >> (open - 1);
	lights = lights | open;
	std::cout << "所有的灯的情况为:" << std::bitset<32>(lights) << std::endl;
	std::cout << "2.输入数字的位置控制区域的灯:可以输入（1-4）:";
	unsigned int area{};
	std::cin >> area;
	area = 0xFF000000 >> ((area - 1) << 3);
	lights = lights | area;
	std::cout << "所有的灯的情况为:" << std::bitset<32>(lights) << std::endl;


	return;
}


int main()
{
	homework();

	int test1{ 0x2833 };	// 0x0000
	int test2 = test1 & 0xFF00;
	std::cout << std::showbase << std::hex;
	std::cout << test2 << std::endl;

	int test3 = test1 | 0x00FF;
	std::cout<< test3 << std::endl;

	int test4 = test1 ^ 0xFF00;
	std::cout << test4 << std::endl;

	std::cout << std::noshowbase << std::dec;
	int test{ 100 };
	test >>= 1;
	std::cout << test << std::endl;
	test = -100;
	test >>= 1;
	std::cout << test << std::endl;

	int a{ (int)0b11111111111111111111111111111111 };
	std::cout << a << std::endl;
	std::cout << std::bitset<32>(a) << std::endl;
	
	a <<= 8;
	std::cout << std::bitset<32>(a) << std::endl;

	unsigned b{ (unsigned int)a };	// 对于无符号数，右移高位补0
	b >>= 7;
	std::cout << std::bitset<32>(b) << std::endl;

	a >>= 8;	// 对于有符号数，右移高位可能补1或者0,由计算机决定。
	std::cout << std::bitset<32>(a) << std::endl;

	int c{ 100 };
	c >>= 2;
	std::cout << std::bitset<32>(c) << std::endl;

	return 0;
}

