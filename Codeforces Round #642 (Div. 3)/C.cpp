#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll res = 0;
        ll start = 8;
        ll uhhhh = 1;
        for (int i = 3; i <= n; i += 2) {
            res += (start * (uhhhh) * (uhhhh));
            uhhhh++;
        }
        cout << res << endl;
    }
}