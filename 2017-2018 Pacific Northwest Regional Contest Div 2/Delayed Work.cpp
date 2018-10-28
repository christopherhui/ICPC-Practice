#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  long double k, p, x, i, cost;
  cin >> k >> p >> x;
  long double prevCost = INT_MAX;
  i = 1;

  while (true) {
    cost = x * i + k/i * p;
    if (cost > prevCost) {
      break;
    }
    else {
      prevCost = cost;
      i++;
    }
  }

  cout << fixed << setprecision(3) << prevCost;

  return 0;
}