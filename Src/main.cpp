//
// Created by alligator on 2021/11/21.
//
/*
 * 演示溢出错误
 * Demo overflow error
 * 程序清单3.4 有符号整型变量和无符号整型变量溢出的负面影响
 * */

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{

    unsigned short uShortValue = 65535; //unsigned short, 它占用16 位内存，因此取值范围为0～65535
    cout << "Incrementing unsigned short " << uShortValue << "gives: " ;
    cout << ++uShortValue <<"\n" << endl;

    short signedShort = 32767; //signed short 的取值范围为−32768～32768
    cout << "Incrementing signed short " << signedShort << "gives: " ;
    cout << ++signedShort <<"\n" << endl;
    return 0;
}
