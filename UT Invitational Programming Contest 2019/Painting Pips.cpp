#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n; int m; cin >> n >> m;
  if (n > m) cout << fixed << setprecision(10) << 0.0;
  else {
    int divisor = m / n;
    int remainder = m % n;
    double expVal = 1;

    for (int i = 0; i < n; i++) {
      if (remainder > 0) {
        expVal *= (divisor+1) / 6.0;
        remainder--;
      }
      else
        expVal *= divisor / 6.0;
    }

    cout << fixed << setprecision(10) << expVal;
  }

  return 0;
}