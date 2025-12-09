// class25.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
};

class mapObject : public object {
public:
	int mapId;
	mapObject(){
		std::cout << "mapObject was created\n";
	}
	mapObject(int x){
		std::cout << "mapObject was created\n";
	}
	mapObject(int x,int y){
		std::cout << "mapObject was created\n";
	}
	mapObject(const mapObject& obj):object(obj) {
		std::cout << "mapObject was created by copy!\n";
	}
};

class actObject : public mapObject {
public:
	/*
	* using mapObject::mapObject;	
	* 只会将普通有参构造函数包含过来：mapObject(int x);mapObject(int x,int y);
	* mapObject的默认构造函数和拷贝构造函数没有过来。
	*/
	using mapObject::mapObject;	
	int damage;
	actObject() :damage{ 100 } {
		mapId = 2500;
		std::cout << "actObject was created\n";
	}
	actObject(const actObject& obj):mapObject(obj){
		std::cout << "actObject was created by copy!\n";
	}
};

int main()
{
	actObject obj;
	actObject obj2 = obj;
	actObject obj3{ 100,200 };
	return 0;
}
