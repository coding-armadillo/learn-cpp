#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));

    int number = rand() % 1000 + 1;

    int guess;
    while (true)
    {
        cout << "Your guess is ";
        cin >> guess;
        if (guess == number)
        {
            cout << "Bingo!" << endl;
            break;
        }
        else if (guess > number)
        {
            cout << "It should be lower..." << endl;
        }
        else
        {
            cout << "It should be higher..." << endl;
        }
    }

    return 0;
}
