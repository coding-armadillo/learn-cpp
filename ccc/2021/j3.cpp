#include <iostream>

using namespace std;

int main()
{
    string s, prev;
    while (true)
    {
        cin >> s;
        if (s == "99999")
        {
            break;
        }
        int sum = int(s[0] - '0') + stoi(s.substr(1, 1));
        cout << sum << endl;

        if (sum == 0)
        {
            cout << prev << " ";
        }
        else if (sum % 2)
        {
            prev = "left";
            cout << "left ";
        }
        else
        {
            prev = "right";
            cout << "right ";
        }
        cout << s.substr(2, 3) << endl;
    }
}
