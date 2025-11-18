// class18.8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

template<typename T>
void Swap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
void printAry(T* ary, int count) {
	for (int i{ 0 }; i < count; ++i) {
		std::cout << ary[i] << " ";
	}
	std::cout << std::endl;
}

template<typename T>
void Sort(T* ary,int count,bool BigSort = true) {
	for (int i = 1; i < count; i++) {
		for (int i = 1; i < count; i++) {
			bool bcase = BigSort ? ary[i] > ary[i - 1]:ary[i] < ary[i - 1];
			if (bcase) {
				Swap(ary[i], ary[i - 1]);
			}
		}
	}
}


int main()
{
	int a[6]{ 123,456,789,20,10,3562 };
	Sort(a,6,false);
	printAry(a, 6);
	short s[6]{ 123,456,789,20,10,3562 };
	Sort(s,6,false);
	printAry(s, 6);
	std::string strs[6]{ "12","asd","sdf","sesdas","adasd","dedl"};
	Sort(strs,6,false);
	printAry(strs, 6);

	return 0;
}


