#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n,a,b,t,x,y,totA,totB; cin >> n; a = 0; b = 0; totA = 0; totB = 0;
  while (n--) {
    cin >> t >> x >> y;
    if (t == 1) {
      a += x;
      totA += 10;
    }
    else {
      b += x;
      totB += 10;
    }
  }
  if (a >= totA / 2) cout << "LIVE" << endl;
  else cout << "DEAD" << endl;
  if (b >= totB / 2) cout << "LIVE";
  else cout << "DEAD";
  return 0;
}