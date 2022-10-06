#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));

    int number = rand() % 1000 + 1;
    cout << "Random number is " << number << endl;

    return 0;
}
