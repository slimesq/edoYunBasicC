// class22.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class T {
	int hp;
	int mp;
	inline static int count{ 0 };
public:
	int Add(int a, int b) {
		return mp + a + b;
	}

	//T() :hp{ 10 }, mp{ 20 } {}

	static int GetCount(int a,int b) {
		count++;
		return 2;
	}

};

int main()
{
	T t1;  
	t1.Add(100, 200);

	T::GetCount(10,11);
	return 0;
}
 