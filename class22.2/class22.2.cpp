// class22.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class T {
	inline static int count{};
public:
	static void Test() {
		//this->hp++;	// ERROR
		count++;
	}

	int hp;

	T() {
		//count++;
	}
	~T() {
		//count--;
	}
	int GetCount() {
		return count;
	}
};

int main()
{

	return 0;
}

