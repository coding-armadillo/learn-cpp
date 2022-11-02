#include <iostream>

using namespace std;

int main()
{
    string car = "tesla";
    cout << car << endl;

    car.push_back('!');
    cout << car << endl;

    car.pop_back();
    cout << car << endl;

    car.erase(0, 1);
    cout << car << endl;

    car.insert(0, "T");
    cout << car << endl;

    car.append(" and Ford!");
    cout << car << endl;

    string number1 = "123";
    cout << stoi(number1) + 100 << endl;

    string number2 = "123.45";
    cout << stof(number2) + 100 << endl;

    return 0;
}
