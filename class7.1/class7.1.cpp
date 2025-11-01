// class7.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    unsigned int sId, sPr;
    std::cout << "同学，请输入您的学号:";
    std::cin >> sId;

    //if (sId == 15962)sPr = 500;
    //else sPr = 0;
    //
    //if (sId == 321 || sId == 666) sPr = sId * 2;
    //if (sId == 65421) sPr = 450;
    //if (sId == 98741) sPr = 250;
    //if (sId == 2531) sPr = 150;

    switch (sId) {
    case 15962:
        sPr = 500;
        break;
    case 65421:
        sPr = 450;
        break;
    case 98741:
        sPr = 250;
        break;
    case 2531:
        sPr = 150;
    case 666:
        [[fallthrough]];
    case 321:
        sPr = sId * 2;  // sId << 1;
        break;
    default:
        sPr = 0;
        std::cout << "对不起,同学,您本次活动并未中奖，请下册在来吧!\n";
        break;
    }
    std::cout << "同学,恭喜您,您获得了奖学金" << sPr << "韩币\n";
    
    return 0;
}