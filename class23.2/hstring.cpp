#include "hstring.h"
#include <iostream>

hstring::hstring() {
	usmlen = 0x32;
	uslen = 0;
	cstr = new char[usmlen];
}

hstring::hstring(const char* str) :hstring() {
	CopyStrs(cstr, str);
}
hstring::hstring(const hstring& str) :hstring() {
	CopyStrs(cstr, str.cstr);
}
const hstring& hstring::operator=(const hstring& str) {
	std::cout << "===hstring" << std::endl;
	CopyStrs(cstr, str.cstr);
	return *this;
}

const hstring& hstring::operator=(const char* str) {
	std::cout << "===char" << std::endl;
	CopyStrs(cstr, str);
	return *this;
}

unsigned short hstring::GetLength(const char* str) const {
	unsigned short len = 0;
	for (; str[len++];);
	return len;
}

void hstring::CopyStrs(char* dest, const char* source) {
	unsigned short len{ GetLength(source) };
	if (len > usmlen) {
		if (usmlen > 0) {
			delete[] cstr;
		}
		cstr = new char[len];
		usmlen = len;
	}
	uslen = len;	//×Ö·û´®
	memcpy(dest, source, len);
}

const hstring& hstring::operator=(const long long& value) {
	char str[100];
	sprintf_s(str,"%lld", value);
	CopyStrs(this->cstr, str);
	return *this;
}
const hstring& hstring::operator=(const float& value) {
	char str[100];
	sprintf_s(str, "%f", value);
	CopyStrs(this->cstr, str);
	return *this;
}