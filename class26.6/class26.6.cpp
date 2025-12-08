// class26.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class  MoveObject {
	virtual void test() {};
};

class Monster: public MoveObject{};

int main()
{
	//long long a;
	//std::cout << typeid(a).name() << std::endl;

	/*
	MoveObject* _move{ new MoveObject };
	_move = new Monster();
	std::cout << typeid(*_move).name() << std::endl;
	*/

	Monster wolf;
	MoveObject& lMove = wolf;
	std::cout << typeid(lMove).name() << std::endl;


	//int a;
	//if (typeid(a) == typeid(int)) {
	//	std::cout << "Right" << std::endl;
	//}
	if (typeid(lMove) == typeid(Monster)) {
		std::cout << "Right";
	}



	return 0;
}
