// class26.7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class Aninal {
    virtual void Move() = 0;
    //virtual void Fly() = 0;
protected:
    Aninal() {};
};

class Dog :public Aninal {
    virtual void Move() {

    }
};

class Cat :public Aninal {
    virtual void Move() {

    }
};

int main()
{

    //Aninal anm1;    // ERROR
    //Dog dog{};
    Aninal* panml = new Cat();

    return 0;
}