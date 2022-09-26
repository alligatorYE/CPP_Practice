//
// Created by alligator on 2021/11/21.
//
#include <iostream>
#include "main.hpp"

int main(int argc, char const *argv[])
{
    Carp myLunch;
    Tuna myDinner;

    cout << "About my food:" << endl;

    cout << "Lunch:";
    myLunch.Swim();

    cout << "Dinner:";
    myDinner.Swim();

    return 0;
}
