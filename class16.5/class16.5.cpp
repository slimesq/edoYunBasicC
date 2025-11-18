// class16.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

void Swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void Sort(int* array, unsigned count, bool minorPriority = true) {
	for (int i = 1; i < count; i++) {
		for (int i = 1; i < count; i++) {
			if ((array[i] > array[i - 1]) ^ minorPriority) {
				Swap(array[i], array[i - 1]);
			}
		}
	}
}


int main()
{
	int a[5]{ 2302,5212,3654,9740,5200 };
	Sort(a, 5, false);
	for (auto x : a) {
		std::cout << x << std::endl;
	}
	return 0;
}