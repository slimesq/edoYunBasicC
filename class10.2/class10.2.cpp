// class10.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int a[]{ 1,2,3,4,5,6 };
	std::cout << sizeof(a) / sizeof(int) << std::endl;

	int studentId[100];
	// 100
	int indexId{};
	while (indexId < 100) {
		std::cout << "输入学号(输入0查看已登记的学生信息):";
		std::cin >> studentId[indexId];
		if (studentId[indexId] == 0) {
			system("cls");
			for (int i = 0; i < indexId; i++) {
				std::cout << i << "号 学生学号" << studentId[i] << std::endl;
			}
		}
		else {
			bool isDup = false;
			for (int j = 0; j < indexId - 1; j++) {
				if (studentId[indexId] == studentId[j]) {
					isDup = true;
					break;
				}
			}
			if (!isDup) {
				indexId++;
			}
		}
	}
   
	return 0;
}