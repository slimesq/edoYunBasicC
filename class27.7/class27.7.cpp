// class27.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <bitset>

void GetCpuInfo(char* cpuMarker, int& ExternInfo) {
	int readEbx, readEcx, readEdx, readEax;
	__asm {
		mov eax, 0
		cpuid
		mov readEbx, ebx
		mov readEcx, ecx
		mov readEdx, edx
		mov eax,1
		cpuid
		mov readEax, eax
	}
	int* writeInt = (int*)cpuMarker;
	writeInt[0] = readEbx;
	writeInt[1] = readEdx;
	writeInt[2] = readEcx;
	ExternInfo = readEax;
}

int main()
{
	char Marker[0xFF]{};
	int ExternInfo;
	GetCpuInfo(Marker, ExternInfo);
	std::cout << "CPU 制造商信息:" << Marker << std::endl;
	std::cout << "CPU 扩展信息:" << std::bitset<32>(ExternInfo) << std::endl;

	return 0;
}
