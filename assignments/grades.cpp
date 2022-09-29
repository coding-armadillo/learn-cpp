#include <iostream>

using namespace std;

int main()
{
    float grade;

    cout << "percentage grade is ";
    cin >> grade;

    if ((grade > 100) || (grade < 0))
    {
        cout << "Invalid" << endl;
    }
    else
    {
        int level = grade / 10;
        switch (level)
        {
        case 10:
        case 9:
            cout << "A" << endl;
            break;
        case 8:
            cout << "B" << endl;
            break;
        case 7:
            cout << "C" << endl;
            break;
        case 6:
            cout << "D" << endl;
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            cout << "F" << endl;
            break;
        }
    }

    return 0;
}
