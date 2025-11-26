#pragma once
class Role
{
private:
	int hpRecover;
	void Init();
public:
	int hp;
	int lv;
	int damage;
	void Act(Role& role);
	int GetHp();
	Role* bigger(Role* role);
	Role& SetLv(int _lv);
	Role& SetDamage(int _lv);
	Role& SetHp(int _lv);
};

