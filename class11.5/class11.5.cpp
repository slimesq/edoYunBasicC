// class11.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    int a[]{ 10001,20001,30001,40001 };
    int* ptr{ &a[0] };

    {
        int** pptr{ &ptr };
        *pptr = &a[1];
        std::cout << *ptr << std::endl;
    }

    {
        int** pptr{ &ptr };

        std::cout << pptr << std::endl;
        int*** ppptr{ &pptr };
        std::cout << ***ppptr << std::endl;
    }


    return 0;
}
