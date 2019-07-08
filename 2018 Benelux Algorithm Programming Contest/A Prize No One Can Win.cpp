#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  ll n, min_cost, prev, cnt = 1; cin >> n >> min_cost;
  vector<ll> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  sort(v.begin(), v.end()); prev = v[0];
  for (int i = 1; i < n; i++) {
    if (prev + v[i] <= min_cost) cnt++;
    prev = v[i];
  }
  cout << cnt << endl;

  return 0;
}