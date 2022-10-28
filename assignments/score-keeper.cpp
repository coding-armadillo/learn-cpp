#include <iostream>

using namespace std;

int main()
{
    int numScores;
    cout << "Enter number of scores: ";
    cin >> numScores;

    float scores[numScores];
    for (int i = 0; i < numScores; i++)
    {
        cout << "Enter score: ";
        cin >> scores[i];
    }
    float total = 0;
    for (float score : scores)
    {
        total += score;
    }
    cout << "Average score is " << total / numScores << endl;

    return 0;
}
