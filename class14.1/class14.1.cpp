// class14.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

union USER 
{
	short sHP;
	int nHP;
	double fHP;
};

union
{
	short sHP;
	int nHP;
	double fHP;
}ls;

struct MyStruct {
	union
	{
		short sHP;
		int nHP;
		double fHP;
	}user;
	struct
	{
		int xp;
	} ls;
};


int main()
{
	USER user;// [] [] [] [] [] [] [] []
	std::cout << sizeof(user) << std::endl;
	user.nHP = 0;
	user.sHP = -1;	// [FF] [FF] [] [] [] [] [] []	// -1 65535
	std::cout << std::hex;
	std::cout << user.sHP << std::endl;
	
	// [100] [0] [?] [?] [?] [?] [?] [?]
	std::cout << user.nHP << std::endl;

	std::cout << &user.nHP << " " << &user.sHP << std::endl;
	
	return 0;
}
