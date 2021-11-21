//
// Created by alligator on 2021/11/21.
//
/*
 * 使用列表初始化避免缩窄转换错误
 * */

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{

    int largeNum = 5000000;
    int anotherNum{ largeNum }; // OK!
    float someFloat{ 5000000 }; // OK! 5000000 can be accomodated
    return 0;
}
