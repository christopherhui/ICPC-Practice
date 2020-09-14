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
        ll S; cin >> S;
        priority_queue<pair<ll, pair<ll, ll>>> pq;
        ll sum = 0;
        vector<vector<pair<ll, ll>>> tree(n+1);
        for (int i = 0; i < n - 1; i++) {
            ll v, u, w; cin >> v >> u >> w;
            tree[v].push_back({u, w});
            tree[u].push_back({v, w});
        }
        queue<ll> start;
        vector<bool> visited(n+1, false);
        start.push(1);
        visited[1] = true;
        while (!start.empty()) {
            ll curr = start.front(); start.pop();
            for (auto pairval : tree[curr]) {
                if (!visited[pairval.first]) {
                    ll sumofval = pairval.second * max((int) tree[pairval.first].size() - 1, 1);
                    pq.push({sumofval, {tree[pairval.first].size() - 1, pairval.second}});
                    sum += sumofval;
                    start.push(pairval.first);
                    visited[pairval.first] = true;
                }
            }
        }

        ll count = 0;
        while (sum > S) {
            pair<ll, pair<ll, ll>> curr = pq.top(); pq.pop();
            if (curr.second.first > 1) {
                ll newcurr;
                if (curr.second.second % 2 == 1) {
                    newcurr = (curr.first / 2) - (curr.second.first / 2);
                }
                else newcurr = (curr.first / 2);
                sum -= (curr.first - newcurr);
                pq.push({newcurr, {curr.second.first, curr.second.second/2}});
            }
            else {
                ll newcurr = curr.first / 2;
                sum -= (curr.first - newcurr);
                pq.push({newcurr, {curr.second.first, curr.second.second/2}});
            }
            count++;
        }
        cout << count << nl;
    }

    return 0;
}