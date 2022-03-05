//
// Created by alligator on 2021/11/21.
//

/** git notes
 * ssh-keygen -t rsa -C "Alligator_@outlook.com"
 * clip < ~/.ssh/github_id_rsa.pub
 * 为git仓库配置远程仓库
 * git remote add gitee https://gitee.com/alligatorYE/CPP_Practice.git
 * */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

const double Pi = 3.14159265;

double Area(double radius); //for circle
double Area(double radius, double height); // for cylinder

int main(int argc, char const *argv[]) {
    cout << "Enter z for Cylinder, c for Circle: ";
    char userSelection = 'z';
    cin >> userSelection;

    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    if (userSelection == 'z') {
        cout << "Enter height: ";
        double height = 0;
        cin >> height;

        // Invoke overloaded variant of Area for Cyclinder
        cout << "Area of cylinder is: " << Area(radius, height) << endl;
    } else {
        cout << "Area of cylinder is: " << Area(radius) << endl;
    }
    return 0;
}

double Area(double radius) {
    return Pi * radius * radius;
}

double Area(double radius, double height) {
    return Area(radius) * 2 + 2 * Pi * radius * height;
}

