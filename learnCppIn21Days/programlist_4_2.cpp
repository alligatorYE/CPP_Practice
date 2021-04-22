#include <iostream>

constexpr int Square(int number) { return number * number; }

int main(int argc, char const *argv[])
{
    const int ARRAY_LENGTH = 5;
    int myNumbers[ARRAY_LENGTH] = {33, 45, 912, -21, 73};

    int moreNumbers[Square(ARRAY_LENGTH)];
    std::cout << "Enter index of the element to be changed: \t";
    int elementIndex = 0;
    std::cin >> elementIndex;
    std::cout << "\nEnter new value:\t";
    int newValue = 0;
    std::cin >> newValue;

    return 0;
}
