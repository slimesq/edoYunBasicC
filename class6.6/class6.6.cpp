// class6.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    char cIn{' '};
    std::cout<< "isblank:" << (bool)isblank(cIn) << std::endl;
    std::cout<< "isspace:" << (bool)isspace(cIn) << std::endl;

    
    return 0;
}

