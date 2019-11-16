#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a1, a2, k1, k2, n; cin >> a1 >> a2 >> k1 >> k2 >> n;
    int count1 = a1*k1;
    int count2 = a2*k2;
    if (k1 > k2) {
        if (count1 > n) {
            cout << 0 << ' ';
        } else {
            cout << a1+min((n-count1)/count2,a2) << ' ';
        }
        if (count2 > n) {
            cout <<
        }
    } else {
        if (count2 > n) {
            cout << 0 << ' ';
        } else {
            cout << a2+min((n-count2)/count1,a1) << ' ';
        }
    }

    return 0;
}
