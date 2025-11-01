// class7.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	char a;
linput:
	printf("请输入一个大写字母，我们将给您转换为小写\n");
	std::cin >> a;
	if (a > 64 && a < 91) {
		a += 32;
		std::cout << a << std::endl;
	}
	else {
		printf("你输入的内容不符合我们的要求，请重新输入!\n");
		goto linput;
	}
	return 0;
}
