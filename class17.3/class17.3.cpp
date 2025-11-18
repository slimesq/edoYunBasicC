// class17.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

struct Role {
	int hp;
	int mp;
};

Role CreateMonster() {
	Role rt{ 100,200 };
	return rt;
}

void Show(Role&& r1) {
	std::cout << r1.hp;
}


void Add(int&& a) {
	std::cout << a;
}

int main()
{
	int c = 320 + 250;
	int& d = c;
	int&& e = 320 + 230;
	Add(c + 325);	
	//Add(320 + 250);	
	e = 1500;
	std::cout <<"\ne = "<< e << std::endl;

	Show(CreateMonster());


	return 0;
}

