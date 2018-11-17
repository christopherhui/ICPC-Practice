#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, a, count; cin >> n; count = 0;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> a; arr[i] = a;
  }
  for (int i = 1; i < n-1; i++) {
    if (arr[i-1] == 1 && arr[i] == 0 && arr[i+1] == 1) {
      count++;
      arr[i+1] = 0;
    }
  }
  cout << count;
  return 0;
}