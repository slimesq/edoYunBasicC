#include "hint.h"
hint::hint(int val = 0) {
	mem[0] = new char;
	mem[1] = new char;
	mem[2] = new char;
	mem[3] = new char;

	char* read = (char*)&val;
	mem[0][0] = read[0]^0x23;
	mem[1][0] = read[1];
	mem[2][0] = read[2];
	mem[3][0] = read[3];
}
hint::~hint() {
	delete mem[0];
	delete mem[1];
	delete mem[2];
	delete mem[3];
}

hint::operator int() {
	int res{ 0 };
	char* read = (char*)&res;
	read[0] = mem[0][0] ^ 0x23;
	read[1] = mem[1][0];
	read[2] = mem[2][0];
	read[3] = mem[3][0];
	return res;
}

hint& hint::operator=(const int val) {
	char* read = (char*)&val;
	mem[0][0] = read[0] ^ 0x23;
	mem[1][0] = read[1];
	mem[2][0] = read[2];
	mem[3][0] = read[3];
	return *this;
}