// class3.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

void homework() {
    int a{};
    unsigned int b{};
    std::cout << "\n\n请输入一个整数:";
    std::cin >> a;
    std::cout << "请再输入一个整数:";
    std::cin >> b;
    
    int diff = a - b;
    int sign = (((float)diff / (diff * diff + 1)))+ 1; // 如果diff>=0，sign=1；否则sign=0 //利用整数向下取整
    int max = a * sign + b * (1 - sign);
    int min = b * sign + a * (1 - sign);

    std::cout << "大一点的那个数是:" << max <<std::endl;
    std::cout << "小一点的那个数是:" << min << std::endl;
    return;
}

int main()
{
    int a{ 500 };
    unsigned b{ 1000 };
    
    std::cout << "a - b = " << a - b << std::endl;
    
    // 隐式转换
    a -= b; // a = a - b;   
    std::cout << "a - b = " << a << std::endl;

    a = 500;
    // 显示转换
    std::cout << "a - b =  " << (int)(a - b) << std::endl;    // C语言
    std::cout << "a - b =  " << static_cast<int>(a - b) << std::endl;    // C++

    std::cout << "long 长度 = " << sizeof(long) << std::endl;
    std::cout << "long 长度 = " << sizeof(a) << std::endl;

    homework();

    return 0;
}
