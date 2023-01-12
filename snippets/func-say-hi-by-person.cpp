#include <iostream>

using namespace std;

void sayHi(string name)
{ // declaration
    // the body of the function (definition)
    cout << name << " says Hi!" << endl;
}

int main()
{
    cout << "Hello, World!" << endl;

    sayHi("Jack");

    return 0;
}
