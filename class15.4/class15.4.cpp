// class15.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

using std::string;

int main()
{
    string id{ "id=;" };
    //id.insert(3, "testId");
    //std::cout << id << std::endl;

    id.insert(3,6,'*');;
    std::cout << id << std::endl;

    /*
    string str{ "id=user;pass=632105;role=郝英俊" };
    string cIn;
    while (true) {

        std::cout << "请输入对应的属性:";
        std::cin >> cIn;
        string findStr= cIn + "=";
        int start = str.find(cIn);
        if (start == std::string::npos) {
            std::cout << "未找到！" << std::endl;
        }
        else {
            int end = str.find(";", start);
            string resStr = str.substr(start + findStr.length(), end - start - findStr.length());
            std::cout << resStr << std::endl;
        }
    }
    */

    
    return 0;
}

