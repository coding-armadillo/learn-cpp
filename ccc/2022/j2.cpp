#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int points, fouls;
        cin >> points >> fouls;
        int stars = (5 * points) - (3 * fouls);
        if (stars > 40)
        {
            count += 1;
        }
    }

    cout << count;
    if (count == n)
    {
        cout << "+";
    }
    cout << endl;

    return 0;
}
