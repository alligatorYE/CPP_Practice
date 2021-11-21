//
// Created by alligator on 2021/11/21.
//
/*
 * 使用constexpr 定义常量表达式
 * 程序清单3.8 使用常量表达式来计算pi 的值
 * */

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

constexpr double GetPi() { return 22.0 / 7; }
constexpr double TwicePi() { return 2 * GetPi(); }

int main(int argc, char const *argv[])
{
    using namespace std;
    const double pi = 22.0 / 7;

    cout << "constant pi contains value " << pi << endl;
    cout << "constexpr GetPi() returns value " << GetPi() << endl;
    cout << "constexpr TwicePi() returns value " << TwicePi() << endl;
    return 0;
}
