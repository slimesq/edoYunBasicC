// class5.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    /*
        int wheel{ 19 };
        unsigned price{ 1000000 };
        char logo{ 'B' };
        unsigned gls{ 100 };

        std::cout << "车辆商标:" << logo << ",车轮大小:" << wheel << ",车辆售价" << price << std::endl;

        int wheelA{ 19 };
        unsigned priceA{ 1000000 };
        char logoA{ 'B' };
        unsigned glsA{ 100 };

        std::cout << "车辆商标:" << logoA << ",车轮大小:" << wheelA << ",车辆售价" << priceA << std::endl;
    */
    struct CAR
    {
        char logo{ 'A' };
        unsigned short wheel{ 19 };
        unsigned price{ 900000 };
    };

    CAR carA{ 'C',25,5000000 };
    CAR carB{ 'B',22,6000000 };
    CAR carC{ 'B',21,6000000 };
    
    carA.price += 50000;

    std::cout << "车辆商标:" << carA.logo << ",车轮大小:" << carA.wheel << ",车辆售价" << carA.price << std::endl;
    std::cout << "车辆商标:" << carB.logo << ",车轮大小:" << carB.wheel << ",车辆售价" << carB.price << std::endl;
    std::cout << "车辆商标:" << carC.logo << ",车轮大小:" << carC.wheel << ",车辆售价" << carC.price << std::endl;

    return 0;
}

