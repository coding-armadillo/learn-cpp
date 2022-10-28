#include <iostream>

using namespace std;

int main()
{
    string fruits[4] = {"apple",
                        "banana",
                        "coconut",
                        "durian"};

    int i;
    int size = sizeof(fruits) / sizeof(string);
    for (i = 0; i < size; i++)
    {
        cout << fruits[i] << " ";
    }

    cout << endl;

    i = 0;
    while (i < size)
    {
        cout << fruits[i] << " ";
        i++;
    }

    cout << endl;

    return 0;
}
