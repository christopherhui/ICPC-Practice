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

    int s, p, m, n; cin >> s >> p >> m >> n;
    vector<vector<ll>> dp(n, vector<ll>(2));
    vector<ll> days(n);
    for (int i = 0; i < n; i++) {
        cin >> days[i];
    }
    int ptr = 0;
    dp[0][0] = s; // single
    dp[0][1] = p; // BGO
    for (int i = 1; i < n; i++) {
        while (ptr < n && days[ptr] + m <= days[i]) {
            ptr++;
        }
        if (days[i] == days[i - 1]) {
            dp[i][1] = dp[i - 1][1];
        }
        else {
            dp[i][1] = min(dp[i - 1][1] + p, dp[i - 1][0] + p);
        }
        if (ptr != i) {
            dp[i][0] = min(dp[i - 1][0] + s, dp[ptr][1]);
        }
        else {
            dp[i][0] = dp[i - 1][0] + s;
        }
    }
    cout << min(dp[n - 1][0], dp[n - 1][1]) << endl;

    return 0;
}