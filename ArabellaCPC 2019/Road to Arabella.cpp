#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
  int t, n, k; cin >> t;
  while (t--) {
    cin >> n >> k;
    if (n-k > 1) cout << "Kilani" << endl;
    else {
      if (n & 1) cout << "Kilani" << endl;
      else cout << "Ayoub" << endl;
    }
  }
 
 
  return 0;
}