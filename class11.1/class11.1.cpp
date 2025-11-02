// class11.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    int a{ 5000 };
    int* pa{ &a };
    std::cout << pa;

    // pa ==> A的内存地址
    // *pa ==> 读写a的内存空间
    std::cout << "内存地址:" << pa << "\na = " << *pa << std::endl;

    *pa = 66666;
    std::cout << a;

    // float
    float f{ 500.5 };
    float* pf{ &f };
    *pf = 5001.5;
    std::cout << "内存地址:" << pf << "\nf = " << f << std::endl;

    return 0;
}

