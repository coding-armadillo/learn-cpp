#include <iostream>

using namespace std;

int main(){
    int p, foul, point, numstar;
    cin >> p;
    numstar = 0;
    for (int i = 0; i<p; i++){
        cin >> point >> foul;
        if (point * 5 - foul * 3 > 40) {
            numstar = numstar+1;
        }
    }
    cout << numstar;
    if (p == numstar){
        cout << "+";
    }
}