// class17.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

void Hack() {
    std::cout << "正在攻击电脑" << std::endl;
}

int GetAge() {
    int rt;
    std::cout << "请输入学员的年龄:";
    std::cin >> rt;
    return rt;
}

int count() {
    int i{};
    int total{};
    int age[10]{};
    do {
        age[i] = GetAge();
        total += age[i];
        // 将AGE[I]保存到数据库中
    } while (age[i++]);
    return total;
}

int main()
{
    std::cout << "======= 驴百万学院 学员总年龄统计计算系统 =====\n";
    std::cout << "\n                    API:" << Hack << std::endl;
    std::cout << "\n[说明:最多输入10个学员的信息，当输入0时代表输入结束]\n\n";
    std::cout << "\n驴百万学院的学员总年龄为:" << count() << std::endl;

    return 0;
}

