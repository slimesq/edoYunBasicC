// class26.5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class MoveObject {
public:
    int x;
    virtual void test(){}
    virtual void Move(){}
};

class MonsterObject :public MoveObject {
public:
    void Move(){
        std::cout << "MonsterMove" << std::endl;
    }
};

class NPCObject :public MoveObject {
public:
    void Move() {
        std::cout << "NPCMove" << std::endl;
    }
};

class WOLF :public MonsterObject {};

class MAN :MonsterObject {};

class BOSS {};

class WOLFMAN :public WOLF ,public BOSS{};


int main()
{
    MonsterObject monster;
    MoveObject* _move = (MoveObject*)&monster;

    //_move = new MoveObject();
    /*
    auto _pmonsterA = dynamic_cast<MonsterObject*>(_move);
    auto _pNPCA = dynamic_cast<NPCObject*>(_move);

    if (_pmonsterA != nullptr) {
        _pmonsterA->MonsterMove();
    }

    if (_pNPCA == nullptr){
        _pNPCA->NPCMove();
    }
    */
    //_move->Move();

    //NPCObject& lNPC = dynamic_cast<NPCObject&>(monster);    // throw expection
    
    WOLFMAN wlfMan;
    MoveObject* pMove = &wlfMan;

    auto p = dynamic_cast<BOSS*>(pMove);
    if (p != nullptr) {
        std::cout << "不为空" << std::endl;
    }

    return 0;
}
