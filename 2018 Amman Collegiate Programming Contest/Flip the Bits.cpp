#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll t, n, count; cin >> t;
  while (t--) {
    count = 0;
    cin >> n;
    cout << __builtin_popcount(n ^ n-1) << endl;
  }
  return 0;
}