#include <iostream>

using namespace std;

int main()
{
    const int a = 1;
    const int b = 2;

    cout << ((a > b) && (a < b)) << endl;
    cout << ((a >= b) || (a <= b)) << endl;
    cout << !(a == b) << endl;

    return 0;
}
