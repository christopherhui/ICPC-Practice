#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    string ans = "";
    for (int j = 0; j < n; j++) {
      if (j == 0) {
        ans += (i % 2) ? 'B' : 'W';
      }
      else {
        ans += (ans[j-1] == 'B') ? 'W' : 'B';
      }
    }
    cout << ans << endl;
  }
  return 0;
} 