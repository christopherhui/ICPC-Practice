#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int q; cin >> q;
  while (q--) {
    map<int, int> cnt, used; int n, a, count = 0; cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a; cnt[a]++;
    }
    for (auto it = cnt.rbegin(); it != cnt.rend(); it++) {
      if (used.find(it->second) == used.end()) {
        count += it->second;
        used[it->second] = 1;
      }
      else {
        for (int i = it->second; i != 0; i--) {
          if (used.find(i) == used.end()) {
            count += i;
            used[i] = 1;
            break;
          }
        }
      }
    }
    cout << count << endl;
  }

  return 0;
}