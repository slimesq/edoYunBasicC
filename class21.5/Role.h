#pragma once
#include <iostream>

class Role
{
private:
	int hpRecover;
	void Init();
public:
	bool IsBig(Role r1) {
		return r1.GetLv() > lv;
	}

	Role(int _lv, int _damage) : lv{ _lv }, damage{ _damage }, hp{lv*100} {
		std::cout << "lv:" << lv << "damage:" << damage << std::endl;
		lv = 300;
		damage = 500;
		std::cout << "lv:" << lv << "damage:" << damage << std::endl;
	}

	Role(int _lv) {
		std::cout << _lv << "Role(int)\n";
		lv = _lv;
	}

	Role(int _lv,int _mp,int _damage) :Role(_lv) {
		hp = lv * 100;
	}

	Role(Role& role) :hp{ role.hp }, lv{ role.lv }, damage{ role.damage } {
		std::cout << "Role(Role&)" << std::endl;
	}

	int lv;
	int hp;
	int damage;
	void Act(Role& role);
	int GetHp();
	Role* bigger(Role* role);
	Role& SetLv(int _lv);
	int GetLv() {
		return lv;
	}
	Role& SetDamage(int _lv);
	Role& SetHp(int _lv);
};

