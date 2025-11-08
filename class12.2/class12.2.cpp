// class12.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	unsigned x;
	std::cout << "请输入要分配的内存大小:";
	std::cin >> x;

	int* p{ nullptr }, * pm{ nullptr }, * pold{ nullptr };
	
	p = new int;
	*p = 500;
	std::cout << *p << std::endl;
	delete p;

	p = new int[x];
	p[10] = 500;
	std::cout << p[10] << std::endl;
	delete[] p;
	
	pm =  (int *)malloc(x * sizeof(int));	// void*
	p = (int*)calloc(x, sizeof(int));
	pold = pm;

	std::cout << "pm[0]" << pm[0] << std::endl;
	std::cout << "p[0]" << p[0] << std::endl;

	if (p == nullptr) {
		 std::cout << "内存分配失败!" << std::endl;
	 }
	else {
		p[0] = 952;
		p[1] = 253;
		p[2] = p[0] * p[1];

		std::cout << p[0] << " " << p[1] << " " << p[2] << std::endl;
	 }


	std::cout << "请输入要重新分配的内存大小:" << std::endl;
	std::cin >> x;
	p = (int*)realloc(p, x * sizeof(int));
	std::cout << "pold = " << pold << std::endl;
	std::cout << "p = " << p << std::endl;
	std::cout << p[0] << " " << p[1] << " " << p[2] << std::endl;

	free(p);	
	free(pm);	
	std::cout << p << "===========" << pm << std::endl;
	p = nullptr;
	pm = nullptr;
	std::cout << p << "===========" << pm << std::endl;


	//std::cout << p[0] << std::endl;	// 错误

	return 0;
}
