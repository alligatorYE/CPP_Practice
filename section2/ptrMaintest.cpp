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

    //const 指针
    int errNum = 7 ;
    int * const currentErr = &errNum; //currentErr将一直指向errNum
    std::cout << "errNum = "<<errNum<<std::endl;
    std::cout <<"*currentErr = "<< *currentErr<<std::endl;
    
    const double pi = 3.14159265;
    const double * const ppi = &pi; //ppi是一个指向常量的指针
    std::cout << "*ppi = "<< *ppi<<std::endl;

    int ivalue2 = 0;
    int * const ptr3 = &ivalue2; //ptr3是一个顶层const，只能指向&ivalue2，不能指向其他地址，自身不能被修改。
    std::cout << "*ptr3 = "<<*ptr3<<std::endl;
    ivalue2 = -1;
    std::cout << "*ptr3 = "<<*ptr3<<std::endl;

    const int civalue = 44;
    const int *ptr4 = &civalue; //ptr4是一个底层const，只读&ivalue，不能对ivalue的值进行改变，自身可以被修改。
    std::cout << "*ptr4 = " <<*ptr4 << std::endl;
    ptr4 = &ivalue2;
    std::cout << "*ptr4 = " <<*ptr4 << std::endl;

    constexpr int *ptr5 = nullptr;//ptr5 是一个指向整型的 常量指针
    const int * ptr6 = nullptr;//ptr6 是一个指向常量的 指针

    //处理类型
    typedef char *pstring;
    char c1 = 's';
    const pstring cstr = &c1;//cstr 是指向char的常量指针
    const pstring *ps = &cstr;//ps是一个指针，它指向的对象是指向char的 常量指针



    return 0;
}