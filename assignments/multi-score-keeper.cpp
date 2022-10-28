#include <iostream>

using namespace std;

int main()
{
    int numPlayers, numScores;
    cout << "Enter number of players: ";
    cin >> numPlayers;
    cout << "Enter number of scores: ";
    cin >> numScores;
    cout << endl;

    float scores[numPlayers][numScores];
    float averages[numPlayers];

    for (int i = 0; i < numPlayers; i++)
    {
        cout << "Play " << i + 1 << ":" << endl;
        for (int j = 0; j < numScores; j++)
        {
            cout << "Enter score " << j + 1 << ": ";
            cin >> scores[i][j];
        }
        float total = 0;
        for (float score : scores[i])
        {
            total += score;
        }
        averages[i] = total / numScores;
        cout << endl;
    }

    for (int i = 0; i < numPlayers; i++)
    {
        cout << "Average score of Player " << i + 1 << " is " << averages[i] << endl;
    }
    return 0;
}
