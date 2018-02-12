#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << fixed << setw(3) << setfill('0') << d << endl;
    cout << fixed << setw(9) << setfill('0') << e << endl;
    return 0;
}
