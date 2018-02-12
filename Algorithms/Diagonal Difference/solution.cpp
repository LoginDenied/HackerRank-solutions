#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(int n, vector < vector<int> > a) 
{   
    int firstDiagonal = 0;
    for (int i = 0; i < n; i++)
    {
        firstDiagonal = firstDiagonal + a[i][i];
    }
    
    int secondDiagonal = 0;
    for (int i = 0; i < n; i++)
    {
        secondDiagonal = secondDiagonal + a[n-1-i][i];
    }
    
    int difference;
    difference = abs(firstDiagonal - secondDiagonal);
    
    return difference;
}

int main() {
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int result = diagonalDifference(n,a);
    cout << result << endl;
    return 0;
}
