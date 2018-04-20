#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() 
{
    int numberItems;
    cin >> numberItems;
    int notEaten;
    cin >> notEaten;
    
    int tempPrice = 0;
    int sharedItemsPrice = 0;
    for (int i = 0; i < numberItems; i++)
    {
        if (i != notEaten)
        {
            cin >> tempPrice;
            sharedItemsPrice = sharedItemsPrice + tempPrice;
        }
        else
        {
            cin >> tempPrice; //Just to remove the not eaten price from the input sequence
        }
    }
    
    int chargedPrice;
    cin >> chargedPrice;
    if (chargedPrice == sharedItemsPrice / 2)
    {
        cout << "Bon Appetit" << endl;
    }
    else
    {
        cout << (chargedPrice - sharedItemsPrice / 2) << endl;
    }
    
    return 0;
}
