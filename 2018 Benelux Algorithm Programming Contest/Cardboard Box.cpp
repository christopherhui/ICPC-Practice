#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int v, min_num = INT_MAX; cin >> v;
  for (int i = 1; i*i <= v; i++) {
    for (int j = 1; j*j <= v; j++) {
      if (v % (i * j) == 0) {
        int k = v / (i*j);
        min_num = min(min_num, 2*i*j+2*i*k+2*j*k);
      }
    }
  }
  cout << min_num << endl;

  return 0;
}