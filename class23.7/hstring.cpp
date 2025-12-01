#include "hstring.h"
#include <iostream>

// 配置参数：小数默认保留 6 位（可调整，如 2 位、4 位）
constexpr int DECIMAL_PRECISION = 6;
// 字符串缓冲区大小：符号(1) + 整数最大位(30) + 小数点(1) + 小数位(6) + 结束符(1) = 39
constexpr int BUF_SIZE = 40;
// 配置参数：最大支持 64 位整数（最多 19 位数字）
constexpr int MAX_DIGITS = 19;

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

hstring& hstring::operator<<(const hstring& str) {
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
		uslen = uslen + slen - 1;
	}
	return *this;
}

hstring& hstring::operator+(const hstring& str) {
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
 
std::ostream& operator<<(std::ostream& _cout, hstring& _str) {
	_cout << _str.c_str();
	return _cout;
}
std::ostream& operator<<(std::ostream& _cout, hstring&& _str) {
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

const char& hstring::operator()()const {
	return cstr[0];
}

hstring hstring::operator()(unsigned short begin, size_t length)const {
	if ((begin > uslen)) {
		return hstring{ "" };
	}

	unsigned slen = begin + length > uslen-1 ? uslen - begin - 1 : length;

	char* newStr = new char[slen + 1];
	memcpy(newStr, cstr + begin, slen + 1);
	newStr[slen] = '\0';

	return hstring{ newStr };
}

// 核心函数：整数转字符串（无任何条件判断，兼容 int/uint/int64_t/uint64_t 等）
// 模板参数 T：支持所有有符号/无符号整数类型（int、uint32_t、int64_t、uint64_t 等）
template <typename T>
char* int_to_string(T val, char* buf) {
	// 1. 初始化缓冲区（无判断，固定操作）
	memset(buf, 0, BUF_SIZE);
	int buf_pos = BUF_SIZE - 1;
	buf[buf_pos] = '\0';
	bool bzs = val >= 0;	//是不是正数
	val = val * (bzs * 2 - 1);	// 取绝对值
	do buf[--buf_pos] = val % 10 + 48; while (val = val / 10);
	buf[buf_pos = buf_pos - 1 * (1 - bzs)] = '-' * (bzs + 1) * (1 - bzs) + buf[buf_pos] * bzs;
	return &(buf[buf_pos]);
}

// 核心函数：float 转字符串
char* float_to_string(float value, char* buf) {
	// 1. 初始化缓冲区（避免垃圾值）
	memset(buf, 0, BUF_SIZE);
	int pos = 0;

	// 2. 处理符号（负数标记）
	if (value < 0) {
		buf[pos++] = '-';
		value = -value;  // 转为正数，统一后续处理
	}

	// 3. 处理特殊值（NaN、无穷大）
	if (!std::isfinite(value)) {
		if (std::isnan(value)) {
			memcpy(buf + pos, "NaN",4);  // NaN：非数字
		}
		else {
			memcpy(buf + pos, "Inf",4);  // 无穷大
		}
		return buf;
	}

	// 4. 分离整数部分和小数部分
	int64_t int_part = static_cast<int64_t>(value);  // 整数部分（如 123.45 → 123）
	float decimal_part = value - int_part;           // 小数部分（如 123.45 → 0.45）

	// 5. 整数部分转字符串
	char intBuf[BUF_SIZE];
	char* intRes = int_to_string(int_part, intBuf);
	int idx{ 0 };
	while (intRes[idx] != '\0') {
		buf[pos++] = intRes[idx++];
	}

	// 6. 小数部分转字符串（若小数部分非零，且精度>0）
	if (decimal_part > 1e-9 && DECIMAL_PRECISION > 0) {  // 避免浮点误差（如 0.0000001 视为 0）
		buf[pos++] = '.';  // 添加小数点
		for (int i = 0; i < DECIMAL_PRECISION; ++i) {
			decimal_part *= 10;  // 小数部分乘 10，提取整数位（如 0.45 → 4.5 → 提取 4）
			int digit = static_cast<int>(decimal_part);
			buf[pos++] = '0' + digit;
			decimal_part -= digit;  // 剩余小数部分（如 4.5 → 0.5）
		}
		// 移除小数部分末尾的零（可选，如 123.400000 → 123.4）
		while (pos > 2 && buf[pos - 1] == '0') {
			pos--;
		}
		// 若最后一位是小数点，移除（如 123. → 123）
		if (buf[pos - 1] == '.') {
			pos--;
		}
	}

	// 7. 添加字符串结束符
	buf[pos] = '\0';
	return buf;
}


hstring& hstring::operator+(const long long& value) {
	char buf[BUF_SIZE];
	char* res = int_to_string(value, buf);
	(*this) << hstring{ res };
	return *this;
}
hstring& hstring::operator+(const float& value) {
	char buf[BUF_SIZE];
	char* res = float_to_string(value, buf);
	(*this) << hstring{ res };
	return *this;
}