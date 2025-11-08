// class12.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	//int* p = (int*)malloc(4*5);
	//int* pold = p;
	//p[0] = 250;
	//free(p);
	//free(pold);
	//// ========
	////pold[20] = 255;

	//int* p = new int[200];
	//delete p;	//不建议，应该用delete [] p;


	int a[5]{ 1001,1002,1003,1004,1005 };
	int* b = new int[5];
	//for (int i{ 0 }; i < 5; ++i) {
	//	b[i] = a[i];
	//}
	memset(b, 0x1234, sizeof(int) * 5);
	memcpy(b, a, sizeof(int) * 3);
	for (int i{ 0 }; i < 5; ++i) {
		std::cout << std::hex << b[i] << " ";
	}
	std::cout << std::endl;



	return 0;
}

