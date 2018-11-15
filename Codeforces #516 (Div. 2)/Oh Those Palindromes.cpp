#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  map<char, int> m;
  int n; cin >> n; string s; cin >> s;
  for (int i = 0; i < n; i++) {
    m[s[i]] += 1;
  }
  for (auto it = m.begin(); it != m.end(); it++) {
    for (int i = 0; i < it->second; i++)
      cout << it->first;
  }
  return 0;
}