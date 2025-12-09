// class25.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class object /*final*/ {
public:
	char Name[0x20];
};

class mapObject :public object {
protected:
	int x;
	int y;
protected:
	int t;
};

class MoveObject :public mapObject {
public:
	int hp;
	int lv;
protected:
	int vip;

	MoveObject() {
		t = 200;
	}

};

int main()
{
	std::cout << sizeof(object) << std::endl;
	std::cout << sizeof(mapObject) << std::endl;
	std::cout << sizeof(MoveObject) << std::endl;

	int final = 250;

	return 0;
}

