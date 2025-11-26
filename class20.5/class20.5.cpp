// class20.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int ave(int a, int b) {
	std::cout << __func__ << std::endl;
	std::cout << __FUNCTION__ << std::endl;
	std::cout << __FUNCDNAME__ << std::endl;
	std::cout << __FUNCSIG__ << std::endl;
	return (a + b) / 2;
}



int main()
{
	ave(100,200);
	std::cout << __func__ << std::endl;

	std::cout << __DATE__ << ": " << __TIME__ << std::endl;

	std::cout << __FILE__ << std::endl;
	std::cout << __cplusplus << std::endl;

#ifdef _CHAR_UNSIGNED
	std::cout << "char unsigned";
#else
#endif // _CHAR_UNSIGNED
	__COUNTER__;
	std::cout << __COUNTER__ << std::endl;
	std::cout << __COUNTER__ << std::endl;
	std::cout << __COUNTER__ << std::endl;
	std::cout << __COUNTER__ << std::endl;
	std::cout << __COUNTER__ << std::endl;


#ifdef _DEBUG
	std::cout << "debug mode!" << std::endl;
#endif

#ifdef _WIN64
	std::cout << "WIN64" << std::endl;
#endif
#ifdef _WIN32
	std::cout << "WIN32" << std::endl;
#endif

	return 0;
}



