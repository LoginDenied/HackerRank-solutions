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
    
    sort(numbers.begin(),numbers.end());
    
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    
    return 0;
}
