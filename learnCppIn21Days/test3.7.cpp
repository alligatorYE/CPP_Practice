#include<iostream>

constexpr double GetPi() {return 22.0 / 7;}
constexpr double TwicePi() {return 2 * GetPi();}

int main(int argc, char const *argv[])
{
    const double pi = 22.0/7;
    std::cout <<"The value of constant pi is: "<< pi << std::endl;
    std::cout << "GetPi() = " << GetPi() << std::endl;
    std::cout << "TwicePi() = " << TwicePi() << std::endl;
    return 0;
}
