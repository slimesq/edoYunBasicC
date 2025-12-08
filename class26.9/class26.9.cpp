// class26.9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <Windows.h>

void Hack() {
	std::cout << "HHHHHHHHHHHHHHHHHHHH" << std::endl;
}

class ATM {
public:
	// [unkown]
	int HP;	// +0x0
	virtual void Eat() {
		std::cout << "ATM" << std::endl;
	}
	virtual void Die() {
		std::cout << "ATM-DIE" << std::endl;
	}
};

class WOLF :public ATM {
public:
	virtual void Eat() override{
		std::cout << "WOLF" << std::endl;
	}
	virtual void Die() override {
		std::cout << "WOLF-DIE" << std::endl;
	}
	void Sound() {
		std::cout << "aoaoaoao~" << std::endl;
	}
};

int main()
{
	ATM* wolf = new WOLF();
	wolf->Eat();

	std::cout << sizeof(ATM) << std::endl;
	std::cout << wolf << "   " << &wolf->HP << std::endl;


	unsigned* vtable = (unsigned*)wolf;
	std::cout << std::hex << "VTABLE: " << vtable[0] << std::endl;
	unsigned* func = (unsigned*)vtable[0];

	std::cout << std::hex << "eat " << func[0] << std::endl;
	std::cout << std::hex << "die " << func[1] << std::endl;

	// 
	DWORD old;
	VirtualProtect(func, 8,PAGE_EXECUTE_READWRITE,&old);
	
	func[0] = (unsigned)Hack;
	func[1] = (unsigned)Hack;
	wolf->Eat();

	//WOLF aWolf;
	//aWolf.Sound();

	//ATM* _aim = new WOLF();
	//_aim->Eat();

	// (不是指针)不会访问虚函数表，因为不存在动态多态的问题
	WOLF aWolf;
	aWolf.Eat();


	return 0;
}
