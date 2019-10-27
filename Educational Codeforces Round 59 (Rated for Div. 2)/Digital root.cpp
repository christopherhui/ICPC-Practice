#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
  ll n, k, x; cin >> n;
  while (n--) {
    cin >> k >> x;
    cout << (9 * (k-1) + x) << endl;
  }
 
  return 0;
}