#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t, counter = 0, a; cin >> t;
  while (t--) {
    for (int i = 0; i < 4; i++) {
      cin >> a;
      if (a >= 1) {
        counter++;
      }
    }
    if (counter==0) cout << "Typically Otaku";
    if (counter==1) cout << "Eye-opener";
    if (counter==2) cout << "Young Traveller";
    if (counter==3) cout << "Excellent Traveller";
    if (counter==4) cout << "Contemporary Xu Xiake";
    if (t != 0) {
      cout << endl;
    }
    counter = 0;
  }

  return 0;
}