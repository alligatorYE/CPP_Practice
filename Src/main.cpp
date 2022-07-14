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
 * git log --oneline --graph --all --decorate
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
