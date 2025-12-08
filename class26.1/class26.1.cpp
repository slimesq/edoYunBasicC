// class26.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class Animal {
public:
	int Age;
	virtual void beAct() {
		std::cout << "Animal" << std::endl;
	}
};

class Human :public Animal {
public:
	int Money;
	void doit() {
		std::cout << "Do it" << std::endl;
	}
	void beAct() {
		std::cout << "Human" << std::endl;
	}
};

void BeAct(Human* hum) {
	std::cout << "Human" << std::endl;
}
void BeAct(Animal* anm) {
	std::cout << "Animal" << std::endl;

}

int main()
{
	Human laow;
	Animal dog;
	Animal* bA{ nullptr };

	int id;
	std::cin >> id;

	if (id) {
		bA = &dog;
	}
	else {
		bA = &laow;
	}
	bA->beAct();


	//BeAct(&laow);
	//BeAct(&dog);
	/*
	Human laow;
	laow.Age = 350;
	laow.Money = 520;
	//Animal anm{ laow };
	Animal* anm = &laow;

	Human* hman = (Human*)anm;
	hman->doit();
	*/
}

