// class16.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

struct Role {
	int Hp;
	int Mp;
	int damage;
};

int Exp(const Role* r1) {
	//r1->Hp = 500;	// ERROR
	return r1->Hp + r1->Mp;
}

int Add(int* x, int* y) {
	*x *= 100;
	*y *= 10;
	return (*x) * (*y);
}

bool Act(const Role* Acter, Role* beActer) {
	beActer->Hp -= Acter->damage;
	return beActer->Hp <= 0;
}

int main()
{
	int x = 2, y = 1;
	int c = Add(&x, &y);
	std::cout << "c = " << c << ", x = " << x << ", y = " << y << std::endl;

	Role r1{ 500,1250 };
	c = Exp(&r1);
	std::cout << "exp = " << c << std::endl;

	Role User{ 1000,1500,1500 };
	Role Monster{ 1500,100,100 };

	/*
		bool  
		打人者
		被打者
	*/
	
	if (Act(&Monster, &User)) std::cout << "角色死亡!\n";
	if (Act(&User, &Monster)) std::cout << "怪物死亡!获得屠龙宝刀!\n";


	return 0;
}
