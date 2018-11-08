#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  long double a, b, c, d, f; cin >> a >> b >> c;
  d = sqrt(c/a);
  cout << fixed << setprecision(10) << d << endl;
  f = a*pow(d,2) + b*d+c;
  cout << d/f;

}