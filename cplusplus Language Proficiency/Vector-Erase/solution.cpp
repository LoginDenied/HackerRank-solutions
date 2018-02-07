#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    vector<int>numbers;
    int size;
    
    cin >> size;
    int temp;
    for (int i = 0; i < size; i++)
    {
        cin >> temp; 
        numbers.push_back(temp);
    }
    
    int firstQuery;
    cin >> firstQuery;
    numbers.erase(numbers.begin() + (firstQuery - 1));
    
    int secondQueryStart;
    int secondQueryEnd;
    cin >> secondQueryStart;
    cin >> secondQueryEnd;
    
    numbers.erase(numbers.begin() + (secondQueryStart - 1), numbers.begin() + (secondQueryEnd - 1));
    
    cout << numbers.size() << endl;
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}
