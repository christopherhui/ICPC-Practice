#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    ll a, b, c, d; cin >> a >> b >> c >> d;
    ll arr[3] = {a, b, c};
    for (ll j = 0; j < d; j++) {
      long double one = pow(arr[0]+1, 2) + pow(arr[1], 2) + pow(arr[2], 2) + 7 * min(min(arr[0]+1, arr[1]), arr[2]);
      long double two = pow(arr[0], 2) + pow(arr[1]+1, 2) + pow(arr[2], 2) + 7 * min(min(arr[0], arr[1]+1), arr[2]);
      long double three = pow(arr[0], 2) + pow(arr[1], 2) + pow(arr[2]+1, 2) + 7 * min(min(arr[0], arr[1]), arr[2]+1);

      if (max(max(one, two), three) == one)
        arr[0] = arr[0]+1;
      else if(max(max(one, two), three) == two)
        arr[1] = arr[1]+1;
      else
        arr[2] = arr[2]+1;
    }
    ll ans = pow(arr[0], 2) + pow(arr[1], 2) + pow(arr[2], 2) + 7 * min(min(arr[0], arr[1]), arr[2]);
    cout << ans << endl;
  }

  return 0;
}