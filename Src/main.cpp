//
// Created by alligator on 2021/11/21.
//
/*
 * 使用sizeof 确定变量的长度
 * Use sizeof to determine the length of the variable
 * 程序清单3.5 获悉标准C++变量类型的长度
 * */

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    cout << "Computing the size of some C++ inbuilt variable types" << endl;
    cout << "Size of boolean variables: " << sizeof(bool) << endl;
    cout << "size of char variables: " << sizeof(char) << endl;
    cout << "size of unsigned short int variables: " << sizeof(unsigned short int) << endl;
    cout << "size of short int variables: " << sizeof(short int) << endl;
    cout << "size of unsigned long int variables: " << sizeof(unsigned long int) << endl;
    cout << "size of long variables: " << sizeof(long) << endl;
    cout << "size of int variables: " << sizeof(int) << endl;
    cout << "size of unsigned long long variables: " << sizeof(unsigned long long) << endl;
    cout << "size of long long variables: " << sizeof(long long) << endl;
    cout << "size of unsigned int variables: " << sizeof(unsigned int) << endl;
    cout << "size of float variables: " << sizeof(float) << endl;
    cout << "size of double variables: " << sizeof(double) << endl;

    cout << "The output changes with compiler, hardware and OS" << endl;

    return 0;
}
