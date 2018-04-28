#include <bits/stdc++.h>

using namespace std;

int reverseNumber(int number)
{
    string numberString;
    numberString = to_string(number);
    for (int i = 0; i < numberString.size() / 2; i++)
    {
        char temp;
        temp = numberString[i];
        numberString[i] = numberString[numberString.size() -1 - i];
        numberString[numberString.size() -1 - i] = temp;
    }

    int output;
    output = stoi(numberString);
        
    return output;
}

int beautifulDays(int i, int j, int k) 
{
    int beautifulDays = 0;
    
    for (int a = i; a <= j; a++)
    {
        if ((a - reverseNumber(a)) % k == 0)
        {
            beautifulDays++;
        }
    }
    
    return beautifulDays;
}

int main() {
    int i;
    int j;
    int k;
    cin >> i >> j >> k;
    int result = beautifulDays(i, j, k);
    cout << result << endl;
    return 0;
}
