#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
  int n, acc = 0, accm = 0, cnt = 1; bool found = false; cin >> n; 
  vector<int> v(n); vector<int> num;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    acc += v[i];
  }
  acc /= 2;
  accm += v[0];
  num.push_back(1);
  for (int i = 1; i < n; i++) {
    if (v[0] >= v[i]*2) {
      accm += v[i];
      num.push_back(i+1);
      cnt++;
    }
    if (acc < accm) {
      cout << cnt << endl;
      for (int j = 0; j < num.size(); j++) {
        cout << num[j] << ' ';
      }
      found = true;
      break;
    }
  }
  if (!found) cout << 0 << endl;
  
  return 0;
}