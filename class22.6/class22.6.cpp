// class22.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class T {
private:
    int m_count{};
    inline static int count{};
public:
    T() {
        std::cout << "第" << ++count << "个构造函数" << std::endl;
        m_count = count;
    }
    ~T() {
        std::cout << "第" << m_count << "个析构析构" << std::endl;
    }
    int test = 2;
};

int main()
{
    /*
    T* t1 = (T*)malloc(10 * sizeof(T));
    std::cout << t1[0].test << std::endl;
    
    T* t2 = new T[100];
    
    free(t1);
    //free(t2);
    delete[] t2;
    //delete t2;  // ERROR
    */
    

    int* pint = (int*)malloc(10 * sizeof(int));
    pint[2] = 250;
    std::cout << pint[2] << std::endl;

    int* pint2 = new int[200];
    pint2[100] = 500;
    delete pint;
    //delete[] pint;
    
    std::cout << pint2[100] << std::endl;
    delete[] pint2;

    return 0;
}
