#include <bits/stdc++.h>
#define EPS 1e-8;
#define nl '\n';
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vi v1(n);
        vi v2(n);
        ll minVal1 = LLONG_MAX;
        ll minVal2 = LLONG_MAX;
        ll cost = 0;
        for (int i = 0; i < n; i++) {
            cin >> v1[i];
            minVal1 = min(minVal1, v1[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> v2[i];
            minVal2 = min(minVal2, v2[i]);
        }
        for (int i = 0; i < n; i++) {
            ll first = v1[i] - minVal1;
            ll second = v2[i] - minVal2;
            cost += max(first, second);
        }
        cout << cost << nl;
    }

    return 0;
}