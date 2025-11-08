// class11.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{ 
	{
		int studentId[5] = {1001,1002,1003,1004,1005};
		int* ptrStudentId[5];
  
		for (int x = 0; x < 5; x++) {
			ptrStudentId[x] = &studentId[x];
		
			std::cout << "内存地址" << ptrStudentId[x] << ",值" << studentId[x] << std::endl;
		}
	}
	
	{
		int studentId[2][2] = { {1001,1002},{2001,2002} };
		int* ptrStudentId[2][2];

		for (int x = 0; x < 2; x++) {
			for (int y = 0; y < 2; y++) {
				ptrStudentId[x][y] = &studentId[x][y];
				std::cout << "内存地址" << ptrStudentId[x][y] << ",值" << studentId[x][y] << std::endl;
			}
		}
	}
	



	return 0;
}