#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     
  int q; cin >> q;
  while (q--) {
    int n, k, count = 0; cin >> n >> k;
    bool found = false;
    vector<int> vals(n); vector<int> ans;
    for (int j = 0; j < n; j++) {
      cin >> vals[j];
    }
    for (int j = 0; j < n; j++) {
      if (vals[j] % 2 == 1) {
        ans.push_back(j+1);
        count++;
      }
    }
    if (count == k) {
      cout << "YES" << endl; for (int i = 0; i < k-1; i++) {
        cout << ans[i] << ' ';
      }
      cout << n;
    }
    else if(count >= k) {
      if (count % 2 == 0 && k % 2 == 0) {
        cout << "YES" << endl; for (int i = 0; i < k-1; i++) {
        cout << ans[i] << ' ';
        }
        cout << n;
      }
      else if(count % 2 == 1 && k % 2 == 1) {
        cout << "YES" << endl; for (int i = 0; i < k-1; i++) {
        cout << ans[i] << ' ';
        }
        cout << n;
      }
      else cout << "NO";
    }
    else cout << "NO";
    cout << endl;
  }
 
  return 0;
}
