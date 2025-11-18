#include "edoyun.h"
#include <iostream>
#define VERSION "1.0"

int ave(int a, int b) {
	return (a * b) / 2;
}

namespace edoyun {
	const char* GetVersion() {
		const char* str{ VERSION };
		return str;
	}
}
