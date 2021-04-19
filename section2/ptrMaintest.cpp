#include <iostream>

int main(int argc, const char **argv)
{
    int ivalue = 10;
    std::cout << "ivalue = " << ivalue << std::endl;

    int &refi = ivalue;
    std::cout << "refi = " << refi << std::endl;

    int *ptr = &refi;
    std::cout << "*ptr = " << *ptr << "\t"
              << "ptr = " << ptr << "\t"
              << "&ptr = " << &ptr << std::endl;

    int *ptr2 = ptr;
    std::cout << "*ptr2 = " << *ptr2 << "\t"
              << "ptr2 = " << ptr2 << "\t"
              << "&ptr2 = " << &ptr2 << std::endl;

    refi = 23;

    std::cout << "ivalue = " << ivalue << std::endl;
    std::cout << "*ptr = " << *ptr << "\t"
              << "ptr = " << ptr << "\t"
              << "&ptr = " << &ptr << std::endl;
    std::cout << "*ptr2 = " << *ptr2 << "\t"
              << "ptr2 = " << ptr2 << "\t"
              << "&ptr2 = " << &ptr2 << std::endl;

    int **pptr = &ptr;

    std::cout << "ivalue= " << ivalue << "\t"
              << "ptr = " << ptr << "\t"
              << "*ptr = " << *ptr << "\t"
              << "pptr = " << pptr << "\t"
              << "*pptr = " << *pptr << "\t"
              << "**pptr = " << **pptr << std::endl;

    int *&r = ptr;

    std::cout << "*ptr = " << *ptr << "\t"
              << "*r = " << *r << "\t"
              << "r = " << r << std::endl;

    r = &ivalue;

    std::cout << "*ivalue = " << *ptr << "\t"
              << "*r = " << *r << "\t"
              << "r = " << r << std::endl;

    int *p1 = nullptr;

    int *p2 = 0;

    int *p3 = NULL;


    const int bufferSize = 512;

    //const 的引用
    const int ci = 1024;
    const int &r1 = ci;

    std::cout <<"ci = " << ci <<"\t"
              << "r1 = " << r1 <<"\t" << std::endl;

    //初始化和对const的引用
    double dval = 3.14;
    const int &r2 = dval; //r2绑定了一个临时变量
    std::cout <<"r2 = " << r2 << std::endl;
    //编译器的处理
    const int temp = dval;
    const int &r3 = temp;
    std::cout <<"r3 = " << r3 << std::endl;


    int ivalue1 = 42;
    int &r4 = ivalue1;
    const int &r5 = ivalue1; //r45 绑定iivalue1, 但是不允许通过r5修改i的值，ivalue1的值仍然可以通过 ivalue1 = 0 和 r4 = 0 这样的方式修改
    ivalue1 = 0;
    r4 = 0;
    // r5 = 0; 错误


    return 0;
}