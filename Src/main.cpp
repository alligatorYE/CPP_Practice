//
// Created by alligator on 2021/11/21.
//

/** git notes
 * ssh-keygen -t rsa -C "Alligator_@outlook.com"
 * clip < ~/.ssh/github_id_rsa.pub
 * 为git仓库配置远程仓库
 * git remote add gitee https://gitee.com/alligatorYE/CPP_Practice.git
 * git remote -v # 查看远程分支
 * git remote rm gitee # 移除远程分支gitee
 * 解决[ OpenSSL SSL_read: Connection was reset, errno 10054] 办法：git config --global http.sslVerify "false"
 * vim esc键无法退出编辑模式，使用F5键退出编辑模式
 *  git log --oneline --graph --all --decorate
 * */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;

void DisplayNums(vector<int>& dynArray)
{
    std::for_each(dynArray.begin(),dynArray.end(),[](int Element) {cout << Element <<" ";});
    cout << std::endl;
}

int main(int argc, char const *argv[])
{
    vector<int> myNums;
    myNums.push_back(501);
    myNums.push_back(-1);
    myNums.push_back(25);
    myNums.push_back(-35);
    DisplayNums(myNums);
    cout << "Sorting them in descending order" << endl;
    std::sort(myNums.begin(),myNums.end(),[](int num1, int num2) {return num2 < num1;});
    DisplayNums(myNums);
    return 0;
}
