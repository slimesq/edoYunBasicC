// class21.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Role.h"

class P {

};

int main()
{
	Role user;
	Role monster;

	//user.Act(monster);
	//monster.Act(user);

	std::cout << "sizoef(user) = " << sizeof(user) << std::endl;

	P p;
	std::cout << "sizeof(P)" << sizeof(P) << std::endl;
	std::cout << "sizeof(p)" << sizeof(p) << std::endl;

	user.SetLv(100).SetDamage(50).SetHp(500).Act(monster);
	Role* biggerRole = user.bigger(&monster);

	return 0;
}
