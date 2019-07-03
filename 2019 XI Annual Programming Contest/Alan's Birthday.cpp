#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int n; cin >> n;
  string s; cin >> s; map<char, int> m;
  for (char c : s) {
    m[c]++;
  }
  string newString = "";
  for (auto it = m.begin(); it != m.end(); it++) {
    for (int i = 0; i < it->second; ++i) {
      newString += it->first;
    }
  }
  cout << newString << endl;

  return 0;
}