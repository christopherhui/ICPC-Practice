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
    cin.tie(nullptr);

    int n; cin >> n;
    ll sum = 0;
    int count = 0;
    bool zero = false;
    for (int i = 0; i < n; i++) {
        ll a; cin >> a;
        if (a < 0) {
            sum += abs(a + 1);
            count++;
        }
        else if (a > 0) {
            sum += a - 1;
        }
        else {
            sum += 1;
            zero = true;
        }
    }
    if ((count % 2) == 1) {
        if (!zero) {
            sum += 2;
        }
    }
    cout << sum << nl;

    return 0;
}