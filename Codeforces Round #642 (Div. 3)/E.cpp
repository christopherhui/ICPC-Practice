#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int k; cin >> k;
        string s; cin >> s;
        vector<string> S(k);
        int count = 0;
        int best = 0x3f3f3f3f;

        for (int i = 0; i < n; i++) {
            S[i % k] += s[i];
            count += (s[i] == '1') ? 1 : 0;
        }

        for (string& a : S) {
            if (a.empty()) continue;

            vector<vector<int>> dp(a.size(), vector<int>(3));
            int cnt = (a[0] == '1') ? 1 : 0;
            dp[0][0] = (a[0] == '1');
            dp[0][1] = (a[0] == '0');
            dp[0][2] = (a[0] == '1');


            for (int i = 1; i < a.size(); i++) {
                dp[i][0] = dp[i-1][0] + (a[i] == '1');
                dp[i][1] = min(dp[i-1][1], dp[i-1][0]) + (a[i] == '0');
                dp[i][2] = min(dp[i-1][2], dp[i-1][1]) + (a[i] == '1');
                cnt += (a[i] == '1') ? 1 : 0;
            }
            best = min(best, min(dp[a.size()-1][1], min(dp[a.size()-1][0], dp[a.size()-1][2])) + count - cnt);
        }
        cout << best << endl;
    }
}