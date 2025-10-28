// class3.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#define dVersion " v1.1"
#define dUrl "http://edoyun.ke.qq.com"

int main()
{
	//system("color 84");		//灰色背景，红色字体
	system("color 07");
	std::cout << "================================================" << std::endl; // 16*3	顶部边框
	std::cout << std::endl;
	std::cout << " 麟江湖\"控制台\"版" << dVersion << std::endl; // 16*3	顶部边框
	std::cout << std::endl;
	std::cout << "  正在加载游戏" << std::endl; // 16*3	顶部边框
	std::cout << "  进度[8/100]" << std::endl; // 16*3	顶部边框
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << " 官方网站" << dUrl << std::endl;
	std::cout << "================================================" << std::endl; // 16*3	底部边框

	system("pause");
	system("cls");

	std::cout << "================================================" << std::endl; // 16*3	顶部边框
	std::cout << std::endl;
	unsigned short birthYear{};
	float weight{};	//体重
	unsigned short height{};	//升高
	unsigned short gender{};	//性别 0表示女 1表示男
	unsigned long long number{}; //手机号
	std::cout << " 麟江湖\"控制台\"版" << dVersion << std::endl; // 16*3	顶部边框

	std::cout << " 请输入您的出生年:";
	std::cin >> birthYear;
	
	std::cout << " 请输入您的体重(单位KG):";
	std::cin >> weight;
	
	std::cout << " 请输入您的身高(厘米):";
	std::cin >> height;
	
	std::cout << " 请输入您的性别(0代表女 1代表男):";
	std::cin >> gender;
	
	std::cout << " 请输入您的手机号:";
	std::cin >> number;

	unsigned long long endInfo;
	// 1999 45.5 171 1 18610599999

	//-------> 1/0
	//
	endInfo = (number / 2 + birthYear) * 10000000;
	float fls = height * height / weight;
	endInfo += (int)fls;
	endInfo *= 10;
	endInfo += gender;

	std::cout << "您的激活码为:" << endInfo << std::endl;
	std::cout << "请登录官方网站:" << dUrl << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "================================================" << std::endl; // 16*3	底部边框

	return 0;
}
