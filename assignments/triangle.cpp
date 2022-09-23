#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Side a: ";
    cin >> a;
    cout << "Side b: ";
    cin >> b;
    cout << "Side c: ";
    cin >> c;
    float s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area is " << area;
}
