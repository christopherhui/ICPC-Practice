#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    long double a, b, c, x;
    cin >> a >> b >> c >> x;
    long double one = sqrt(pow(a,2)+pow((b+2*c),2));
    long double two = sqrt((pow((a*(x/100)),2))+pow((b*(x/100)),2));
    long double three = sqrt(pow(((x-100)/100)*a,2)
    +pow((((x-100)/100)*b+2*c),2));
    cout << fixed << setprecision(10) << one + two + three;
  }
  return 0;
}
