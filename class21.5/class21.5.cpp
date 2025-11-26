// class21.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Role.h"

int main()
{
	Role role(100, 200);
	std::cout << "hp = " << role.GetHp() << std::endl;

	std::cout << std::endl << std::endl;
	Role role2 = role;

	role2 = role;

	return 0;
}
