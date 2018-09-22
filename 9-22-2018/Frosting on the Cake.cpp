#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
	cin.tie(0);
  cout.tie(0);

  ll n, a, b, yellow, pink, white;
  yellow = 0;
  pink = 0;
  white = 0;
  vector<ll> v1;
  vector<ll> v2;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    v1.push_back(a);
  }
  for (int i = 0; i < n; i++) {
    cin >> b;
    v2.push_back(b);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      ll num = (i+j+2) % 3;
      if (num == 0) {
        yellow += v1[i] * v2[j];
      }
      else if(num == 1) {
        pink += v1[i] * v2[j];
      }
      else if(num == 2) {
        white += v1[i] * v2[j];
      }
    }
  }

  cout << yellow << ' ' << pink << ' ' << white << endl;;
  return 0;
}