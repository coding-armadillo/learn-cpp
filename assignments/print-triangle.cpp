#include <iostream>

using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows for the triangle: ";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = row - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
