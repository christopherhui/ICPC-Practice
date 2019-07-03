#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int n, k, cost = 0; cin >> n >> k; string s; cin >> s;
  queue<string> q; map<string, int> m; q.push(s); m[s] = 0;

  while (!q.empty() && k != 0) {
    string currS = q.front(); q.pop();
    cost += m[currS]; k--;
    for (int i = 0; i < currS.size(); i++) {
      string newS = currS.substr(0, i) + currS.substr(i+1, currS.size()-i-1);
      if (m.find(newS) == m.end()) {
        q.push(newS);
        m[newS] = m[currS] + 1;
      }
    }
  }
  k == 0 ? cout << cost << endl : cout << -1 << endl;

  return 0;
}