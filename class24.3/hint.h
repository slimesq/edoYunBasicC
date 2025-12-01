#pragma once
class hint
{
	char* mem[4];
public:
	hint(int);
	~hint();
	operator int();
	hint& operator=(const int val);
};

