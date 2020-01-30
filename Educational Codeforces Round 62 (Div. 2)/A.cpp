#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<ld> pt;
typedef vector<pt> pol;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<ld> vd;
typedef vector<vd> vvd;
typedef pair<ll, ll> pii;
typedef vector<pii> vpii;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int count = 0, pos = 0;
    while (pos < n) {
        count++;
        int maxv = pos;
        while (pos < n && pos <= maxv) {
            maxv = max(maxv, v[pos]-1);
            pos++;
        }
    }
    cout << count << '\n';

    return 0;
}
