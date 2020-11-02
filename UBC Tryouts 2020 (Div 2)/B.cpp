#include <bits/stdc++.h>
using namespace std;

double factorial(int n) {
    if (n <= 0) {
        return 1.0;
    }
    else return n * factorial(n - 1);
}

int main() {
    int n; cin >> n;
    while (n--) {
        double r, s, x, y, w; cin >> r >> s >> x >> y >> w;
        double val = 0.0;
        int a = x, b = y;
        for (int i = a; i <= b; i++) {
            val += factorial(b)/(factorial(i)*(factorial(b - i)))*pow((s - r + 1)/s, i)*pow((r - 1)/s, b - i);
        }
        if (val * (w - 1) - (1 - val) > 0) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
}