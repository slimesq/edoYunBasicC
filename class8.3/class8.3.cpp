// class8.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setfill('0');
    for (int i = 0; i < 10; ++i) {
        if (i == 0)
            continue;
        for (int j = 0; j < 10; j +=2) {
            if(j == 0)
                continue;
            if (j > 5) break;
            std::cout << std::setw(3) << i * j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
