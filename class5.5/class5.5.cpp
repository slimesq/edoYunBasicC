// class5.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    /*运算符的优先级*/
    int a = { 0x283f };
    int c = 1 + a << 1;
    int b = 1 + a << 1 & 0x00FF | 0xF;
    std::cout << std::hex << std::showbase << c << std::endl;
    std::cout << b << std::endl;

    /*异或运算的使用技巧*/
    unsigned short diamond{ 6000 };
    unsigned int vip_exp{ 80000 };

    unsigned xbase = diamond ^ vip_exp;

    std::cout << "修改钻石数量：";
    std::cin >> diamond;

    std::cout << "修改累计消费：";
    std::cin >> vip_exp;

    /*模拟一次检测*/
    unsigned realDiamond{xbase ^ vip_exp};
    unsigned realVip_exp{ xbase ^ diamond };
    std::cout << "你应该的钻石数量是:" << realDiamond << "你实际的钻石" << diamond << (char)10;
    std::cout << "你应该的累计消费是:" << realVip_exp << "你实际的累计消费" << vip_exp << (char)10;


    return 0;
}

