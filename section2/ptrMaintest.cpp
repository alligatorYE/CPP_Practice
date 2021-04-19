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

    int *p1 = nullptr;

    int *p2 = 0;

    int *p3 = NULL;
    return 0;
}