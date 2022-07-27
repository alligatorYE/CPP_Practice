//
// Created by alligator on 2022/7/15.
//

#include "Human.h"

void Human::Talk(string Statement)
{
    cout << Statement << endl;
}

void Human::IntroduceSelf()
{
    Talk("Bla bla");
}

void displayAge(const Human& person)
{
    cout << person.age << endl;
}