#include <iostream>

using namespace std;

int main()
{
    int month;

    cout << "month is ";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "Jan" << endl;
        break;
    case 2:
        cout << "Feb" << endl;
        break;
    case 3:
        cout << "Mar" << endl;
        break;
    case 4:
        cout << "Apr" << endl;
        break;
    case 5:
        cout << "May" << endl;
        break;
    case 6:
        cout << "Jun" << endl;
        break;
    case 7:
        cout << "Jul" << endl;
        break;
    case 8:
        cout << "Aug" << endl;
        break;
    case 9:
        cout << "Sept" << endl;
        break;
    case 10:
        cout << "Oct" << endl;
        break;
    case 11:
        cout << "Nov" << endl;
        break;
    case 12:
        cout << "Dec" << endl;
        break;

    default:
        cout << "Invalid" << endl;
        break;
    }

    return 0;
}
