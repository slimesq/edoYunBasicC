#include "hstring.h"
#include  <vector>

static int getCstrLength(const char* _cStr) {
	int res{ 0 };
	for (; _cStr[res] != '\0'; ++res);
	return res;
}

// 获取前缀函数数组（vector<int>）
static std::vector<int> computePrefixArray(const char* pattern) {
	if (pattern == nullptr) return {};
	int length = getCstrLength(pattern);
	std::vector<int> prefix(length, 0);
	int curLen = 0;

	for (int i = 1; i < length; ++i) {
		// 回退: 当前字符不匹配时，缩短len到上一个匹配长度
		while (curLen > 0 && pattern[i] != pattern[curLen]) {
			curLen = prefix[curLen - 1];
		}
		// 字符匹配，延长相等前后缀长度
		if (pattern[i] == pattern[curLen]) {
			curLen++;
		}
		prefix[i] = curLen;
	}
	return prefix;
}


// 找到则返回子串在主串中首次出现的起始地址位置(从0开始)，未找到返回-1
static int KMP(const char* _cstr, const char* _subStr) {
	// 1.边界条件处理
	// 1.1 主串或者子串为空
	if (_subStr == nullptr || _cstr == nullptr) return -1;

	int length = getCstrLength(_cstr);
	int subLength = getCstrLength(_subStr);

	// 1.2 子串为空，默认返回主串起始地址
	if (subLength == 0) return 0;
	// 1.3 子串比主串长，直接返回-1
	if (subLength > length) return -1;

	// 2. 计算前缀函数数组
	std::vector<int> prefix = computePrefixArray(_subStr);

	int i = 0; // 主串指针（不回溯）
	int j = 0; // 子串指针

	//3. 遍历主串进行匹配
	while (i < length) {
		if (_cstr[i] == _subStr[j]) {
			i++;
			j++;
		}
		// 子串完全匹配：返回起始地址（i - j）
		if (j == subLength) {
			return i - j;
		}
		// 字符不匹配，处理指针
		else if (i < length && _cstr[i] != _subStr[j]) {
			// 子串指针未到起点，按前缀数组回退
			if (j != 0) {
				j = prefix[j - 1];
			}
			// 子串指针已到起点，主串指针前进
			else {
				i++;
			}
		}
	}
	return -1;
}

// construction
hstring::hstring() : m_buffer{ new char[INIT_BUFF_SIZE] {} }, m_buffer_size{ INIT_BUFF_SIZE }, m_data_length{ 0 } {}

hstring::hstring(const hstring& _hstr)noexcept {
	if (this != &_hstr) {
		m_buffer_size = _hstr.m_buffer_size;
		m_data_length = _hstr.m_data_length;
		m_buffer = new char[m_buffer_size] {};
		memcpy(this->m_buffer, _hstr.m_buffer, m_data_length + 1);
	}
}
hstring::hstring(const char* _cstr) noexcept {
	m_data_length = getCstrLength(_cstr);
	m_buffer_size = m_data_length < INIT_BUFF_SIZE ? INIT_BUFF_SIZE : m_data_length + 1;
	m_buffer = new char[m_buffer_size] {};
	memcpy(m_buffer, _cstr, m_data_length + 1);
}

// operator+
hstring& hstring::operator+(const hstring& _hstr) {
	this->strcat(_hstr.c_str());
	return *this;
}
hstring& hstring::operator+(const char* _cstr) {
	this->strcat(_cstr);
	return *this;
}

// operator-
hstring& hstring::operator-(const hstring& _hstr) {
	int pos = KMP(m_buffer, _hstr.m_buffer);
	if (pos == -1) {
		std::cerr << "[ERROR] 子串 \"" << _hstr.m_buffer << "\" 未找到!\n";
	}
	else {
		int subLength{ getCstrLength(_hstr.m_buffer) };
		for (int i{ pos + subLength }; i <= m_data_length; ++i) {
			m_buffer[i - subLength] = m_buffer[i];
		}
		m_data_length -= subLength;
	}
	return *this;
}
hstring& hstring::operator-(const char* _cstr) {
	int pos = KMP(m_buffer, _cstr);
	if (pos == -1) {
		std::cerr << "[ERROR] 子串 \"" << _cstr << "\" 未找到!\n";
	}
	else {
		int subLength{ getCstrLength(_cstr) };
		for (int i{ pos + subLength }; i <= m_data_length; ++i) {
			m_buffer[i - subLength] = m_buffer[i];
		}
		m_data_length -= subLength;
	}
	return *this;
}

