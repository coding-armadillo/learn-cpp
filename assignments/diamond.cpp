#include <iostream>

using namespace std;

int main()
{
    int row;
    while (true)
    {
        cout << "Enter number of rows: ";
        cin >> row;
        if (row % 2)
        {
            break;
        }
    }

    int i, j;

    // upper part
    for (i = 0; i < row / 2; i++)
    {
        for (j = 0; j < row / 2 - i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // middle
    for (j = 0; j < row; j++)
    {
        cout << "*";
    }
    cout << endl;

    // bottom part
    for (i = row / 2 + 1; i < row; i++)
    {
        for (j = 0; j < i - row / 2; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * (row - i) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
