#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p) 
{
    //Let the page to the left of page 0 be a theoretical page zero
    int leftPageWanted;
    leftPageWanted = (p / 2) * 2;
    
    int frontCounter = 0;
    for (int i = 0; i < leftPageWanted; i = i + 2)
    {
        frontCounter++;
    }
    
    int leftPageBack;
    leftPageBack = (n / 2) * 2;
    
    int backCounter = 0;
    for (int i = leftPageBack; i > leftPageWanted; i = i - 2)
    {
        backCounter++;
    }
        
    if (frontCounter <= backCounter)
    {
        return frontCounter;
    }
    else
    {
        return backCounter;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
