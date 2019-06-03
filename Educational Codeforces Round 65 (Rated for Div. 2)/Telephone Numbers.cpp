#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

  int t; cin >> t;
  for (int test = 0; test < t; test++) {
    int n; cin >> n; string s; cin >> s;
    bool found = false;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '8' && s.size()-i >= 11) {
        cout << "YES" << endl;
        found = true;
        break;
      }
    }
    if (!found) cout << "NO" << endl;
  }

  return 0;
}