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
	uslen = len;	//字符串
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

const hstring& hstring::operator<<(const hstring& str) {
	unsigned short slen = GetLength(str.cstr);
	if ((uslen + slen - 1) > usmlen) {
		usmlen = (uslen + slen - 1);
		char* tmp = cstr;

		cstr = new char[usmlen];
		memcpy(cstr, tmp, uslen-1);
		memcpy(cstr + uslen - 1, str.cstr, slen);
		
		uslen = usmlen;
		
		delete[] tmp;
	}
	else {
		memcpy(cstr + uslen - 1, str.cstr, slen);
	}
	return *this;
}

const hstring& hstring::operator+(const hstring& str) {
	return (*this) << str;
}

const char& hstring::operator[](unsigned short idx) const {
	if (idx < uslen && idx > 0) {
		return cstr[idx];
	}
	return no_char;
}

hstring::~hstring() {
	if (usmlen > 0) {
		delete[] cstr;
	}
}
 
std::ostream& operator<<(std::ostream& _cout, hstring _str) {
	_cout << _str.c_str();
	return _cout;
}

std::istream& operator>>(std::istream& _cin, hstring& _str) {
	char _sRead[0x1FF];
	_cin >> _sRead;
	_str =hstring{ _sRead };
	return _cin;
}

//重新设置缓冲区大小
bool hstring::ResetMemory(unsigned short size) {
	if (size > usmlen) {
		char* tmp = cstr;
		cstr = new char[size] {};
		memcpy(cstr, tmp, uslen);
		if (usmlen > 0) {
			delete[] tmp;
		}
		usmlen = size;
		return true;
	}
	return false;
}

//获取当前缓冲区大小
unsigned short  hstring::GetMemory() const {
	return usmlen;
}
//获取字符串长度
unsigned short  hstring::GetLength() const {
	return uslen;
}

//返回key后面的字符内容
const hstring hstring::operator[](const char* key) const {
	int keyLen{ GetLength(key) - 1 };
	for (int i{ 0 }; i < uslen; ++i) {
		bool isFind{ true };
		for (int j{ 0 }; j < keyLen; ++j) {
			if (cstr[i + j] != key[j]) {
				isFind = false;
			}
		}
		if (isFind) {
			char* res = &(cstr[i + keyLen]);
			return hstring{ res };
		}
	}
	return hstring{};
}