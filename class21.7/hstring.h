#pragma once
#include <string>
#include <iostream>

class hstring
{
public:
	explicit hstring(const char* _str) {	// 如果不加explicit,那么operator<<里面会调用这个构造函数，导致栈溢出。
		if (std::strlen(_str) > 0) {
			m_str = new char[std::strlen(_str) + 1];
			std::memcpy(m_str, _str, std::strlen(_str) + 1);
		}
	}

	hstring(const hstring& hstr) {
		if (std::strlen(hstr.m_str) > 0) {
			m_str = new char[std::strlen(hstr.m_str) + 1];
			std::memcpy(m_str, hstr.m_str, strlen(hstr.m_str) + 1);
		}
	}

	~hstring() {
		delete[] m_str;
		m_str = nullptr;
	}

	void SetStr(const char* str) {
		if (m_str != nullptr) {
			delete[] m_str;
			m_str = nullptr;
		}
		m_str = new char[std::strlen(str) + 1];
		std::memcpy(m_str, str, strlen(str) + 1);
	}


	friend std::ostream& operator<<(std::ostream& os,const hstring& hstr);
private:
	char* m_str;
};

