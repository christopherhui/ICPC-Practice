#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
  int q; cin >> q;
  while (q--) {
    int c, m, x; 
    cin >> c >> m >> x;
    int maxBound = min(c, m);
    if ((c+m+x)/3 < maxBound) {
      x = min(x, maxBound);
      int ans = x;
      c -= x;
      m -= x;
      ans += (c+m) / 3;
      cout << ans << endl;
    }
    else cout << maxBound << endl;
  }
  return 0;
} 