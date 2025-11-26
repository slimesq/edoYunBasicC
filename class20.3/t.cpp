#include <iostream>
extern int x;	// x = 250

namespace t {
	extern int height;
}

void test() {

	std::cout << ::x << std::endl;
}

void THack() {
	std::cout << "Thack!" << std::endl;
}