#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n; cin >> n;
  double sum = 0;
  for (int i = 0; i < n; i++) {
    double q; double y; cin >> q >> y;
    sum += q*y;
  }
  cout << fixed << setprecision(5) << sum;
  return 0;
}