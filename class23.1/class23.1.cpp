// class23.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class Person {
	unsigned short Age;
	friend bool operator<(const Person& psa,const Person& psb);
	friend bool operator<(const Person& psa, const unsigned short _Age);
public:
	Person(unsigned short _Age):Age(_Age){}

	bool operator>(const Person& rhs) const;
};

bool operator<(const Person& psa, const Person& psb) {
	return psa.Age < psb.Age;
}

bool operator<(const Person& psa, const unsigned short _Age) {
	return psa.Age < _Age;
}

bool Person::operator>(const Person& rhs) const {
	return this->Age > rhs.Age;
}

int main()
{
	Person Man(120);
	Person Woman(50);

	//if (operator<(Man,Woman)) std::cout << "你找富婆了!";
	
	if (Man < Woman) std::cout << "你找富婆!\n";
	if (Man < 30) std::cout << "你找富婆!\n";
	if (Man > Woman) std::cout << "你找富婆!\n";

	return 0;
}
