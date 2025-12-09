// class25.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class object {
public:
	char Name[0x20];
};

class mapObject :public object {
protected:
	int x;
	int y;
protected:
	int t;
private:
	int xxx;
};

class MoveObject :private mapObject {
private:
	int hp;
	int lv;
protected:
	int getHP() { return hp; }
	int vip;
public:
	MoveObject() {
		x = 100;
		t = 200;
	}
};

class ActObject : public MoveObject {
public:
	using MoveObject::getHP;
	ActObject() {
		//x = 100;	// ERROR
		vip = 100;
	}
};

int main()
{
	ActObject npc;
	//npc.getHP();

	return 0;
}

