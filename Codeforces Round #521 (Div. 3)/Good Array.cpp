#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll n, a, count, b, sum, max, secondMax; cin >> n;
  sum = 0; max = -1; secondMax = -1;
  ll arr[n]; vector<int> v; count = 0;
  for (int i = 0; i < n; i++) {
    cin >> a; arr[i] = a;
    sum += a;
    if (a > max) {
      secondMax = max;
      max = a;
    }
    else if (a > secondMax) secondMax = a;
  }
  for (int i = 0; i < n; i++) {
    b = arr[i]; arr[i] = -1;
    if (b != max && sum-b-max == max) {
      count++;
      v.push_back(i);
    }
    else if(b == max && sum-b-secondMax == secondMax) {
      count++;
      v.push_back(i);
    }
    arr[i] = b;
  }
  cout << count << endl;
  for (int i = 0; i < count; i++) {
    cout << v[i]+1 << ' ';
  }
  return 0;
}