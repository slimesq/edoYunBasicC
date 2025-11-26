// class21.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

struct NPC {
    int hp;
    int mp;
    int damage;
};

struct MONSTER {
    int hp;
    int mp;
    int damage;
    int price;
};

struct ROLE {
    int hp;
    int mp;
    int damage;
    int diamond;

    bool Act(NPC* beacter) {
        beacter->hp -= damage;
        return beacter->hp > 0;
    }
};

class CROLE {
public:
    int hp;
    int mp;
    int damage;
    int diamond;

    bool Act(NPC* beacter) {
        beacter->hp -= damage;
        return beacter->hp > 0;
    }

    void Init() {
        hpRecover = 3;
    }
private:
    int hpRecover;
};


int main()
{
    //MONSTER atm{ 1000,500,100,6000 };
    //ROLE zs{ 1000,1000,50,1000 };
    //ROLE ls{ 1000,500,100,6000 };

    //zs.Act((NPC*) &ls);
    //std::cout << "ls.hp = " << ls.hp << std::endl;

    CROLE zs;
    CROLE ls;

    zs.Init();
    ls.Init();

    return 0;
}

