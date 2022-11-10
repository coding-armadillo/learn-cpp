#include <iostream>

using namespace std;

int main()
{
    string car = "Tesla";
    string *ptr = &car;

    cout << car << endl;
    cout << &car << endl;
    cout << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << endl;
    *ptr = "Ford";
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}
