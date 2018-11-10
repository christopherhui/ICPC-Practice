#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  ll n, x, y;
  cin >> t;
  while (t--) {
    cin >> n >> x >> y;
    if (n/2+1 <= x && n/2 <= y) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}