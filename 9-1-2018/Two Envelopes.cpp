#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    if (c >= a && c <= b) {
        cout << "Take another envelope";
    }
    else {
        cout << "Stay with this envelope";
    }
    return 0;
}
