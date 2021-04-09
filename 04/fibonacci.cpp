#include <iostream>

using namespace std;

template <int N>

struct fibonacci
{
    /* data */
    static const int value = fibonacci<N - 1>::value + fibonacci<N - 2>::value;
};

template <>
struct fibonacci<0>
{
    /* data */
    static const int value = 1;
};

template <>
struct fibonacci<1>
{
    /* data */
    static const int value = 1;
};

int main()
{
    cout << fibonacci<2>::value << endl;
    cout << fibonacci<3>::value << endl;
    cout << fibonacci<4>::value << endl;
    cout << fibonacci<5>::value << endl;
    return 0;
}