// class7.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int a{};
	
	if (a == 2015) {
		printf("a = 2015");
	}
	else if (a == 2016) {
		printf("a = 2016");
	}if (a == 2017) {
		printf("a = 2017");
	}if (a == 2018) {
		printf("a = 2018");
	}

	switch (a) {
	case 2015:
		printf("a = 2015");
		break;
	case 2016:
		printf("2016");
		break;
	case 2017:
		printf("2017");
		break;
	case 2018:
		printf("2018");
		break;
	}


	return 0;
}

