// class11.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    {
        int* ptr{};
        std::cout << sizeof(ptr) << std::endl;
        char* ctr{};
        std::cout << sizeof(ctr) << std::endl;
    }

    unsigned ua{ 9999 };
    int a{ 9999 };

    int* ptr{ &a };
    long long* uptr{ (long long*)&ua };
    ptr = (int*)&ua; // unsigned
    
    std::cout << sizeof(ptr) << std::endl;

    char* ctr{};
    *ptr = -1;

    ctr = (char*)ptr;
    *ctr = 'A'; //41 FF FF FF FF

    std::cout << sizeof(ctr) << std::endl;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << *uptr << std::endl;
    std::cout << std::hex << ua << std::endl;

	return 0;
}
