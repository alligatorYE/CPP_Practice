//
// Created by alligator on 2022/7/17.
//

#include "MyString.h"

MyString::MyString(const char* initString)
{
    buffer = NULL;
    if (initString != NULL)
    {
        buffer = new char[strlen(initString) + 1];
        strcpy(buffer, initString);
    }
}

MyString::MyString(const MyString& copySoutce  )
{
    buffer = NULL;
    if (copySoutce.buffer != NULL)
    {
        buffer = new char[strlen(copySoutce.buffer) + 1];
        strcpy(buffer, copySoutce.buffer);
    }
}

MyString::~MyString()
{
    delete[] buffer;
}

int MyString::GetLength()
{
    return strlen(buffer);
}

const char* MyString::GetString()
{
    return buffer;
}