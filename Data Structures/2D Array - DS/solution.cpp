#include <bits/stdc++.h>

using namespace std;

int hourglassSum(vector<vector<int>> arr) 
{
    int largestSum = INT_MIN;
    
    for (int i = 0; i < 4; i++) //Due to the shape of the hourglass, the last one will start at [3][3]
    {
        for (int j = 0; j < 4; j++)
        {
            int temp = 0;
            temp = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if (temp > largestSum)
            {
                largestSum = temp;
            }
        }
    }

    return largestSum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
