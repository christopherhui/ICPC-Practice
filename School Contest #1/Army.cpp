#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n; cin >> n; vector<int> arr; int a, b, d; n--;
  while (n--) {
    cin >> d;
    arr.push_back(d);
  }
  cin >> a >> b;
  int sum = 0;
  for (int i = a-1; i < b-1; i++) {
    sum += arr[i];
  }
  cout << sum;

  return 0;
}