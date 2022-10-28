#include <iostream>

using namespace std;

int main()
{
    string fruits[4] = {"apple",
                        "banana",
                        "coconut",
                        "durian"};

    int i = 0;
    while (i < 4)
    {
        cout << fruits[i] << endl;
        i++;
    }

    return 0;
}
