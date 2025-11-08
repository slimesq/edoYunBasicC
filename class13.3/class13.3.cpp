// class13.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <locale>

int main()
{
	char str[0xFF]{"Hello"};	// ===> 'H,'e','l','l','o','\0'
	std::cout << str << std::endl;

	char* strB = new char[0xFF] {"Hello"};
	char* strA = (char*)"Hello张三";	// const char[]
	//const char* strA = "Hello";	// const char[]
	std::cout << strA << std::endl;
	std::cout << strB << std::endl;

	wchar_t wstr[0xFF]{ L"Hello" };
	const wchar_t* wStr{L"Hello张三"};
	std::wcout << wstr << std::endl;
	setlocale(LC_ALL, "chs");
	std::wcout << wStr << std::endl;
	std::cout << std::endl;
	for (int x{ 0 }; wStr[x]; x++) {
		std::cout << std::hex << (short)wStr[x] << std::endl;
	}

	return 0;
}
