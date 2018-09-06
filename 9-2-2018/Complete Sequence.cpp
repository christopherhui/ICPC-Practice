#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int k, n;
  cin >> k >> n;
  vector<int> v;
  map<int, int> m;
  while (n-- ) {
    int a;
    cin >> a;
    m[a] += 1;
    if (v.empty()) {
      v.push_back(a);
    }
    else if(find(v.begin(), v.end(), a) != v.end()) {
      auto it = find(v.begin(), v.end(), a);
      v.erase(it);
    }

  }
  if (static_cast<int>(v.size()) == 2) {
    if (m[v[0]] > m[v[1]]) {
      cout << '-' << v[0] << ' ' << '+' << v[1];
    }
    else {
      cout << '-' << v[1] << ' ' << '+' << v[0];
    }
  }
  return 0;
}