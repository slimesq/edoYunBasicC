// class23.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "hstring.h"

class Role {
public:
	int hp;
	int mp;

	const Role& operator=(const Role& role);
};

const Role& Role::operator=(const Role& role)
{
	hp = role.hp;
	mp = role.mp;
	return *this;
}

int main()
{
	/*
	Role x, y,z;
	x.hp = 100;
	x.mp = 200;
	z = y = x;
	std::cout << y.hp << "///////////" << y.mp << std::endl;
	std::cout << z.hp << "///////////" << z.mp << std::endl;
	*/
	
	char strA[]{ "你好易道云!" };
	hstring str{ strA };
	hstring str1{ str };
	hstring str2{ "hello!" };
	std::cout << str1.c_str() << std::endl;
	str1 = str2;
	std::cout << str1.c_str() << std::endl;

	hstring str3;
	str3 = strA;
	std::cout << str3.c_str() << std::endl;

	hstring str4;
	str4 = 123LL;
	std::cout << str4.c_str() << std::endl; 

	hstring str5;
	str5 = 123.456f;
	std::cout << str5.c_str() << std::endl;

	/*
	std::cout << str.c_str() << std::endl;
	strA[0] = 'B';
	std::cout << str.c_str() << std::endl;
	std::cout << str1.c_str() << std::endl;
	*/
	
	return 0;
}
;