#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int n; cin >> n; string s; bool start = 1; cin >> s; int temp = s.length();
  int i, j;
  for (i = 0; i < temp-11; i++) {
    if (start) {
      start = 0;

      for (j = 0; j < s.length(); j++) {
        if (s[j] != '8') {
          s = s.substr(0, j) + s.substr(j+1, s.length());
          break;
        }
      }
      if (j == s.length()-1) {
        cout << "YES"; return 0;
      }
    }
    else {
      start = 1;

      for (j = 0; j < s.length(); j++) {
        if (s[j] == '8') {
          s = s.substr(0, j) + s.substr(j+1, s.length());
          break;
        }
      }
      if (j == s.length()-1) {
        cout << "NO"; return 0;
      }
    }
  }
  if (s[0] == '8') cout << "YES";
  else cout << "NO";

  return 0;
}