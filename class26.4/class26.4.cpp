// class26.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class MoveObject {
public:
	int x;
};

class MonsterObject :public MoveObject {

};

class NPCObject :public MoveObject {

};

class WOLF :public MonsterObject {};

class MAN :MonsterObject {};

class WOLFMAN :public WOLF, public MoveObject {};

int main()
{
	/*
	MonsterObject monster;
	MoveObject* _move = (MoveObject*) & monster;	// 隐式类型转换 向上转型
	//MonsterObject* _pmonster = _move;	//  隐式类型转换 向下转型不允许
	MonsterObject* _pmonster = (MonsterObject*)_move;	// 强制类型转换
	//MonsterObject* _pmonster = static_cast<MonsterObject*>(_move);
	*/

	WOLFMAN wolfman;

	void* ptr = &wolfman;
	/*
	WOLF* pWlf = (WOLF*)ptr;	// void* => WOLF*
	MAN* pMan = (MAN*)ptr;		// void* => MAN*
	std::cout << ptr << " " << pWlf << " " << pMan << std::endl;	// ptr == pWlf == pMan
	*/

	/*
	WOLF* pWlf = (WOLF*)&wolfman;	// WOLFMAN* => WOLF*
	MAN* pMan = (MAN*)&wolfman;		// WOLFMAN* => MAN*
	std::cout << ptr << " " << pWlf << " " << pMan << std::endl;	// ptr == pWlf,  ptr != pMan
	*/

	wolfman.::WOLF::MonsterObject::MoveObject::x = 2500;	
	wolfman.::MoveObject::x = 3500;	
	
	MoveObject* _move{ static_cast<MoveObject*>( &wolfman)};
	std::cout << _move->x << std::endl;


	return 0;
}
