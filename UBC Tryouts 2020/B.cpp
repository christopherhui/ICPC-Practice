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

bool test(vector<int>& V, ll target, int k) {
    ll sum = 0;
    int count = 1;
    for (int v : V) {
        if (sum + v > target) {
            sum = v;
            count++;
        }
        else {
            sum += v;
        }
    }
    return count <= k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    freopen("B.in", "r", stdin);
//    freopen("B.out", "w", stdout);

    int n, k; cin >> n >> k;
    vector<int> val(n);
    ll sum = 0;
    int highest = 0;
    for (int i = 0; i < n; i++) {
        cin >> val[i];
        sum += val[i];
        highest = max(highest, val[i]);
    }
    ll low = highest, high = sum;
    ll res = high;
    while (low < high) {
        ll mid = low + (high - low) / 2;
        if (!test(val, mid, k)) {
            low = mid + 1;
        }
        else {
            high = mid;
            res = min(high, res);
        }
    }
    cout << res << endl;

    return 0;
}