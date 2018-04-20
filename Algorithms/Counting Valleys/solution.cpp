#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s) 
{
    bool valleyStart = false;
    bool valleyEnd = false;
    int level = 0;
    int numberOfValleys = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U')
        {
            level++;
        }
        if (s[i] == 'D')
        {
            level--;
        }
        
        if (valleyStart == false && level < 0)
        {
            valleyStart = true;
        }
        if (valleyStart == true && level == 0)
        {
            valleyEnd = true;
        }
        
        if (valleyStart == true && valleyEnd == true)
        {
            numberOfValleys++;
            valleyStart = false;
            valleyEnd = false;
        }
    }
    
    return numberOfValleys;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = countingValleys(n, s);
    cout << result << endl;
    return 0;
}
