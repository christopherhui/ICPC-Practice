#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0); 
  cout.tie(0);

  int t; cin >> t;
  for (int i = 0; i < t; i++) {
    int n, k; cin >> n >> k;
    int count = 1;
    vector<bool> v(n, false);
    for (int j = 0; j < k; j++) {
      int x; cin >> x;
      v[x-1] = true;
    }
    while (accumulate(v.begin(), v.end(), 0) != n) {
      vector<bool> copy = v;
      for (int j = 0; j < n; j++) {
        int left = max(j-1, 0);
        int right = min(j+1, n-1);
        if (copy[j] == true) {
          v[left] = true;
          v[right] = true;
        }
      }
      count++;
    }
    cout << count << '\n';
  }

  return 0;
}