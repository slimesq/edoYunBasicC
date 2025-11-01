// class9.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <conio.h>

int main()
{
    /* while*/
    //int password{ 0 }, repassword{ -1 };
    //while (password != repassword) {
    //    system("cls");
    //    std::cout << "请您输入一个6位数数字密码:";
    //    std::cin >> password;
    //    std::cout << "请您再输入一次您的密码:";
    //    std::cin >> repassword;
    //    if (password > 99999) {
    //        if (password == repassword) {
    //            system("cls");
    //            std::cout << "密码设置成功!\n按任意键进入破解系统";
    //            _getch();

    //            int testPass{};
    //            while (testPass != password) testPass++;
    //            std::cout << "密码破解成功:" << testPass << std::endl;
    //            break;
    //        }
    //    }
    //    else {
    //        password = 0; repassword = -1;
    //        continue;
    //    }
    //}

    /*do while*/
    int password{ 0 }, repassword{ -1 };
    do{
        system("cls");
        std::cout << "请您输入一个6位数数字密码:";
        std::cin >> password;
        std::cout << "请您再输入一次您的密码:";
        std::cin >> repassword;
        if (password > 99999 || password == 0) {
            if (password == repassword) {
                system("cls");
                std::cout << "密码设置成功!\n按任意键进入破解系统";
                _getch();

                int testPass{-1};
                do { 
                    testPass++;
                }while(testPass != password);
                std::cout << "密码破解成功:" << testPass << std::endl;
                break;
            }
        }
        else {
            password = 0; repassword = -1;
            continue;
        }
    } while (password != repassword);


	return 0;
}
