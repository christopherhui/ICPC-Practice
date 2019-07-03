#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool tryVal(ll val, ll k, ll n, ll a, ll b) {
  return val*a + (n-val)*b < k;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int q; cin >> q;
  while (q--) {
    ll k, n, a, b; cin >> k >> n >> a >> b; bool possible = false;
    ll start = 0; ll high = n; ll mid = (start + high) / 2;
    while (high >= start) {
      mid = (start + high) / 2;
      if (tryVal(mid, k, n, a, b)) {
        possible = true;
        start = mid+1;
      }
      else
        high = mid-1;
    }
    possible ? cout << start-1 << endl : cout << -1 << endl;
  }
  return 0;
}