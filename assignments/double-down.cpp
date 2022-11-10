#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number of values: ";
    cin >> n;

    cout << "Enter values in array:" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int *ptr = arr;
    int max = 0;
    for (int j = 1; j < n; j++)
    {
        if (*(ptr + j) > *(ptr + max))
        {
            max = j;
        }
    }
    cout << "Max is " << *(ptr + max) << endl;

    cout << "After doubling down:" << endl;
    *(ptr + max) = 2 * *(ptr + max);
    for (int j = 0; j < n; j++)
    {
        cout << *(ptr + j) << " ";
    }
    cout << endl;

    return 0;
}
