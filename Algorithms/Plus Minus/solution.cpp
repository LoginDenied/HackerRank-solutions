#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

void plusMinus(vector <int> arr) 
{
    float positive = 0;
    float negative = 0;
    float zero = 0;
    int lengthOfVector = arr.size();
    
    for (int i = 0; i < lengthOfVector; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            if (arr[i] < 0)
            {
                negative++;
            }
            else
            {
                positive++;
            }
        }
    }
    
    positive = positive/lengthOfVector;
    negative = negative/lengthOfVector;
    zero = zero/lengthOfVector;
    
    cout << setprecision(6) << positive << endl;
    cout << setprecision(6) << negative << endl;
    cout << setprecision(6) << zero << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    plusMinus(arr);
    return 0;
}
