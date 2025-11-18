// class18.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

template<typename T>
T ave(T a, T b) {
    return a + b;
}

int main()
{
    ave(100, 200);
    ave(short(100), short(200));
    ave(short(300), short(600));
    return 0;
}