// operator=
hstring& hstring::operator=(const hstring& _hstr) {
	if (this != &_hstr) {
		if (m_buffer_size > 0) {
			delete m_buffer;
			m_buffer = nullptr;
		}
		m_buffer_size = _hstr.m_buffer_size;
		m_data_length = _hstr.m_data_length;
		m_buffer = new char[m_buffer_size] {};
		memcpy(this->m_buffer, _hstr.m_buffer, m_data_length + 1);
	}
	return *this;
}
hstring& hstring::operator=(const char* _cstr) {
	if (m_buffer_size > 0) {
		delete m_buffer;
		m_buffer = nullptr;
	}
	m_data_length = getCstrLength(_cstr);
	m_buffer_size = m_data_length < INIT_BUFF_SIZE ? INIT_BUFF_SIZE : m_data_length + 1;
	m_buffer = new char[m_buffer_size] {};
	memcpy(m_buffer, _cstr, m_data_length + 1);
	return *this;
}
hstring& hstring::operator=(int _integer) {

	char buf[0x40]{};
	int buf_pos = 0x40 - 1;
	buf[buf_pos] = '\0';
	bool bzs = _integer >= 0;	//是不是正数
	_integer = _integer * (bzs * 2 - 1);	// 取绝对值
	do buf[--buf_pos] = _integer % 10 + '0'; while (_integer = _integer / 10);
	buf[buf_pos = buf_pos - 1 * (1 - bzs)] = '-' * (bzs + 1) * (1 - bzs) + buf[buf_pos] * bzs;

	m_data_length = 0x40 - buf_pos - 1;
	if (m_data_length + 1 > m_buffer_size) {
		if (m_buffer_size > 0) {
			delete[] m_buffer;
			m_buffer = nullptr;
		}
		m_buffer_size = m_data_length + 1 > 2 * m_buffer_size ? m_data_length + 1 : 2 * m_buffer_size;
		m_buffer = new char[m_buffer_size] {};
	}
	memcpy(m_buffer, buf + buf_pos, m_data_length + 1);

	return *this;
}

// replace
hstring& hstring::replace(int _begin, const char* _subStr, const char* _newStr) {
	int oldLength{ static_cast<int>(m_data_length) };
	if (_begin >= 0 && _begin <= oldLength) {
		int pos = KMP(m_buffer + _begin, _subStr);
		if (pos == -1) {
			std::cerr << "[ERROR] 子串 \"" << _subStr << "\" 未找到!\n";
		}
		else {
			int subLength{ getCstrLength(_subStr) };
			int newSubLength{ getCstrLength(_newStr) };
			m_data_length = m_data_length - subLength + newSubLength;
			if (m_data_length + 1 > m_buffer_size) {
				m_buffer_size = m_data_length + 1 > 2 * m_buffer_size ? m_data_length + 1 : 2 * m_buffer_size;
				char* pOldBuffer{ m_buffer };
				m_buffer = new char[m_buffer_size] {};
				memcpy(m_buffer, pOldBuffer, pos + _begin);	// begin
				memcpy(m_buffer + _begin + pos, _newStr, newSubLength);	// replace
				memcpy(m_buffer + _begin + pos + newSubLength, pOldBuffer + _begin + pos + subLength, oldLength - pos - _begin - subLength + 1);	// end
				delete pOldBuffer;
			}
			else {
				int nRemainings = oldLength - pos - _begin - subLength;
				if (subLength < newSubLength) {
					// 往后移
					for (int i{ 0 }; i <= nRemainings; ++i) {
						m_buffer[m_data_length - i + 1] = m_buffer[oldLength - i + 1];
					}
					memcpy(m_buffer + _begin + pos, _newStr, newSubLength);
				}
				else if (subLength > newSubLength) {
					// 往前移
					for (int i{ 0 }; i <= nRemainings; ++i) {
						m_buffer[_begin + pos + newSubLength + i] = m_buffer[_begin + pos + subLength + i];
					}
					memcpy(m_buffer + _begin + pos, _newStr, newSubLength);
				}
				else {
					memcpy(m_buffer + _begin + pos, _newStr, newSubLength);
				}
			}
		}
	}
	else {
		std::cerr << "[ERROR] 位置输入 \"" << _begin << "\" 过大或者为负数!\n";
	}
	return *this;
}

// find
int hstring::find(const char* _subStr) const {
	int res = KMP(m_buffer, _subStr);
	if (res == -1) {
		std::cerr << "[ERROR] 子串 \"" << _subStr << "\" 未找到!\n";
		return npos;
	}
	else {
		return res;
	}
}

// destruction
hstring::~hstring() {
	if (m_buffer_size > 0) {
		delete m_buffer;
		m_buffer = nullptr;
	}
}

const char* hstring::c_str()const {
	return m_buffer;
}

std::ostream& operator<<(std::ostream& _os, const hstring& _hstr) {
	_os << _hstr.c_str();
	return _os;
}

void hstring::strcat(const char* _cstr) {
	int length{ getCstrLength(_cstr) };
	int oldLength = m_data_length;
	m_data_length = m_data_length + length;
	if (m_data_length + 1 > m_buffer_size) {
		m_buffer_size = m_data_length + 1 > 2 * m_buffer_size ? m_data_length + 1 : 2 * m_buffer_size;
		char* pOldBuffer{ m_buffer };
		m_buffer = new char[m_buffer_size] {};
		memcpy(m_buffer, pOldBuffer, oldLength);
		delete pOldBuffer;
	}
	memcpy(m_buffer + oldLength, _cstr, length + 1);
}