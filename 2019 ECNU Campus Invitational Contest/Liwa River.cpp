#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int t; cin >> t; int a,b,c,d,e,f;
  while (t--) {
    cin >> a >> b >> c >> d >> e >> f;
    int sum = 0;
    sum += f;
    sum += e;
    a -= min(a, e);

    sum += d;
    if (min(b,d) != d) {
      a -= min(abs(d-b)*2, a);
    }

    b -= min(b, d);
    sum += c/2; c = c % 2;
    sum += b/3; b = b % 3;

    if (b == 2 && c == 1) {
      sum += 2; a -= min(5, a); sum += ceil(a / 6.0);
    }
    else {
      sum += ceil((a+b*2+c*3) / 6.0);
    }
    cout << sum << endl;
  }

  return 0;
}