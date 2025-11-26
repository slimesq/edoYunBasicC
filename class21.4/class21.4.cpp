// class21.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class T {
public:
	int hp;

	int GetMP() const { return mp; }
	void setMP(int _mp){ mp = _mp; }

	//T() = default;

	T() {
		std::cout << "T()\n";
		hp = 100;
		mp = 800;
	}

	explicit T(int _hp,int _mp) {
		std::cout << "T(int,int)" << std::endl;
		hp = _hp;
		mp = _mp;
	}

	T(T& t) {
		std::cout << "T(T&)" << std::endl;
		hp = t.hp;
		mp = t.mp;
	}

	bool isBigger(T t) {
		return mp > t.mp;
	}

private:
	int mp;
};

int main()
{
	/*
	T t2;
	t2.hp = 1997;
	t2.setMP(1999);
	
	T t1;

	t1 = t2;

	std::cout << t1.hp << " " << t1.GetMP() << std::endl;
	*/

	T t0;

	T t1(100,200);
	std::cout << "\n--------------------\n";
	std::cout << t1.hp << "		" << t1.GetMP() << std::endl;
	std::cout << "\n--------------------\n";
	T t2(t1);

	//std::cout << t1.isBigger({100,200}) << std::endl;

	return 0;
}

