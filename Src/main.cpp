//
// Created by alligator on 2021/11/21.
//
#include <iostream>
#include <string>
#include "Human.h"

using std::string;
using std::cout;
using std::endl;

void DoSomething(Human person)
{
    cout << "Human sent did something." << endl;
    return;
}

int main(int argc, char const *argv[])
{
    Human kid(10); // explicit conversion is OK.
    Human anotherKid = Human(11); // explicit, OK.
    DoSomething(kid); // OK.

//    Human anotherKid2 = 11; // failure: implicit conversion not OK.
//    DoSomething(10); // implicit conversion
    return 0;
}
