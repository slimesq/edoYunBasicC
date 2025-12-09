// class25.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class MoveObject {
public:
	int x;
	int y;
};

class Wolf :public virtual MoveObject {
public:
	void eat() {
		std::cout << "Wolf Eat!\n";
	}
	void bite() {
		std::cout << "Wolf Bite!\n";
	}
};

class Man :public virtual MoveObject {
public:
	void eat(int x) {
		std::cout << "Man eat!\n";
	}
};

class WolfMan :public Wolf, public Man {
public:
	//using Wolf::eat;
	void Change() {
		IsWolf = !IsWolf;
		std::cout << "变身" << std::endl;
	}
	/*
	void eat() {
		if (IsWolf) {
			Wolf::eat();
		}
		else {
			Man::eat();
		}
	}
	*/

private:
	bool IsWolf = false;
};

int main()
{
	WolfMan Jack;
	Jack.bite();
	//Jack.Change();	//变身
	//Jack.eat();

	Jack.Wolf::x = 250;
	Jack.Wolf::y = 350;
	std::cout << Jack.Wolf::x << std::endl;
	std::cout << Jack.Wolf::y << std::endl;
	std::cout << Jack.Man::y << std::endl;
	return 0;
}
