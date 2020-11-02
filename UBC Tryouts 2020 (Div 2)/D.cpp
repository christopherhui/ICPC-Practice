#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n; cin >> n;
    unordered_map<int, unordered_map<int, ll>> dp;
    vector<pair<int, int>> p;
    dp[0][0] = 0;
    while (n--) {
        int a, b; cin >> a >> b;
        p.emplace_back(a, b);
    }
    for (auto & i : p) {
        int a = i.first, b = i.second;
        unordered_map<int, unordered_map<int, ll>> tmp;
        for (auto it = dp.begin(); it != dp.end(); it++) {
            for (auto jt = it->second.begin(); jt != it->second.end(); jt++) {
                if (!dp.count(it->first + a) || !dp[it->first + a].count(jt->first + b)) {
                    tmp[it->first + a][jt->first + b] += dp[it->first][jt->first];
                }
                else {
                    tmp[it->first + a][jt->first + b] += dp[it->first + a][jt->first + b] + dp[it->first][jt->first];
                }
            }
        }
        for (auto it = tmp.begin(); it != tmp.end(); it++) {
            for (auto jt = it->second.begin(); jt != it->second.end(); jt++) {
                dp[it->first][jt->first] = tmp[it->first][jt->first];
            }
        }
        dp[a][b]++;
    }
    cout << dp[0][0] << endl;
}