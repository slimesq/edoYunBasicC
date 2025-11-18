// class18.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

template<typename TR,typename T1,typename T2>
TR ave(T1 a, T2 b) {
	return (a + b) / 2;

}

template<typename T1,typename T2>
auto bigger(T1 a, T2& b)->decltype(a > b ? a : b){
	return a > b ? a : b;	// 不同类型时。例如int float时，会存在一次类型转换的问题，所以推导出的不是引用类型
							// 相同类型时。例如int int时，不存在类型转换的问题，所以推导出的是引用类型
}

int main()
{
	//std::cout << ave<double>(100, 200.0f) << std::endl;

	float a = 50;
	int b = 50000000;
	std::cout << bigger(a, b) << std::endl;
	//bigger(a, b) = -250;
	//std::cout << b << std::endl;

	return 0;
}

