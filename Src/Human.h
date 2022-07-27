//
// Created by alligator on 2022/7/15.
//

#ifndef CPP_PRACTICE_HUMAN_H
#define CPP_PRACTICE_HUMAN_H
#include <string>


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

class Utility {

public:
    static void DisplayAge(const Human& person)
    {
        cout << person.age << endl;
    }
};


#endif //CPP_PRACTICE_HUMAN_H
