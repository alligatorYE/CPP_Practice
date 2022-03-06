//
// Created by alligator on 2021/11/21.
//

/** git notes
 * ssh-keygen -t rsa -C "Alligator_@outlook.com"
 * clip < ~/.ssh/github_id_rsa.pub
 * 为git仓库配置远程仓库
 * git remote add gitee https://gitee.com/alligatorYE/CPP_Practice.git
 * */

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

inline double GetPi()
{
    return 3.14159;
}

inline long DoubleNum(int inputNumber)
{
    return inputNumber * 2;
}

int main(int argc, char const *argv[])
{
    cout << "Enter an integer: ";
    int inputNum = 0;
    cin >> inputNum;

    // Call inline function
    cout << "Double is: " << DoubleNum(inputNum) << endl;
    return 0;
}
