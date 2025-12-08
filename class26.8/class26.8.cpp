// class26.8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class DOG {
	void GrouUP0() {
		std::cout << "狼成长到一阶段" << std::endl;
	}
};

class WOLF;
typedef void (WOLF::*PGROUP)();

class WOLF {
public:
	static void count() {
		std::cout << "count" << std::endl;
	}

	WOLF() {
		pGroup = &WOLF::GrouUP0;
		(this->*pGroup)();
	}

	void GrouUP0() {
		std::cout << "狼成长到一阶段" << std::endl;
	}
	void GrouUP1() {
		std::cout << "狼成长到二阶段" << std::endl;
	}
	void GrouUP2() {
		std::cout << "狼成长到三阶段" << std::endl;
	}

	PGROUP pGroup;
};

typedef void(*COUNT)();
typedef void(*pfunc)(WOLF* pwolf);

int main()
{
	PGROUP pFunction;
	WOLF* pWolf = new WOLF();
	//pFunction = &X;		// ERROR
	//pFunction = &DOG::GrouUP0;	// ERROR
	pFunction = &WOLF::GrouUP2;

	(pWolf->*pFunction)();

	COUNT count = WOLF::count;
	count();

	return 0;
}