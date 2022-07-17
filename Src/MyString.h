//
// Created by alligator on 2022/7/17.
//

#ifndef CPP_PRACTICE_MYSTRING_H
#define CPP_PRACTICE_MYSTRING_H
#include <string.h>
#include <iostream>
class MyString {
private:
    char* buffer;
public:
    MyString(const char* initString);
    MyString(const MyString& copySoutce);
    ~MyString();
    int GetLength();
    const char* GetString();
};


#endif //CPP_PRACTICE_MYSTRING_H
