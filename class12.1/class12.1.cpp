// class12.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int a[5];
	int* ptrA{ a + 1 };

	*ptrA = 5;
	
	a[0] = 5;
	a[1] = 5001;
	a[2] = 5002;

	std::cout << a << std::endl;
	std::cout << &a[0] << std::endl;
	std::cout << *ptrA << std::endl;
	std::cout << ptrA[1] << std::endl;
	
	std::cout << "sizeof(a) = " << sizeof(a) << std::endl;
	std::cout << "sizeof(ptrA) = " << sizeof(ptrA) << std::endl;

	int test[2][5]{
		{1001,1002,1003,1004,1005},
		{2001,2002,2003,2004,2005},
	};
	// 1001,1002,1003,1004,1005,2001,2002,2003,2004,2005

	int* ptest{ (int*)test };
	std::cout << test[1][4] << std::endl;
	std::cout << ptest[9] << std::endl;

	int* ptestA[5];	//五个int类型的指针
	
	int (*ptestB)[5] { test };	// 数组指针

	ptestB = ptestB + 1;	// +1*数据类型的大小5*int

	std::cout << test[1][4] << std::endl;
	std::cout << ptestB[0][1] << std::endl;

	std::cout << "sizeof(ptestA)  = " << sizeof(ptestA) << std::endl;
	std::cout << "sizeof(ptestB)  = " << sizeof(ptestB) << std::endl;
	
	return 0;
}

