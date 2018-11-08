#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
	cin.tie(0);
  cout.tie(0);

  ll wCake, n, w, l, sum;
  sum = 0;
  cin >> wCake >> n;
  while (n--) {
    cin >> w >> l;
    sum += w * l;
  }
  cout << sum / wCake << endl;
  return 0;
}