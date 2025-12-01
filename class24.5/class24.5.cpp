// class24.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class blut {
public:
	float x;
	float h;
	float y;
	float damage;

	void* operator new(size_t size,const char* msg);
	void operator delete(void* _Block, size_t size, const char* msg) noexcept;
	void operator delete(void* _Block, size_t size) noexcept;
	void operator delete(void* _Block) noexcept;

	void* operator new[](size_t size) = delete;
	void operator delete[](void* _Block,size_t size) = delete;
};

void* blut::operator new(size_t size,const char* msg){
	std::cout << "要分配的内存空间为:" << size << " ," << msg << std::endl;
	return ::operator new (size);
}

void blut::operator delete(void* _Block, size_t size) noexcept {
	std::cout << "要释放的内存空间为:" << size << std::endl;
	return ::operator delete(_Block, size);
}
void blut::operator delete(void* _Block, size_t size,const char* msg) noexcept {
	std::cout << "要释放的内存空间为:" << size << " ," << msg << std::endl;
	return ::operator delete(_Block, size);
}

void blut::operator delete(void* _Block) noexcept {
	std::cout << "释放内存空间" << std::endl;
	return ::operator delete(_Block);
}

char* mem = new char[0x1000];

int main()
{
	/*
	blut* shota = new (mem)blut[10];
	std::cout << (void*)mem << std::endl;
	delete[] mem;
	*/


	blut* shota = new ("it's a test") blut;
	shota->damage = 1;
	std::cout << shota << std::endl;
	std::cout << shota->damage << std::endl;
	delete shota;
	return 0;
}