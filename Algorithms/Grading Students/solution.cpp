#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

vector < int > solve(vector < int > grades)
{
    vector<int>solvedGrades(grades.size());
    for (int i = 0; i < grades.size(); i++)
    {
        if ((grades[i] >= 38) && ((grades[i]%5) > 2)) //<3 to the next grade means >2 remainder when divided by 5
        {
            solvedGrades[i]  = (((grades[i] / 5) + 1) * 5);
        }
        else
        {
            solvedGrades[i] = grades[i];
        }
    }
    
    return solvedGrades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
