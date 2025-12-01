#pragma once

class hstring {
	unsigned short usmlen;	// 字符串的内存长度
	unsigned short uslen;	//字符串的长度
	char* cstr;	// 字符串的内容
	unsigned short GetLength(const char* str) const;
	void CopyStrs(char* dest, const char* source);
public:
	char* c_str() { return cstr; }

	hstring();
	explicit hstring(const char* str);
	hstring(const hstring& str);
	const hstring& operator=(const hstring& str);
	const hstring& operator=(const char* str);

	const hstring& operator=(const long long& value);
	const hstring& operator=(const float& value);
};
