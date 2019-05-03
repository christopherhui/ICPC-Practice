#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); 
  cout.tie(0);

  int t; cin >> t;
  for (int i = 0; i < t; i++) {
    int n; cin >> n;
    int time = 0;
    vector<int> val;
    for (int j = 0; j < n; j++) {
      int l, r; cin >> l >> r;
      if (l > time) {
        time = l;
        val.push_back(time++);
      }
      else if (l <= time && r >= time) {
        val.push_back(time++);
      }
      else {
        val.push_back(0);
      }
    }

    for (int j = 0; j < n; j++) {
      cout << val[j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}