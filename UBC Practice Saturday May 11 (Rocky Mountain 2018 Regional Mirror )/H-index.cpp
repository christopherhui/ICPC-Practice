#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n; cin >> n;
  vector<ll> citations(n);
  for (int i = 0; i < n; i++) {
    cin >> citations[i];
  }
  int low = 0; int high = n+1; int prev = -1; int mid = high / 2;
  while (low != high) {
    mid = (high + low) / 2;
    int temp = 0;
    for (int j = 0; j < n; j++) {
      if (mid <= citations[j]) {
        temp++;
      }
    }
    if(mid > temp)
      high = mid;
    else if(mid <= temp) {
      prev = max(prev, mid);
      low = mid+1;
    }
  }

  cout << prev << endl;


  return 0;
}