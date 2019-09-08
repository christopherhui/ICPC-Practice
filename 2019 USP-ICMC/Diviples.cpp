#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  ll a, b; cin >> a >> b;
  vector<ll> vals;
  for (int i = 1; i <= sqrt(a); i++) {
    if (a % i == 0) {
      ll c = a/i;
      if (i % b == 0) cout << i << ' ';
      if (a/i % b == 0) {
        vals.push_back(a/i);
      }
    }
  }
  for (int i = vals.size()-1; i >= 0; i--) {
    cout << vals[i] << ' ';
  }

  return 0;
}