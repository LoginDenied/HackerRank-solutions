#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string stringOne;
    string stringTwo;
    
    cin >> stringOne;
    cin >> stringTwo;
    
    int lengthOne = stringOne.size();
    int lengthTwo = stringTwo.size();
    cout << lengthOne << " " << lengthTwo << endl;
    
    string stringTotal = stringOne + stringTwo;
    cout << stringTotal << endl;
    
    char temp;
    temp = stringOne[0];
    stringOne[0] = stringTwo[0];
    stringTwo[0] = temp;
    cout << stringOne << " " << stringTwo << endl;
  
    return 0;
}
