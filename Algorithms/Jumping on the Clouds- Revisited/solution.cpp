#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c, int k) 
{
    int energy = 100;
    int location = 0;
    do
    {
        location = (location + k) % c.size();
        energy--;
        if (c[location] == 1)
        {
            energy = energy - 2;
        }
        
    } while (location != 0);
    
    return energy;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c, k);
    cout << result << endl;
    return 0;
}
