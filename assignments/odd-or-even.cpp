#include <iostream>

using namespace std;

int main()
{
    int number;

    while (true)
    {
        cout << "Enter a number: ";
        cin >> number;
        if (number < 0)
        {
            cout << "See you later!" << endl;
            break;
        }
        else if (number % 2)
        {
            cout << "Odd number" << endl;
        }
        else
        {
            cout << "Even number" << endl;
        }
    }

    return 0;
}
