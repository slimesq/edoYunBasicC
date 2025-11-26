#include "hstring.h"

std::ostream& operator<<(std::ostream& os, const hstring& hstr) {
	os << hstr.m_str;
	return os;
}