#include <iostream>

using namespace std;

int main(){
    int s, m, l;

    cin >> s;
    cin >> m;
    cin >> l;

    int a = 1 * s + 2 * m + 3 * l;

    if (a < 10){
        cout << "sad";
    }
    else {
        cout << "happy";
    }
}