#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int n; cin >> n;
    vector<vector<double>> dp(n, vector<double>(n+1));
    vector<double> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    dp[0][0] = (1-v[0]); dp[0][1] = v[0];

    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i-1][0] * (1-v[i]);
        for (int j = 1; j <= i+1; j++) {
            dp[i][j] = dp[i-1][j-1] * v[i] + dp[i-1][j] * (1-v[i]);
        }
    }
    double answer = 0.0;
    for (int i = (n/2)+1; i <= n; i++) {
        answer += dp[n-1][i];
    }
    cout << fixed << setprecision(10) << answer << endl;

    return 0;
}