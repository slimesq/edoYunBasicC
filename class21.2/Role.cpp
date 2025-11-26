#include "Role.h"

void Role::Act(Role& role) {
	role.hp -= damage;
}

void Role::Init() {
	hpRecover = 3;
}

inline int Role::GetHp() {
	return hp;
}

Role* Role::bigger(Role* role) {
	return 	hp > role->hp ? this : role;
}

Role& Role::SetLv(int _lv) {
	lv = _lv;
	return *this;
}

Role& Role::SetDamage(int _damage) {
	damage = _damage;
	return *this;
}

Role& Role::SetHp(int _hp) {
	hp = _hp;
	return *this;
}