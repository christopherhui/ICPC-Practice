#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll m, a, b, sum; cin >> m;
  a = m + 1;
  b = m + 2;
  while (true) {
    sum = (((a-1) * (a))/2)-(((m-1) * (m))/2);
    while (sum > 0) {
      sum -= b;
      b++;
    }
    if (sum == 0) {
      cout << m << ' ' << a << ' ' << b-1;
      break;
    }
    a++;
    b = a + 1;
  }
  return 0;
}
