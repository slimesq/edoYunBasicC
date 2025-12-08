// class26.2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

class MoveObject {
public:
  int x{0};
  int y{0};

  virtual MoveObject *Move() {
    x++;
    y++;
    return nullptr;
  }
};

class NPCOjbect : public MoveObject {
private:
  NPCOjbect *Move() override {
    x++;
    y++;
    std::cout << "我是NPC" << std::endl;
    return nullptr;
  }
};

class MonsterObject : public MoveObject {
public:
  NPCOjbect *Move() override {
    x++;
    y++;
    std::cout << "我是怪物" << std::endl;
    return nullptr;
  }
};

void Move(MoveObject &obj) { obj.Move(); }

int main() {
  MonsterObject snake;
  NPCOjbect zsf;
  //zsf.Move();

  Move(snake);
  Move(zsf);

  return 0;
}
