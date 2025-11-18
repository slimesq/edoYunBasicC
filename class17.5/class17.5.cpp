// class17.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

typedef char(*pfAdd)(int, int);	// 声名一个函数指针类型

using pFadd = char(*)(int, int); // 声名一个函数指针类型

using pRole = int (*)(int hp, int mp);

struct Role {
	int hp;
	int mp;
};

int Test(int a, int b, pRole x) {
	return x(a, b);
}

int Exp(Role r1) {
	return r1.hp + r1.mp;
}

int AddX(int a, int b) {
	return a + b;
}

int Add(int a, int b) {
	return (a + b) / 2;
}

int main()
{
	std::cout << Test(120, 2301, AddX) << std::endl;
	std::cout << Test(120, 2301, Add) << std::endl;

	Role r1{ 100,350 };
	std::cout << Exp(r1) << std::endl;
	pRole pExp =  (pRole)Exp;
	std::cout << pExp(100,350) << std::endl;

	char (*pAdd)(int, int) = (pfAdd)Add;	// 声名一个函数指针
	pFadd pAdd1 = (pFadd)Add;
	std::cout << sizeof(pAdd) << " " << pAdd(110, 20) << std::endl;
	std::cout << sizeof(pAdd1) << " " << pAdd1(110, 20) << std::endl;
	
	return 0;
}

