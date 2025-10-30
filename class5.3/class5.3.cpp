// class5.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

namespace lGame
{
	int HP{ 1000 };
	int MP{ 1000 };
	int lv{ 1314 };
	namespace Weapon 
	{
		int damage{ 3000 };
		int lv{ 1200 };
		namespace WeaponInfo
		{
			int lv = lGame::lv;
			int lv1 = lv;
		}
	}

}

int main()
{
	int c = lGame::Weapon::damage;
	std::cout << c << std::endl;
	lGame::HP = 500;
	using lGame::HP;
	std::cout << HP << std::endl;

	std::cout << lGame::Weapon::WeaponInfo::lv1 << std::endl;

	//using std::cout;
	//using std::cin;
	//using std::hex;
	using namespace std;

	cout << "不需要std!" << endl;
	int a;
	cin >> hex >> a;

	return 0;
}
