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

    int n, r, k; cin >> n >> r >> k;
    int first = max(max(n, r), k);
    int second = max(r, k);
    int val = first + second;
    if (n > r && r > k) {

    }

    cout << val << endl;

    return 0;
}