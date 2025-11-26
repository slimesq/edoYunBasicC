// class20.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "hc.h"

#define VERSION 100
#define SENDSMS 1

#if VERSION==100 && SENDSMS == 1
void SendSms() {
	std::cout << "version == 100" << std::endl;
	}
#elif VERSION==101
void SendSms() {
	std::cout << "version == 101" << std::endl;
}
#elif VERSION==102
void SendSms() {
	std::cout << "version == 102" << std::endl;
}
#else
void SendSms() {
	std::cout << "version != 103" << std::endl;
}
#endif


#ifdef UNICODE
	wchar_t a;
#else
	char a;
#endif


int main()
{

	return 0;
}

