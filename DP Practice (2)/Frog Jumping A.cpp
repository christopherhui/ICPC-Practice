#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n; cin >> n; int arr[n+2]; int sf[n+2];
  for (int i = 0; i < n+2; i++) {
    cin >> arr[i];
    sf[i] = 1000000000;
  }
  sf[0] = 0;
  for (int i = 0; i < n-1; i++) {
    if (abs(arr[i]-arr[i+1]) + sf[i] < sf[i+1]) {
      sf[i+1] = sf[i] + abs(arr[i]-arr[i+1]);
    }
    if (abs(arr[i]-arr[i+2]) + sf[i] < sf[i+2]) {
      sf[i+2] = sf[i] + abs(arr[i]-arr[i+2]);
    }
  }
  cout << sf[n-1];

  return 0;
}