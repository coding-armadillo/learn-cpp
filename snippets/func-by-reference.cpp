#include <iostream>

using namespace std;

int add(int &a, int &b)
{ // declaration
    // the body of the function (definition)
    a += 1;
    b += 1;
    return a + b;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "before add(): " << a << " " << b << endl;
    cout << add(a, b) << endl;
    cout << "after  add(): " << a << " " << b << endl;

    return 0;
}
