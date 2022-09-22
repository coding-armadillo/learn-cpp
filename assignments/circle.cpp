#include <iostream>

using namespace std;

int main()
{
    double diameter;
    cout << "Enter Diameter: ";
    cin >> diameter;
    double pi = 3.14159;
    double radius = diameter / 2;
    double area = pi * radius * radius;
    double circumference = pi * diameter;
    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;

    return 0;
}
