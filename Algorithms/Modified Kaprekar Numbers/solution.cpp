#include <bits/stdc++.h>

using namespace std;

bool testNumber(long long number)
{
    string numberString;
    numberString = to_string(number);
    
    long long square;
    square = number * number;
    string squareString;
    squareString = to_string(square);
    
    long long leftSide = 0;
    for (int i = 0; i < squareString.size() - numberString.size(); i++)
    {
        leftSide = (leftSide * 10) + (squareString[i] - '0');
    } 
    
    long long rightSide = 0;
    for (int i = squareString.size() - numberString.size(); i < squareString.size(); i++)
    {
        rightSide = (rightSide * 10) + (squareString[i] - '0');
    }
    
    long long combined;
    combined = leftSide + rightSide;
        
    if (combined == number)
    {
        return true;
    }
    else
    {
        return false;
    }
}

vector <int> kaprekarNumbers(int p, int q) 
{
    vector <int> result;
    
    for (int i = p; i <= q; i++)
    {
        if (testNumber(i) == true)
        {
            result.push_back(i);
        }
    }
    
    return result;
}

int main() {
    int p;
    cin >> p;
    int q;
    cin >> q;
    vector <int> result = kaprekarNumbers(p, q);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    
    if (result.size() == 0)
    {
        cout << "INVALID RANGE";
    }
    
    cout << endl;

    return 0;
}
