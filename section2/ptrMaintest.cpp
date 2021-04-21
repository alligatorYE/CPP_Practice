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

    std::cout << "ci = " << ci << "\t"
              << "r1 = " << r1 << "\t" << std::endl;

    //初始化和对const的引用
    double dval = 3.14;
    const int &r2 = dval; //r2绑定了一个临时变量
    std::cout << "r2 = " << r2 << std::endl;
    //编译器的处理
    const int temp = dval;
    const int &r3 = temp;
    std::cout << "r3 = " << r3 << std::endl;

    int ivalue1 = 42;
    int &r4 = ivalue1;
    const int &r5 = ivalue1; //r45 绑定iivalue1, 但是不允许通过r5修改i的值，ivalue1的值仍然可以通过 ivalue1 = 0 和 r4 = 0 这样的方式修改
    ivalue1 = 0;
    r4 = 0;
    // r5 = 0; 错误

    //const 指针
    int errNum = 7;
    int *const currentErr = &errNum; //currentErr将一直指向errNum
    std::cout << "errNum = " << errNum << std::endl;
    std::cout << "*currentErr = " << *currentErr << std::endl;

    const double pi = 3.14159265;
    const double *const ppi = &pi; //ppi是一个指向常量的指针
    std::cout << "*ppi = " << *ppi << std::endl;

    int ivalue3 = 0;
    int *const ptr3 = &ivalue3; //ptr3是一个顶层const，只能指向&ivalue3，不能指向其他地址，自身不能被修改。[自己不动，让别人动]
    std::cout << "*ptr3 = " << *ptr3 << std::endl;
    ivalue3 = -1;
    std::cout << "*ptr3 = " << *ptr3 << std::endl;
    *ptr3 = 100;
    std::cout << "*ptr3 = " << *ptr3 << std::endl;

    const int ivalue4 = 44;
    const int *ptr4 = &ivalue4; //ptr4是一个底层const，只读&ivalue，不能对ivalue的值进行改变，自身可以被修改。[不能动别人，只能动自己]
    std::cout << "*ptr4 = " << *ptr4 << std::endl;
    ptr4 = &ivalue3;
    std::cout << "*ptr4 = " << *ptr4 << std::endl;

    constexpr int *ptr5 = nullptr; //ptr5 是一个指向整型的 常量指针
    const int *ptr6 = nullptr;     //ptr6 是一个指向常量的 指针

    //处理类型
    typedef char *pstring;
    char c1 = 's';
    const pstring cstr = &c1;  //cstr 是指向char的常量指针
    const pstring *ps = &cstr; //ps是一个指针，它指向的对象是指向char的 常量指针

    class Sales_item
    {
    };
    using SI = Sales_item; //C++11 新标准，给对象取别名

    //auto 类型说明符
    double db;
    float fl;
    auto item = db + fl;

    std::cout << "size of item: " << sizeof(item) << std::endl;

    //auto一般会忽略掉const，同时底层const则会保存下来。
    int i = 0;

    const int ci1 = i, &cr = ci1;
    auto b = ci1; //b是一个整数(ci1的顶层特性被忽略了)
    b = 2;        //b可以被修改
    auto c = cr;  //c是一个整数(cr是ci1的别名，ci本身是一个顶层const)

    c = 3;       //c可以被修改
    auto d = &i; //d是一个整型指针(整数的地址就是指向整数的指针)
    auto e = &ci1;
    std::cout << "b = " << b << "\t"
              << "c = " << c << "\t"
              << "d = " << d << "\t"
              << "e = " << e << std::endl;
    //如果需要auto推断出顶层const，需要明确指出

    const auto f = ci;
    //f = 6; 会提示：“表达式必须是可修改的左值”

    auto &g = ci;
    // auto &h = 42; 会报错，不能为非常量引用绑定字面值
    const auto &j = 42; //可以为常量引用绑定字面值
    //使用auto在一条语句中定义多个变量时，“&” 和“*”只从属于某一个声明符，而非基本数据类型的一部分，因此初始值必须是同一种类型
    auto k = ci1, &l = i;      //k是整数，l是整型引用
    auto &m = ci1, *pa = &ci1; //m是对整型常量的引用，p是指向整型常量的指针
    //auto &n = i, *pa2 = &ci1; 错误：i的类型是int而&ci1的类型是const int，初始值不是同一种类型

    //***************************** decltype ***********************************

    const int ci2 = 0, &cj = ci2;
    decltype(ci2) x = 0;
    decltype(cj) y = x;
    // decltype(cj) z;  z是一个引用，必须被初始化


    
    return 0;
}

namespace auto_type_description
{

}