//
// Created by alligator on 2022/7/15.
//

#ifndef CPP_PRACTICE_HUMAN_H
#define CPP_PRACTICE_HUMAN_H
#include <string>

//不要在源类头文件中包含友元类的头文件，而是在成员中声明友元类

using namespace std;

class Human {
private:
    friend class Utility;
    int age;
    string name;
public:
//    explicit constructor blocks implicit conversions. 显式构造函数阻止隐式转换
    explicit Human(string humanName, int humanAge) : name(humanName), age(humanAge) {}
};




#endif //CPP_PRACTICE_HUMAN_H
