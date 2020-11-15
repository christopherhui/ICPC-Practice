#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    int diff0 = b - a, diff1 = c - b;
    if (diff0 == diff1) {
        cout << "cruised" << endl;
    }
    else if (diff0 < 0 && diff1 > 0) {
        cout << "turned" << endl;
    }
    else if (diff1 < 0 && diff0 > 0) {
        cout << "turned" << endl;
    }
    else if (diff0 < 0 && diff1 < 0) {
        if (diff1 < diff0) {
            cout << "accelerated" << endl;
        }
        else {
            cout << "braked" << endl;
        }
    }
    else {
        if (diff0 < diff1) {
            cout << "accelerated" << endl;
        }
        else {
            cout << "braked" << endl;
        }
    }
}
