#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // ifstream file;
    // file.open("test.in");
    ll n;
    cin >> n;
    map<ll, pair<ll, ll>> m;
    ll dpSize = -1;
    for (int i = 0; i < n; i++)
    {
        ll minute;
        ll fun;
        ll wait;
        cin >> minute;
        cin >> fun;
        cin >> wait;
        m[minute] = make_pair(fun, wait);
        dpSize = max(dpSize, minute + wait);
    }
    vector<ll> dp(dpSize + 1);
    auto it = m.rbegin();
    ll maxValue = it->first;
    if (maxValue == dpSize)
    {
        dp[maxValue] = it->second.first;
    }
    for (ll i = dpSize - 1; i >= 0; i--)
    {
        auto it = m.rbegin();
        if (m.size() > 0)
        {
            ll maxValue = it->first;
            pair<ll, ll> p = it->second;
            if (maxValue == i && maxValue + p.second < dp.size())
            {
                dp[i] = max(p.first + dp[maxValue + p.second], dp[i + 1]);
                m.erase(maxValue);
            }
            else
            {
                dp[i] = dp[i + 1];
            }
        }
        else
        {
            dp[i] = dp[i + 1];
        }
    }
    cout << dp[0] << endl;

    return 0;
}