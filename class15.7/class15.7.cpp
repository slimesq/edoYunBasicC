// class15.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

using std::string;

typedef struct Role {
	string id;
	int exp{0};
}*PRole;

// 获取数据长度(数据字符串)
int GetDataCount(string str) {
	int iCount{ 0 };
	for (int i{ 0 }; i < str.length(); i++) {
		if (str[i] == ';') {
			iCount++;
			i += 3;
		}
	}
	return iCount / 2;
}

string GetID(string str,int istart,int* iend) {
	string strReturn;
	istart = (int)str.find("id=", istart);
	if (istart == std::string::npos) return {};
	*iend = (int)str.find(";", istart + 3);
	strReturn = str.substr(istart + 3, *iend - istart - 3);
	return strReturn;
}

int GetExp(string str,int istart,int* iend) {
	string strReturn;
	istart = (int)str.find("exp=", istart);
	if (istart == std::string::npos) return 0;
	*iend = (int)str.find(";", istart + 4);
	strReturn = str.substr(istart + 4, *iend - istart - 4);
	return std::stoi(strReturn);
}

void BubbleSort(int nRoles, PRole roles) {
	for (int i{ 0 }; i < nRoles; ++i) {
		bool isChange = false;
		for (int j{ i + 1 }; j < nRoles; ++j) {
			if ((roles[i].exp < roles[j].exp) || (roles[i].exp == roles[j].exp && roles[i].id > roles[j].id)) {
				Role tempRole;
				tempRole.id = roles[i].id;
				tempRole.exp = roles[i].exp;
				roles[i].id = roles[j].id;
				roles[i].exp = roles[j].exp;
				roles[j].id = tempRole.id;
				roles[j].exp = tempRole.exp;

				isChange = true;
			}
		}
		if (!isChange) {
			break;
		}
	}
}

void PrintRoles(int nRoles,const PRole roles) {
	for (int i{ 0 }; i < nRoles; ++i) {
		std::cout << roles[i].id << " " << roles[i].exp << std::endl;
	}
}

/* 递归的方式*/
void GetStringData(PRole pRole, string& str, int istart) {
	int iend = istart;
	string id = GetID(str, istart, &iend);
	if (id.empty()) {
		return;
	}
	pRole->id = id;
	int exp = GetExp(str, iend, &istart);
	if (!exp) {
		return;
	}
	pRole->exp = exp;
	GetStringData(++pRole, str, istart);
}


int main()
{
	string str("id=Tomy Clare;exp=9523;id=Sunny;exp=9523;id=DyBaby;exp=25301;id=Simple;exp=25301;"
		"id=Bkacsll;exp=2100;id=DumpX;exp=36520;");
	// 用户个数
	int iCount{ GetDataCount(str)};
	PRole pRole = new Role[iCount];
	
	// 递归的方式
	GetStringData(pRole,str,0);

	// 循环的方式
	/*
	int istart{ 0 }, iend{ 0 };
	for (int i{ 0 }; i < iCount; ++i) {
		string id = GetID(str, istart, &iend);
		if (id.empty()) {
			break;
		}
		pRole[i].id = id;
		int exp = GetExp(str, iend, &istart);
		if (!exp) {
			break;
		}
		pRole[i].exp = exp;
	}
	*/

	BubbleSort(iCount, pRole);

	PrintRoles(iCount, pRole);
	
	return 0;
}
