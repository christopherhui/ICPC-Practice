#include <bits/stdc++.h>
#define EPS 1e-8;
#define nl '\n';
#define INF 0x3f3f3f3f
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

// t = B[i].first/B[i].second
void helper(vector<vector<vector<int>>>& dp, int s, int t, int i, int j, int k) {
    int val0 = INF, val1 = INF;
    int t0 = INF, t1 = INF;
    for (int a = 0; a < k + 1; a++) {
        for (int b = 0; b < k + 1; b++) {
            dp[i * 3 + j][a][b] = min(dp[i * 3 + j][a][b], dp[i * 3 + j - 1][a][b]);
        }
        val0 = dp[i * 3 + j - 1][s][a];
        val1 = dp[i * 3 + j - 1][a][s];

        dp[i * 3 + j][t][a] = min(dp[i * 3 + j][t][a], val0 + 1);
        dp[i * 3 + j][a][t] = min(dp[i * 3 + j][a][t], val1 + 1);
    }
    t0 = dp[i * 3 + j - 1][t][s];
    t1 = dp[i * 3 + j - 1][s][t];

    dp[i * 3 + j][t][t] = min(dp[i * 3 + j][t][t], min(t0 + 1, min(t1 + 1, dp[i * 3 + j - 1][s][s] + 1)));
}

void raining(vector<vector<vector<int>>>& dp, int s, int t, int i, int j, int k) {
    int val0 = INF, val1 = INF;
    int t0 = INF, t1 = INF;
    for (int a = 0; a < k + 1; a++) {
        val0 = dp[i * 3 + j - 1][s][a];
        val1 = dp[i * 3 + j - 1][a][s];

        dp[i * 3 + j][t][a] = min(dp[i * 3 + j][t][a], val0 + 1);
        dp[i * 3 + j][a][t] = min(dp[i * 3 + j][a][t], val1 + 1);
    }
    t0 = dp[i * 3 + j - 1][t][s];
    t1 = dp[i * 3 + j - 1][s][t];

    dp[i * 3 + j][t][t] = min(dp[i * 3 + j][t][t], min(t0 + 1, min(t1 + 1, dp[i * 3 + j - 1][s][s] + 1)));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    vector<pair<int, int>> B;
    vector<string> S(n);
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        B.emplace_back(a, b);
    }
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }

    vector<vector<vector<int>>> dp(n * 3, vector<vector<int>>(k + 1, vector<int>(k + 1, INF)));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            char weather = S[i][j];
            if (weather == 'S') {
                if ((i + j) == 0) {
                    dp[0][0][0] = 0;
                    dp[0][B[i].first][0] = 1;
                    dp[0][0][B[i].first] = 1;
                    dp[0][B[i].first][B[i].first] = 1;
                }
                else {
                    if (j == 0) {
                        helper(dp, 0, B[i].first, i, j, k);
                    }
                    else if (j == 1) {
                        helper(dp, B[i].first, B[i].second, i, j, k);
                    }
                    else {
                        helper(dp, B[i].second, 0, i, j, k);
                    }
                }
            }
            else {
                if ((i + j) == 0) {
                    dp[0][B[i].first][0] = 1;
                    dp[0][0][B[i].first] = 1;
                    dp[0][B[i].first][B[i].first] = 1;
                }
                else {
                    if (j == 0) {
                        raining(dp, 0, B[i].first, i, j, k);
                    }
                    else if (j == 1) {
                        raining(dp, B[i].first, B[i].second, i, j, k);
                    }
                    else {
                        raining(dp, B[i].second, 0, i, j, k);
                    }
                }
            }
        }
    }
    int res = INF;
    for (int i = 0; i < k + 1; i++) {
        for (int j = 0; j < k + 1; j++) {
            res = min(res, dp[n * 3 - 1][i][j]);
        }
    }
    cout << res << endl;

    return 0;
}