// class16.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

typedef struct Role {
	char name[0x20];
	int hp;
	int mp;
	int damage;
}* PRole;

bool Act(const Role& Acter, PRole& beAct) {
	beAct->hp -= Acter.damage;
	bool bEnd = beAct->hp < 0;

	beAct = (Role*) & Acter;

	return bEnd;
}


int main()
{
	Role user{"奥特曼",200,300,850 };
	Role monster{"小怪兽", 800,300,50};

	PRole pRole = &monster;

	int a = 250;
	//int& b;// ERROR

	if (Act(user, pRole)) std::cout << pRole->name << "怪物死亡,获取经验值xxxxx" << std::endl;
	 
	return 0;
}

