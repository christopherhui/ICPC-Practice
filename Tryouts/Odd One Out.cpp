#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
	cin.tie(0);
  cout.tie(0);

  int n, b;
  cin >> n;

  while (n--) {

    cin >> b;
    map<int, int> m;
    int countEven = 0;
    int countOdd = 0;

    for (int i = 0; i < b; i++) {
      int a;
      cin >> a;
      if (a % 2 == 0) {
        m[i] = 0;
        countEven += 1;
      }
      else {
        m[i] = 1;
        countOdd += 1;
      }
    }
    if (countEven > countOdd) {
      for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second == 1) {
          cout << it->first + 1 << endl;
        }
      }
    }
    else {
      for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second == 0) {
          cout << it->first + 1 << endl;
        }
      }
    }
  }
  return 0;
}