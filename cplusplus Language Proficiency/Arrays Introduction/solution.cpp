#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int size;
    cin >> size;
    int arr[1000]; //Because limit of 1000 to the length of the array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = (size-1); i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}