#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    ll temp;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    return a;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  ll h; ll m; cin >> h >> m;
  ll denom = h*m;
  ll num;
  if (h > m)
    num = (m * (m+1)) / 2;
  else
    num = (m * (m+1)) / 2 - ((m-h) * (m+1-h)) / 2;
  ll val = gcd(num, denom);
  cout << num / val << '/' << denom / val;

  return 0;
}