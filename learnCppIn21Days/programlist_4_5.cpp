#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    string greetingString("Hello std::string!");
    cout << greetingString << endl;

    cout << "Enter a line of text: " << endl;
    string firstLine;
    getline(cin, firstLine);

    cout << "Enter another line: " << endl;
    string secondLine;
    getline(cin, secondLine);

    cout << "Result of concatenation: " << endl;
    string concatString = firstLine + " " + secondLine;
    cout << concatString << endl;

    cout << "Copy of concatenated string: " << endl;
    string aCopy = concatString;
    cout << aCopy << endl;

    cout << "Length of concat string: " << concatString.length() << endl;

    return 0;
}
