#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(int argc, char const *argv[])
{
    vector<int> dynArray(3);
    dynArray[0] = 365;
    dynArray[1] = 983;
    dynArray[2] = -423;

    cout << "All elements in the array are displayed at the beginning as :" << endl;
    for (const auto &var : dynArray)
    {
        cout << var << "\t";
    }

    cout << "\nNumber of integers in array: " << dynArray.size() << endl;
    cout << "Enter another element to insert" << endl;
    int newValue = 0;
    cin >> newValue;
    dynArray.push_back(newValue);

    cout << "\nNumber of integers in array:\t" << dynArray.size() << endl;
    cout << "Last element in array:\t" << dynArray[dynArray.size() - 1] << endl;

    cout << "All elements in the array are displayed after insertion as :" << endl;

    for (const auto &var : dynArray)
    {
        cout << var << "\t";
    }

    return 0;
}
