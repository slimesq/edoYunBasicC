// class16.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

using std::string;

int charToInt(const char* str) {
	bool isNum = true;
	int num = 0;
	for (int j{ 0 }; j < strlen(str); ++j) {
		if (!isdigit(str[j])) {
			isNum = false;
			break;
		}
		num = num * 10;
		num += (str[j] - '0');
	}
	if (!isNum) {
		return -1;
	}
	return num;
}

int main(unsigned count,char* arc[])
{
	/*
	std::cout << "一共有" << count << "个参数\n";
	for (int i{ 0 }; i < count; i++) {
		std::cout << "参数[" << i << "] = [" << arc[i] << "]" << std::endl;
		std::cout << "参数[" << i << "] = \"地址\" = [" << (int)arc[i] << "]" << std::endl;
	}
	*/

	size_t lastSymbo{ 0 };
	string command{ arc[0] };
	while (lastSymbo < command.length()) {
		
		if (command.find("\\", lastSymbo + 1) == std::string::npos) {
			break;
		}
		lastSymbo = command.find("\\", lastSymbo + 1);
	}

	string name = command.substr(lastSymbo+1);
	string path = command.substr(0, lastSymbo);

	std::cout << "name =" << name << std::endl;
	std::cout << "path =" << path << std::endl;

	for (int i{ 1 }; i < count; ++i) {
		int num = charToInt(arc[i]);
		if (num == -1) {
			std::cout << "第" << i << "个参数不是整形数字" << std::endl;
		}
		else {
			std::cout << "第" << i << "个参数是整形数字:" << num << std::endl;
		}
	}

	return 0;
}
