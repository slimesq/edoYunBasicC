// class17.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

// strcpy

// strcpy_s

typedef struct Role {
	char* Name;
	int Hp;
	int MaxHp;
	int Mp;
	int MaxMp;
	int lv;

}*PROLE,ROLE;

int clen(const char* str) {
	int i;
	for (i = 0; str[i]; i++);
	return ++i;
}

char* cstr(const char* str) {
	int len = clen(str);
	char* strRt = new char[len];
	memcpy(strRt,str,len);
	return strRt;
}

//ROLE* CreateMonster(const char* str, int Hp, int Mp) {
//	Role* rt = new Role{ cstr(str),Hp,Hp,Mp,Mp,1 };
//	return rt;
//}
ROLE& CreateMonster(const char* str, int Hp, int Mp) {
	Role* rt = new Role{ cstr(str),Hp,Hp,Mp,Mp,1 };
	return *rt;
}

void Add(int& a) {
	a = a + 100;
}

void ave(int(&art)[100]) {
	std::cout << sizeof(art)<< std::endl;
}


int main()
{
	char* str;
	str = cstr("abc");
	std::cout << str << std::endl;

	ROLE role = CreateMonster("aoteman",1500, 2500);
	std::cout << "name = " << role.Name << std::endl;
	std::cout << role.Hp << "/" << role.MaxHp << std::endl;

	int p = 250;
	//float p = 250.5f;	// ERROR
	Add(p);
	std::cout << p << std::endl;

	int a[100];
	int (&b)[100] = a;
	ave(b);

	return 0;
}
