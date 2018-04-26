#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

vector <int> cutTheSticks(vector <int> arr) 
{
    vector <int> sticks;
    sticks = arr;
    vector <int> results;
    
    while (sticks.size() > 0)
    {
        results.push_back(sticks.size()); //Cos there can be no sticks shorter then the shortest stick so you will always cut all sticks
        
        int shortestStick;
        shortestStick = sticks[0];
        for (int i = 1; i < sticks.size(); i++)
        {
            if (sticks[i] < shortestStick)
            {
                shortestStick = sticks[i];
            }
        }
                
        for (int i = 0; i < sticks.size(); i++)
        {
            if (sticks[i] == shortestStick)
            {
                sticks[i] = 0;
            }
            else
            {
                sticks[i] = sticks[i] - shortestStick;
            }
        }
        
        sticks.erase(remove(sticks.begin(), sticks.end(), 0), sticks.end());
    }
    
    return results;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = cutTheSticks(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
