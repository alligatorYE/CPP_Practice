//
// Created by alligator on 2021/11/21.
//
/*
 * 5.3.9 使用C++逻辑运算NOT（!）、AND（&&）和OR（||） *
 * */

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
    cout << "Enter true(1) or false(0) for two operands:" << endl;
    bool operands1 = false;
    bool operands2 = false;
    cin >> operands1 ;
    cin >> operands2 ;

    cout << operands1 << "AND" << operands2 << "=" << (operands1 && operands2) << endl;
    cout << operands1 << "OR" << operands2 << "=" << (operands1 || operands2) << endl;
    return 0;
}
