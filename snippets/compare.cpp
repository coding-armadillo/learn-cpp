#include <iostream>

using namespace std;

int main()
{
    const int a = 1;
    const int b = 2;

    cout << (a > b) << endl;  // Greater than
    cout << (a < b) << endl;  // Less than
    cout << (a >= b) << endl; // No less than
    cout << (a <= b) << endl; // No greater than
    cout << (a == b) << endl; // Equal to
    cout << (a != b) << endl; // Not equal to

    return 0;
}
