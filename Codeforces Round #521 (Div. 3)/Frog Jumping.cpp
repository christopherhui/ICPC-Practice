#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t; cin >> t;
  ll a, b, c;
  while (t--) {
    cin >> a >> b >> c;
    cout << a*(c/2)-b*(c/2)+a*(c%2) << endl;
  }
  return 0;
}