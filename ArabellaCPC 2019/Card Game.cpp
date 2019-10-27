#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     
  int n; double ans = 0; cin >> n;
  for (double i = 2; i <= n; i++) {
    ans += i*((i-1)/n);
  }
  cout << fixed << setprecision(6) << ans;
 
  return 0;
}