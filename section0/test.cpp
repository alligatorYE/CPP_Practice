#include <iostream>
//g++ test.cpp -std=c++17 -o a.out; ./a.out
int main()
{
    using namespace  std;
    cout << "c++ version = " << __cplusplus << endl;
    cout << "gcc version = " << __VERSION__ << endl;
    
    cout << "gcc major = " << __GNUC__ << endl;
    cout << "gcc minor = " << __GNUC_MINOR__ << endl;
    cout << "gcc path = " << __GNUC_PATCHLEVEL__ <<endl;
#ifndef __GLIBCXX__
#define __GLIBCXX__ "unkown version,please check or config your gcc path,or your OS not surpport."
#endif
    cout << "libstdc++ = " << __GLIBCXX__ <<endl;
}
