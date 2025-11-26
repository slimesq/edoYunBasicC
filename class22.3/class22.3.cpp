// class22.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class T1;

class T {
	int hp;
	int mp;
	void GetHP() {
		std::cout << hp;
	}
	void GetMP() {
		std::cout << mp;
	}
	friend void SetHP(T& t1, T1& t2);
	friend void SetMP(T& t1, T1& t2);
};

class T1 {
	int hp;
	int mp;
	void GetHP() {
		std::cout << hp;
	}
	friend void SetHP(T& t1,T1& t2);
	friend void SetMP(T& t1,T1& t2);
};

void SetHP(T& t1, T1& t2) {
	t1.hp = 2500;
	t1.GetHP();
}

void SetMP(T& t1, T1& t2) {
	t1.mp = 2000;
	t1.GetMP();
}

int main()
{
	return 0;
}