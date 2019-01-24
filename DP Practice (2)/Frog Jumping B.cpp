#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, h; cin >> n; cin >> h; int arr[n+h]; int sf[n+h];
  for (int i = 0; i < n+h; i++) {
    cin >> arr[i];
    sf[i] = 1000000000;
  }
  sf[0] = 0;
  for (int i = 0; i < n-1; i++) {
      for (int j = 1; j <= h; j++) {
          if (abs(arr[i]-arr[i+j]) + sf[i] < sf[i + j]) {
              sf[i+j] = sf[i] + abs(arr[i]-arr[i+j]);
          }
      }
  }
  cout << sf[n-1];

  return 0;
}