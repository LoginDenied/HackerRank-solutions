#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2)
{
    int scoresArray[6] = {a0, a1, a2, b0, b1, b2};
    vector<int>finalScore(2);
    finalScore[0] = 0;
    finalScore[1] = 0;
    
    for(int i = 0; i < 3; i++)
    {
        if (scoresArray[0+i] > scoresArray[3+i])
        {
            finalScore[0]++;
        } else if (scoresArray[0+i] < scoresArray[3+i]) {
            finalScore[1]++;
        }
    }
    
    return finalScore;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;

    return 0;
}
