// class27.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

void Test() {
	std::cout << "It's test!" << std::endl;
}

int Add(int a, int b) {
	__asm {
		push ecx	//在_fastcall的函数(使用寄存器传值)中,用ecx

		mov eax,a
		add eax,b
	
		pop ecx
	}
}

int main()
{
	const int ca = 1500;
	int a = 250;
	int arry[10]{ 0,1,2,3,4,5,6,7,8,9 };
	__asm {
		call Test
		mov eax, a
		mov eax, 100
		mov a, eax
		mov arry[8], eax	//解释为汇编的索引
		; jmp jmpA
	}
	std::cout << a << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << arry[i] << " ";
	}
	std::cout << std::endl;

	std::cout << Add(1000, 3500) << std::endl;
jmpA:
	std::cout << "From Jmp" << std::endl;

	return 0;
}
