#include <iostream>

int ave(int x) {
	if (x == 1) return x;
	return x + ave(x - 1);
}

int main() {
	std::cout << ave(100) << std::endl;
	return 0;
}