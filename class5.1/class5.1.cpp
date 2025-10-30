// class5.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define Normal 0
#define High 1
#define Rare 2
#define Epic 3
#define Myth 5
#define Legend 4


int main()
{
	short weaponLv;

	weaponLv = High; //高级装备
	short weaponALv = Legend;	//传说
	short weaponBLv = Myth;	// 传说

	/*新知识*/

	enum class EquipLv :int
	{
		normal = 10,armyA = normal,
		high, armyB = high,
		rare, armyC = rare,
		epic, armyD = epic,
		legend, armyE = legend,
		myth = 100, armyS = myth,
	};

	EquipLv weaponCLv{EquipLv::normal};
	EquipLv weaponDLv{ EquipLv::myth };

	short diff = (int)weaponDLv - (int)weaponCLv;
	std::cout << "这两个装备的等级差:" << diff;

	weaponDLv = EquipLv::rare;

	return 0;
}