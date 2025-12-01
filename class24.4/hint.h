#pragma once
#include <iostream>
class hint
{
	char* mem[4];
public:
	hint(int);
	hint(hint& val);
	~hint();
	operator int() const;
	hint& operator=(const int val);

	hint& operator++();
	hint& operator--();
	const hint operator++(int);
	hint operator--(int);
};

//std::istream& operator>>(std::istream& cin,hint& val){}
//std::istream& operator>>(std::istream& cin,hint& val){}
