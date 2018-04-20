#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) 
{
    vector<int> parsedInts;
    stringstream ss(str);
    int value;
    char ch;
    while (ss >> value)
    {
        parsedInts.push_back(value);
        ss >> ch;
    }
    
    return parsedInts;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
