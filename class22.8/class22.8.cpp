// class22.8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class ROLE {
public:
	int hp;
	void BeAct(int damage) {
		hp = hp - damage;
		std::cout << "BeAct" << damage << std::endl;
	}
	void _stdcall BeAct1(int damage,int damge2) {
		hp = hp - damage;
		std::cout << "BeAct" << damage << std::endl;
	}
	void _cdecl BeAct2(int damage,int damge2) {
		hp = hp - damage;
		std::cout << "BeAct" << damage << std::endl;
	}
};

int main()
{
	ROLE player;
	//player.BeAct(20);
	player.BeAct1(1,2);
	//player.BeAct2(1,2);

	return 0;
}

