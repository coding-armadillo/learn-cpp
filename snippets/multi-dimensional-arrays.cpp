#include <iostream>

using namespace std;
int main()
{
    float scores[3][4] = {
        {90, 85, 64, 72},
        {100, 100, 100, 50},
        {80, 90, 99, 95},
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "Student " << i + 1 << ":" << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << "\tSubject " << j + 1 << ":" << scores[i][j] << endl;
        }
    }

    return 0;
}
