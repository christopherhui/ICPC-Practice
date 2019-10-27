#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     
  ll n, k; cin >> n >> k;
     
  if (n == 1) {
    cout << "Yes" << '\n';
    return 0;
  }
     
  vector<ll> a(n);
  vector<ll> b(k);
     
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < k; i++) cin >> b[i];
   
  if (k == 1) {
    ll temp = a[0] % b[0];
    for (int i = 1; i < n; i++) {
      if (a[i] % b[0] != temp) {
        cout << "No" << '\n';
        return 0;
      }
    }
    cout << "Yes" << '\n';
    return 0;
  }
     
  ll temp = b[0]; 
  for (int i = 1; i < k; i++) {
    temp = __gcd(temp, b[i]);
  }
 
  ll temp2 = a[0] % temp;
  for (int i = 1; i < n; i++) {
    if (a[i] % temp != temp2) {
      cout << "No" << '\n';
      return 0;
    }
  }
  cout << "Yes" << '\n';
  return 0;
}