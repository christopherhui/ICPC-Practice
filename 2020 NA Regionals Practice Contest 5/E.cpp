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

    int n; cin >> n;
    vector<vector<int>> adj_list(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b; cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    queue<int> q;
    vector<int> res(n);
    int left = 0, right = n - 1;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (adj_list[i].size() == 1) {
            q.push(i);
            visited[i] = true;
        }
    }
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        if (left < n - 1 - right) {
            res[left] = curr;
            left++;
        }
        else {
            res[right] = curr;
            right--;
        }
        for (int oth : adj_list[curr]) {
            if (!visited[oth]) {
                visited[oth] = true;
                q.push(oth);
            }
        }
    }
    for (int val : res) {
        cout << val << ' ';
    }
    cout << endl;

    return 0;
}