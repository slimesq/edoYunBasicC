// class13.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	//std::shared_ptr<int[]> ptrA{ new int[5] {1,2,3,4,5} };
	//std::cout << ptrA << " " << ptrA[1] << std::endl;

	std::shared_ptr<int> ptrA{ std::make_shared<int>(5) };
	std::cout << ptrA.unique() << std::endl;
	std::shared_ptr<int> ptrB{ ptrA };
	std::shared_ptr<int> ptrC{ ptrA };
	std::cout << ptrA.unique() << std::endl;

	std::cout << ptrA << " " << *ptrA << std::endl;
	std::cout << ptrB << " " << *ptrB << std::endl; 
	std::cout << ptrC << " " << *ptrC << std::endl;
	
	std::cout << "===============" << std::endl;
	int* a = ptrB.get();

	std::cout << ptrA.use_count() << std::endl;
	ptrB.reset();
	std::cout << ptrB << std::endl; 
	std::cout << ptrA.use_count() << std::endl;
	std::cout << a << " " << *a << std::endl;

	std::cout << ptrA.use_count() << std::endl;
	ptrC.reset();
	std::cout << ptrC << std::endl; 
	std::cout << ptrA.use_count() << std::endl;
	std::cout << a << " " << *a << std::endl;

	std::cout << ptrA.use_count() << std::endl;
	ptrA.reset();
	std::cout << ptrA << std::endl; 
	std::cout << a << " " << *a << std::endl;
	 


	return 0;
}
