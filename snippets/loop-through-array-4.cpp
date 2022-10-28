#include <iostream>

using namespace std;

int main()
{
    string fruits[4] = {"apple",
                        "banana",
                        "coconut",
                        "durian"};

    for (string fruit : fruits)
    {
        cout << fruit << endl;
    }

    return 0;
}
