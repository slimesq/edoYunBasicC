// class13.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

typedef struct Role 
{
	short id;
	short x;
	int HP;
	int MP;
	//char a;
}* PRole;

int main()
{
	Role user;
	std::cout << "sizoef(Role) = " << sizeof(Role) << std::endl;
	PRole puser = &user;
	puser->HP = 50;
	puser->MP = 50;
	std::cout << user.HP << std::endl;
	user.HP = 500;
	user.MP = 500;

	return 0;
}





