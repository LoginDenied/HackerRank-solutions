#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m)
{
    int possibleChoices = 0;
    for (int i = 0; i < n - (m - 1); i++)
    {
        int total = 0;
        for (int j = i; j < i + m; j++)
        {
            total = total + s[j];
        }
        
        if (total == d)
        {
            possibleChoices++;
        }
    }
    
    return possibleChoices;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
