// class12.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	int a1[10]{ 105,98,73,58,32,31,25,22,3,1 };
	int a2[10]{1,3,22,25,31,32, 58,73,98,105 };

	int x;
	std::cout << "为新杀手输入一个数:";
	std::cin >> x;
  
	int* aNew = new int[11];

	int getIndx{ 10 };
	//int* pa = a1;
	int* pa = a2;
	
	bool bcase = pa[0] < pa[1];
	
	for (int i = 0; i < 10; i++) {
		if ( bcase ^ (x > pa[i])) {		// (pa[0] > pa[1] && x > pa[i]) || ((pa[0] < pa[1] && x < pa[i]))
			getIndx = i;
			break;
		}
	}

	memcpy(aNew, pa, sizeof(int) * (getIndx + 1));
	aNew[getIndx] = x;
	memcpy(aNew + getIndx + 1, pa + getIndx, sizeof(int) * (10 - getIndx));


	for (int i{ 0 }; i < 11; ++i) {
		std::cout << aNew[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
