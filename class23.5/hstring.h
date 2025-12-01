#pragma once
#include <iostream>

class hstring {
	unsigned short usmlen;	// 字符串的内存长度
	unsigned short uslen;	//字符串的长度
	char* cstr;	// 字符串的内容
	unsigned short GetLength(const char* str) const;
	void CopyStrs(char* dest, const char* source);
public:
	inline static char no_char{ -1 };
	char* c_str() { return cstr; }

	hstring();
	explicit hstring(const char* str);
	hstring(const hstring& str);
	const hstring& operator=(const hstring& str);
	const hstring& operator=(const char* str);

	const hstring& operator=(const long long& value);
	const hstring& operator=(const float& value);

	const hstring& operator<<(const hstring& str);
	const hstring& operator+(const hstring& str);

	const char& operator[](unsigned short index) const;
	const hstring operator[](const char* key) const;	//返回key后面的字符内容

	bool ResetMemory(unsigned short size);	//重新设置缓冲区大小
	unsigned short GetMemory() const;		//获取当前缓冲区大小
	unsigned short GetLength() const;		//获取字符串长度

	~hstring();
};

std::ostream& operator<<(std::ostream& _cout, hstring _str);
std::istream& operator>>(std::istream& _cin, hstring& _str);
