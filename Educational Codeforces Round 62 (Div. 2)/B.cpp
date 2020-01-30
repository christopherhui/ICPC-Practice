#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t; cin >> t;
  while (t--) {
      int n; cin >> n; string s; cin >> s;
      for (int i = 0; i < n; i++) {
            if (s[i] == '>' || s[n-1-i] == '<') {
                cout << i << endl;
              break;
          }
        }
  }

  return 0;
}