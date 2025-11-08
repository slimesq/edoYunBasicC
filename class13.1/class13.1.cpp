// class13.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	std::unique_ptr<int> intPtr{std::make_unique<int>(150)};
	std::cout << "*intPtr = " << *intPtr << std::endl;
	*intPtr = 500;
	//intPtr[5] = 500;	// Error

	std::unique_ptr<int> ptrA{};
	std::cout << intPtr << " " << ptrA << std::endl;
	ptrA = std::move(intPtr);
	std::cout << intPtr << " " << ptrA << std::endl;

	std::cout << "ptrA.get() = " << ptrA.get() << std::endl;

	//int* a = intPtr.get();
	//*a = 450;
	//intPtr.release();
	//std::cout << intPtr << std::endl;
	//std::cout << *a << std::endl;

	//std::cout << *intPtr <<std::endl;

	//intPtr.reset();
	//std::cout << intPtr <<std::endl;
	//std::cout << a <<std::endl;

	//std::unique_ptr<int[]> intPtrA{std::make_unique<int []>(5)};
	//intPtrA[0] = 500;
	////*intPtrA = 3;	// Error
	//std::cout << intPtrA << " " << intPtrA[0] << std::endl;



	return 0;
}

