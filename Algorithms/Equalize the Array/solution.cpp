#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector <int> arr) 
{
    vector <int> sorted;
    sorted = arr;
    vector <int> numberCount;
    sort(sorted.begin(), sorted.end());
    sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
    for (int i = 0; i < sorted.size(); i++)
    {
        numberCount.push_back(count(arr.begin(), arr.end(), sorted[i]));
    }
    
    return arr.size() - *max_element(numberCount.begin(), numberCount.end());
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = equalizeArray(arr);
    cout << result << endl;
    return 0;
}
