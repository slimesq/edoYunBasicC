#include "emath.h"
int acount{ 999 };
int ave(int a, int b) {
	acount++;
	atest++;
	return (a + b) / 2;
}

int bigger(int a, int b) {
	return a > b ? a : b;
}