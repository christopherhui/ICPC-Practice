#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
  vector<int> v(100000+1, 0);
  for (int i = 1; i <= v.size(); i++) {
    v[i] = v[i-1];
 
    if ((i+1) % 3 != 0 ) {
      v[i] = v[i-1] + 1;
    }
  }
 
  int n, a; cin >> n;
  while (n--) {
    cin >> a;
    cout << (a <= 2 ? 0 : v[a]) << endl;
  }
 
  return 0;
} 
