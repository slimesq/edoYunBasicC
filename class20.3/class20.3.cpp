// class20.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

void test();

namespace t {
	int value;
}

namespace t {
	int height{ 250 };
	namespace hack {
		void hack();
	}
}

//namespace thack = t::hack;

void thack::hack() {
	std::cout << "thack" << std::endl;
}

int p{};

int x{ 250 };

using namespace std;

namespace {
	void THack() {
		std::cout << "Thack!!!" << std::endl;
	}
}

int main()
{
	int p = 250;
	std::cout << p << std::endl;
	std::cout << ::p << std::endl;

	std::cout << t::height << std::endl;

	THack();
	::THack();

	return 0;
}

