//
// Created by alligator on 2022/7/15.
//

#ifndef CPP_PRACTICE_HUMAN_H
#define CPP_PRACTICE_HUMAN_H
#include <string.h>
#include <iostream>
#include "MyString.h"

using namespace std;

class Human {
private:
    int age; //
    bool gender; //
    MyString name;

public:
    Human(const MyString& InputName, int InputAge, bool InputGender) : name(InputName), age(InputAge), gender(InputGender) {}
    int GetAge() const { return age; }
};


#endif //CPP_PRACTICE_HUMAN_H
