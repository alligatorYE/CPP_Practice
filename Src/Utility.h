//
// Created by alligator on 2022/7/27.
//

#ifndef CPP_PRACTICE_UTILITY_H
#define CPP_PRACTICE_UTILITY_H
#include "Human.h"  //在友元类头文件中包含源类的头文件，不要对源类进行声明

class Utility {

public:
    static void DisplayAge(const Human& person)
    {
        cout << person.age << endl;
    }
};

#endif //CPP_PRACTICE_UTILITY_H

