#include <bits/stdc++.h>
#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

string timeConversion(string s) 
{
    stringstream time;
    time << s;
    int hour;
    int minute;
    int second;
    char colon;
    string timeFrameIndicator;
    time >> hour >> colon >> minute >> colon >> second >> timeFrameIndicator;
    
    int convertedHour;
    if (hour == 12)
    {
        if (timeFrameIndicator == "AM")
        {
            convertedHour = 00;
        }
        else
        {
            convertedHour = 12;
        }
    }
    else
    {
        if (timeFrameIndicator == "PM")
        {
            convertedHour = hour + 12;
        }
    }
    
    stringstream convertedTime;
    convertedTime << setw(2) << setfill('0') << convertedHour << colon << setw(2) << setfill('0') << minute << colon << setw(2) << setfill('0') << second;
    
    return convertedTime.str();
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
