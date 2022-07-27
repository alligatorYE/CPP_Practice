//
// Created by alligator on 2022/7/27.
//

#ifndef CPP_PRACTICE_UTILITY_H
#define CPP_PRACTICE_UTILITY_H
#include "Human.h"

class Utility {

public:
    static void DisplayAge(const Human& person)
    {
        cout << person.age << endl;
    }
};

#endif //CPP_PRACTICE_UTILITY_H
