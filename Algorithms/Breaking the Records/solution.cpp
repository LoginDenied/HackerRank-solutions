#include <bits/stdc++.h>

using namespace std;

vector <int> breakingRecords(vector <int> score) 
{
    int highestScore;
    int lowestScore;
    vector<int>counter(2);
    counter[0] = 0;
    counter[1] = 0;
    
    highestScore = score[0];
    lowestScore = score[0];
    for (int i = 1; i < score.size(); i++)
    {
        if (score[i] < lowestScore)
        {
            lowestScore = score[i];
            counter[1]++;
        }
        if (score[i] > highestScore)
        {
            highestScore = score[i];
            counter[0]++;
        }
    }
    
    return counter;
}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
