#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "num is ";
    cin >> num;

    string be = (num > 1) ? "are " : "is ";
    char s = (num > 1) ? 's' : '\0';

    cout << "There " << be << num << " record" << s << "." << endl;

    return 0;
}
