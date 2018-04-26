#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int sockMerchant(int n, vector <int> ar) 
{
    vector <int> retrievedSocks;
    int matchingPair = 0;
    for (int i = 0; i < ar.size(); i++) //Running through all the socks
    {
        bool foundMatch = false;
        for (int j = 0; j < retrievedSocks.size(); j++) //Checking if the sock is found has a pair in retrievedSocks
        {
            if (ar[i] == retrievedSocks[j])
            {
                matchingPair++;
                retrievedSocks.erase(retrievedSocks.begin()+j);
                foundMatch = true;
                break; //If matching pair is found, no need to compair anymore
            }
        }
        
        if (foundMatch == false)
        {
            retrievedSocks.push_back(ar[i]);
        }
    }
    
    return matchingPair;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
