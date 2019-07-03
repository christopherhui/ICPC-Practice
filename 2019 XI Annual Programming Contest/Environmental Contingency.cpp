#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int n, x, a, day, count = 0; string dayName; cin >> n >> dayName >> x;
  map<string, int> m; m["Monday"] = 0; m["Tuesday"] = 1; m["Wednesday"] = 2; m["Thursday"] = 3; m["Friday"] = 4; m["Saturday"] = 5; m["Sunday"] = 6;
  day = m[dayName];
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a >= x && day % 7 < 5) count++;
    day++;
  }
  cout << count << endl;

  return 0;
}