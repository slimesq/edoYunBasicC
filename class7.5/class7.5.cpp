// class7.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <conio.h>

int main()
{
    int password, repassword;
input:
    system("cls");
    std::cout << "请您输入一个6位数数字密码:";
    std::cin >> password;
    std::cout << "请您再输入一次您的密码:";
    std::cin >> repassword;

    if (password == repassword) {
        if (password > 99999) goto input;
        system("cls");
        std::cout << "密码设置成功!\n按任意键进入破解系统";
        _getch();

        int testPass{};
    lhack:
        if (testPass != password) {
            testPass++;
            goto lhack;
        }
        else {
            std::cout << "密码破解成功:" << testPass << std::endl;
        }
    }
    else {
        goto input;
    }
    
    return 0;
}

