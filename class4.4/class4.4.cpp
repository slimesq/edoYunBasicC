// class4.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int a{ 10 };
	++a;
	a++;

	int b{ 5 };
	int c{};
	c = b + a++;	// c = b + a; a = a + 1;
	c = b + ++a;	// a =a + 1; c = b + a;

	//想想以下运算的优先级
	c = b+++a;		//c = b++ + a
	c = b---a;		//c = b-- - a;
	c = 3*-b+++a;	//c = 3 * -b++ + a
	c = 2*-b---a;	//c = 2 * -b-- - a


	return 0;
}