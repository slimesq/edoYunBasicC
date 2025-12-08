// class27.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

__declspec(naked) int Add(int a, int b) {
	__asm {
		push ebp
		mov ebp,esp
		mov eax,a
		add eax,b
		pop ebp
		ret
	}
}

int main()
{
	int c{ Add(1000,3500) };
	std::cout << c << std::endl;

	return 0;
}