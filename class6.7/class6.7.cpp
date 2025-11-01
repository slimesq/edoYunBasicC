// class6.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	unsigned long long uInId, uInPass;

	std::cout << "麟江湖 游戏注册\n\n请输入您的账号(8位十六进制数):";
	std::cin >> std::hex >> uInId;
	std::cout << "\n\n请输入您的密码:";
	std::cin >> uInPass;
	std::cout << std::hex << "Hello world!\n";
	// 注册部分

	if ((uInId > 0xFFFFF) && (uInPass > 0xFFFFF)) {
		system("cls");
		unsigned long long uId, uPass;
		std::cout << "麟江湖 游戏注册\n\n请输入您的账号(8位十六进制数):";
		std::cin >> uId;
		std::cout << "\n\n请输入您的密码:";
		std::cin >> uPass;
		std::cout << "Hello world!\n";
		if (uId = uInId) {
			// std::
			if (uPass == uInPass) {
				std::cout << "登录游戏!" << std::endl;
			}
			else {
				std::cout << "对不起!您的密码输入错误!\n";
			}
		}
		else {
			std::cout << "对不起!您的账户输入错误!\n";
		}
	}
	else
		std::cout << "注册失败!账号或者密码不足5位\n";
	return 0;
}

