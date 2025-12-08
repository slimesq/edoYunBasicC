// class25.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class Object {
	int data_0 = 1;
	int data_1 = 2;
public:
	int data_2 = 3;
	int data_3 = 4;
	
	Object(){
		std::cout << "Object" << std::endl;
	}
};

class thingObject:public virtual Object {
	int Tdata_0 = 61;
	int Tdata_1 = 62;
public:
	int Tdata_2 = 63;
	int Tdata_3 = 64;

	thingObject() {
		std::cout << "thingObject" << std::endl;
	}
};

class MoveObject :public virtual Object{
	int Mdata_0 = 21;
	int Mdata_1 = 22;
public:
	int Mdata_2 = 23;
	int Mdata_3 = 24;
	MoveObject() {
		std::cout << "MoveObject" << std::endl;
	}
};

class NPC :public MoveObject,public thingObject {
	int Ndata_0 = 31;
	int Ndata_1 = 32;
public:	
	int Ndata_2 = 33;
	int Ndata_3 = 34;
	NPC() {
		std::cout << "NPC" << std::endl;
	}
};

int main()
{
	NPC obj1;
	obj1.data_2 = 2;
	int* nRead = (int*)&obj1;
	for (int i = 0; i < sizeof(obj1)/4; ++i) {
		std::cout << "内存地址:" << &nRead[i] << " 值:" << nRead[i] << std::endl;
	}
}
