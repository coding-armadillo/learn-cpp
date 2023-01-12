#include <iostream>

using namespace std;

int add(int a, int b)
{ // declaration
    // the body of the function (definition)
    return a + b;
}

float add(float a, float b)
{ // declaration
    // the body of the function (definition)
    return a + b;
}

float add(float a, float b, float c, float d)
{ // declaration
    // the body of the function (definition)
    return add(add(a, b), add(c, d));
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << add(a, b) << endl;

    float c, d;
    cin >> c >> d;

    cout << add(c, d) << endl;

    float e, f, g, h;
    cin >> e >> f >> g >> h;

    cout << add(e, f, g, h) << endl;

    return 0;
}
