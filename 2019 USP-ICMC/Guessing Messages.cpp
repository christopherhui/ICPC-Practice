#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool helper(string s, string t) {
  int first = 0;

  for (int i = 0; i < t.size(); i++) {
    bool found = false;
    for (int j = first; j < s.size(); j++) {
      if (t[i] == s[j]) {
        found = true;
        first = j+1;
        break;
      }
    }
    if (!found) return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  string s, t; cin >> s >> t;
  if (helper(s,t)) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}