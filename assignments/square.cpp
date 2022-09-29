#include <iostream>

using namespace std;

int main()
{
    int length;
    int c;
    cout << "Enter length: ";
    cin >> length;
    for (int row = 0; row < length; row++)
    {
        if ((row == 0) || (row == length - 1))
        {
            for (c = 0; c < length; c++)
            {
                cout << '*';
            }
            cout << endl;
        }
        else
        {
            cout << '*';
            for (c = 0; c < length - 2; c++)
            {
                cout << ' ';
            }
            cout << '*' << endl;
        }
    }
}
