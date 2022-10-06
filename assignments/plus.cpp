#include <iostream>

using namespace std;

int main()
{
    int row;
    while (true)
    {
        cout << "Enter number of rows for the plus: ";
        cin >> row;
        if (row % 2)
        {
            break;
        }
    }

    int i, j;

    for (i = 0; i < row; i++)
    {
        if (i != row / 2)
        {
            for (j = 0; j < row / 2; j++)
            {
                cout << " ";
            }
            cout << "*" << endl;
        }
        else
        {
            for (j = 0; j < row; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    return 0;
}
