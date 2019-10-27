#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
 
int main() { 
 
  int l, k; cin >> l >> k;
  vector<vector<ll>> sum(l+1, vector<ll>(l+1,0));
  sum[1][1] = 1; 
  if (k < l) sum[1][k] = 1;
  ll res = 0;
 
  for (int i = 2; i <= l; i++) {
    for (int j = 1; j <= l; j++) {
      if (i % 2 == 0) {
        sum[i][j] = sum[i-1][j-1];
      } else {
        sum[i][j] += sum[i-1][j-1];
        if (j-k >= 0) {
          sum[i][j] += sum[i-1][j-k];
        }
      }
    }
  }
  for (int i = 1; i <= l; i++) {
    if (i % 2 == 1) {
      for (int j = 1; j <= l; j++) {
        res += sum[i][j];
      }
    }
  }
  cout << ((l == k) ? ((l+1)/2)+1 : (res)) << endl;
 
  return 0; 
} 