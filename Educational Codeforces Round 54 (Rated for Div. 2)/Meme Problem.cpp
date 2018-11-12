#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t; cin >> t;
  long double d, a, b;
  while (t--) {
    cin >> d;
    b = (d-sqrt(pow(d,2)-4*d))/2;
    a = d/b;
    if(d == 0) {
      cout << fixed << setprecision(9) << "Y " << b << " " << b << endl;
    }
    else if (isnan(b)) {
      cout << "N" << endl;
    }
    else {
      cout << fixed << setprecision(9)<< "Y " << a << " " << b << endl;
    }
  }
  return 0;
}