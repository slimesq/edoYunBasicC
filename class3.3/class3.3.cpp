// class3.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int x{ 100 };
	int y{};
	y = 100 * (x + 1);
	std::cout << y << std::endl;



	int b{ 100 };
	//int end;
	//end = b % 6;
	//std::cout << end << std::endl;
	
	//b = b % 6;
	b %= 6;
	std::cout << b << std::endl;

	int a{ 10 };
	int send{ ++a + 5 }; //运算结果
	/*
		send = ++a+5;
		++a => a = a + 1;
		send = a + 5;
	*/
	std::cout << "先递增示范: send = " << send << " a = " << a << std::endl;

	a = 10;
	send = 5 + a++;
	/*
		send = 5 + a++;
		send = 5 + a;
		a++ => a = a + 1;
	*/
	std::cout << "后递增示范: send = " << send << " a = " << a << std::endl;

	a = 10;
	send = 5 + --a;
	/*
	send = 5 + --a;
	--a => a = a - 1;
	send = 5 + a;
	*/
	std::cout << "先递减示范: send = " << send << " a = " << a << std::endl;

	a = 10;
	send = 5 + a--;
	/*
	send = 5 + a--;
	send = 5 + a;
	a-- => a = a - 1;
	*/
	std::cout << "后递减示范: send = " << send << " a = " << a << std::endl;

	return 0;
}
