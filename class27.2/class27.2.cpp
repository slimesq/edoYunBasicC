// class27.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int a = 250;

	/*
	__asm mov eax, a
	__asm add eax,1
	__asm mov a,eax
	*/

	__asm {
		mov eax, a	// eax = a
		add eax, 1 /*eax = eax + 1*/
		mov a, eax; a = eax
	}

	std::cout << a << std::endl;
	return 0;
}
