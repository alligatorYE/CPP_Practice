#include <iostream>

int main(int argc, char const *argv[])
{
    auto x = 10L;		// auto推导为long， x是long
    auto& x1 = x ;		// auto推导为long，x1是long&
    std::cout << "x1 = "<<x1<<std::endl;
    auto* x2 = &x ;		// auto推导为long, x2是long*
    std::cout << "x2 = " << x2<<"\t";
    std::cout << "*x2 = " << *x2<<std::endl;
    const auto& x3 =x;	// auto推导为long，x3是const long&
    std::cout << "x3 = " << x3<<"\t";
    std::cout << "&x3 = " << &x3<<std::endl;
    auto x4=&x3;		// auto推导为const long*，x4是const long*
    std::cout << "x4 = " << x4<<std::endl;
    return 0;
}
