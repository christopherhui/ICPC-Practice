#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int n; cin >> n;
  while (n--) {
    bool zack = 0, mack = 0; int v;
    for (int i = 0; i < 10; i++) {
      cin >> v;
      cout << v << ' ';
      if (v == 18) mack = 1;
      else if (v == 17) zack = 1;
    }
    cout << endl;
    if (zack & mack) cout << "both";
    else if (zack) cout << "zack";
    else if (mack) cout << "mack";
    else cout << "none";
    cout << endl;
  }

  return 0;
}