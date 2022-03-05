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
#include <algorithm>
using std::string;
using std::cout;
using std::endl;
using std::sort;

void DisplayArray(int numbers[], int length)
{
    for (int index = 0; index < length; ++index)
    {
        cout << numbers[index] << " ";
    }

    cout << endl;

//    std::sort(numbers, numbers + 4);
}


void DisplayArray(char characters[], int length)
{
    for (int index = 0; index < length; ++index)
    {
        cout << characters[index] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int myNums[4] = {24, 58, -1, 245};
    DisplayArray(myNums, 4);

    char myStatement[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
    DisplayArray(myStatement, 7);

    std::sort(myNums, myNums + 4);
    DisplayArray(myNums, 4);

    return 0;
}
