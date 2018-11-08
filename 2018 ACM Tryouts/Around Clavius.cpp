#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
	cin.tie(0);
  cout.tie(0);

  ll n; cin >> n;

  ll num[n];
  ll maxSF = 0;

  for (int i = 0; i < n; i++) {
    ll a; cin >> a;
    num[i] = a;
  }
  for (int i = 0; i < n; i++) {
    ll someSum = 0;
    for (int j = 0; j < n; j++) {
      someSum += num[(i + j) % n];
      if (someSum > maxSF) {
        maxSF = someSum;
      }
    }
  }
  cout << maxSF;
  return 0;
}