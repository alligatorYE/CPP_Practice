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

const double Pi = 3.1416;

// output parameter result by reference
/**
 * 第二个形参result 旁边的&，它告诉编译器，不要将第二个实参复制给函数，而将指向该实参的引用传递给函数
 * */
void Area(double radius, double& result)
{
    result = Pi * radius * radius;
}

int main(int argc, char const *argv[])
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    double areaFetched = 0;
    Area(radius, areaFetched);
    cout << "The area is: " << areaFetched << endl;
    return 0;
}
