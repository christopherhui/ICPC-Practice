#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
  int n; cin >> n; string s; cin >> s; bool p = false; int start;
  char prev = s[0];
  for (int i = 1; i < s.length(); i++) {
    if (prev > s[i]) {
      start = i-1;
      p = true;
      break;
    }
    prev = s[i];
  }
  if (p) cout << "YES" << endl << start+1 << ' ' << start+2;
  else cout << "NO";
 
  return 0;
}