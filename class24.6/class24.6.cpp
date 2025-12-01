// class24.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>

class blut {
	bool bUse = true;
public:
	float x;
	float h;
	float y;
	float damage;

	void* operator new(size_t size, const char* msg);
	void operator delete(void* _Block, size_t size, const char* msg) noexcept;
	void operator delete(void* _Block, size_t size) noexcept;
	void operator delete(void* _Block) noexcept;

	void* operator new[](size_t size) = delete;
	void operator delete[](void* _Block, size_t size) = delete;

	~blut();
};

char mem[sizeof(blut) * 1000]{};
//char* mem = new char[1000 * sizeof(blut)] {};

void* blut::operator new(size_t size, const char* msg) {
	std::cout << "要分配的内存空间为:" << size << " ," << msg << std::endl;
	blut* dat = (blut*)mem;
	for (int i{ 0 }; i < 1000; i++) {
		if (!dat[i].bUse) {
			return &dat[i];
		}
	}
	return nullptr;
}

void blut::operator delete(void* _Block, size_t size) noexcept {
	std::cout << "要释放的内存空间为:" << size << std::endl;
	return ::operator delete(_Block, size);
}
void blut::operator delete(void* _Block, size_t size, const char* msg) noexcept {
	std::cout << "要释放的内存空间为:" << size << " ," << msg << std::endl;
	return ::operator delete(_Block, size);
}

void blut::operator delete(void* _Block) noexcept {
	std::cout << "释放内存空间" << std::endl;
	//memset(_Block, 0, sizeof(blut));
	return;
}

blut::~blut() {
	this->bUse = false;
}

int main()
{
	/*
	blut* shota = new (mem)blut[10];
	std::cout << (void*)mem << std::endl;
	delete[] mem;
	*/


	blut* shota1 = new ("it's a test") blut;
	blut* shota2 = new ("it's a test") blut;
	blut* shota3 = new ("it's a test") blut;
	std::cout << shota1 << std::endl;
	delete shota1;
	blut* shota4 = new ("it's a test") blut;
	std::cout << shota4 << std::endl;
	blut* shota5 = new ("it's a test") blut;
	blut* shota6 = new ("it's a test") blut;

	return 0;
}