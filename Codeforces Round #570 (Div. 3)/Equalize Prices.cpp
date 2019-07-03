#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  ll q; cin >> q;
  while (q--) {
    ll n, k, a = 100000000, b;
    cin >> n >> k; vector<ll> v(n);
    for (ll i = 0; i < n; ++i) {
      cin >> b; v[i] = b; a = min(a, b);
    }
    ll newNum = a+k; bool found = true;
    for (ll i = 0; i < n; ++i) {
      if (newNum < v[i] && v[i]-k > newNum) {
        found = false; break;
      }
    }
    found ? cout << newNum << endl : cout << -1 << endl;
  }

  return 0;
}