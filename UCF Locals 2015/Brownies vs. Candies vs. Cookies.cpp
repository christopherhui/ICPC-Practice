#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int n; cin >> n;
  for (int test = 1; test <= n; test++) {
    int useless, brownies, ppl;
    cin >> useless >> brownies;
    cout << "Practice #" << test << ": " << useless << ' ' << brownies << endl;
    cin >> ppl;
    while (ppl--) {
      int minusBrownies; cin >> minusBrownies;
      while (brownies - minusBrownies <= 0) {
        brownies *= 2;
      }
      brownies -= minusBrownies;
      cout << minusBrownies << ' ' << brownies << endl;
    }
    cout << endl;
  }

  return 0;
}