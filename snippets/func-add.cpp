#include <iostream>

using namespace std;

int add(int a, int b)
{ // declaration
    // the body of the function (definition)
    return a + b;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << add(a, b) << endl;

    return 0;
}
