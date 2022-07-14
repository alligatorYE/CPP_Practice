//
// Created by alligator on 2021/11/21.
//
/*
 * 使用auto 自动推断类型
 * 程序清单3.6 使用关键字auto 依靠编译器的类型推断功能
 * 将notes 添加到dev分支中: git checkout -p 21_8.7 notes/*.*
 * */

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    auto coinFlippedHeads = true;
    auto longNumber = 2500000000000;
    cout << "coinFlippedHeads = " << coinFlippedHeads << endl;
    cout << "size of coinFlippedHeads: " << sizeof(coinFlippedHeads) << endl;

    cout << "longNumber = " << longNumber << endl;
    cout << "size of longNumber: " << sizeof(longNumber) << endl;
    return 0;
}
