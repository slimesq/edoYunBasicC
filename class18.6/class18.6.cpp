// class18.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

template<typename T1,typename T2,typename TR = T1>
TR ave(T1 a, T2 b) {
	return (a + b) / 2;
}

template<int max,int min, typename T>
bool ChangeHp(T& hp, T damage) {
	hp -= damage;
	//max = 2500;	// max 不是变量
	if (hp > max) hp = max;
	return hp < min;
}

template<typename T,short count>	
T ave(T(&ary)[count]) {
	T all{};
	for (int i = 0; i < count; i++) {
		all += ary[i];
	}
	return all / count;
}

int main()
{
	int hp = 2500;
	ChangeHp<2000, 1000>(hp, 100);
	ChangeHp<200, 1000>(hp, 100);
	std::cout << hp << std::endl;



	int a1 = 200;
	decltype(a1) x;


	int a[5]{ 1,2,3,4,5 };
	std::cout << ave(a) << std::endl;	// 数组时能自动推断出count
	int b[6]{ 1,2,3,4,5 ,6};
	std::cout << ave(b) << std::endl;	// 数组时能自动推断出count

	return 0;
}

