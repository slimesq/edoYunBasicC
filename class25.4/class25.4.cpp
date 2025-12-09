// class25.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class object {
public:
	int x;
	int y;
	object() {
		std::cout << "object was created\n";
	}
	object(const object& obj) {
		std::cout << "object was created by copy!\n";
	}
	~object() {
		std::cout << "object was ~\n";
	}
	void showX(int p) {
		std::cout << "object>>" << p << std::endl;
	}
	void showX(int p,int q) {
		std::cout << "object>>" << p <<" " << q << std::endl;
	}
};

class mapObject : public object {
public:
	int x;
	int mapId;
	mapObject() {
		x = 2500;
		object::x = 250;
		std::cout << "mapObject was created\n";
	}
	mapObject(const mapObject& obj) :object(obj) {
		std::cout << "mapObject was created by copy!\n";
	}
	mapObject(int id) :mapId{ id } {
		std::cout << id << std::endl;
	}
	mapObject(int id, int id2) :mapId{ id } {
		std::cout << id << std::endl;
	}
	~mapObject() {
		std::cout << "mapObject was ~\n";
	}
	using object::showX;
};

class actObject : public mapObject {
public:
	int damage;
	actObject() :mapObject{ 100 }, damage{ 100 } {
		mapId = 9652;
		std::cout << "actObject was created\n";
	}
	actObject(const actObject& obj) :mapObject(obj) {
		std::cout << "actObject was created by copy!\n";
	}
	~actObject() {
		std::cout << "actObject was ~\n";
	}
	void showX(int p) {
		std::cout << "actObject>>" << p << std::endl;
	}
};


int main()
{
	actObject obj;

	mapObject map;
	std::cout << map.x << std::endl;
	std::cout << map.::object::x << std::endl;

	obj.showX(120);
	obj.::mapObject::showX(240);
	obj.::mapObject::object::showX(240);
	obj.::object::showX(240);
	obj.::mapObject::object::showX(240,360);
	obj.::object::showX(240,360);

	return 0;
}
