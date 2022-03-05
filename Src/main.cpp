//
// Created by alligator on 2021/11/21.
//

/**
 * git notes
 * ssh-keygen -t rsa -C "Alligator_@outlook.com"
 * clip < ~/.ssh/github_id_rsa.pub
 * 为git仓库配置远程仓库
 * git remote add gitee https://gitee.com/alligatorYE/CPP_Practice.git
 * git remote -v # 查看远程分支
 * git remote rm gitee # 移除远程分支gitee
 * */

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int GetFibNums(int fibIndex);

int main(int argc, char const *argv[])
{
    cout << "Enter 0-based index of desired Fibonacci Number: ";
    int index = 0;
    cin >> index;

    cout << "Fibonacci number is: " << GetFibNums(index) << endl;
    return 0;
}

int GetFibNums(int fibIndex)
{
    if (fibIndex < 2)
    {
        return fibIndex;
    } else
    {
        return GetFibNums(fibIndex - 1) + GetFibNums(fibIndex -2);
    }
}