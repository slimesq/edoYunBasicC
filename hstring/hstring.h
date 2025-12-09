#pragma once
#include <iostream>

class hstring
{
public:
	// construction
	hstring();
	hstring(const hstring& _hstr)noexcept;
	hstring(const char* _cstr)noexcept;

	// operator+
	hstring& operator+(const hstring& _hstr);
	hstring& operator+(const char* _cstr);

	// operator-
	hstring& operator-(const hstring& _hstr);
	hstring& operator-(const char* _cstr);

	// operator=
	hstring& operator=(const hstring& _hstr);
	hstring& operator=(const char* _cstr);
	hstring& operator=(int _integer);

	// replace
	hstring& replace(int _begin, const char* _subStr, const char* _newStr);

	// find
	int find(const char* _subStr) const;

	// c_str
	const char* c_str()const;

	// destruction
	~hstring();

	friend std::ostream& operator<<(std::ostream& _os, const hstring& _hstr);
private:
	void strcat(const char* _cstr);

private:
	char* m_buffer;			// 动态缓冲区(含初始缓冲区)
	size_t m_buffer_size;	// 缓冲区总容量
	size_t m_data_length;	// 实际存储字符串长度
	static const size_t INIT_BUFF_SIZE = 20;	// 20 for test
	inline static const size_t npos = -1;
};

std::ostream& operator<<(std::ostream& _os, const hstring& _hstr);

