#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
	cin.tie(0);
  cout.tie(0);

  vector<int> v;
  ll n, l;
  cin >> n;
  ll a = n;
  while (a--) {
    v.push_back(l);
  }
  for (int k = 1; k <= n; k++) {
    if (n % k == 0) {
      ll verses = n/k;
      map <int, int> m;
      for (auto i : v) {
        auto it = m.find(i % k);
        if (it != m.end()) {
          m[i % k] = 1;
        }
        else {
          m[i % k] += 1;
        }
      }
      for (auto it = m.begin(); it != m.end(); it++ ) {
        if (it->second == verses) {
          cout << k;
          return 0;
        }
        cout << it->first << ' ' << it->second << ' ';
      }
      cout << endl;
    }
  }
  cout << -1;
  return 0;
}