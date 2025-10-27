// class3.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    // 输入工资 把输出显示出来
    unsigned short salary{}; //0~65536  工资
    unsigned short jiangjin{}; //0~65536  奖金
    unsigned short total{}; //0~65536  总数


    std::cout << "请输入你的工资:";
    std::cin >> salary;
    std::cout << "你的工资是" << salary << "属于找不到女朋友的水平!\n请输入你的奖金:";
    std::cin >> jiangjin;
    std::cout << "你的奖金是:" << jiangjin;

    total = salary + jiangjin;
    std::cout << "\n你的总收入是:" << total << std::endl;
    
    return 0;
}
