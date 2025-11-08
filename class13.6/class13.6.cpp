// class13.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	/*
		int* p;
		{
			int* a = new int[50];
			p = a;
			a[2] = 255;
		}
		std::cout << p[2] << std::endl;
	*/
	/*
		int* p;
		{
			std::unique_ptr<int[]> a{ std::make_unique<int[]>(5) };
			a[2] = 500;
			p = a.get();
			std::cout << a[2] << std::endl;
		
		}
		std::cout << p[2] << std::endl;
	*/
	int* p;
	{
		int a[5]{ 5001,5002,5003,5004,5005 };
		p = a;
		std::cout << p[0] << std::endl;
	}
	std::cout << p[0] << std::endl;

	return 0;
}


