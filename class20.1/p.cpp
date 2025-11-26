#include <iostream>

inline int a = 1350;
const int pt = 999;

static int sa = 300;

void Test() {
	std::cout << a << std::endl;
	std::cout << "sa = " << sa << "&sa = " << &sa << std::endl;
}