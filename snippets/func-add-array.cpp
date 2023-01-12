#include <iostream>

using namespace std;

int add(int values[10])
{ // declaration
    // the body of the function (definition)
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += values[i];
    }
    return sum;
}

int main()
{
    int numbers[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    cout << add(numbers) << endl;

    return 0;
}
