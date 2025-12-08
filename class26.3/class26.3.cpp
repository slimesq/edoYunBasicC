// class26.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class MoveObject {
public:
	int x{0};
	int y{0};

	MoveObject() {
		//std::cout <<"MoveObject : "<< this << std::endl;
		Move();
	}

	virtual ~MoveObject() {
		std::cout << "~MoveObject"  << std::endl;
		//Move();
	}

	virtual void Move() {
		//std::cout << "MoveObject Moving~\n";
	}

	virtual void AutoMove(int step = 2) {
		std::cout << "MoveObject auto move" << step << std::endl;
	}

	void test() {
		MoveObject::Move();	// 等价于 this-> Move()
	}
};

class MonsterObject :public MoveObject {
public:
	MonsterObject() {
		//std::cout << "MonsterObject : " << this << std::endl;
	}
	~MonsterObject() {
		std::cout << "~MonsterObject" << std::endl;
		//Move();
	}
	void Move() override {
		//std::cout << "MonsterObject Moving~\n";
	}
	virtual void AutoMove(int step = 3) {
		std::cout << "MonsterObject auto move" << step << std::endl;
	}
};

int main() { 
	/*
	MonsterObject snake;
	//snake.test();
	
	MoveObject* p = &snake;
	//p->AutoMove();
	//(&snake)->AutoMove();
	*/
	
	MoveObject* p{ new MonsterObject() };
	p->AutoMove();
	delete p;

	return 0;
}
