// class4.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>

int main()
{
	std::cout << std::fixed;	//小数点模式
	std::cout << 3E20 << std::endl;
	std::cout << 3.14 << std::endl;
	
	std::cout << std::scientific;	//科学计数法
	std::cout << 3.14 << std::endl;

	std::cout << std::defaultfloat;
	std::cout << 3.14 <<std::endl;

	std::cout << std::setprecision(3);
	std::cout << 3.1415926 << std::endl;

	std::cout << std::showbase;		//显示16进制或者8进制前缀:0x/0
	std::cout << std::noshowbase;	//不显示16进制或者8进制前缀:0x/0
	std::cout << std::hex;
	std::cout << 65535 << std::endl;
	std::cout << (long long)65535 * 65535 << std::endl;

	std::cout << std::dec;
	std::cout << std::setw(10) << 2221;
	std::cout << std::setw(10) << 21 << std::endl;;
	std::cout << std::setw(10) << 1231 << std::endl;;
	std::cout << std::setfill('*') << std::setw(10) << 1 << std::endl;

	std::cout << std::setfill('=') << std::setw(32) << '=' << std::endl;

	std::cout << "\t\t你好，易道云a\b\a";

	std::cout << std::endl << std::endl;

	std::cout << std::setfill('*') << std::setw(1) << '*' << std::endl;
	std::cout << std::setfill('*') << std::setw(2) << '*' << std::endl;
	std::cout << std::setfill('*') << std::setw(3) << '*' << std::endl;
	std::cout << std::setfill('*') << std::setw(4) << '*' << std::endl;
	std::cout << std::setfill('*') << std::setw(5) << '*' << std::endl;
	std::cout << std::setfill('*') << std::setw(6) << '*' << std::endl;
	std::cout << std::setfill('*') << std::setw(7) << '*' << std::endl;


	return 0;
}

