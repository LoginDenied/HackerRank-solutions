#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) 
{
    int amountLiked = 0;
    int amountReached = 5;
    int amountTotal;
    for (int i = 1; i <= n; i++)
    {
        amountLiked = floor(amountReached/2);
        amountTotal = amountTotal + amountLiked;
        amountReached = amountLiked * 3;
    }
    
    return amountTotal;
}

int main() {
    int n;
    cin >> n;
    int result = viralAdvertising(n);
    cout << result << endl;
    return 0;
}
