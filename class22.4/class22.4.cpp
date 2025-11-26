// class22.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class Role {
	enum class WeaponLv {
		normal = 0,
		high,
		rare,
		myth
	};
public:
	class Weapon {
	public:
		static int hahh;
		static void test1();
		void test2();
		Weapon* ReturnW();
		Weapon();
		~Weapon();
	private:
		short lv;
		WeaponLv wlv;
	};
	Role() {
		Role::Weapon::test1();
		//Role::Weapon::hahh = 1;
	}
	static void test(){
		std::cout << "Role::Test" << std::endl;
	}

	void test3() {
		//Weapon::test1();
		//Weapon::test2();
	}

private:
	int hp;
	int mp;
};

Role::Weapon::Weapon() {
	std::cout << "weapon\n";
	test();
	//test3();	// ERROR 没有外部类的对象
	//std::cout << hp << std::endl;		// ERROR 没有外部类的对象
	Role role;
	role.hp = 1;
} 

Role::Weapon::~Weapon() {
	std::cout << "~weapon\n";
}

Role::Weapon* Role::Weapon::ReturnW() {
	return this;
}

int main()
{
	Role r1;
	Role::Weapon wpl;
	
	int testHP;
	class T {
		int hp;
		int mp;

		void GetHP() {
			//testHP = 1;	// ERROR
		}
	};
	
	T t1;

	return 0;
}

void Test() {
	//T t1;	 // ERROR
}

