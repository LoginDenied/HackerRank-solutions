#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector <int> apples, vector <int> oranges) 
{
    int appleLandedLocation;
    int numberOfApplesHit = 0;
    for (int i = 0; i < apples.size(); i++)
    {
        appleLandedLocation = a + apples[i];
        
        if (appleLandedLocation >= s && appleLandedLocation <= t)
        {
            numberOfApplesHit++;
        }
    }
    
    int orangeLandedLocation;
    int numberOfOrangesHit = 0;
    for (int i = 0; i < oranges.size(); i++)
    {
        orangeLandedLocation = b + oranges[i];
        
        if (orangeLandedLocation >= s && orangeLandedLocation <= t)
        {
            numberOfOrangesHit++;
        }
    }
    
    cout << numberOfApplesHit << endl;
    cout << numberOfOrangesHit << endl;
}

int main() {
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       cin >> orange[orange_i];
    }
    countApplesAndOranges(s, t, a, b, apple, orange);
    return 0;
}
