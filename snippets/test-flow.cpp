#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2)
        {
            continue;
        }
        else if (i == 8)
        {
            break;
        }

        cout << i << endl;
    }

    return 0;
}
