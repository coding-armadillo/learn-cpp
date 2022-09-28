#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "a is ";
    cin >> a;
    cout << "b is ";
    cin >> b;

    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else if (a == b)
    {
        cout << "a equals b" << endl;
    }
    else
    {
        cout << "a is less than b" << endl;
    }

    return 0;
}
