// class22.9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class Med {
public:
    Med(int _Recover=100) :Recover{ _Recover } {};
    int GetRecover() const{
        return this->Recover;
    }
private:
    int Recover;
};


class Role {
public:
    Role(int _HP = 1000,int _maxHP=3500):HP{_HP},maxHP{_maxHP}{}

    void EatMed(const Med& med) {
        this->HP += med.GetRecover();
        this->HP = this->HP <= this->maxHP ? this->HP : this->maxHP;
    }
    int GetHP() const {
        return this->HP;
    }
private:
    int HP;
    int maxHP;
};

int main()
{
    Role role;
    std::cout << " HP = " << role.GetHP() << std::endl;
    Med med;
    role.EatMed(med);
    std::cout << " HP = " << role.GetHP() << std::endl;
    Med med1(3003);
    role.EatMed(med1);
    std::cout << " HP = " << role.GetHP() << std::endl;

    return 0;
}
