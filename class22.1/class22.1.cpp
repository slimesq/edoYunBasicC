// class22.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>

class T {
public:
	int hp;
	T() {
		// count++;
	}
	~T() {
		// count--;
	}
	int GetCount() {
		return count;
	}
private:
	inline static int count{};
};

//int T::count = 100;	// 定义

int main()
{
	T t1, t2, t3, t4;
	T t5;
	//t1.count++;
	//std::cout << t2.count << std::endl;
	//std::cout << t3.count << std::endl;
	//std::cout << t4.count << std::endl;

	//std::cout << std::endl;
	//std::cout << &t2.count << std::endl;
	//std::cout << &t3.count << std::endl;
	//std::cout << &t4.count << std::endl;

	//std::cout << sizeof(T) << std::endl;

	return 0;
}