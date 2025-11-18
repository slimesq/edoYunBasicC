// class16.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>

int getStrLength(const char* str) {
	int count = 0;
	for (; str[count] != '\0'; ++count);

	return count;
}

char toLower(char ch) {
	return (ch >= 65 && ch <= 90) ? ch + 32: ch;
}

int findSubStr(const char* str, const char* subStr) {

	for (int i{ 0 }; i < getStrLength(str); ++i) {
		int a = i; 
		int b = 0;
		for (; b < getStrLength(subStr); ++b) {
			if (toLower(str[a++]) != subStr[b]){
				break;
			}
		}
		if (b == getStrLength(subStr)) {
			return a - b;
		}

	}
	return -1;
}


// fieldType = {"id","pass","country"}
int getField(const char* str,const char* fieldType,char** field) {
	int subLocal = findSubStr(str,fieldType);
	if (subLocal != 0) {
		return -1;
	}
	else {
		int filedLength = getStrLength(str) - getStrLength(fieldType);
		*field = new char[filedLength];
		memcpy(*field,str+1+getStrLength(fieldType),filedLength);
		return 0;
	}
}

int main(unsigned argc,char* argv[])
{
	if (argc == 4){
		char* id{ nullptr };
		int errCode = getField(argv[1], "id", &id);
		if (errCode != 0) {
			std::cout << "ID的输入不符合要求" << std::endl;
			return 0;
		}
		char* pass{ nullptr };
		errCode = getField(argv[2], "pass", &pass);
		if (errCode != 0) {
			std::cout << "pass的输入不符合要求" << std::endl;
			delete[] id;
			return 0;
		}
		char* country{ nullptr };
		errCode = getField(argv[3], "country", &country);
		if (errCode != 0) {
			std::cout << "country的输入不符合要求" << std::endl;
			delete[] id;
			delete[] pass;
 			return 0;
		}
	
		std::cout << "注册成功!" << std::endl;
		std::cout << std::setw(16) << std::setfill('=') << "" << std::endl;
		std::cout << "账号:" << id << " 密码:" << pass << " 国家:" << country << std::endl;

		delete[] id;
		delete[] pass;
		delete[] country;
		
	}
	else {
		std::cout << "帮助文档" << std::endl;
	}

	return 0;
}

