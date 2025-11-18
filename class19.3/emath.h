#pragma once
#include <iostream>
int ave(int a, int b);
int bigger(int a, int b);
extern int acount;

static int atest = 999;	//在不同的cpp文件中,会被拷贝,不是一个值。

// 静态函数
static void Test() {
	atest++;
}

// 内联函数
inline int TestA() {
	return 0;
}