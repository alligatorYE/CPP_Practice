//
// Created by alligator on 2021/11/21.
//
/*
 * 使用const 将变量声明为常量
 * 程序清单3.7 声明一个名为pi 的常量
 * */

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    const double pi = 22.0 / 7;
    cout << "The value of pi is " << pi <<endl;

    // Uncomment next line to view compile failure
//    pi = 345; //试图向常量赋值，编译器将会报错
    return 0;
}
