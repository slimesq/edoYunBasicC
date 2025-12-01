// class23.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "hstring.h"

int main()
{

	hstring str{ "hello" };
	std::cout << str.c_str() << std::endl;

	if (str[10] == hstring::no_char) {
		std::cout << "未找到\n" << std::endl;
	}

	hstring strA{ "hello world!" };
	hstring value{ strA["hello"] };
	std::cout << value << std::endl;


	return 0;
}
