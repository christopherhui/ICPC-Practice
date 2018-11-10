#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t, n;
  cin >> t;
  string str1, str2;
  bool found, foundTemp;
  string found1;
  string found2;
  while (t--) {
    cin >> n;
    cin >> str1;
    cin >> str2;
    found1 = "";
    found2 = "";
    for (int i = 0; i < n; i++) {
      if (str1[i] != str2[i]) {
        found1 += str1[i];
        found2 += str2[i];
      }
    }
    found1 += found1;
    if (found1.find(found2) != -1) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}