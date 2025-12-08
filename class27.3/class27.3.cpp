// class27.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	//__asm _emit 0x6a;

	short a[1201];
	int count;
	int arySize;
	int typeAry;

	__asm {
		mov count,LENGTH a
		mov arySize,SIZE a
		mov typeAry,TYPE a
	}
	std::cout << "数组个数为:" << count << std::endl;
	std::cout << "数组大小为:" << arySize << std::endl;
	std::cout << "元素大小为:" << typeAry << std::endl;


	return 0;
}
