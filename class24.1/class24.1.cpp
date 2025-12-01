#include "hstring.h"
#include <iostream>

int main() {

	/*
	hstring str{ "-12345d6000dad" };
	std::cout << str << std::endl;

	int x = (int)str;
	std::cout << x << std::endl;
	*/

	hstring str{};
	str + 123LL;
	std::cout << str << std::endl;

	int x = (int)str + 123;
	std::cout << x << std::endl;

	return 0;
}