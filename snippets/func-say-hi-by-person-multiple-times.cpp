#include <iostream>

using namespace std;

void sayHi(string name, int times)
{ // declaration
    // the body of the function (definition)
    for (int i = 0; i < times; i++)
    {
        cout << i + 1 << ": " << name << " says Hi!" << endl;
    }
}

int main()
{
    cout << "Hello, World!" << endl;

    sayHi("Jack", 5);

    return 0;
}
