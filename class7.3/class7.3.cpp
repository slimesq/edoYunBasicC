// class7.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>

int main()
{
    int uin = _getch();
    printf("%d\n", uin);

    int age{ 18 }, a{ 999 },b,c,d;
    printf("我好英俊啊~!\n");
    printf("我叫%s,我的年龄%d", "张三", age);
    printf("0x%X\n", a);    // 十六进制表示
    printf("%05d\n", a);  // 字符对齐

    scanf_s("%d%d%d%d", &a, &b, &c, &d);
    printf("%d,%d,%d,%d", a, b, c, d);

    return 0;
}

