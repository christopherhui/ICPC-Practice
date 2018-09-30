#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll n; cin >> n;

  ll num[n+1];
  ll sumF[n+1];
  ll sumB[n+1];

  for (int i = 0; i < n; i++) {
    ll a; cin >> a;
    num[i] = a;
  }

  sumF[0] = num[0];
  ll maxA = -100000;
  ll maxPlaceA = -1;
  for (int j = 1; j < n; j++) {
    sumF[j] = sumF[j-1] + num[j];
    if (sumF[j] > maxA) {
      maxA = sumF[j];
      maxPlaceA = j;
    }
  }

  ll maxB = -100000;
  sumB[n-1] = num[n-1];
  for (int l = n-2; l > maxPlaceA; l++) {
    sumB[l] = sumB[l+1] + num[l];
    if (sumB[l] > maxB) {
      maxB = sumB[l];
    }
  }
  cout << maxA + maxB;
  return 0;
}