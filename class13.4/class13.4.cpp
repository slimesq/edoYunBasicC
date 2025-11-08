// class13.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale>

int main()
{
	char str[0xFF];
	std::cin >> str;
	//std::cout << strlen(str); 
	int len{ 0 }, idx{ 0 };
	while (str[idx] != '\0') {
		len++;
		if ((unsigned)str[idx] >= 0x80 && (unsigned)str[idx] <= 0xFE) {
			idx++;
		} 
		idx++;
	}
	std::cout << "strlen(str) = " << len << std::endl;

	//setlocale(LC_ALL, "chs");
	//wchar_t wstr[0xFF];
	//std::wcout << L"请输入您的名字:";
	//std::wcin >> wstr;
	//std::wcout << L"您的名字是:" << wstr << std::endl;
	//std::wcout << L"长度是:" << wcslen(wstr) << std::endl;

	//int x[0x10];
	//char Name[0x10]{"hello"};
	//std::cout << Name << std::endl;

	//int studentdId;
	//scanf("%d", &studentdId);

	//wchar_t wstr[0x5];
	//printf("请输入你的名字:");
	//setlocale(LC_ALL, "chs");
	//wscanf(L"%s", wstr);
	//wprintf(L"您的名字是[%s]\n", wstr);

	//char Name[0x5];
	//printf("请输入你的名字:");
	//scanf_s("%s", Name,5);

	//printf("您的名字是:[%s]\n", Name);

	return 0;
}
