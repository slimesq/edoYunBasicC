// class21.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Role.h"

void test(Role* p) {
	p->SetHp(5000);
}

int main()
{
	const Role user{};
	Role monster;

	const Role* puser{ &monster };
	//puser->damage = 2;	// Error
	
	//user.GetHp();

	//monster.Getlv() = 200;
	std::cout << monster.Getlv() << std::endl;

	user.getDamage();
	monster.getDamage();

	test((Role*)(&user));
	std::cout << user.GetHp() << std::endl;

	test(const_cast<Role*>(&user));

	return 0;
}
