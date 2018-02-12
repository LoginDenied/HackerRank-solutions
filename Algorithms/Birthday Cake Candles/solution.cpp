#include <bits/stdc++.h>

using namespace std;

int findTallestCandle(int n, vector<int>ar)
{
    int tallestHeight = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > tallestHeight)
        {
            tallestHeight = ar[i];
        }
    }
    
    return tallestHeight;
}

int birthdayCakeCandles(int n, vector <int> ar) 
{
    int numberOfCandles = 0;
    int tallestCandle = findTallestCandle(n, ar);
    
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == tallestCandle)
        {
            numberOfCandles++;
        }
    }
    
    return numberOfCandles;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
