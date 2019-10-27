#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
  int q, n; cin >> q;
  string a;
  while (q--) {
    bool found = false;
    cin >> n;
    map<int,int> m;
    for (int i = 0; i < n; i++) {
      cin >> a;
      if (a.size() < 5)
        m[stoi(a)]++;
    }
 
    for (auto it = m.begin(); it != m.end(); it++) {
      if (it->first == 2048 && it->second > 0) {
        cout << "yes" << endl;
        found = true;
        break;
      }
      if (it->second / 2 > 0)
        m[it->first*2] += it->second / 2;
    }
    if (!found) cout << "no" << endl;
  }
 
  return 0;
} 