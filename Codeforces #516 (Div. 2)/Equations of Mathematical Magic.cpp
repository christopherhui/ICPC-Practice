#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t; cin >> t;
  ll a;
  while (t--) {
    cin >> a;
    ll b = pow(2,__builtin_popcount(a));
    cout << b << endl;
  }
  return 0;
}