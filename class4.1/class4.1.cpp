// class4.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "chs"); 

	std::cout << (char)65 << std::endl;
	std::cout << 65 << std::endl;
	std::cout << (int)'A' << std::endl;

	char charA{ 'A' };	//字母
	char charB{65};		// 数字初始化

	charA++;
	std::cout << ++charA << std::endl;

	wchar_t wcharA{ L'A' };

	char16_t char16{ u'A' };
	char32_t char32{ U'A' };

	//char charC{ '我' };	//报错:中文字符占两个字节

	std::cout << wcharA << std::endl;
	std::wcout << wcharA << std::endl;
	std::cout << sizeof(wcharA) << std::endl;

	std::cout << "换行" << (char)10;


	char lowerChar{};
	std::cout << "请输入一个小写字母:";
	std::cin >> lowerChar;
	char letterChar{ (int)lowerChar - 32 };
	std::cout << "对应的大写字母为:" << letterChar << (char)10 << std::endl;
	return 0;
}

