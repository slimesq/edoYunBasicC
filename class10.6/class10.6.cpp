// class10.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

int main()
{

    int userId;
    std::vector<int> stuId;
    do {
        std::cout << "请输入学号:";
        std::cin >> userId;
        stuId.push_back(userId);
        if (!userId) {
            break;
        }
    }while(true);
    for (auto it : stuId) {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    stuId.assign(5, 100);   //重新初始化
    for (auto it : stuId) {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    stuId.clear();
    std::cout << "empty :" << stuId.empty() << std::endl;


    std::cout << "========\n";
    std::vector<int> studentId{5,500,60};

    std::cout << studentId.size() << std::endl;
    studentId.push_back(9600);
    std::cout << studentId.size() << std::endl;

    std::cout << studentId[2] << std::endl;

    for (int x : studentId) {
        std::cout << x << std::endl;
    }

    return 0;
}
