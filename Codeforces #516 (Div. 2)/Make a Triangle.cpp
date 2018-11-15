#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int a, b, c;
  cin >> a >> b >> c;
  if (a+b > c && a+c > b && b+c > a) {
    cout << 0;
  }
  else {
    int d = max(max(a,b), c);
    if (a == d) cout << a-b-c+1;
    else if (b == d) cout << b-a-c+1;
    else cout << c-b-a+1;
  }
  return 0;
}