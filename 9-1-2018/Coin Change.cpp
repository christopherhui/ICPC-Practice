#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, a;
  long long s;
  cin >> n >> s;
  long long coins[n];
  coins[0] = 1;
  for (int i = 1; i < n+1; i++) {
    cin >> a;
    coins[i] = a * coins[i-1];
  }
  int count = 0;
  while (s > 0) {
    int max = 1;
    for (int i = 0; i <= sizeof(coins)/sizeof(coins[0]); i++) {
      if (coins[i] <= s) {
        max = coins[i];
      }
    }
    s -= max;
    count += 1;
  } 
  cout << count;

  return 0;
}
