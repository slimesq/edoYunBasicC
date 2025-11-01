// class6.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{   
    int age{}, score{};
    std::cout << "请输入你的年龄:";
    std::cin >> age;
    std::cout << "请输入你的成绩:";
    std::cin >> score;
    bool age_ex_18 = age >= 18;
    bool score_ex_90 = score >= 90;
    if (age_ex_18 ^ score_ex_90) {
        std::cout << "恭喜获奖!" << std::endl;
    }


    int cs;
    std::cout << "请输入一个数，我们将为您计算10000除以这个数的结果:";
    std::cin >> cs;

    int end;
    end = cs?( 10000 / cs ):0;
    std::cout << end << std::endl;


    int a, b, c;
    std::cout << "请输入一个整数:";
    std::cin >> a;
    std::cout << "请输入另一个整数:";
    std::cin >> b;
    c = a > b ? a : b+50000;
    std::cout << "比较大的整数是:" << c << std::endl;

    return 0;
}
